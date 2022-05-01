using System.Collections;
using System.Collections.Generic;
using Entitas.CodeGeneration.Attributes;
using UnityEngine;

[Game] [Unique] [CreateAssetMenu(fileName = "Globals" , menuName = "Globals", order = 4)]
public class Globals : ScriptableObject
{
    public float Sensitivity;
    public float Speed;
    public float Gravity;
    public float JumpForce;
    [Range(0, 1)] public float CameraSmoothDamp;
    [Range(0, 1)] public float MoveSmoothDamp;
    public List<Chunk> Chunks = new List<Chunk>();
    public Vector3 Min, Max;
    public int ChunksLimit; 

}
