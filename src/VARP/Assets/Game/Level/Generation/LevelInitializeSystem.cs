using Entitas;
using Game.Level.Generation.Chunks;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Game.Level.Generation
{
    public class LevelInitializeSystem : IInitializeSystem
    {
        private Contexts _contexts;

        public LevelInitializeSystem(Contexts contexts)
        {
            _contexts = contexts; 
        }
        
        public void Initialize()
        {
            var config = _contexts.game.resources.Value;
            StartChunk startChunk = Object.Instantiate(config.StartChunk);
            _contexts.game.SetSpawnPosition(startChunk.SpawnPosition.position);
            Chunk lastChunk = new Chunk();
            lastChunk.End = startChunk.End; 
            for (int i = 0; i < Random.Range(config.ChunkCount.x,config.ChunkCount.y); i++)
            {
                Chunk @new = Object.Instantiate(config.Chunks[Random.Range(0, config.Chunks.Count)]);
                @new.transform.position = new Vector3(lastChunk.End.transform.position.x +
                                                      Random.Range(@new.RangeDistanceXZ.x, @new.RangeDistanceXZ.y ),  
                    lastChunk.End.transform.position.y + Random.Range(@new.RangeDistanceY.x, @new.RangeDistanceY.y),
                        lastChunk.End.transform.position.z + Random.Range(@new.RangeDistanceXZ.z, @new.RangeDistanceXZ.w)
                    );
                lastChunk = @new; 
            }

            FinishChunk finishChunk = Object.Instantiate(config.FinishChunk);
            finishChunk.transform.position = new Vector3(lastChunk.End.transform.position.x +
                                                         Random.Range(finishChunk.RangeDistanceXZ.x, finishChunk.RangeDistanceXZ.y),
                lastChunk.End.transform.position.y + Random.Range(finishChunk.RangeDistanceY.x, finishChunk.RangeDistanceY.x),
                lastChunk.End.transform.position.z + Random.Range(finishChunk.RangeDistanceXZ.z, finishChunk.RangeDistanceXZ.w));
            
            

        }
    }
}
