
using System.Collections.Generic;
using Entitas;
using UnityEngine;

public class CameraFollowSystem : IInitializeSystem ,IExecuteSystem 
{
    private Contexts _contexts;
    private GameEntity _camera;
    private float _cameraPitch;
    private Vector2 _mouseDelta = Vector2.zero;
    

    public CameraFollowSystem(Contexts contexts)
    {
        _contexts = contexts; 
    }

    public void Initialize()
    {
        _camera = _contexts.game.CreateEntity();
        _camera.AddSensitivity(_contexts.game.globals.value.Sensitivity);
        _camera.AddSmoothDamp(_contexts.game.globals.value.CameraSmoothDamp);
    } 
    
    public void Execute()
    {
        
        var sensitivity = _camera.sensitivity.Value;
        var smoothDamp = _camera.smoothDamp.Value; 

        Vector2 targetMouseDelta = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y"));
        
        _mouseDelta = _mouseDelta.SmoothDamp(targetMouseDelta,smoothDamp);
        
        _cameraPitch -= _mouseDelta.y * sensitivity;
        _cameraPitch = Mathf.Clamp(_cameraPitch, -90, 90);

        _contexts.game.camera.Value.transform.localEulerAngles = Vector3.right * _cameraPitch;
        _contexts.game.player.Value.transform.Rotate(Vector3.up * targetMouseDelta.x * sensitivity);
    }

}
