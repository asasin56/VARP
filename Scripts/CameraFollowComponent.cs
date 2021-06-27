using System.Collections;
using System.Collections.Generic;
using Entitas;
using Entitas.CodeGeneration.Attributes;
using UnityEngine;
 [Unique]
public class CameraFollowComponent : IComponent
{
    public Transform Camera, Player;
    public float Sensitivity; 
      public  float SmoothTime;
}
