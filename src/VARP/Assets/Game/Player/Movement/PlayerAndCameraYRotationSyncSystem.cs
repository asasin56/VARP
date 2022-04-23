using Entitas;
using UnityEngine;

namespace Game.Player.Movement
{
    public class PlayerAndCameraYRotationSyncSystem : IExecuteSystem
    {
        private Contexts _contexts;

        public PlayerAndCameraYRotationSyncSystem(Contexts contexts)
        {
            _contexts = contexts;
        }
        public void Execute()
        {
            if(!_contexts.game.hasPlayer || !_contexts.game.hasCamera)
                return;
            Vector3 playerEulerAngles  = _contexts.game.player.Value.transform.eulerAngles;
            playerEulerAngles.y = _contexts.game.camera.Value.transform.eulerAngles.y;
            _contexts.game.player.Value.transform.eulerAngles = playerEulerAngles;
        }
    }
}