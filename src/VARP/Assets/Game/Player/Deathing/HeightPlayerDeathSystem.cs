using Meta;
using UnityEngine.SceneManagement;


public class HeightPlayerDeathSystem : IFixedExecuteSystem
{
    private Contexts _contexts;

    public HeightPlayerDeathSystem(Contexts contexts) => _contexts = contexts;

    public void FixedExecute()
    {
        if (_contexts.game.player.Value.transform.position.y < 
            _contexts.game.resources.Value.PlayerConfiguration.DeathHeight)
        {
            _contexts.game.player.Value.transform.position = _contexts.game.spawnPosition.Value; 
        }
    }
}
