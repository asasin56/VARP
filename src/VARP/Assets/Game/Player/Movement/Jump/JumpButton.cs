using UnityEngine;
using Zenject;

namespace Game.Player.Movement.Jump
{
    public class JumpButton : MonoBehaviour
    {
        [Inject] private Contexts _contexts;
        public void Jump()
        {
            if(!_contexts.game.isJumping && _contexts.game.isOnPlayerGroundEvent) 
                _contexts.game.isJumpEvent = true;
        }
    }
}