using Entitas;
using Meta.Configuration;

namespace Game
{
    public class SetGameConfigSystem : IInitializeSystem
    {
        private GameConfig _config;
        private Contexts _contexts; 
        
        public SetGameConfigSystem(Contexts contexts, GameConfig config)
        {
            _contexts = contexts;
            _config = config; 
        }
        public void Initialize()
        {
            _contexts.game.SetResources(_config); 
        }
    }
}