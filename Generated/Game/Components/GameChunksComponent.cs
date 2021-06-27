//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by Entitas.CodeGeneration.Plugins.ComponentEntityApiGenerator.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
public partial class GameEntity {

    public ChunksComponent chunks { get { return (ChunksComponent)GetComponent(GameComponentsLookup.Chunks); } }
    public bool hasChunks { get { return HasComponent(GameComponentsLookup.Chunks); } }

    public void AddChunks(System.Collections.Generic.List<Chunk> newValue) {
        var index = GameComponentsLookup.Chunks;
        var component = (ChunksComponent)CreateComponent(index, typeof(ChunksComponent));
        component.Value = newValue;
        AddComponent(index, component);
    }

    public void ReplaceChunks(System.Collections.Generic.List<Chunk> newValue) {
        var index = GameComponentsLookup.Chunks;
        var component = (ChunksComponent)CreateComponent(index, typeof(ChunksComponent));
        component.Value = newValue;
        ReplaceComponent(index, component);
    }

    public void RemoveChunks() {
        RemoveComponent(GameComponentsLookup.Chunks);
    }
}

//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by Entitas.CodeGeneration.Plugins.ComponentMatcherApiGenerator.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
public sealed partial class GameMatcher {

    static Entitas.IMatcher<GameEntity> _matcherChunks;

    public static Entitas.IMatcher<GameEntity> Chunks {
        get {
            if (_matcherChunks == null) {
                var matcher = (Entitas.Matcher<GameEntity>)Entitas.Matcher<GameEntity>.AllOf(GameComponentsLookup.Chunks);
                matcher.componentNames = GameComponentsLookup.componentNames;
                _matcherChunks = matcher;
            }

            return _matcherChunks;
        }
    }
}
