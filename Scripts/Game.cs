using Entitas;
using UnityEngine;

public class Game : MonoBehaviour
{
    [SerializeField] private Globals _globals; 
    [SerializeField] private CharacterController _player;
    [SerializeField] private Camera _camera;
    private Systems _systems;


    private void Awake()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        _systems = CreateSystems();
        _systems.Initialize();
        
    }

    private void Update()
    {
        _systems.Execute();
    }

    private Systems CreateSystems()
    {
        var contexts = Contexts.sharedInstance;
        contexts.game.SetCamera(_camera);
        contexts.game.SetPlayer(_player);
        contexts.game.SetGlobals(_globals);

        return new Feature("game")
            .Add(new JumpSystem(contexts))
            .Add(new VelocitySystem(contexts))
            .Add(new CameraFollowSystem(contexts));
           
           

    }
}
