using System;
using System.Collections;
using System.Collections.Generic;
using Entitas;
using UnityEngine;

public class JumpSystem : IExecuteSystem
{
    private Contexts _contexts; 

    public JumpSystem(Contexts contexts)
    {
        _contexts = contexts;
    }
    public void Execute()
    {
        var playerEntity = _contexts.game.playerEntity; 
            if (!playerEntity.hasJumpForce)
                playerEntity.AddJumpForce(_contexts.game.globals.value.JumpForce);
            if (!playerEntity.hasGravity)
                playerEntity.AddGravity(_contexts.game.globals.value.Gravity);
            if (!playerEntity.hasMoveDirection)
                playerEntity.AddMoveDirection(_contexts.game.playerEntity.player.Value.center);
                

            
            var jumpForce = playerEntity.jumpForce.Value;
            float gravity = playerEntity.gravity.Value;
   if (_contexts.game.player.Value.isGrounded)


       if (_contexts.game.player.Value.isGrounded)
       {
           playerEntity.moveDirection.Value.y = 0.0f;
           if (Input.GetKey(KeyCode.Space))
               playerEntity.moveDirection.Value.y += jumpForce;
       }


   playerEntity.moveDirection.Value.y -= gravity;

    }
}

