using Meta;
using UnityEngine;

namespace Game.Player.Movement
{
    public class PlayerMovementSystem : IFixedExecuteSystem
    {
        private Contexts _contexts;

        public PlayerMovementSystem(Contexts contexts)
        {
            _contexts = contexts;
        }
        public void FixedExecute()
        {
   
             if(!_contexts.game.hasResources || !_contexts.game.hasJoystick || !_contexts.game.hasCharacterController) 
                 return; 
             float horizontal =  _contexts.game.joystick.Value.Horizontal; 
             float vertical = _contexts.game.joystick.Value.Vertical;
     
             float speed = _contexts.game.resources.Value.PlayerConfiguration.Speed;
             Transform transform = _contexts.game.player.Value.transform;
             Debug.Log(speed);
             _contexts.game.characterController.Value.Move(( transform.forward * vertical + transform.right * horizontal) * speed);
        }
    }
}