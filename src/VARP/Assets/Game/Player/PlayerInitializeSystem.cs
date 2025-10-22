using Entitas;
using Entitas.Unity;
using Meta;
using Meta.Configuration;
using Meta.SystemsExt;
using UnityEngine;
using Zenject;

namespace Game.Player
{
    public class PlayerInitializeSystem : IInitializeSystem 
    {
        private Contexts _contexts;
        private DiContainer _diContainer;
        private GameObject _player;


        public PlayerInitializeSystem(Contexts contexts, DiContainer container )
        {
            _contexts = contexts;
            _diContainer = container;
        }
        public void Initialize()
        {
            GameObject player = _diContainer.InstantiatePrefab(_contexts.game.resources.Value
                .PlayerConfiguration.Prefab);

            var playerEntity = _contexts.game.SetPlayer(player);
            

            if (player.TryGetComponent(out CharacterController controller))
            {
                controller.enabled = false; 
                controller.transform.position = _contexts.game.spawnPosition.Value;
                controller.enabled = true;
                _contexts.game.SetCharacterController(controller);
            }

            _player = player;
        }

     
    }
}