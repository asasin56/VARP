using System.Linq;
using Entitas;
using Game;
using Meta.Configuration;
using UnityEngine;
using Zenject;

namespace Meta
{
    public class ECSEngine : MonoBehaviour
    {
        
        private Systems _systems;
        [Inject] private Contexts _contexts;  
        [Inject] private Camera _camera;
        [Inject] private GameConfig _config;
        [Inject] private Joystick _joystick;
        [Inject] private DiContainer _container;

        private void Start()
        {
            _systems = new Systems();
            _contexts.game.SetCamera(_camera);
            _contexts.game.SetJoystick(_joystick);
            _systems.Add(new AllSystems(_contexts, _config, _systems, _container));
            
            _systems.Initialize();
        }

        private void Update()
        {
            _systems.Execute();
            _systems.Cleanup();
        }
        private void FixedUpdate()
        {
            _systems.FixedExecute();
        }

        private void LateUpdate()
        {
            _systems.LateExecute();
        }

        private void OnApplicationQuit()
        {
            _systems.Execute();
            _systems.Cleanup();
        }

        private void OnDestroy()
        {
            
            _contexts.game.GetEntities().ToList().ForEach(e =>
            {
                e.Destroy();
            });
        }
    }
}