using Entitas;
using Meta;
using ModestTree;
using UnityEngine;

namespace Game.Player.Movement.Jump
{
    public class JumpSystem : IFixedExecuteSystem
    {
        private readonly Contexts _contexts;
        private float _currentHeight; 


        public JumpSystem(Contexts contexts)
        {
            _contexts = contexts;
        }
        public void FixedExecute()
        {

            
            if( !_contexts.game.isJumping
                && (_contexts.game.isOnPlayerGroundEvent == false || _contexts.game.isJumpEvent == false ))
                return;
            var config = _contexts.game.resources.Value.PlayerConfiguration;
            if (_currentHeight < config.JumpHeight)
            {
                _contexts.game.characterController.Value.Move(Vector3.up * config.JumpForce);
                _currentHeight += config.JumpForce;
                _contexts.game.isJumping = true;
            }
            else
            {
                _currentHeight = 0; 
                _contexts.game.isJumping = false;
                _contexts.game.isJumpEvent = false;
            }
        }
    }
}