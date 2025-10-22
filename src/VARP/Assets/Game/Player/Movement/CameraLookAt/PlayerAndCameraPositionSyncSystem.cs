using Entitas;

public class PlayerAndCameraPositionSyncSystem : IExecuteSystem
{
    private Contexts _contexts;
    
    public PlayerAndCameraPositionSyncSystem(Contexts contexts)
    {
        _contexts = contexts; 
    }
    public void Execute()
    {
        if(!_contexts.game.hasPlayer || !_contexts.game.hasCamera)
            return;
        _contexts.game.camera.Value.transform.position = _contexts.game.player.Value.transform.position
            + _contexts.game.resources.Value.PlayerConfiguration.CameraOffset;
    }
}
