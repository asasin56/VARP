using Meta;
using UnityEngine;

namespace Game.Player.Movement.Physics
{
    public class GravitySystem : IFixedExecuteSystem 
    {
        private Contexts _contexts;
        public GravitySystem(Contexts contexts)  
        {
            _contexts = contexts;
        }


        public void FixedExecute()
        {
     
            if (_contexts.game.isOnPlayerGroundEvent)
                return;
            _contexts.game.characterController.Value.Move(Vector3.up * 
                                                          _contexts.game.resources.Value.PlayerConfiguration.Gravity);
        }
    }
}
