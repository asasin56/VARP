using System.Collections.Generic;
using Entitas.CodeGeneration.Attributes;
using Game.Level.Generation.Chunks;
using UnityEngine;

namespace Meta.Configuration
{
    [CreateAssetMenu] [Unique] [Game]
    public class GameConfig : ScriptableObject
    {
        public PlayerConfiguration PlayerConfiguration;
        public Vector2 ChunkCount; 

        public StartChunk StartChunk;
        public List<Chunk> Chunks = new();
        public FinishChunk FinishChunk;
    }
}