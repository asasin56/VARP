
using UnityEngine;
using Zenject;

namespace Game.Player.Movement.Physics
{
    public class GroundTrigger : MonoBehaviour
    {
        [Inject]  private Contexts _contexts; 
        private void OnTriggerStay(Collider other)
        {
            if (other.TryGetComponent(out Ground ground))
            {
                _contexts.game.playerEntity.isOnPlayerGroundEvent = true; 
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.TryGetComponent(out Ground ground))
            {
                _contexts.game.playerEntity.isOnPlayerGroundEvent = false; 
            }

        }
    }
}