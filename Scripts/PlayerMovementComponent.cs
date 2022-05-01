
using Entitas;
using Entitas.CodeGeneration.Attributes;
using UnityEngine;

[ Unique] [Game]
public class PlayerMovementComponent : IComponent
{
    public CharacterController Controller; 
    public Transform Camera, Player;
    public float Speed, Gravity, JumpForce;
    public float SmoothTime; 

}
