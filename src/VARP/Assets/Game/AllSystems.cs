using Entitas;
using Game.Level.Generation;
using Game.Player;
using Game.Player.Movement;
using Game.Player.Movement.CameraLookAt;
using Game.Player.Movement.Jump;
using Game.Player.Movement.Physics;
using Meta;
using Meta.Configuration;
using Zenject;

namespace Game
{
    public class AllSystems : Feature
    {
        public AllSystems(Contexts contexts, GameConfig config, Systems systems, DiContainer container)
        {
            base.Add(new SetGameConfigSystem(contexts, config));
            base.Add(new LevelInitializeSystem(contexts));
            PlayerInitializeSystem playerInitializeSystem = new PlayerInitializeSystem(contexts, container); 
            base.Add(playerInitializeSystem);
            base.Add(new PlayerAndCameraPositionSyncSystem(contexts));
            systems.Add(new FingerCameraLookSystem(contexts));
            base.Add(new PlayerAndCameraYRotationSyncSystem(contexts)); 
            systems.Add(new PlayerMovementSystem(contexts));
            systems.Add(new GravitySystem(contexts));
            systems.Add(new JumpSystem(contexts));
            systems.Add(new HeightPlayerDeathSystem(contexts));

        }
    }
}
