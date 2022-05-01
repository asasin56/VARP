using System.Collections;
using System.Collections.Generic;
using Entitas;
using UnityEditor;
using UnityEngine;

public class GenerationSystem : IInitializeSystem
{
    private Contexts _contexts;

    public GenerationSystem(Contexts contexts) => _contexts = contexts; 
   
   public void Initialize()
   {
       var entity = _contexts.game.CreateEntity(); 
       entity.AddChunks(_contexts.game.globals.value.Chunks);
       entity.AddChunksLimit(_contexts.game.globals.value.ChunksLimit);
       entity.AddFirstChunk(_contexts.game.firstChunk.Value);
       entity.AddVectorRange(new Vector3Range() {Max = _contexts.game.globals.value.Max, 
           Min = _contexts.game.globals.value.Min});

       for (int i = 0; i < entity.chunksLimit.Value; i++)
       {
           Chunk newChunk = GameObject.Instantiate(entity.chunks.Value[Random.Range(0, entity.chunks.Value.Count)]);
           Vector3 position = newChunk.transform.position;
           newChunk.transform.position = entity.chunks.Value[i - 1].End.position - newChunk.Begin.localPosition;
           var min = entity.vectorRange.Value.Min;
           var max= entity.vectorRange.Value.Max;
           newChunk.transform.position += new Vector3(Random.Range(min.x, max.x) , Random.Range(min.y, max.y), Random.Range(min.z, max.z));
       }
   }
}
