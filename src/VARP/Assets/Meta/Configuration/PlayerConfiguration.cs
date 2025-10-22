using UnityEditor;
using UnityEngine;

namespace Meta.Configuration
{
    [CreateAssetMenu]
    public class PlayerConfiguration : ScriptableObject
    {
        public float Speed;
        public float JumpForce; 
        public float JumpHeight;
        public float DeathHeight; 
        public float Gravity; 
        public Vector2 Sensitivity;
        public Vector3 CameraOffset; 
        public GameObject Prefab;
    }
}