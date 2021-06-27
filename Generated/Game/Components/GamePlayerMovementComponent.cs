//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by Entitas.CodeGeneration.Plugins.ComponentContextApiGenerator.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
public partial class GameContext {

    public GameEntity playerMovementEntity { get { return GetGroup(GameMatcher.PlayerMovement).GetSingleEntity(); } }
    public PlayerMovementComponent playerMovement { get { return playerMovementEntity.playerMovement; } }
    public bool hasPlayerMovement { get { return playerMovementEntity != null; } }

    public GameEntity SetPlayerMovement(UnityEngine.CharacterController newController, UnityEngine.Transform newCamera, UnityEngine.Transform newPlayer, float newSpeed, float newGravity, float newJumpForce, float newSmoothTime) {
        if (hasPlayerMovement) {
            throw new Entitas.EntitasException("Could not set PlayerMovement!\n" + this + " already has an entity with PlayerMovementComponent!",
                "You should check if the context already has a playerMovementEntity before setting it or use context.ReplacePlayerMovement().");
        }
        var entity = CreateEntity();
        entity.AddPlayerMovement(newController, newCamera, newPlayer, newSpeed, newGravity, newJumpForce, newSmoothTime);
        return entity;
    }

    public void ReplacePlayerMovement(UnityEngine.CharacterController newController, UnityEngine.Transform newCamera, UnityEngine.Transform newPlayer, float newSpeed, float newGravity, float newJumpForce, float newSmoothTime) {
        var entity = playerMovementEntity;
        if (entity == null) {
            entity = SetPlayerMovement(newController, newCamera, newPlayer, newSpeed, newGravity, newJumpForce, newSmoothTime);
        } else {
            entity.ReplacePlayerMovement(newController, newCamera, newPlayer, newSpeed, newGravity, newJumpForce, newSmoothTime);
        }
    }

    public void RemovePlayerMovement() {
        playerMovementEntity.Destroy();
    }
}

//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by Entitas.CodeGeneration.Plugins.ComponentEntityApiGenerator.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
public partial class GameEntity {

    public PlayerMovementComponent playerMovement { get { return (PlayerMovementComponent)GetComponent(GameComponentsLookup.PlayerMovement); } }
    public bool hasPlayerMovement { get { return HasComponent(GameComponentsLookup.PlayerMovement); } }

    public void AddPlayerMovement(UnityEngine.CharacterController newController, UnityEngine.Transform newCamera, UnityEngine.Transform newPlayer, float newSpeed, float newGravity, float newJumpForce, float newSmoothTime) {
        var index = GameComponentsLookup.PlayerMovement;
        var component = (PlayerMovementComponent)CreateComponent(index, typeof(PlayerMovementComponent));
        component.Controller = newController;
        component.Camera = newCamera;
        component.Player = newPlayer;
        component.Speed = newSpeed;
        component.Gravity = newGravity;
        component.JumpForce = newJumpForce;
        component.SmoothTime = newSmoothTime;
        AddComponent(index, component);
    }

    public void ReplacePlayerMovement(UnityEngine.CharacterController newController, UnityEngine.Transform newCamera, UnityEngine.Transform newPlayer, float newSpeed, float newGravity, float newJumpForce, float newSmoothTime) {
        var index = GameComponentsLookup.PlayerMovement;
        var component = (PlayerMovementComponent)CreateComponent(index, typeof(PlayerMovementComponent));
        component.Controller = newController;
        component.Camera = newCamera;
        component.Player = newPlayer;
        component.Speed = newSpeed;
        component.Gravity = newGravity;
        component.JumpForce = newJumpForce;
        component.SmoothTime = newSmoothTime;
        ReplaceComponent(index, component);
    }

    public void RemovePlayerMovement() {
        RemoveComponent(GameComponentsLookup.PlayerMovement);
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

    static Entitas.IMatcher<GameEntity> _matcherPlayerMovement;

    public static Entitas.IMatcher<GameEntity> PlayerMovement {
        get {
            if (_matcherPlayerMovement == null) {
                var matcher = (Entitas.Matcher<GameEntity>)Entitas.Matcher<GameEntity>.AllOf(GameComponentsLookup.PlayerMovement);
                matcher.componentNames = GameComponentsLookup.componentNames;
                _matcherPlayerMovement = matcher;
            }

            return _matcherPlayerMovement;
        }
    }
}
