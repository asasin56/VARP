using Meta.Configuration;
using UnityEngine;
using Zenject;

namespace Meta.Infrastracture
{
    public class ConfigInstaller : MonoInstaller
    {
        public GameConfig Config;
        public Camera Camera;
        public Joystick Joystick; 
        public override void InstallBindings()
        {
            Container.Bind<Contexts>()
                .FromInstance(Contexts.sharedInstance)
                .AsSingle();
            
            Container.Bind<GameConfig>()
                .FromInstance(Config)
                .AsSingle();
            
            Container.Bind<Camera>()
                .FromInstance(Camera)
                .AsSingle();

            Container.Bind<Joystick>()
                .FromInstance(Joystick)
                .AsSingle();
        }
    }
}