using UnityEngine;

namespace Game.Level.Generation.Chunks
{
    public class Chunk : MonoBehaviour
    {
        public Transform Begin;
        public Transform End;
        public Vector4 RangeDistanceXZ;
        public Vector2 RangeDistanceY;
    }
}
