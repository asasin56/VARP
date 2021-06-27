using System.Collections;
using System.Collections.Generic;
using Entitas;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.Experimental.GlobalIllumination;
using UnityEngine.PlayerLoop;

public class PlayerMovementSystem : IExecuteSystem
{
    private Contexts _contexts; 
    
    private Vector2 _currentDir = Vector2.zero;
    private  Vector2 _currentDirVelocity = Vector2.zero;
  
    private  float _velocityY = 0.0f;
    public PlayerMovementSystem(Contexts contexts)
    {
        _contexts = contexts; 
    }    
    public void Execute()
    {
        var playerMovement = _contexts.game.playerMovement;
        Vector2 targetDir = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));
        targetDir.Normalize();

        _currentDir = Vector2.SmoothDamp(_currentDir, targetDir, ref _currentDirVelocity, playerMovement.SmoothTime);
        
        if (playerMovement.Controller.isGrounded)
            _velocityY = 0.0f;
         
        _velocityY -= playerMovement.Gravity * Time.deltaTime;

        Vector3 velocity = (playerMovement.Player.forward * _currentDir.y + playerMovement.Player.right * _currentDir.x) * playerMovement.Speed +
                           Vector3.up * _velocityY;
        
        playerMovement.Controller.Move(velocity * Time.deltaTime);
    }
    
}
