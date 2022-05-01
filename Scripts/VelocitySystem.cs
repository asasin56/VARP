using System;
using System.Collections;
using System.Collections.Generic;
using Entitas;
using UnityEngine;

public class VelocitySystem : IExecuteSystem
{
    private Contexts _contexts;
    
    private Vector2 _currentDir = Vector2.zero;
    private  Vector2 _currentDirVelocity = Vector2.zero;
    
    public VelocitySystem(Contexts contexts) 
    {
        _contexts = contexts;
    }

 public  void Execute()
    {
        if (!_contexts.game.playerEntity.hasSpeed)
             _contexts.game.playerEntity.AddSpeed(_contexts.game.globals.value.Speed); 
        
        if (!_contexts.game.playerEntity.hasSmoothDamp) 
                _contexts.game.playerEntity.AddSmoothDamp(_contexts.game.globals.value.MoveSmoothDamp);
        
        if (!_contexts.game.playerEntity.hasMoveDirection)
            _contexts.game.playerEntity.AddMoveDirection(_contexts.game.playerEntity.player.Value.center);
        var entity =_contexts.game.playerEntity ;
            float speed = _contexts.game.playerEntity.speed.Value;
            float smoothDamp = _contexts.game.playerEntity.smoothDamp.Value;
            Vector2 targetDir = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));
            targetDir.Normalize();
            _currentDir = Vector2.SmoothDamp(_currentDir, targetDir, ref _currentDirVelocity, smoothDamp);
            var transform = _contexts.game.player.Value.gameObject.transform;
            Vector3 velocity =  (transform.right * _currentDir.x + transform.forward * _currentDir.y) * speed ;
            entity.moveDirection.Value = new Vector3(velocity.x, entity.moveDirection.Value.y, velocity.z); 
            _contexts.game.player.Value.Move(entity.moveDirection.Value * speed * Time.deltaTime);
           
    }
    }
