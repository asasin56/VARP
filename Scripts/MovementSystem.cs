using System.Collections;
using System.Collections.Generic;
using Entitas;
using UnityEngine;

public class MovementSystem : ReactiveSystem<GameEntity>
{
    private Contexts _contexts;

    public MovementSystem(Contexts contexts) : base(contexts.game)
    {
        _contexts = contexts;
    }
    
    protected override ICollector<GameEntity> GetTrigger(IContext<GameEntity> context)
    {
        return context.CreateCollector(GameMatcher.MoveDirection);
    }

    protected override bool Filter(GameEntity entity)
    {
        return entity.hasMoveDirection; 
    }

    protected override void Execute(List<GameEntity> entities)
    {
        foreach (var entity in entities)
        {
            _contexts.game.player.Value.Move(entity.moveDirection.Value);
        }
    }
        
}
