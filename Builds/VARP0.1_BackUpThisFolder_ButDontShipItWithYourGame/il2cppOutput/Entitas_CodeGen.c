#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32[] Entitas.Matcher`1::get_indices()
// 0x00000002 System.Int32[] Entitas.Matcher`1::get_allOfIndices()
// 0x00000003 System.Int32[] Entitas.Matcher`1::get_anyOfIndices()
// 0x00000004 System.Int32[] Entitas.Matcher`1::get_noneOfIndices()
// 0x00000005 System.String[] Entitas.Matcher`1::get_componentNames()
// 0x00000006 System.Void Entitas.Matcher`1::set_componentNames(System.String[])
// 0x00000007 System.Void Entitas.Matcher`1::.ctor()
// 0x00000008 Entitas.IAnyOfMatcher`1<TEntity> Entitas.Matcher`1::Entitas.IAllOfMatcher<TEntity>.AnyOf(System.Int32[])
// 0x00000009 Entitas.IAnyOfMatcher`1<TEntity> Entitas.Matcher`1::Entitas.IAllOfMatcher<TEntity>.AnyOf(Entitas.IMatcher`1<TEntity>[])
// 0x0000000A Entitas.INoneOfMatcher`1<TEntity> Entitas.Matcher`1::NoneOf(System.Int32[])
// 0x0000000B Entitas.INoneOfMatcher`1<TEntity> Entitas.Matcher`1::NoneOf(Entitas.IMatcher`1<TEntity>[])
// 0x0000000C System.Boolean Entitas.Matcher`1::Matches(TEntity)
// 0x0000000D System.String Entitas.Matcher`1::ToString()
// 0x0000000E System.Void Entitas.Matcher`1::appendIndices(System.Text.StringBuilder,System.String,System.Int32[],System.String[])
// 0x0000000F System.Boolean Entitas.Matcher`1::Equals(System.Object)
// 0x00000010 System.Boolean Entitas.Matcher`1::equalIndices(System.Int32[],System.Int32[])
// 0x00000011 System.Int32 Entitas.Matcher`1::GetHashCode()
// 0x00000012 System.Int32 Entitas.Matcher`1::applyHash(System.Int32,System.Int32[],System.Int32,System.Int32)
// 0x00000013 Entitas.IAllOfMatcher`1<TEntity> Entitas.Matcher`1::AllOf(System.Int32[])
// 0x00000014 Entitas.IAllOfMatcher`1<TEntity> Entitas.Matcher`1::AllOf(Entitas.IMatcher`1<TEntity>[])
// 0x00000015 Entitas.IAnyOfMatcher`1<TEntity> Entitas.Matcher`1::AnyOf(System.Int32[])
// 0x00000016 Entitas.IAnyOfMatcher`1<TEntity> Entitas.Matcher`1::AnyOf(Entitas.IMatcher`1<TEntity>[])
// 0x00000017 System.Int32[] Entitas.Matcher`1::mergeIndices(System.Int32[],System.Int32[],System.Int32[])
// 0x00000018 System.Int32[] Entitas.Matcher`1::mergeIndices(Entitas.IMatcher`1<TEntity>[])
// 0x00000019 System.String[] Entitas.Matcher`1::getComponentNames(Entitas.IMatcher`1<TEntity>[])
// 0x0000001A System.Void Entitas.Matcher`1::setComponentNames(Entitas.Matcher`1<TEntity>,Entitas.IMatcher`1<TEntity>[])
// 0x0000001B System.Int32[] Entitas.Matcher`1::distinctIndices(System.Collections.Generic.IList`1<System.Int32>)
// 0x0000001C System.Void Entitas.Matcher`1::.cctor()
// 0x0000001D System.Void Entitas.EntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey>)
// 0x0000001E System.Void Entitas.EntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey[]>)
// 0x0000001F System.Void Entitas.EntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000020 System.Void Entitas.EntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey[]>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000021 System.Void Entitas.EntityIndex`2::Activate()
// 0x00000022 System.Collections.Generic.HashSet`1<TEntity> Entitas.EntityIndex`2::GetEntities(TKey)
// 0x00000023 System.String Entitas.EntityIndex`2::ToString()
// 0x00000024 System.Void Entitas.EntityIndex`2::clear()
// 0x00000025 System.Void Entitas.EntityIndex`2::addEntity(TKey,TEntity)
// 0x00000026 System.Void Entitas.EntityIndex`2::removeEntity(TKey,TEntity)
// 0x00000027 System.String Entitas.AbstractEntityIndex`2::get_name()
// 0x00000028 System.Void Entitas.AbstractEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey>)
// 0x00000029 System.Void Entitas.AbstractEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey[]>)
// 0x0000002A System.Void Entitas.AbstractEntityIndex`2::Activate()
// 0x0000002B System.Void Entitas.AbstractEntityIndex`2::Deactivate()
// 0x0000002C System.String Entitas.AbstractEntityIndex`2::ToString()
// 0x0000002D System.Void Entitas.AbstractEntityIndex`2::indexEntities(Entitas.IGroup`1<TEntity>)
// 0x0000002E System.Void Entitas.AbstractEntityIndex`2::onEntityAdded(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent)
// 0x0000002F System.Void Entitas.AbstractEntityIndex`2::onEntityRemoved(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent)
// 0x00000030 System.Void Entitas.AbstractEntityIndex`2::addEntity(TKey,TEntity)
// 0x00000031 System.Void Entitas.AbstractEntityIndex`2::removeEntity(TKey,TEntity)
// 0x00000032 System.Void Entitas.AbstractEntityIndex`2::clear()
// 0x00000033 System.Void Entitas.AbstractEntityIndex`2::Finalize()
// 0x00000034 System.Void Entitas.PrimaryEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey>)
// 0x00000035 System.Void Entitas.PrimaryEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey[]>)
// 0x00000036 System.Void Entitas.PrimaryEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000037 System.Void Entitas.PrimaryEntityIndex`2::.ctor(System.String,Entitas.IGroup`1<TEntity>,System.Func`3<TEntity,Entitas.IComponent,TKey[]>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000038 System.Void Entitas.PrimaryEntityIndex`2::Activate()
// 0x00000039 TEntity Entitas.PrimaryEntityIndex`2::GetEntity(TKey)
// 0x0000003A System.String Entitas.PrimaryEntityIndex`2::ToString()
// 0x0000003B System.Void Entitas.PrimaryEntityIndex`2::clear()
// 0x0000003C System.Void Entitas.PrimaryEntityIndex`2::addEntity(TKey,TEntity)
// 0x0000003D System.Void Entitas.PrimaryEntityIndex`2::removeEntity(TKey,TEntity)
// 0x0000003E System.Void Entitas.Entity::add_OnComponentAdded(Entitas.EntityComponentChanged)
extern void Entity_add_OnComponentAdded_mE3F56CECFFF576AA65574EF1C69C7D8374FAC3DF (void);
// 0x0000003F System.Void Entitas.Entity::remove_OnComponentAdded(Entitas.EntityComponentChanged)
extern void Entity_remove_OnComponentAdded_mE43B5F627B2CBC16C98F3BA606FCDFA215B563BA (void);
// 0x00000040 System.Void Entitas.Entity::add_OnComponentRemoved(Entitas.EntityComponentChanged)
extern void Entity_add_OnComponentRemoved_m891ED7F9FDF0C8AD53E2BD5D1B96B5C7476869FF (void);
// 0x00000041 System.Void Entitas.Entity::remove_OnComponentRemoved(Entitas.EntityComponentChanged)
extern void Entity_remove_OnComponentRemoved_m0139CE2520DCF84FE0E417ACE4C597D9688C599D (void);
// 0x00000042 System.Void Entitas.Entity::add_OnComponentReplaced(Entitas.EntityComponentReplaced)
extern void Entity_add_OnComponentReplaced_m22C1ED88258788FDDF8DA204BBFA51B2B72AA909 (void);
// 0x00000043 System.Void Entitas.Entity::remove_OnComponentReplaced(Entitas.EntityComponentReplaced)
extern void Entity_remove_OnComponentReplaced_mE53D3B8C3F4125CBEEA4818B4F0D8DB1104FCC26 (void);
// 0x00000044 System.Void Entitas.Entity::add_OnEntityReleased(Entitas.EntityEvent)
extern void Entity_add_OnEntityReleased_mFEFAD438C615A11787BA18D255D2A3C5536D2921 (void);
// 0x00000045 System.Void Entitas.Entity::remove_OnEntityReleased(Entitas.EntityEvent)
extern void Entity_remove_OnEntityReleased_m289F9FD40ACF0B48E9C6D2B2518F1B32284DEC7A (void);
// 0x00000046 System.Void Entitas.Entity::add_OnDestroyEntity(Entitas.EntityEvent)
extern void Entity_add_OnDestroyEntity_m4C38035BD26E6D9DF3EAEF6CF98DDFC334B77028 (void);
// 0x00000047 System.Void Entitas.Entity::remove_OnDestroyEntity(Entitas.EntityEvent)
extern void Entity_remove_OnDestroyEntity_m6702E982BFBD701F66502D23DBAC80FC128CAF5A (void);
// 0x00000048 System.Int32 Entitas.Entity::get_totalComponents()
extern void Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E (void);
// 0x00000049 System.Int32 Entitas.Entity::get_creationIndex()
extern void Entity_get_creationIndex_m54E102EC17FDA194512DC5718989395B6B3307AE (void);
// 0x0000004A System.Boolean Entitas.Entity::get_isEnabled()
extern void Entity_get_isEnabled_m4833C9952FA87E420C96DED687E8E4679C7639A9 (void);
// 0x0000004B System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.Entity::get_componentPools()
extern void Entity_get_componentPools_mDA88FCCFCD956EDDDBCAD6B0C9F3C05F7D74022B (void);
// 0x0000004C Entitas.ContextInfo Entitas.Entity::get_contextInfo()
extern void Entity_get_contextInfo_mEB2CE38774398D19AE1D65A540D30466F4B4DB41 (void);
// 0x0000004D Entitas.IAERC Entitas.Entity::get_aerc()
extern void Entity_get_aerc_m3E971E578DE9035CAAE26A96767A752A614FC8B6 (void);
// 0x0000004E System.Void Entitas.Entity::.ctor()
extern void Entity__ctor_m945FDD0C3C50C2316EC7D64A5BAE085A36E9C752 (void);
// 0x0000004F System.Void Entitas.Entity::Initialize(System.Int32,System.Int32,System.Collections.Generic.Stack`1<Entitas.IComponent>[],Entitas.ContextInfo,Entitas.IAERC)
extern void Entity_Initialize_m7DDBCB35837D4B7FA92F84621F689B944F1977B9 (void);
// 0x00000050 Entitas.ContextInfo Entitas.Entity::createDefaultContextInfo()
extern void Entity_createDefaultContextInfo_m0F5FB3A4229BED3A4F9C249997E0D8D3D55CBA3D (void);
// 0x00000051 System.Void Entitas.Entity::Reactivate(System.Int32)
extern void Entity_Reactivate_m2303F059BF0993EBC6BFEB400DA2E78BA25912CC (void);
// 0x00000052 System.Void Entitas.Entity::AddComponent(System.Int32,Entitas.IComponent)
extern void Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8 (void);
// 0x00000053 System.Void Entitas.Entity::RemoveComponent(System.Int32)
extern void Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413 (void);
// 0x00000054 System.Void Entitas.Entity::ReplaceComponent(System.Int32,Entitas.IComponent)
extern void Entity_ReplaceComponent_m753F0DB897BD7A12953E9AE8302662965AFEBC0D (void);
// 0x00000055 System.Void Entitas.Entity::replaceComponent(System.Int32,Entitas.IComponent)
extern void Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89 (void);
// 0x00000056 Entitas.IComponent Entitas.Entity::GetComponent(System.Int32)
extern void Entity_GetComponent_m48E5240DCCBD9062C45E22A12BC09565807E7191 (void);
// 0x00000057 Entitas.IComponent[] Entitas.Entity::GetComponents()
extern void Entity_GetComponents_mFFEEBD86D8BC111D8148A0F816AF377DCF7CD693 (void);
// 0x00000058 System.Int32[] Entitas.Entity::GetComponentIndices()
extern void Entity_GetComponentIndices_m76AF67018BEB92729FE848A281E44A75DD9ADA51 (void);
// 0x00000059 System.Boolean Entitas.Entity::HasComponent(System.Int32)
extern void Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48 (void);
// 0x0000005A System.Boolean Entitas.Entity::HasComponents(System.Int32[])
extern void Entity_HasComponents_m96BF3D6FB3C811EB8AFFD640C09BF20CC9E4FE5F (void);
// 0x0000005B System.Boolean Entitas.Entity::HasAnyComponent(System.Int32[])
extern void Entity_HasAnyComponent_m959BC73516E99058FDEFC153D774C9E47152AF5A (void);
// 0x0000005C System.Void Entitas.Entity::RemoveAllComponents()
extern void Entity_RemoveAllComponents_m6D3FEA2B1BCA3EC9FC0550DBCC30A80EB19756DA (void);
// 0x0000005D System.Collections.Generic.Stack`1<Entitas.IComponent> Entitas.Entity::GetComponentPool(System.Int32)
extern void Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA (void);
// 0x0000005E Entitas.IComponent Entitas.Entity::CreateComponent(System.Int32,System.Type)
extern void Entity_CreateComponent_mC7D282D4A08331F829DE35BA5408B4BDEDEF3E60 (void);
// 0x0000005F T Entitas.Entity::CreateComponent(System.Int32)
// 0x00000060 System.Int32 Entitas.Entity::get_retainCount()
extern void Entity_get_retainCount_m676992DE58920B46D96078B2BDF47BF664F58E9C (void);
// 0x00000061 System.Void Entitas.Entity::Retain(System.Object)
extern void Entity_Retain_m00D0E8E349F8DF30986EC895C1CEA07853FF7449 (void);
// 0x00000062 System.Void Entitas.Entity::Release(System.Object)
extern void Entity_Release_m3FE7870AF86DEA7F161AB605089BAF088BDE0CBD (void);
// 0x00000063 System.Void Entitas.Entity::Destroy()
extern void Entity_Destroy_mD3F6059226F9C43E48A2B8C8A8FB29E331AF6B1D (void);
// 0x00000064 System.Void Entitas.Entity::InternalDestroy()
extern void Entity_InternalDestroy_mDB2F678A7ABFCE2E5537941C01927FE83A6472E4 (void);
// 0x00000065 System.Void Entitas.Entity::RemoveAllOnEntityReleasedHandlers()
extern void Entity_RemoveAllOnEntityReleasedHandlers_m771F18DDF4B6384B39C9E9531E8F0F57F4E91DE4 (void);
// 0x00000066 System.String Entitas.Entity::ToString()
extern void Entity_ToString_m8979549AF5DC8FB6812614BD2C4AB0745CAC61AD (void);
// 0x00000067 System.Void Entitas.Group`1::add_OnEntityAdded(Entitas.GroupChanged`1<TEntity>)
// 0x00000068 System.Void Entitas.Group`1::remove_OnEntityAdded(Entitas.GroupChanged`1<TEntity>)
// 0x00000069 System.Void Entitas.Group`1::add_OnEntityRemoved(Entitas.GroupChanged`1<TEntity>)
// 0x0000006A System.Void Entitas.Group`1::remove_OnEntityRemoved(Entitas.GroupChanged`1<TEntity>)
// 0x0000006B System.Void Entitas.Group`1::add_OnEntityUpdated(Entitas.GroupUpdated`1<TEntity>)
// 0x0000006C System.Void Entitas.Group`1::remove_OnEntityUpdated(Entitas.GroupUpdated`1<TEntity>)
// 0x0000006D System.Int32 Entitas.Group`1::get_count()
// 0x0000006E Entitas.IMatcher`1<TEntity> Entitas.Group`1::get_matcher()
// 0x0000006F System.Void Entitas.Group`1::.ctor(Entitas.IMatcher`1<TEntity>)
// 0x00000070 System.Void Entitas.Group`1::HandleEntitySilently(TEntity)
// 0x00000071 System.Void Entitas.Group`1::HandleEntity(TEntity,System.Int32,Entitas.IComponent)
// 0x00000072 System.Void Entitas.Group`1::UpdateEntity(TEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
// 0x00000073 System.Void Entitas.Group`1::RemoveAllEventHandlers()
// 0x00000074 Entitas.GroupChanged`1<TEntity> Entitas.Group`1::HandleEntity(TEntity)
// 0x00000075 System.Boolean Entitas.Group`1::addEntitySilently(TEntity)
// 0x00000076 System.Void Entitas.Group`1::addEntity(TEntity,System.Int32,Entitas.IComponent)
// 0x00000077 System.Boolean Entitas.Group`1::removeEntitySilently(TEntity)
// 0x00000078 System.Void Entitas.Group`1::removeEntity(TEntity,System.Int32,Entitas.IComponent)
// 0x00000079 System.Boolean Entitas.Group`1::ContainsEntity(TEntity)
// 0x0000007A TEntity[] Entitas.Group`1::GetEntities()
// 0x0000007B System.Collections.Generic.List`1<TEntity> Entitas.Group`1::GetEntities(System.Collections.Generic.List`1<TEntity>)
// 0x0000007C System.Collections.Generic.IEnumerable`1<TEntity> Entitas.Group`1::AsEnumerable()
// 0x0000007D System.Collections.Generic.HashSet`1/Enumerator<TEntity> Entitas.Group`1::GetEnumerator()
// 0x0000007E TEntity Entitas.Group`1::GetSingleEntity()
// 0x0000007F System.String Entitas.Group`1::ToString()
// 0x00000080 System.Void Entitas.Context`1::add_OnEntityCreated(Entitas.ContextEntityChanged)
// 0x00000081 System.Void Entitas.Context`1::remove_OnEntityCreated(Entitas.ContextEntityChanged)
// 0x00000082 System.Void Entitas.Context`1::add_OnEntityWillBeDestroyed(Entitas.ContextEntityChanged)
// 0x00000083 System.Void Entitas.Context`1::remove_OnEntityWillBeDestroyed(Entitas.ContextEntityChanged)
// 0x00000084 System.Void Entitas.Context`1::add_OnEntityDestroyed(Entitas.ContextEntityChanged)
// 0x00000085 System.Void Entitas.Context`1::remove_OnEntityDestroyed(Entitas.ContextEntityChanged)
// 0x00000086 System.Void Entitas.Context`1::add_OnGroupCreated(Entitas.ContextGroupChanged)
// 0x00000087 System.Void Entitas.Context`1::remove_OnGroupCreated(Entitas.ContextGroupChanged)
// 0x00000088 System.Int32 Entitas.Context`1::get_totalComponents()
// 0x00000089 System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.Context`1::get_componentPools()
// 0x0000008A Entitas.ContextInfo Entitas.Context`1::get_contextInfo()
// 0x0000008B System.Int32 Entitas.Context`1::get_count()
// 0x0000008C System.Int32 Entitas.Context`1::get_reusableEntitiesCount()
// 0x0000008D System.Int32 Entitas.Context`1::get_retainedEntitiesCount()
// 0x0000008E System.Void Entitas.Context`1::.ctor(System.Int32,System.Func`1<TEntity>)
// 0x0000008F System.Void Entitas.Context`1::.ctor(System.Int32,System.Int32,Entitas.ContextInfo,System.Func`2<Entitas.IEntity,Entitas.IAERC>,System.Func`1<TEntity>)
// 0x00000090 Entitas.ContextInfo Entitas.Context`1::createDefaultContextInfo()
// 0x00000091 TEntity Entitas.Context`1::CreateEntity()
// 0x00000092 System.Void Entitas.Context`1::DestroyAllEntities()
// 0x00000093 System.Boolean Entitas.Context`1::HasEntity(TEntity)
// 0x00000094 TEntity[] Entitas.Context`1::GetEntities()
// 0x00000095 Entitas.IGroup`1<TEntity> Entitas.Context`1::GetGroup(Entitas.IMatcher`1<TEntity>)
// 0x00000096 System.Void Entitas.Context`1::AddEntityIndex(Entitas.IEntityIndex)
// 0x00000097 Entitas.IEntityIndex Entitas.Context`1::GetEntityIndex(System.String)
// 0x00000098 System.Void Entitas.Context`1::ResetCreationIndex()
// 0x00000099 System.Void Entitas.Context`1::ClearComponentPool(System.Int32)
// 0x0000009A System.Void Entitas.Context`1::ClearComponentPools()
// 0x0000009B System.Void Entitas.Context`1::Reset()
// 0x0000009C System.Void Entitas.Context`1::RemoveAllEventHandlers()
// 0x0000009D System.String Entitas.Context`1::ToString()
// 0x0000009E System.Void Entitas.Context`1::updateGroupsComponentAddedOrRemoved(Entitas.IEntity,System.Int32,Entitas.IComponent)
// 0x0000009F System.Void Entitas.Context`1::updateGroupsComponentReplaced(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
// 0x000000A0 System.Void Entitas.Context`1::onEntityReleased(Entitas.IEntity)
// 0x000000A1 System.Void Entitas.Context`1::onDestroyEntity(Entitas.IEntity)
// 0x000000A2 System.Void Entitas.Context`1/<>c::.cctor()
// 0x000000A3 System.Void Entitas.Context`1/<>c::.ctor()
// 0x000000A4 Entitas.IAERC Entitas.Context`1/<>c::<.ctor>b__43_0(Entitas.IEntity)
// 0x000000A5 System.Collections.Generic.List`1<Entitas.GroupChanged`1<TEntity>> Entitas.Context`1/<>c::<.ctor>b__43_1()
// 0x000000A6 System.Void Entitas.Context`1/<>c::<.ctor>b__43_2(System.Collections.Generic.List`1<Entitas.GroupChanged`1<TEntity>>)
// 0x000000A7 System.Void Entitas.JobSystem`1::.ctor(Entitas.IGroup`1<TEntity>,System.Int32)
// 0x000000A8 System.Void Entitas.JobSystem`1::.ctor(Entitas.IGroup`1<TEntity>)
// 0x000000A9 System.Void Entitas.JobSystem`1::Execute()
// 0x000000AA System.Void Entitas.JobSystem`1::queueOnThread(System.Object)
// 0x000000AB System.Void Entitas.JobSystem`1::Execute(TEntity)
// 0x000000AC System.Void Entitas.Job`1::Set(TEntity[],System.Int32,System.Int32)
// 0x000000AD System.Void Entitas.Job`1::.ctor()
// 0x000000AE System.Void Entitas.Systems::.ctor()
extern void Systems__ctor_m2941125B4EBDC6C6AC31ACF2C1FB69FB417804FF (void);
// 0x000000AF Entitas.Systems Entitas.Systems::Add(Entitas.ISystem)
extern void Systems_Add_m4BCFCF1839B433C2F91B7D8E7CA60F8A49683061 (void);
// 0x000000B0 System.Void Entitas.Systems::Initialize()
extern void Systems_Initialize_m7BE3CEA29EAA1865944C69369891753EF966B160 (void);
// 0x000000B1 System.Void Entitas.Systems::Execute()
extern void Systems_Execute_mFA3AC55E510E9DC064FF80C0950AB01D3A8DDED8 (void);
// 0x000000B2 System.Void Entitas.Systems::Cleanup()
extern void Systems_Cleanup_m37CF0DD2E95676A689BCBA97FD4CCAD9935D150B (void);
// 0x000000B3 System.Void Entitas.Systems::TearDown()
extern void Systems_TearDown_mEA01AEDDC9BF2DC562440D646B47A164AD7E3736 (void);
// 0x000000B4 System.Void Entitas.Systems::ActivateReactiveSystems()
extern void Systems_ActivateReactiveSystems_m8CC189427D7FE5CB907A67FBCDCF9F96FDA7F0FC (void);
// 0x000000B5 System.Void Entitas.Systems::DeactivateReactiveSystems()
extern void Systems_DeactivateReactiveSystems_mCFF9E5EC8DD87FAF1437FF4314365C73592EFE42 (void);
// 0x000000B6 System.Void Entitas.Systems::ClearReactiveSystems()
extern void Systems_ClearReactiveSystems_m944D8FA4D4324865D74EB78C392994B6170F5830 (void);
// 0x000000B7 System.Void Entitas.ReactiveSystem`1::.ctor(Entitas.IContext`1<TEntity>)
// 0x000000B8 System.Void Entitas.ReactiveSystem`1::.ctor(Entitas.ICollector`1<TEntity>)
// 0x000000B9 Entitas.ICollector`1<TEntity> Entitas.ReactiveSystem`1::GetTrigger(Entitas.IContext`1<TEntity>)
// 0x000000BA System.Boolean Entitas.ReactiveSystem`1::Filter(TEntity)
// 0x000000BB System.Void Entitas.ReactiveSystem`1::Execute(System.Collections.Generic.List`1<TEntity>)
// 0x000000BC System.Void Entitas.ReactiveSystem`1::Activate()
// 0x000000BD System.Void Entitas.ReactiveSystem`1::Deactivate()
// 0x000000BE System.Void Entitas.ReactiveSystem`1::Clear()
// 0x000000BF System.Void Entitas.ReactiveSystem`1::Execute()
// 0x000000C0 System.String Entitas.ReactiveSystem`1::ToString()
// 0x000000C1 System.Void Entitas.ReactiveSystem`1::Finalize()
// 0x000000C2 TEntity[] Entitas.ContextExtension::GetEntities(Entitas.IContext`1<TEntity>,Entitas.IMatcher`1<TEntity>)
// 0x000000C3 TEntity Entitas.ContextExtension::CloneEntity(Entitas.IContext`1<TEntity>,Entitas.IEntity,System.Boolean,System.Int32[])
// 0x000000C4 Entitas.ICollector`1<TEntity> Entitas.GroupExtension::CreateCollector(Entitas.IGroup`1<TEntity>,Entitas.GroupEvent)
// 0x000000C5 System.Void Entitas.ContextDoesNotContainEntityException::.ctor(System.String,System.String)
extern void ContextDoesNotContainEntityException__ctor_mD9E43A7F7C959235595BD9594ED211BB998B5AFB (void);
// 0x000000C6 System.Void Entitas.ContextEntityIndexDoesAlreadyExistException::.ctor(Entitas.IContext,System.String)
extern void ContextEntityIndexDoesAlreadyExistException__ctor_mD40BEC1DCB38EF8CC9C808D520F0E002E766DE4E (void);
// 0x000000C7 System.Void Entitas.ContextEntityIndexDoesNotExistException::.ctor(Entitas.IContext,System.String)
extern void ContextEntityIndexDoesNotExistException__ctor_mFADEA51A77F2AA27EE9F34A0D2F4100B7BAAC757 (void);
// 0x000000C8 System.Void Entitas.ContextStillHasRetainedEntitiesException::.ctor(Entitas.IContext,Entitas.IEntity[])
extern void ContextStillHasRetainedEntitiesException__ctor_m003221AFFD676BF8B27BD1189B09CD5A82BA55BC (void);
// 0x000000C9 System.Void Entitas.ContextStillHasRetainedEntitiesException/<>c::.cctor()
extern void U3CU3Ec__cctor_mE7082999BBD477AF0B65473481B22F077A7CDB54 (void);
// 0x000000CA System.Void Entitas.ContextStillHasRetainedEntitiesException/<>c::.ctor()
extern void U3CU3Ec__ctor_m1F2AC3C6282B5951095AB3E31532337B2D7FFB71 (void);
// 0x000000CB System.String Entitas.ContextStillHasRetainedEntitiesException/<>c::<.ctor>b__0_0(Entitas.IEntity)
extern void U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51 (void);
// 0x000000CC System.String Entitas.ContextStillHasRetainedEntitiesException/<>c::<.ctor>b__0_1(System.Object)
extern void U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8 (void);
// 0x000000CD System.Void Entitas.EntityIsNotDestroyedException::.ctor(System.String)
extern void EntityIsNotDestroyedException__ctor_mCA521C10DFE315016BFD23366CF0D93FB059CDAE (void);
// 0x000000CE System.Void Entitas.ContextInfoException::.ctor(Entitas.IContext,Entitas.ContextInfo)
extern void ContextInfoException__ctor_m032988BE9BE5523E81414A9AC35CD54C2BAF4168 (void);
// 0x000000CF System.Boolean Entitas.EntityEqualityComparer`1::Equals(TEntity,TEntity)
// 0x000000D0 System.Int32 Entitas.EntityEqualityComparer`1::GetHashCode(TEntity)
// 0x000000D1 System.Void Entitas.EntityEqualityComparer`1::.ctor()
// 0x000000D2 System.Void Entitas.EntityEqualityComparer`1::.cctor()
// 0x000000D3 System.Void Entitas.EntityAlreadyHasComponentException::.ctor(System.Int32,System.String,System.String)
extern void EntityAlreadyHasComponentException__ctor_mBA4E32B23CDDF8515EB6BC6A2CA509FB95C5B790 (void);
// 0x000000D4 System.Void Entitas.EntityDoesNotHaveComponentException::.ctor(System.Int32,System.String,System.String)
extern void EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB (void);
// 0x000000D5 System.Void Entitas.EntityIsAlreadyRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
extern void EntityIsAlreadyRetainedByOwnerException__ctor_m02B6DD1E20F09F4F4A1571B591B4075F41BC746E (void);
// 0x000000D6 System.Void Entitas.EntityIsNotEnabledException::.ctor(System.String)
extern void EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08 (void);
// 0x000000D7 System.Void Entitas.EntityIsNotRetainedByOwnerException::.ctor(Entitas.IEntity,System.Object)
extern void EntityIsNotRetainedByOwnerException__ctor_m2DCE0D9B0197B5C86B7A2038AFF8B06581976727 (void);
// 0x000000D8 System.Void Entitas.GroupSingleEntityException`1::.ctor(Entitas.IGroup`1<TEntity>)
// 0x000000D9 System.Void Entitas.GroupSingleEntityException`1/<>c::.cctor()
// 0x000000DA System.Void Entitas.GroupSingleEntityException`1/<>c::.ctor()
// 0x000000DB System.String Entitas.GroupSingleEntityException`1/<>c::<.ctor>b__0_0(TEntity)
// 0x000000DC System.Void Entitas.EntityIndexException::.ctor(System.String,System.String)
extern void EntityIndexException__ctor_m1265A9363D62300CF73043A526A06B2755D8815D (void);
// 0x000000DD System.Void Entitas.MatcherException::.ctor(System.Int32)
extern void MatcherException__ctor_m191E462E239DCD65CFE3B8397A5239735A46B488 (void);
// 0x000000DE System.Collections.Generic.HashSet`1<TEntity> Entitas.Collector`1::get_collectedEntities()
// 0x000000DF System.Int32 Entitas.Collector`1::get_count()
// 0x000000E0 System.Void Entitas.Collector`1::.ctor(Entitas.IGroup`1<TEntity>,Entitas.GroupEvent)
// 0x000000E1 System.Void Entitas.Collector`1::.ctor(Entitas.IGroup`1<TEntity>[],Entitas.GroupEvent[])
// 0x000000E2 System.Void Entitas.Collector`1::Activate()
// 0x000000E3 System.Void Entitas.Collector`1::Deactivate()
// 0x000000E4 System.Collections.Generic.IEnumerable`1<TCast> Entitas.Collector`1::GetCollectedEntities()
// 0x000000E5 System.Void Entitas.Collector`1::ClearCollectedEntities()
// 0x000000E6 System.Void Entitas.Collector`1::addEntity(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent)
// 0x000000E7 System.String Entitas.Collector`1::ToString()
// 0x000000E8 System.Void Entitas.Collector`1::Finalize()
// 0x000000E9 System.Void Entitas.CollectorException::.ctor(System.String,System.String)
extern void CollectorException__ctor_m697D555590A484D9A2F36B8C35353436ADA2768F (void);
// 0x000000EA System.String Entitas.EntitasResources::GetVersion()
extern void EntitasResources_GetVersion_mE876F548E4BC50AEC9D0B4BADE0125A5A34F5005 (void);
// 0x000000EB Entitas.IEntity Entitas.CollectionExtension::SingleEntity(System.Collections.Generic.ICollection`1<Entitas.IEntity>)
extern void CollectionExtension_SingleEntity_m47A29F143D40F8EC1A538C0AC8474B6652E4F786 (void);
// 0x000000EC TEntity Entitas.CollectionExtension::SingleEntity(System.Collections.Generic.ICollection`1<TEntity>)
// 0x000000ED System.Void Entitas.SingleEntityException::.ctor(System.Int32)
extern void SingleEntityException__ctor_m4A81150F6003B9F03E3A073B980C5539F2BDB502 (void);
// 0x000000EE System.Void Entitas.PublicMemberInfoEntityExtension::CopyTo(Entitas.IEntity,Entitas.IEntity,System.Boolean,System.Int32[])
extern void PublicMemberInfoEntityExtension_CopyTo_mC64FE334472D65E763F6C43E6D8585A3858AAC4F (void);
// 0x000000EF System.String Entitas.EntitasStringExtension::AddContextSuffix(System.String)
extern void EntitasStringExtension_AddContextSuffix_mF681092AFCD668D4946B72BDEAA954AAA78A7220 (void);
// 0x000000F0 System.String Entitas.EntitasStringExtension::RemoveContextSuffix(System.String)
extern void EntitasStringExtension_RemoveContextSuffix_m3B20CA46083CD14BA6E848AAE25EBF292467EB0F (void);
// 0x000000F1 System.Boolean Entitas.EntitasStringExtension::HasContextSuffix(System.String)
extern void EntitasStringExtension_HasContextSuffix_m1D4BBD10E4DDFEB4CC7E016562A17E6EBB92348B (void);
// 0x000000F2 System.String Entitas.EntitasStringExtension::AddEntitySuffix(System.String)
extern void EntitasStringExtension_AddEntitySuffix_mA50D034321C5CF02FF18F3A6BA1AB324FD7702A4 (void);
// 0x000000F3 System.String Entitas.EntitasStringExtension::RemoveEntitySuffix(System.String)
extern void EntitasStringExtension_RemoveEntitySuffix_mF0002FBB91448B806EAC651941825D31AB4D1F94 (void);
// 0x000000F4 System.Boolean Entitas.EntitasStringExtension::HasEntitySuffix(System.String)
extern void EntitasStringExtension_HasEntitySuffix_m785BD1AC84BAB61E60B06C098C16217C937782AF (void);
// 0x000000F5 System.String Entitas.EntitasStringExtension::AddComponentSuffix(System.String)
extern void EntitasStringExtension_AddComponentSuffix_mE2636EA75A434E0C108E8BEF73F5729213307165 (void);
// 0x000000F6 System.String Entitas.EntitasStringExtension::RemoveComponentSuffix(System.String)
extern void EntitasStringExtension_RemoveComponentSuffix_m1C5F9623144E1ACF874970B3E1921B38D05F0AB4 (void);
// 0x000000F7 System.Boolean Entitas.EntitasStringExtension::HasComponentSuffix(System.String)
extern void EntitasStringExtension_HasComponentSuffix_mCF23BDA6180B327CCF0050DDE8E05938703D2097 (void);
// 0x000000F8 System.String Entitas.EntitasStringExtension::AddSystemSuffix(System.String)
extern void EntitasStringExtension_AddSystemSuffix_mEE40CE5F09E953DFEE223B753A7043F042B7261B (void);
// 0x000000F9 System.String Entitas.EntitasStringExtension::RemoveSystemSuffix(System.String)
extern void EntitasStringExtension_RemoveSystemSuffix_m51DB3959E426F92557370DB0E4D9FCF3AC0FF287 (void);
// 0x000000FA System.Boolean Entitas.EntitasStringExtension::HasSystemSuffix(System.String)
extern void EntitasStringExtension_HasSystemSuffix_mC91DBB1D382FC656E19583448ECF6B6D67004E1C (void);
// 0x000000FB System.String Entitas.EntitasStringExtension::AddMatcherSuffix(System.String)
extern void EntitasStringExtension_AddMatcherSuffix_m0EA35C1BFF1854DCB056AF75B3DEE38100C8C428 (void);
// 0x000000FC System.String Entitas.EntitasStringExtension::RemoveMatcherSuffix(System.String)
extern void EntitasStringExtension_RemoveMatcherSuffix_mA1532ACB7F7EC2DA5B8BF78AD6801EF7B80D66BD (void);
// 0x000000FD System.Boolean Entitas.EntitasStringExtension::HasMatcherSuffix(System.String)
extern void EntitasStringExtension_HasMatcherSuffix_m188030E94E1F834A3ECCD61CA1CD283027D1A0F6 (void);
// 0x000000FE System.String Entitas.EntitasStringExtension::AddListenerSuffix(System.String)
extern void EntitasStringExtension_AddListenerSuffix_m9A25E777D9C1F40B31AEF392B385B29C0254BA7C (void);
// 0x000000FF System.String Entitas.EntitasStringExtension::RemoveListenerSuffix(System.String)
extern void EntitasStringExtension_RemoveListenerSuffix_mC24B4AA52080D20CC0BB79DEB8CFC5BD2CA93E40 (void);
// 0x00000100 System.Boolean Entitas.EntitasStringExtension::HasListenerSuffix(System.String)
extern void EntitasStringExtension_HasListenerSuffix_m38538E8DE8BF8DAA59C7B1FC68BB4C7228A272B3 (void);
// 0x00000101 System.String Entitas.EntitasStringExtension::addSuffix(System.String,System.String)
extern void EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4 (void);
// 0x00000102 System.String Entitas.EntitasStringExtension::removeSuffix(System.String,System.String)
extern void EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33 (void);
// 0x00000103 System.Boolean Entitas.EntitasStringExtension::hasSuffix(System.String,System.String)
extern void EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3 (void);
// 0x00000104 System.Int32 Entitas.UnsafeAERC::get_retainCount()
extern void UnsafeAERC_get_retainCount_m4FB2DAF72CC78BDCB3798ECEC1C41209912554A1 (void);
// 0x00000105 System.Void Entitas.UnsafeAERC::Retain(System.Object)
extern void UnsafeAERC_Retain_mF9274634CE1859165B7850CE7664EE9229EEB9B9 (void);
// 0x00000106 System.Void Entitas.UnsafeAERC::Release(System.Object)
extern void UnsafeAERC_Release_m294300937C308CC833E6691AB069195318810B7F (void);
// 0x00000107 System.Void Entitas.UnsafeAERC::.ctor()
extern void UnsafeAERC__ctor_m4A8C0C254335509A68C6A6E40F425482914AF4DC (void);
// 0x00000108 System.Int32 Entitas.SafeAERC::get_retainCount()
extern void SafeAERC_get_retainCount_m68B5B5B0D483E39BE3C5002C569621A44BB98DF4 (void);
// 0x00000109 System.Collections.Generic.HashSet`1<System.Object> Entitas.SafeAERC::get_owners()
extern void SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252 (void);
// 0x0000010A System.Void Entitas.SafeAERC::.ctor(Entitas.IEntity)
extern void SafeAERC__ctor_mC581C185C97CE4CF301AE39B0D2E26B5142FDEB4 (void);
// 0x0000010B System.Void Entitas.SafeAERC::Retain(System.Object)
extern void SafeAERC_Retain_mBE0924B7AC1821EA3C6F266EFFFE02CE4B5583D6 (void);
// 0x0000010C System.Void Entitas.SafeAERC::Release(System.Object)
extern void SafeAERC_Release_m68ECDB31C850E8A2DB6BB6A097AD2EC02333D4B5 (void);
// 0x0000010D System.Void Entitas.ContextInfo::.ctor(System.String,System.String[],System.Type[])
extern void ContextInfo__ctor_mA5B146303B6AB8161E318A1F5866CE5D8804BEF0 (void);
// 0x0000010E System.Void Entitas.EntitasException::.ctor(System.String,System.String)
extern void EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E (void);
// 0x0000010F System.Void Entitas.ContextEntityChanged::.ctor(System.Object,System.IntPtr)
extern void ContextEntityChanged__ctor_mE9220FC1EAC9839BF4549817DC8FC7F69CA8D1AF (void);
// 0x00000110 System.Void Entitas.ContextEntityChanged::Invoke(Entitas.IContext,Entitas.IEntity)
extern void ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2 (void);
// 0x00000111 System.IAsyncResult Entitas.ContextEntityChanged::BeginInvoke(Entitas.IContext,Entitas.IEntity,System.AsyncCallback,System.Object)
extern void ContextEntityChanged_BeginInvoke_m53691AB502728FEAEAC3FB79D05C7CA89E801BF5 (void);
// 0x00000112 System.Void Entitas.ContextEntityChanged::EndInvoke(System.IAsyncResult)
extern void ContextEntityChanged_EndInvoke_mA0A47560371263740D9866189E716B601716A5AF (void);
// 0x00000113 System.Void Entitas.ContextGroupChanged::.ctor(System.Object,System.IntPtr)
extern void ContextGroupChanged__ctor_mDC739D99C53E6F24F91C71116E46C6132078DD66 (void);
// 0x00000114 System.Void Entitas.ContextGroupChanged::Invoke(Entitas.IContext,Entitas.IGroup)
extern void ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742 (void);
// 0x00000115 System.IAsyncResult Entitas.ContextGroupChanged::BeginInvoke(Entitas.IContext,Entitas.IGroup,System.AsyncCallback,System.Object)
extern void ContextGroupChanged_BeginInvoke_m65C81A5646CC0237316B77A8D5A1E857FE323FDC (void);
// 0x00000116 System.Void Entitas.ContextGroupChanged::EndInvoke(System.IAsyncResult)
extern void ContextGroupChanged_EndInvoke_mB88AC0717B226314119C977E0658E534E2EFAE8F (void);
// 0x00000117 System.Void Entitas.IContext::add_OnEntityCreated(Entitas.ContextEntityChanged)
// 0x00000118 System.Void Entitas.IContext::remove_OnEntityCreated(Entitas.ContextEntityChanged)
// 0x00000119 System.Void Entitas.IContext::add_OnEntityWillBeDestroyed(Entitas.ContextEntityChanged)
// 0x0000011A System.Void Entitas.IContext::remove_OnEntityWillBeDestroyed(Entitas.ContextEntityChanged)
// 0x0000011B System.Void Entitas.IContext::add_OnEntityDestroyed(Entitas.ContextEntityChanged)
// 0x0000011C System.Void Entitas.IContext::remove_OnEntityDestroyed(Entitas.ContextEntityChanged)
// 0x0000011D System.Void Entitas.IContext::add_OnGroupCreated(Entitas.ContextGroupChanged)
// 0x0000011E System.Void Entitas.IContext::remove_OnGroupCreated(Entitas.ContextGroupChanged)
// 0x0000011F System.Int32 Entitas.IContext::get_totalComponents()
// 0x00000120 System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.IContext::get_componentPools()
// 0x00000121 Entitas.ContextInfo Entitas.IContext::get_contextInfo()
// 0x00000122 System.Int32 Entitas.IContext::get_count()
// 0x00000123 System.Int32 Entitas.IContext::get_reusableEntitiesCount()
// 0x00000124 System.Int32 Entitas.IContext::get_retainedEntitiesCount()
// 0x00000125 System.Void Entitas.IContext::DestroyAllEntities()
// 0x00000126 System.Void Entitas.IContext::AddEntityIndex(Entitas.IEntityIndex)
// 0x00000127 Entitas.IEntityIndex Entitas.IContext::GetEntityIndex(System.String)
// 0x00000128 System.Void Entitas.IContext::ResetCreationIndex()
// 0x00000129 System.Void Entitas.IContext::ClearComponentPool(System.Int32)
// 0x0000012A System.Void Entitas.IContext::ClearComponentPools()
// 0x0000012B System.Void Entitas.IContext::RemoveAllEventHandlers()
// 0x0000012C System.Void Entitas.IContext::Reset()
// 0x0000012D TEntity Entitas.IContext`1::CreateEntity()
// 0x0000012E System.Boolean Entitas.IContext`1::HasEntity(TEntity)
// 0x0000012F TEntity[] Entitas.IContext`1::GetEntities()
// 0x00000130 Entitas.IGroup`1<TEntity> Entitas.IContext`1::GetGroup(Entitas.IMatcher`1<TEntity>)
// 0x00000131 System.Int32 Entitas.IAERC::get_retainCount()
// 0x00000132 System.Void Entitas.IAERC::Retain(System.Object)
// 0x00000133 System.Void Entitas.IAERC::Release(System.Object)
// 0x00000134 Entitas.IContext[] Entitas.IContexts::get_allContexts()
// 0x00000135 System.Void Entitas.EntityComponentChanged::.ctor(System.Object,System.IntPtr)
extern void EntityComponentChanged__ctor_m5683171ECE6AD229A8A2E39263D94D95A726FF7C (void);
// 0x00000136 System.Void Entitas.EntityComponentChanged::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent)
extern void EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14 (void);
// 0x00000137 System.IAsyncResult Entitas.EntityComponentChanged::BeginInvoke(Entitas.IEntity,System.Int32,Entitas.IComponent,System.AsyncCallback,System.Object)
extern void EntityComponentChanged_BeginInvoke_m73EFD66695CCC009CC69A55598FE477FDA8D0C70 (void);
// 0x00000138 System.Void Entitas.EntityComponentChanged::EndInvoke(System.IAsyncResult)
extern void EntityComponentChanged_EndInvoke_mDA49E34A357C438EFD80FC685B7A395624F546C7 (void);
// 0x00000139 System.Void Entitas.EntityComponentReplaced::.ctor(System.Object,System.IntPtr)
extern void EntityComponentReplaced__ctor_mAEDEA94CF108818A39027B490EDCEC4FF756E028 (void);
// 0x0000013A System.Void Entitas.EntityComponentReplaced::Invoke(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
extern void EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70 (void);
// 0x0000013B System.IAsyncResult Entitas.EntityComponentReplaced::BeginInvoke(Entitas.IEntity,System.Int32,Entitas.IComponent,Entitas.IComponent,System.AsyncCallback,System.Object)
extern void EntityComponentReplaced_BeginInvoke_m635D00DF6538EA9416D4691BEC51FED1968F970D (void);
// 0x0000013C System.Void Entitas.EntityComponentReplaced::EndInvoke(System.IAsyncResult)
extern void EntityComponentReplaced_EndInvoke_mCC1BA3BF183A92A4B3CF31AAB605D2C2BC44684A (void);
// 0x0000013D System.Void Entitas.EntityEvent::.ctor(System.Object,System.IntPtr)
extern void EntityEvent__ctor_mB962D865660CA65D5666F56D010725CDAE8E163E (void);
// 0x0000013E System.Void Entitas.EntityEvent::Invoke(Entitas.IEntity)
extern void EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234 (void);
// 0x0000013F System.IAsyncResult Entitas.EntityEvent::BeginInvoke(Entitas.IEntity,System.AsyncCallback,System.Object)
extern void EntityEvent_BeginInvoke_m110FADC053D453EC8B4B818EDE8946DB21272758 (void);
// 0x00000140 System.Void Entitas.EntityEvent::EndInvoke(System.IAsyncResult)
extern void EntityEvent_EndInvoke_mB148D9CC9DC5CBA247B21D012F09065B00E2EDE8 (void);
// 0x00000141 System.Void Entitas.IEntity::add_OnComponentAdded(Entitas.EntityComponentChanged)
// 0x00000142 System.Void Entitas.IEntity::remove_OnComponentAdded(Entitas.EntityComponentChanged)
// 0x00000143 System.Void Entitas.IEntity::add_OnComponentRemoved(Entitas.EntityComponentChanged)
// 0x00000144 System.Void Entitas.IEntity::remove_OnComponentRemoved(Entitas.EntityComponentChanged)
// 0x00000145 System.Void Entitas.IEntity::add_OnComponentReplaced(Entitas.EntityComponentReplaced)
// 0x00000146 System.Void Entitas.IEntity::remove_OnComponentReplaced(Entitas.EntityComponentReplaced)
// 0x00000147 System.Void Entitas.IEntity::add_OnEntityReleased(Entitas.EntityEvent)
// 0x00000148 System.Void Entitas.IEntity::remove_OnEntityReleased(Entitas.EntityEvent)
// 0x00000149 System.Void Entitas.IEntity::add_OnDestroyEntity(Entitas.EntityEvent)
// 0x0000014A System.Void Entitas.IEntity::remove_OnDestroyEntity(Entitas.EntityEvent)
// 0x0000014B System.Int32 Entitas.IEntity::get_totalComponents()
// 0x0000014C System.Int32 Entitas.IEntity::get_creationIndex()
// 0x0000014D System.Boolean Entitas.IEntity::get_isEnabled()
// 0x0000014E System.Collections.Generic.Stack`1<Entitas.IComponent>[] Entitas.IEntity::get_componentPools()
// 0x0000014F Entitas.ContextInfo Entitas.IEntity::get_contextInfo()
// 0x00000150 Entitas.IAERC Entitas.IEntity::get_aerc()
// 0x00000151 System.Void Entitas.IEntity::Initialize(System.Int32,System.Int32,System.Collections.Generic.Stack`1<Entitas.IComponent>[],Entitas.ContextInfo,Entitas.IAERC)
// 0x00000152 System.Void Entitas.IEntity::Reactivate(System.Int32)
// 0x00000153 System.Void Entitas.IEntity::AddComponent(System.Int32,Entitas.IComponent)
// 0x00000154 System.Void Entitas.IEntity::RemoveComponent(System.Int32)
// 0x00000155 System.Void Entitas.IEntity::ReplaceComponent(System.Int32,Entitas.IComponent)
// 0x00000156 Entitas.IComponent Entitas.IEntity::GetComponent(System.Int32)
// 0x00000157 Entitas.IComponent[] Entitas.IEntity::GetComponents()
// 0x00000158 System.Int32[] Entitas.IEntity::GetComponentIndices()
// 0x00000159 System.Boolean Entitas.IEntity::HasComponent(System.Int32)
// 0x0000015A System.Boolean Entitas.IEntity::HasComponents(System.Int32[])
// 0x0000015B System.Boolean Entitas.IEntity::HasAnyComponent(System.Int32[])
// 0x0000015C System.Void Entitas.IEntity::RemoveAllComponents()
// 0x0000015D System.Collections.Generic.Stack`1<Entitas.IComponent> Entitas.IEntity::GetComponentPool(System.Int32)
// 0x0000015E Entitas.IComponent Entitas.IEntity::CreateComponent(System.Int32,System.Type)
// 0x0000015F T Entitas.IEntity::CreateComponent(System.Int32)
// 0x00000160 System.Void Entitas.IEntity::Destroy()
// 0x00000161 System.Void Entitas.IEntity::InternalDestroy()
// 0x00000162 System.Void Entitas.IEntity::RemoveAllOnEntityReleasedHandlers()
// 0x00000163 System.String Entitas.IEntityIndex::get_name()
// 0x00000164 System.Void Entitas.IEntityIndex::Activate()
// 0x00000165 System.Void Entitas.IEntityIndex::Deactivate()
// 0x00000166 System.Void Entitas.GroupChanged`1::.ctor(System.Object,System.IntPtr)
// 0x00000167 System.Void Entitas.GroupChanged`1::Invoke(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent)
// 0x00000168 System.IAsyncResult Entitas.GroupChanged`1::BeginInvoke(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent,System.AsyncCallback,System.Object)
// 0x00000169 System.Void Entitas.GroupChanged`1::EndInvoke(System.IAsyncResult)
// 0x0000016A System.Void Entitas.GroupUpdated`1::.ctor(System.Object,System.IntPtr)
// 0x0000016B System.Void Entitas.GroupUpdated`1::Invoke(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
// 0x0000016C System.IAsyncResult Entitas.GroupUpdated`1::BeginInvoke(Entitas.IGroup`1<TEntity>,TEntity,System.Int32,Entitas.IComponent,Entitas.IComponent,System.AsyncCallback,System.Object)
// 0x0000016D System.Void Entitas.GroupUpdated`1::EndInvoke(System.IAsyncResult)
// 0x0000016E System.Int32 Entitas.IGroup::get_count()
// 0x0000016F System.Void Entitas.IGroup::RemoveAllEventHandlers()
// 0x00000170 System.Void Entitas.IGroup`1::add_OnEntityAdded(Entitas.GroupChanged`1<TEntity>)
// 0x00000171 System.Void Entitas.IGroup`1::remove_OnEntityAdded(Entitas.GroupChanged`1<TEntity>)
// 0x00000172 System.Void Entitas.IGroup`1::add_OnEntityRemoved(Entitas.GroupChanged`1<TEntity>)
// 0x00000173 System.Void Entitas.IGroup`1::remove_OnEntityRemoved(Entitas.GroupChanged`1<TEntity>)
// 0x00000174 System.Void Entitas.IGroup`1::add_OnEntityUpdated(Entitas.GroupUpdated`1<TEntity>)
// 0x00000175 System.Void Entitas.IGroup`1::remove_OnEntityUpdated(Entitas.GroupUpdated`1<TEntity>)
// 0x00000176 Entitas.IMatcher`1<TEntity> Entitas.IGroup`1::get_matcher()
// 0x00000177 System.Void Entitas.IGroup`1::HandleEntitySilently(TEntity)
// 0x00000178 System.Void Entitas.IGroup`1::HandleEntity(TEntity,System.Int32,Entitas.IComponent)
// 0x00000179 Entitas.GroupChanged`1<TEntity> Entitas.IGroup`1::HandleEntity(TEntity)
// 0x0000017A System.Void Entitas.IGroup`1::UpdateEntity(TEntity,System.Int32,Entitas.IComponent,Entitas.IComponent)
// 0x0000017B System.Boolean Entitas.IGroup`1::ContainsEntity(TEntity)
// 0x0000017C TEntity[] Entitas.IGroup`1::GetEntities()
// 0x0000017D System.Collections.Generic.List`1<TEntity> Entitas.IGroup`1::GetEntities(System.Collections.Generic.List`1<TEntity>)
// 0x0000017E TEntity Entitas.IGroup`1::GetSingleEntity()
// 0x0000017F System.Collections.Generic.IEnumerable`1<TEntity> Entitas.IGroup`1::AsEnumerable()
// 0x00000180 System.Collections.Generic.HashSet`1/Enumerator<TEntity> Entitas.IGroup`1::GetEnumerator()
// 0x00000181 System.Void Entitas.ICleanupSystem::Cleanup()
// 0x00000182 System.Void Entitas.IExecuteSystem::Execute()
// 0x00000183 System.Void Entitas.IInitializeSystem::Initialize()
// 0x00000184 System.Void Entitas.IReactiveSystem::Activate()
// 0x00000185 System.Void Entitas.IReactiveSystem::Deactivate()
// 0x00000186 System.Void Entitas.IReactiveSystem::Clear()
// 0x00000187 System.Void Entitas.ITearDownSystem::TearDown()
// 0x00000188 Entitas.IAnyOfMatcher`1<TEntity> Entitas.IAllOfMatcher`1::AnyOf(System.Int32[])
// 0x00000189 Entitas.IAnyOfMatcher`1<TEntity> Entitas.IAllOfMatcher`1::AnyOf(Entitas.IMatcher`1<TEntity>[])
// 0x0000018A Entitas.INoneOfMatcher`1<TEntity> Entitas.IAnyOfMatcher`1::NoneOf(System.Int32[])
// 0x0000018B Entitas.INoneOfMatcher`1<TEntity> Entitas.IAnyOfMatcher`1::NoneOf(Entitas.IMatcher`1<TEntity>[])
// 0x0000018C System.Int32[] Entitas.ICompoundMatcher`1::get_allOfIndices()
// 0x0000018D System.Int32[] Entitas.ICompoundMatcher`1::get_anyOfIndices()
// 0x0000018E System.Int32[] Entitas.ICompoundMatcher`1::get_noneOfIndices()
// 0x0000018F System.Int32[] Entitas.IMatcher`1::get_indices()
// 0x00000190 System.Boolean Entitas.IMatcher`1::Matches(TEntity)
// 0x00000191 System.Void Entitas.TriggerOnEvent`1::.ctor(Entitas.IMatcher`1<TEntity>,Entitas.GroupEvent)
// 0x00000192 Entitas.ICollector`1<TEntity> Entitas.CollectorContextExtension::CreateCollector(Entitas.IContext`1<TEntity>,Entitas.IMatcher`1<TEntity>)
// 0x00000193 Entitas.ICollector`1<TEntity> Entitas.CollectorContextExtension::CreateCollector(Entitas.IContext`1<TEntity>,Entitas.TriggerOnEvent`1<TEntity>[])
// 0x00000194 Entitas.TriggerOnEvent`1<TEntity> Entitas.TriggerOnEventMatcherExtension::Added(Entitas.IMatcher`1<TEntity>)
// 0x00000195 Entitas.TriggerOnEvent`1<TEntity> Entitas.TriggerOnEventMatcherExtension::Removed(Entitas.IMatcher`1<TEntity>)
// 0x00000196 Entitas.TriggerOnEvent`1<TEntity> Entitas.TriggerOnEventMatcherExtension::AddedOrRemoved(Entitas.IMatcher`1<TEntity>)
// 0x00000197 System.Int32 Entitas.ICollector::get_count()
// 0x00000198 System.Void Entitas.ICollector::Activate()
// 0x00000199 System.Void Entitas.ICollector::Deactivate()
// 0x0000019A System.Void Entitas.ICollector::ClearCollectedEntities()
// 0x0000019B System.Collections.Generic.IEnumerable`1<TCast> Entitas.ICollector::GetCollectedEntities()
// 0x0000019C System.Collections.Generic.HashSet`1<TEntity> Entitas.ICollector`1::get_collectedEntities()
// 0x0000019D System.Void Entitas.MultiReactiveSystem`2::.ctor(TContexts)
// 0x0000019E System.Void Entitas.MultiReactiveSystem`2::.ctor(Entitas.ICollector[])
// 0x0000019F Entitas.ICollector[] Entitas.MultiReactiveSystem`2::GetTrigger(TContexts)
// 0x000001A0 System.Boolean Entitas.MultiReactiveSystem`2::Filter(TEntity)
// 0x000001A1 System.Void Entitas.MultiReactiveSystem`2::Execute(System.Collections.Generic.List`1<TEntity>)
// 0x000001A2 System.Void Entitas.MultiReactiveSystem`2::Activate()
// 0x000001A3 System.Void Entitas.MultiReactiveSystem`2::Deactivate()
// 0x000001A4 System.Void Entitas.MultiReactiveSystem`2::Clear()
// 0x000001A5 System.Void Entitas.MultiReactiveSystem`2::Execute()
// 0x000001A6 System.String Entitas.MultiReactiveSystem`2::ToString()
// 0x000001A7 System.Void Entitas.MultiReactiveSystem`2::Finalize()
static Il2CppMethodPointer s_methodPointers[423] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Entity_add_OnComponentAdded_mE3F56CECFFF576AA65574EF1C69C7D8374FAC3DF,
	Entity_remove_OnComponentAdded_mE43B5F627B2CBC16C98F3BA606FCDFA215B563BA,
	Entity_add_OnComponentRemoved_m891ED7F9FDF0C8AD53E2BD5D1B96B5C7476869FF,
	Entity_remove_OnComponentRemoved_m0139CE2520DCF84FE0E417ACE4C597D9688C599D,
	Entity_add_OnComponentReplaced_m22C1ED88258788FDDF8DA204BBFA51B2B72AA909,
	Entity_remove_OnComponentReplaced_mE53D3B8C3F4125CBEEA4818B4F0D8DB1104FCC26,
	Entity_add_OnEntityReleased_mFEFAD438C615A11787BA18D255D2A3C5536D2921,
	Entity_remove_OnEntityReleased_m289F9FD40ACF0B48E9C6D2B2518F1B32284DEC7A,
	Entity_add_OnDestroyEntity_m4C38035BD26E6D9DF3EAEF6CF98DDFC334B77028,
	Entity_remove_OnDestroyEntity_m6702E982BFBD701F66502D23DBAC80FC128CAF5A,
	Entity_get_totalComponents_mCD78FA06E98D931D5E6AAA689358E3327A430A5E,
	Entity_get_creationIndex_m54E102EC17FDA194512DC5718989395B6B3307AE,
	Entity_get_isEnabled_m4833C9952FA87E420C96DED687E8E4679C7639A9,
	Entity_get_componentPools_mDA88FCCFCD956EDDDBCAD6B0C9F3C05F7D74022B,
	Entity_get_contextInfo_mEB2CE38774398D19AE1D65A540D30466F4B4DB41,
	Entity_get_aerc_m3E971E578DE9035CAAE26A96767A752A614FC8B6,
	Entity__ctor_m945FDD0C3C50C2316EC7D64A5BAE085A36E9C752,
	Entity_Initialize_m7DDBCB35837D4B7FA92F84621F689B944F1977B9,
	Entity_createDefaultContextInfo_m0F5FB3A4229BED3A4F9C249997E0D8D3D55CBA3D,
	Entity_Reactivate_m2303F059BF0993EBC6BFEB400DA2E78BA25912CC,
	Entity_AddComponent_m8EB577742A15B2499E87728B721CCC2659F60EC8,
	Entity_RemoveComponent_mFC479EABD6ED87F235F6B3F75AE2DFCF79846413,
	Entity_ReplaceComponent_m753F0DB897BD7A12953E9AE8302662965AFEBC0D,
	Entity_replaceComponent_mC1F12DBE9487C2A98C5CB386DF4BF482C594BB89,
	Entity_GetComponent_m48E5240DCCBD9062C45E22A12BC09565807E7191,
	Entity_GetComponents_mFFEEBD86D8BC111D8148A0F816AF377DCF7CD693,
	Entity_GetComponentIndices_m76AF67018BEB92729FE848A281E44A75DD9ADA51,
	Entity_HasComponent_m97FC1729493A4274D38700A5C7CEB9A063BCDF48,
	Entity_HasComponents_m96BF3D6FB3C811EB8AFFD640C09BF20CC9E4FE5F,
	Entity_HasAnyComponent_m959BC73516E99058FDEFC153D774C9E47152AF5A,
	Entity_RemoveAllComponents_m6D3FEA2B1BCA3EC9FC0550DBCC30A80EB19756DA,
	Entity_GetComponentPool_m7A27D771E1F05FD55B754771D6C118F4E4CC75BA,
	Entity_CreateComponent_mC7D282D4A08331F829DE35BA5408B4BDEDEF3E60,
	NULL,
	Entity_get_retainCount_m676992DE58920B46D96078B2BDF47BF664F58E9C,
	Entity_Retain_m00D0E8E349F8DF30986EC895C1CEA07853FF7449,
	Entity_Release_m3FE7870AF86DEA7F161AB605089BAF088BDE0CBD,
	Entity_Destroy_mD3F6059226F9C43E48A2B8C8A8FB29E331AF6B1D,
	Entity_InternalDestroy_mDB2F678A7ABFCE2E5537941C01927FE83A6472E4,
	Entity_RemoveAllOnEntityReleasedHandlers_m771F18DDF4B6384B39C9E9531E8F0F57F4E91DE4,
	Entity_ToString_m8979549AF5DC8FB6812614BD2C4AB0745CAC61AD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Systems__ctor_m2941125B4EBDC6C6AC31ACF2C1FB69FB417804FF,
	Systems_Add_m4BCFCF1839B433C2F91B7D8E7CA60F8A49683061,
	Systems_Initialize_m7BE3CEA29EAA1865944C69369891753EF966B160,
	Systems_Execute_mFA3AC55E510E9DC064FF80C0950AB01D3A8DDED8,
	Systems_Cleanup_m37CF0DD2E95676A689BCBA97FD4CCAD9935D150B,
	Systems_TearDown_mEA01AEDDC9BF2DC562440D646B47A164AD7E3736,
	Systems_ActivateReactiveSystems_m8CC189427D7FE5CB907A67FBCDCF9F96FDA7F0FC,
	Systems_DeactivateReactiveSystems_mCFF9E5EC8DD87FAF1437FF4314365C73592EFE42,
	Systems_ClearReactiveSystems_m944D8FA4D4324865D74EB78C392994B6170F5830,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ContextDoesNotContainEntityException__ctor_mD9E43A7F7C959235595BD9594ED211BB998B5AFB,
	ContextEntityIndexDoesAlreadyExistException__ctor_mD40BEC1DCB38EF8CC9C808D520F0E002E766DE4E,
	ContextEntityIndexDoesNotExistException__ctor_mFADEA51A77F2AA27EE9F34A0D2F4100B7BAAC757,
	ContextStillHasRetainedEntitiesException__ctor_m003221AFFD676BF8B27BD1189B09CD5A82BA55BC,
	U3CU3Ec__cctor_mE7082999BBD477AF0B65473481B22F077A7CDB54,
	U3CU3Ec__ctor_m1F2AC3C6282B5951095AB3E31532337B2D7FFB71,
	U3CU3Ec_U3C_ctorU3Eb__0_0_mD5F3D32E3A52CE0DC6BFAC18D2F879A3361DCA51,
	U3CU3Ec_U3C_ctorU3Eb__0_1_m401C5F4998086D5DA7D94602BDB16CAA837A6EB8,
	EntityIsNotDestroyedException__ctor_mCA521C10DFE315016BFD23366CF0D93FB059CDAE,
	ContextInfoException__ctor_m032988BE9BE5523E81414A9AC35CD54C2BAF4168,
	NULL,
	NULL,
	NULL,
	NULL,
	EntityAlreadyHasComponentException__ctor_mBA4E32B23CDDF8515EB6BC6A2CA509FB95C5B790,
	EntityDoesNotHaveComponentException__ctor_m79427698C1E92941BFFF19395ED18922D56941BB,
	EntityIsAlreadyRetainedByOwnerException__ctor_m02B6DD1E20F09F4F4A1571B591B4075F41BC746E,
	EntityIsNotEnabledException__ctor_m252F304FAE1EFD9D9674291D35E2D650648FDE08,
	EntityIsNotRetainedByOwnerException__ctor_m2DCE0D9B0197B5C86B7A2038AFF8B06581976727,
	NULL,
	NULL,
	NULL,
	NULL,
	EntityIndexException__ctor_m1265A9363D62300CF73043A526A06B2755D8815D,
	MatcherException__ctor_m191E462E239DCD65CFE3B8397A5239735A46B488,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CollectorException__ctor_m697D555590A484D9A2F36B8C35353436ADA2768F,
	EntitasResources_GetVersion_mE876F548E4BC50AEC9D0B4BADE0125A5A34F5005,
	CollectionExtension_SingleEntity_m47A29F143D40F8EC1A538C0AC8474B6652E4F786,
	NULL,
	SingleEntityException__ctor_m4A81150F6003B9F03E3A073B980C5539F2BDB502,
	PublicMemberInfoEntityExtension_CopyTo_mC64FE334472D65E763F6C43E6D8585A3858AAC4F,
	EntitasStringExtension_AddContextSuffix_mF681092AFCD668D4946B72BDEAA954AAA78A7220,
	EntitasStringExtension_RemoveContextSuffix_m3B20CA46083CD14BA6E848AAE25EBF292467EB0F,
	EntitasStringExtension_HasContextSuffix_m1D4BBD10E4DDFEB4CC7E016562A17E6EBB92348B,
	EntitasStringExtension_AddEntitySuffix_mA50D034321C5CF02FF18F3A6BA1AB324FD7702A4,
	EntitasStringExtension_RemoveEntitySuffix_mF0002FBB91448B806EAC651941825D31AB4D1F94,
	EntitasStringExtension_HasEntitySuffix_m785BD1AC84BAB61E60B06C098C16217C937782AF,
	EntitasStringExtension_AddComponentSuffix_mE2636EA75A434E0C108E8BEF73F5729213307165,
	EntitasStringExtension_RemoveComponentSuffix_m1C5F9623144E1ACF874970B3E1921B38D05F0AB4,
	EntitasStringExtension_HasComponentSuffix_mCF23BDA6180B327CCF0050DDE8E05938703D2097,
	EntitasStringExtension_AddSystemSuffix_mEE40CE5F09E953DFEE223B753A7043F042B7261B,
	EntitasStringExtension_RemoveSystemSuffix_m51DB3959E426F92557370DB0E4D9FCF3AC0FF287,
	EntitasStringExtension_HasSystemSuffix_mC91DBB1D382FC656E19583448ECF6B6D67004E1C,
	EntitasStringExtension_AddMatcherSuffix_m0EA35C1BFF1854DCB056AF75B3DEE38100C8C428,
	EntitasStringExtension_RemoveMatcherSuffix_mA1532ACB7F7EC2DA5B8BF78AD6801EF7B80D66BD,
	EntitasStringExtension_HasMatcherSuffix_m188030E94E1F834A3ECCD61CA1CD283027D1A0F6,
	EntitasStringExtension_AddListenerSuffix_m9A25E777D9C1F40B31AEF392B385B29C0254BA7C,
	EntitasStringExtension_RemoveListenerSuffix_mC24B4AA52080D20CC0BB79DEB8CFC5BD2CA93E40,
	EntitasStringExtension_HasListenerSuffix_m38538E8DE8BF8DAA59C7B1FC68BB4C7228A272B3,
	EntitasStringExtension_addSuffix_m7E05902931F90E5D2478FEEE1530BC8CB676C4B4,
	EntitasStringExtension_removeSuffix_mC6927E616894928D2CE9D10493CB637BA521ED33,
	EntitasStringExtension_hasSuffix_m1AE9A8C8D5801652D818D6F1A031AC31096BD6D3,
	UnsafeAERC_get_retainCount_m4FB2DAF72CC78BDCB3798ECEC1C41209912554A1,
	UnsafeAERC_Retain_mF9274634CE1859165B7850CE7664EE9229EEB9B9,
	UnsafeAERC_Release_m294300937C308CC833E6691AB069195318810B7F,
	UnsafeAERC__ctor_m4A8C0C254335509A68C6A6E40F425482914AF4DC,
	SafeAERC_get_retainCount_m68B5B5B0D483E39BE3C5002C569621A44BB98DF4,
	SafeAERC_get_owners_m1AB169D663164AA81CD105D5507E4F10EF283252,
	SafeAERC__ctor_mC581C185C97CE4CF301AE39B0D2E26B5142FDEB4,
	SafeAERC_Retain_mBE0924B7AC1821EA3C6F266EFFFE02CE4B5583D6,
	SafeAERC_Release_m68ECDB31C850E8A2DB6BB6A097AD2EC02333D4B5,
	ContextInfo__ctor_mA5B146303B6AB8161E318A1F5866CE5D8804BEF0,
	EntitasException__ctor_mE2E152AD2BDD2D60BA7D31980081F7FC5EC73E7E,
	ContextEntityChanged__ctor_mE9220FC1EAC9839BF4549817DC8FC7F69CA8D1AF,
	ContextEntityChanged_Invoke_m811DE4E693BA1DC673FB3D7D5B70FCFD1A2226C2,
	ContextEntityChanged_BeginInvoke_m53691AB502728FEAEAC3FB79D05C7CA89E801BF5,
	ContextEntityChanged_EndInvoke_mA0A47560371263740D9866189E716B601716A5AF,
	ContextGroupChanged__ctor_mDC739D99C53E6F24F91C71116E46C6132078DD66,
	ContextGroupChanged_Invoke_m3213A08CDC92412376663946496F808CB7FB4742,
	ContextGroupChanged_BeginInvoke_m65C81A5646CC0237316B77A8D5A1E857FE323FDC,
	ContextGroupChanged_EndInvoke_mB88AC0717B226314119C977E0658E534E2EFAE8F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EntityComponentChanged__ctor_m5683171ECE6AD229A8A2E39263D94D95A726FF7C,
	EntityComponentChanged_Invoke_m5E851582F004CB7FF354B016D40721FBFAE7FC14,
	EntityComponentChanged_BeginInvoke_m73EFD66695CCC009CC69A55598FE477FDA8D0C70,
	EntityComponentChanged_EndInvoke_mDA49E34A357C438EFD80FC685B7A395624F546C7,
	EntityComponentReplaced__ctor_mAEDEA94CF108818A39027B490EDCEC4FF756E028,
	EntityComponentReplaced_Invoke_m3579EB4DC908AEA8BCE78815E7D550A20D635F70,
	EntityComponentReplaced_BeginInvoke_m635D00DF6538EA9416D4691BEC51FED1968F970D,
	EntityComponentReplaced_EndInvoke_mCC1BA3BF183A92A4B3CF31AAB605D2C2BC44684A,
	EntityEvent__ctor_mB962D865660CA65D5666F56D010725CDAE8E163E,
	EntityEvent_Invoke_mE21E2A5329B7E1CA0100DB77E0DD4D8BC6F7A234,
	EntityEvent_BeginInvoke_m110FADC053D453EC8B4B818EDE8946DB21272758,
	EntityEvent_EndInvoke_mB148D9CC9DC5CBA247B21D012F09065B00E2EDE8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[423] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3177,
	3177,
	3177,
	3177,
	3177,
	3177,
	3177,
	3177,
	3177,
	3177,
	3772,
	3772,
	3823,
	3792,
	3792,
	3792,
	3886,
	318,
	3792,
	3160,
	1603,
	3160,
	1603,
	1603,
	2399,
	3792,
	3792,
	2675,
	2695,
	2695,
	3886,
	2399,
	1165,
	0,
	3772,
	3177,
	3177,
	3886,
	3886,
	3886,
	3792,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3886,
	2401,
	3886,
	3886,
	3886,
	3886,
	3886,
	3886,
	3886,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1735,
	1735,
	1735,
	1735,
	5659,
	3886,
	2401,
	2401,
	3177,
	1735,
	0,
	0,
	0,
	0,
	895,
	895,
	1735,
	3177,
	1735,
	0,
	0,
	0,
	0,
	1735,
	3160,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1735,
	5635,
	5440,
	0,
	3160,
	4524,
	5440,
	5440,
	5476,
	5440,
	5440,
	5476,
	5440,
	5440,
	5476,
	5440,
	5440,
	5476,
	5440,
	5440,
	5476,
	5440,
	5440,
	5476,
	5000,
	5000,
	5104,
	3772,
	3177,
	3177,
	3886,
	3772,
	3792,
	3177,
	3177,
	3177,
	936,
	1735,
	1733,
	1735,
	541,
	3177,
	1733,
	1735,
	541,
	3177,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1733,
	921,
	286,
	3177,
	1733,
	647,
	136,
	3177,
	1733,
	3177,
	744,
	3177,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[25] = 
{
	{ 0x02000002, { 0, 24 } },
	{ 0x02000003, { 24, 32 } },
	{ 0x02000004, { 56, 24 } },
	{ 0x02000005, { 80, 24 } },
	{ 0x02000007, { 106, 30 } },
	{ 0x02000008, { 136, 65 } },
	{ 0x02000009, { 201, 6 } },
	{ 0x0200000A, { 207, 10 } },
	{ 0x0200000D, { 217, 20 } },
	{ 0x02000018, { 246, 4 } },
	{ 0x0200001E, { 250, 7 } },
	{ 0x0200001F, { 257, 4 } },
	{ 0x02000022, { 261, 25 } },
	{ 0x0200004D, { 305, 22 } },
	{ 0x0600005F, { 104, 2 } },
	{ 0x060000C2, { 237, 4 } },
	{ 0x060000C3, { 241, 3 } },
	{ 0x060000C4, { 244, 2 } },
	{ 0x060000E4, { 286, 1 } },
	{ 0x060000EC, { 287, 3 } },
	{ 0x06000192, { 290, 4 } },
	{ 0x06000193, { 294, 5 } },
	{ 0x06000194, { 299, 2 } },
	{ 0x06000195, { 301, 2 } },
	{ 0x06000196, { 303, 2 } },
};
extern const uint32_t g_rgctx_Matcher_1_mergeIndices_mD693162C36C6C4D07979BE28962C0A512DD095DF;
extern const uint32_t g_rgctx_Matcher_1_t80F588075134563B12B341DC80020874B1193051;
extern const uint32_t g_rgctx_Matcher_1_distinctIndices_m25931E06CC3F21A15972DA6E98223E3761B53E0A;
extern const uint32_t g_rgctx_Matcher_1_mergeIndices_m6BD3901580590EC8319D420BAE6A46DC1BB6961F;
extern const uint32_t g_rgctx_IAllOfMatcher_1_tB98D08552415C852A927A19F9058C1FE7B1771A4;
extern const uint32_t g_rgctx_IAllOfMatcher_1_AnyOf_m36BDA188255DC3CAFAE8981A8A562C0D198613C2;
extern const uint32_t g_rgctx_Matcher_1_NoneOf_mB91E82F680B42A23C4A416147079052095E261D5;
extern const uint32_t g_rgctx_TEntity_t33DCC007E4609FA35E0DB1E49E3CE51F026F9870;
extern const uint32_t g_rgctx_Matcher_1_get_componentNames_m924BB12B7855CAB92CD5F29EBAD505D3093BEDAF;
extern const uint32_t g_rgctx_Matcher_1_appendIndices_m3C50E98C812B7E9C0D2AD0F1588921C1F19182AC;
extern const uint32_t g_rgctx_Matcher_1_t80F588075134563B12B341DC80020874B1193051;
extern const uint32_t g_rgctx_Matcher_1_get_allOfIndices_m4D4D8F9DE8048E63331BB9DDCB567E793366FC7C;
extern const uint32_t g_rgctx_Matcher_1_equalIndices_mF6C260A55DF193112D5AFE7CF22BBD4E3B971BC3;
extern const uint32_t g_rgctx_Matcher_1_get_anyOfIndices_m6D425FF4CFEECCDD709DCD24DFA7155ACEEBAA0F;
extern const uint32_t g_rgctx_Matcher_1_get_noneOfIndices_m1AE060B9A0144A91D224D40A22042868A7214939;
extern const uint32_t g_rgctx_Matcher_1_applyHash_mE9EB54BAEC66C6C38ED99F9DADBDEA3E33E7C45E;
extern const uint32_t g_rgctx_Matcher_1__ctor_m13AF4FFC85EFDAF22B1D58858A7B7FA397ECDCE8;
extern const uint32_t g_rgctx_Matcher_1_AllOf_m98977D011ECC7D733F686C15678AF5EDA6D8B83C;
extern const uint32_t g_rgctx_Matcher_1_setComponentNames_mCA6DE37B7C897D5CEDB49462F8AEE43027CFA74A;
extern const uint32_t g_rgctx_Matcher_1_AnyOf_mF04DBB74E3B92A5A4026EE94D21379858A9AA0E4;
extern const uint32_t g_rgctx_IMatcher_1_tFA8A9AAF6C8C683D873028666C2DDDB9F51E3D7F;
extern const uint32_t g_rgctx_IMatcher_1_get_indices_m5F7682AE3E92AB1BD4C6AB3015277665A75E4467;
extern const uint32_t g_rgctx_Matcher_1_getComponentNames_mCA2E523CF115E905B472C1392629CC53F0BD49A8;
extern const uint32_t g_rgctx_Matcher_1_set_componentNames_m660CD4F7E858FD6E1E9A86105530B1B589FF05DC;
extern const uint32_t g_rgctx_AbstractEntityIndex_2__ctor_m93E39353574CEA4FC62BDB8B7818466B41503905;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_t7ECE3A4578C00C58272C552C38CE1DED3EC5481A;
extern const uint32_t g_rgctx_Dictionary_2_tD7AC7B31549EA23BD40891E6CB14F2FFBA503BB1;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m6356493CC0A0A366CE50B5A4A5435EFEC397D433;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_t7ECE3A4578C00C58272C552C38CE1DED3EC5481A;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_Activate_m9A20205842413C45E3FE3A943D72642F08FBFEF8;
extern const uint32_t g_rgctx_AbstractEntityIndex_2__ctor_mFAF62E022632917D2D604ED636F8F0CB70768F3C;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m4CC06F93BAE3738D819C00C1590D0A70EEEECD2E;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_indexEntities_mF89C2044798BA38616CE4FF3642DF10DED746797;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_mE5712364D4D547F4496A1B946685BC322457C791;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_t185D412F92F54E7B9A0089B5C69C82A7455CB602;
extern const uint32_t g_rgctx_HashSet_1_t0FDDE65618E1E9459AF56552EA54510BC595613D;
extern const uint32_t g_rgctx_HashSet_1__ctor_mA71084EF205A6F7F4BA76A25D47A37ACACFCCBC7;
extern const uint32_t g_rgctx_Dictionary_2_Add_mFD1F9A138D5E389C236F7BA3F480E42716B5FE82;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_get_name_m3BA6446CE9FF3309B19DFD927725D14851AB7EAD;
extern const uint32_t g_rgctx_Dictionary_2_get_Values_mB648FB2A0B78DFEF65B133DB93DF24C5872153DA;
extern const uint32_t g_rgctx_ValueCollection_t2B3003A5FADA7A88823B33D1BFE338FFD1A2D882;
extern const uint32_t g_rgctx_ValueCollection_GetEnumerator_m01449B7DA57F8E92FCEBB1076A5EA8234714D429;
extern const uint32_t g_rgctx_Enumerator_get_Current_mEAF30F56211CAC11C59ABD6FB8A59F551E34817F;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_m2839AEC47A261120280E37C4969F495A0C635908;
extern const uint32_t g_rgctx_Enumerator_get_Current_m41D4488337C6AD95D2D55218BE4A2E2E7189765D;
extern const uint32_t g_rgctx_TEntity_tDB046D44A6ED6D4C2A23548C318FBB793C6C0083;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m7986BF109725BD66C6B9EE8AB4C123237DCD63AA;
extern const uint32_t g_rgctx_Enumerator_t420D149923BDB7E5C1248956D7A911060FAA46D8;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t420D149923BDB7E5C1248956D7A911060FAA46D8_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mF23D6882D53C13BF54A6F167B0750FCC92EF4C39;
extern const uint32_t g_rgctx_Enumerator_t0FA0300228EF204A48344B72D4686B34297994D0;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t0FA0300228EF204A48344B72D4686B34297994D0_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Dictionary_2_Clear_m58A7E125FC52D684294188BC6E9EF4C8FF46E5EA;
extern const uint32_t g_rgctx_EntityIndex_2_GetEntities_m6A8BE3CFCFB8F5176CF9C8996119EAAA0245D8C5;
extern const uint32_t g_rgctx_HashSet_1_Add_m5CA9DFF6AD8B46D1146CC50FF55E87A96E288D27;
extern const uint32_t g_rgctx_HashSet_1_Remove_m9C885AC72E39D5363FAA710296424C00A5090126;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_onEntityAdded_mFCA3AADDEFEEC15AFAB84B129E3C4AB10DE79E41;
extern const uint32_t g_rgctx_GroupChanged_1_t97C9084C6E618B6968251CE2EB726BAF25A266FA;
extern const uint32_t g_rgctx_GroupChanged_1__ctor_m81E4F7EF1DDB8CA20E2377A1CBFF2C206A8E9E54;
extern const uint32_t g_rgctx_IGroup_1_tADC3721629647AC582212214F0B9EA5278269922;
extern const uint32_t g_rgctx_IGroup_1_add_OnEntityAdded_mEE18240DD6902845357C7D563BB1248D0E221252;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_onEntityRemoved_mBD12C4212D39D80161D6D4D58FFD4B9FF27E0A6A;
extern const uint32_t g_rgctx_IGroup_1_add_OnEntityRemoved_m475B4F1691072836EF89E0598C61FDCA40690864;
extern const uint32_t g_rgctx_IGroup_1_remove_OnEntityAdded_mCB1BEEC8329DDBB45552D572C868263325868160;
extern const uint32_t g_rgctx_IGroup_1_remove_OnEntityRemoved_m9FE1114943209018E48ED540B7756E583E275CA8;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_t7EA5D6ADA6BDC1A3823B595B6533813DC85ED965;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_clear_m72BD5BB22463CC1AB2CFA1C08F4AB5D5DFDEB919;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_get_name_m8F4CEECAC06BCAE4ACBDDDE3119A40D5E2C40638;
extern const uint32_t g_rgctx_IGroup_1_GetEnumerator_m002092B696208FCE40A793275B6B566E45F03AE4;
extern const uint32_t g_rgctx_Enumerator_get_Current_mD80A91C6529CCE980E88CE9B71744FA8C4761118;
extern const uint32_t g_rgctx_Func_3_t861E7FCCCEA652537E6F61CF49C2B3162DF4DD41;
extern const uint32_t g_rgctx_Func_3_Invoke_m28D4E8A6FD564FF2165AA137FE53339BA63B12B2;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_addEntity_m972C7266991C1031173540AB465CBCDD23780DF6;
extern const uint32_t g_rgctx_Func_3_tD8B2C2049E219EDEF237EB022C2651B8AB5FE4B1;
extern const uint32_t g_rgctx_Func_3_Invoke_m56607F90D980B92DDDFC4A0574BB6C723938783A;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m6DAB6C78348EF25BE3CBFF81F08181BD3C10D326;
extern const uint32_t g_rgctx_Enumerator_tC36B4CADEFC7E0E386DF347E8E34EA3DF1BD1800;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tC36B4CADEFC7E0E386DF347E8E34EA3DF1BD1800_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_removeEntity_m0E66B4A2938BB9C0565C2AAA0307F00CAD4533F4;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_Deactivate_m6FEFBFA2E855307FE57CA7723C0D3DC433652542;
extern const uint32_t g_rgctx_AbstractEntityIndex_2__ctor_m2CEC45CCEB580EF950B342FE6EA1FA81E40F0B11;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_tBDF6256C185C4A0DFB70FCCFCC51389D5FA9F781;
extern const uint32_t g_rgctx_Dictionary_2_tC8CDB88394C85BF57FFC037BCC211B4217186F75;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mBC55674CE61580360F9CEA3F15221D8D7A4117F8;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_tBDF6256C185C4A0DFB70FCCFCC51389D5FA9F781;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_Activate_m48C93F69A02C4D1009098F7F3CAD8023D8EE0E7E;
extern const uint32_t g_rgctx_AbstractEntityIndex_2__ctor_m405ED93768E362FA2AEAA4F4EB5C03D2ABF9F404;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m98C2589FFD7733E09B1011851EC75E4337CED137;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_indexEntities_m4E36A6601523242D07E4D143C65CE95989890ED0;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_m6443AFE3CB9C491258518A91B87AB6D5BD257347;
extern const uint32_t g_rgctx_AbstractEntityIndex_2_get_name_mA395D86F54E72D903E41D1827F87EC5A20804217;
extern const uint32_t g_rgctx_Dictionary_2_get_Values_m5671969549DEAA5EF9F6D34B329A665D5651E5E5;
extern const uint32_t g_rgctx_ValueCollection_t1B2CA14EB2B4A49C61499EAC81C8F0261A638D61;
extern const uint32_t g_rgctx_ValueCollection_GetEnumerator_m82C261E964AD338D3943BDFDF27C0A309B358F61;
extern const uint32_t g_rgctx_Enumerator_get_Current_m45A01A8FD7A562D1ECF76149D25DE096C930AEF8;
extern const uint32_t g_rgctx_TEntity_t39A17F5A9AA8F4904DC5D4A1FC99928193AF25AF;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m34DBB749A6BF79777270D276D27EE4076118A09F;
extern const uint32_t g_rgctx_Enumerator_t898ABBD8638331F222C8C5EAC80A16DB1EE85007;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t898ABBD8638331F222C8C5EAC80A16DB1EE85007_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Dictionary_2_Clear_mDE863D155421E872D8515F8D215732623968E674;
extern const uint32_t g_rgctx_Dictionary_2_ContainsKey_mF63AEDDF28AD74EA206028845E2837C27C47D1F6;
extern const uint32_t g_rgctx_TKey_tA20711CD12D8E99AF6F39DEFDF435657F7984124;
extern const uint32_t g_rgctx_Dictionary_2_Add_m4C37F465E0799A2515ECFB9591B3438A124AABA3;
extern const uint32_t g_rgctx_Dictionary_2_Remove_m92E18959793FC3B7CBC74BD83125BEBAFEF884F3;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_tF95E0D63D5A3EBD15D6283DA37FA61F00DCD2E2D_mB4C76D93360EE1838805451F7CDA39F532B034E8;
extern const uint32_t g_rgctx_T_tF95E0D63D5A3EBD15D6283DA37FA61F00DCD2E2D;
extern const uint32_t g_rgctx_GroupChanged_1_t8DFAAB7A33A7027410CF423F170D7884D6BAD517;
extern const uint32_t g_rgctx_GroupUpdated_1_t5FE8D4C6D830816CB0E5B0C05375FA15D847C2A0;
extern const uint32_t g_rgctx_HashSet_1_tDBD2EE7A4E9FA38D4B3EB752385170407DE6EB2C;
extern const uint32_t g_rgctx_HashSet_1_get_Count_mE8DF22064216BBB6F7A859D4BDB795BACF20783A;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_t72F12B0AA93256503063FF2EAE51655A69CC801A;
extern const uint32_t g_rgctx_HashSet_1__ctor_m35D2568A21538C455417A0B66B1317689003EB99;
extern const uint32_t g_rgctx_IMatcher_1_t8CB732FB5B4277540A41D3E8087A04D544214242;
extern const uint32_t g_rgctx_IMatcher_1_Matches_m9D4F8883F87548376BF5A5FB4F8559269BD1D0F5;
extern const uint32_t g_rgctx_Group_1_addEntitySilently_mDFBA5B4A61D4560D9E3BEB0DB4827101E3371BB8;
extern const uint32_t g_rgctx_Group_1_removeEntitySilently_mBF6C7DC19182D9FEB556432ED0E3CC8480894C21;
extern const uint32_t g_rgctx_Group_1_addEntity_m091DBFA7A731111D9C6929887B916B702F47D608;
extern const uint32_t g_rgctx_Group_1_removeEntity_mF0C1B4B7B1B0C609E119C410752BAA81BD4BFFB5;
extern const uint32_t g_rgctx_HashSet_1_Contains_m684A0EA3C2223567AF908AB6452537D9183B728C;
extern const uint32_t g_rgctx_GroupChanged_1_Invoke_m709439EBBEFE63BB5584C5C6E499EC46B7D12B11;
extern const uint32_t g_rgctx_GroupUpdated_1_Invoke_m1501C7DC98CAA5DA4BD21059D24C64F72A2D230B;
extern const uint32_t g_rgctx_TEntity_t15AEC9FEF061C96AA7F02522F8DC21FF1D6EB75E;
extern const uint32_t g_rgctx_HashSet_1_Add_m6C9374FDCAEDAAE5CBE5A3996C9A31D6F18CCEED;
extern const uint32_t g_rgctx_HashSet_1_Remove_m47910300765E8DB040A4BA3F56DE6AE160CA16E6;
extern const uint32_t g_rgctx_TEntityU5BU5D_t7BCB017E5E88DD4936C76C5F9089003BD02A20AE;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m4646DF4F79D36D6A171B14DAFBEFBEA965ACD692;
extern const uint32_t g_rgctx_List_1_t41996C71D62B21CEBE04AAFBFEB7B1A01FB10667;
extern const uint32_t g_rgctx_List_1_Clear_mA726BB4F61A214D53AA772FA74385B3B73582868;
extern const uint32_t g_rgctx_List_1_AddRange_m0B46987CAFB40651FA2B015409739C7A841D7D15;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_mC21910B2DD1745151732008ED96AA524519E776E;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mCE398C902BB5C65E269310015A2BBE639F77350C;
extern const uint32_t g_rgctx_Enumerator_get_Current_m2C794597811B685D7F5AF0FEA1ADB77DAEACCD04;
extern const uint32_t g_rgctx_Enumerator_t0B37828256FB74A662A740855CA169612145FF81;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t0B37828256FB74A662A740855CA169612145FF81_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_GroupSingleEntityException_1_tDE5BC2CA288A05AEA3E75436A43EEFE2578230BD;
extern const uint32_t g_rgctx_GroupSingleEntityException_1__ctor_mD859370022C54E6C7FA8F562B648B993BFF5B00B;
extern const uint32_t g_rgctx_HashSet_1_t00F98C9731F7057BD89D08A6A23AA4330CAB0DF4;
extern const uint32_t g_rgctx_HashSet_1_get_Count_m743C8F3735AEEA1E62D07ADAB06411F7CEB01DBA;
extern const uint32_t g_rgctx_Stack_1_t8B36FBB39D737DD821F4F0992574A60575B70A28;
extern const uint32_t g_rgctx_Stack_1_get_Count_mD79DBD704C56838AB8FA927283480E69812ED097;
extern const uint32_t g_rgctx_Context_1__ctor_mCCE617AA03A92C44A1142087CB479ECAFE64A755;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_t7756495E52CA22CF50094A8D16DE73CD684DF326;
extern const uint32_t g_rgctx_HashSet_1__ctor_m6EEAF3CD22277D3E50781D7470BEB35A43A2FFD3;
extern const uint32_t g_rgctx_Stack_1__ctor_m479C7C49EE26913B85E198B4C8BB243980B25DBB;
extern const uint32_t g_rgctx_Dictionary_2_tC868504C8747D286B44A1C190952D38192E77AFB;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m309710B640407900268689C91A5ECE473AAD4C51;
extern const uint32_t g_rgctx_Context_1_createDefaultContextInfo_mEE31534BE34FDF96C855BF38AC0FBDD38BCEDC52;
extern const uint32_t g_rgctx_U3CU3Ec_tE8E0F51AE4C29F07C550F20599A065A188461FE7;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_0_mA3B69F7B29A5D972D9F59D48B6A30048A3AEDD6E;
extern const uint32_t g_rgctx_List_1U5BU5D_t078E5A2FF88ADFBDD74396461CBECCF7B5DC96E2;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_1_mBDC9CA6EC4239B78AD6488F61C1DB3129A56B848;
extern const uint32_t g_rgctx_Func_1_t414CBB0E891C68F85584623ECBB11D81661E07BD;
extern const uint32_t g_rgctx_Func_1__ctor_m1AA5C8F4A4457BB0F19FFFF3FC234FF34A215E52;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_2_mCA9896195845A32CCF3E881709D342C7DA0A9DC0;
extern const uint32_t g_rgctx_Action_1_t5FE2BA9C1246EC232E8C64D813024826FF2A86FE;
extern const uint32_t g_rgctx_Action_1__ctor_m77A0EA994F5024DEEB044FBB7C70DA8C6E59E701;
extern const uint32_t g_rgctx_ObjectPool_1_t77241DA234B281A0DA33533A2C0D092BA83490C9;
extern const uint32_t g_rgctx_ObjectPool_1__ctor_m70220585E600025221741F3EB83555751E29AB50;
extern const uint32_t g_rgctx_Context_1_updateGroupsComponentAddedOrRemoved_m12346D7A0593EC08BEE9A151541AEF0FF440D732;
extern const uint32_t g_rgctx_Context_1_updateGroupsComponentReplaced_m5A3B751F8640380134D54EC7E668DA82DF27F2FC;
extern const uint32_t g_rgctx_Context_1_onEntityReleased_mEABB3D2BB63D6738A25B2A4086671CC5BA39C146;
extern const uint32_t g_rgctx_Context_1_onDestroyEntity_mB4EEA4B5C4A2ECFB91377151917324E582EFF7BD;
extern const uint32_t g_rgctx_Stack_1_Pop_mB060E753D90F537043D915EA87A8FBE3761AB38F;
extern const uint32_t g_rgctx_TEntity_tB4361CA270EEBDAD4ED5DFE9D6727F7D9B789B3E;
extern const uint32_t g_rgctx_Func_1_t30ABFBA1F989C289F745811981637AFE2C9D6C50;
extern const uint32_t g_rgctx_Func_1_Invoke_m5BF35A2AA7C0BE6C87470384ADDAA77C514F161E;
extern const uint32_t g_rgctx_HashSet_1_Add_m328F07453C99D4E2C078F2B69872894EC3ACFD35;
extern const uint32_t g_rgctx_Context_1_GetEntities_m3BCAA9F51E6CC9F67E761310890454546107DEB3;
extern const uint32_t g_rgctx_HashSet_1_Clear_m0583141B1EAEFBE069255B1D5F230CBD05FF1FC7;
extern const uint32_t g_rgctx_Enumerable_ToArray_TisTEntity_tB4361CA270EEBDAD4ED5DFE9D6727F7D9B789B3E_m4A8DA3C50B5E08287BEA16BCA8CC53284A182147;
extern const uint32_t g_rgctx_HashSet_1_Contains_m0EE638BCF5656759569B8C6BA07CB94423B338B7;
extern const uint32_t g_rgctx_TEntityU5BU5D_tBF5915973A666FB7FB923D7AD596F757FC183DBF;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m58A148909A617D4193CC4D26800B197AC2E021A3;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_m723AF823F1EB6C7744EDAE0BFB8D9E99FE86466E;
extern const uint32_t g_rgctx_Group_1_tE1EEDAFDDD19626F16B536BACDD612E548340D43;
extern const uint32_t g_rgctx_Group_1__ctor_m4D10620A0B26D610FA906B48AEB866A1992C2341;
extern const uint32_t g_rgctx_IGroup_1_t8374A1F4553F01370785C9D4C347E874FB66B324;
extern const uint32_t g_rgctx_IGroup_1_HandleEntitySilently_m850DA5889457824A48E2BFF1E36E8C459B2C2A43;
extern const uint32_t g_rgctx_Dictionary_2_Add_mDE9ABF55CFC5675D337AC3373A95B2A0278DF1F6;
extern const uint32_t g_rgctx_IMatcher_1_t5679F9ED9A8E0666299C2E0D7AE6A4D18A7EBC8E;
extern const uint32_t g_rgctx_IMatcher_1_get_indices_m94E02697F29640EE9FF7E6B636BD83E0812A141C;
extern const uint32_t g_rgctx_List_1_t03D948F8B39006FD18AF669F3321BA8289919C5D;
extern const uint32_t g_rgctx_List_1__ctor_m3CF89B90E035CC8EAEC9A28B25A96EB479F36538;
extern const uint32_t g_rgctx_List_1_Add_mCC80F7A281741C52FDDB25232AC571FFE8D07493;
extern const uint32_t g_rgctx_Context_1_ClearComponentPool_m13ED399A32FFAF5783DEB98A4956E068A247DDC4;
extern const uint32_t g_rgctx_Context_1_DestroyAllEntities_m5E4AD0EC34FA7B70E5F24916EB0025A5209573D9;
extern const uint32_t g_rgctx_Context_1_ResetCreationIndex_m99F709A0C9EBF6BCF84072A6E9F79FC9EE0DDE6C;
extern const uint32_t g_rgctx_ObjectPool_1_Get_mDD32E94923AE903811580574F15168B93D496AEC;
extern const uint32_t g_rgctx_List_1_get_Item_mAB96805732BF84E7DD0C72A960BE476FB6548331;
extern const uint32_t g_rgctx_IGroup_1_HandleEntity_m0EAF36DDDBC9DE89E051A5E7CD060B343EF0DF53;
extern const uint32_t g_rgctx_List_1_t9D94DEC7179070D388299009ADD964D1C05D795B;
extern const uint32_t g_rgctx_List_1_Add_mEEABC07EF6BFA376B5919FB626E66B208DF9979E;
extern const uint32_t g_rgctx_List_1_get_Count_m80C3FEC4445B4B7B3C85E494CB230785437E15A0;
extern const uint32_t g_rgctx_List_1_get_Item_m401448A905E42F078B26710F5A88EAB804097AFC;
extern const uint32_t g_rgctx_GroupChanged_1_tFB65E16A7D30037E860FEC86F5925C6573F314E0;
extern const uint32_t g_rgctx_GroupChanged_1_Invoke_mCD58E865D68EE7FCF36FDCCCFC63EB79F53F4650;
extern const uint32_t g_rgctx_List_1_get_Count_mFCD6A77F21A7ADDF54F739B25B40EA501EF7AF0D;
extern const uint32_t g_rgctx_ObjectPool_1_Push_mDBD98A971DF763D0BAA5F9C748C7E15FFFAD1D04;
extern const uint32_t g_rgctx_IGroup_1_UpdateEntity_m540D189B9C9328E2FFFB9C63FE1667C204087C9E;
extern const uint32_t g_rgctx_HashSet_1_Remove_mAD6CD24D0C149EBA134D78556AFBD899B1EDFC4F;
extern const uint32_t g_rgctx_Stack_1_Push_mAF0F45F4BAF8B6046E47A931E9418C6D1AF3FE1F;
extern const uint32_t g_rgctx_U3CU3Ec_t041FF81E5220C5D73B0000FC4E96CEB72AEFE5C6;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_mEB7F90520DA1A475EA0047539DD290BDDAE23ECE;
extern const uint32_t g_rgctx_U3CU3Ec_t041FF81E5220C5D73B0000FC4E96CEB72AEFE5C6;
extern const uint32_t g_rgctx_List_1_t25DC9232AF681813F965004B4E80B14E383A90E1;
extern const uint32_t g_rgctx_List_1__ctor_m7A5373D8DCDDA4C4C8B242A665B4396A00C8B817;
extern const uint32_t g_rgctx_List_1_Clear_m4948DEC797481A651B8E6C6C71EE93C60A9C2003;
extern const uint32_t g_rgctx_Job_1U5BU5D_tF6C05EEBCADCA58D681F4EEF794F5B1978495CAC;
extern const uint32_t g_rgctx_Job_1_tD06B66962AA5D2FF9D19CD2D9B1D78E1CE17C952;
extern const uint32_t g_rgctx_Job_1__ctor_mECB210BD95924A7CC97C48C78028588558B877A8;
extern const uint32_t g_rgctx_JobSystem_1__ctor_mE73E995116A35CB12903DCDB2BD837284AC302A8;
extern const uint32_t g_rgctx_IGroup_1_t8FB640B95A7485660A3217B5A12F87634E226727;
extern const uint32_t g_rgctx_IGroup_1_GetEntities_mB24B9EFFEDECF6A4D39C4BACB0E7BE858542BF6A;
extern const uint32_t g_rgctx_Job_1_Set_mC401436249283C017F7EFD60E562F7BDFDAD2292;
extern const uint32_t g_rgctx_JobSystem_1_queueOnThread_mBC67CFCB82153B33EBC4134F93C2C61A683BC658;
extern const uint32_t g_rgctx_JobSystem_1_t2770E4F97433EE6FF348D07D0E1CC8A861172384;
extern const uint32_t g_rgctx_JobSystem_1_Execute_mAC72F859CE268DEF5E151A1DB438FE582A380BA0;
extern const uint32_t g_rgctx_ReactiveSystem_1_t4B44D6444A3A0A55CF68A136FFAD0D35FD970AAA;
extern const uint32_t g_rgctx_ReactiveSystem_1_GetTrigger_m2EE9D38ED5CD907FB9A4CA72E386770921554E5C;
extern const uint32_t g_rgctx_List_1_tB382DF8957A39082D91BED3AB2FEFB70F8AB7B68;
extern const uint32_t g_rgctx_List_1__ctor_mB07625C729219D1AA06CE8D55D16BCCED24FE206;
extern const uint32_t g_rgctx_ICollector_1_tB59C776C59661049BA30D0D4F152503B109DBBD5;
extern const uint32_t g_rgctx_ICollector_1_get_collectedEntities_m7A1F12B138092B3F3331FBED798020B6E3D170FE;
extern const uint32_t g_rgctx_HashSet_1_tC9558917B453678CC01C8883801D10647ABB975C;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_mF6CC398CEB63E3A6B7E7AAA61B6BF9A04FE73B13;
extern const uint32_t g_rgctx_Enumerator_get_Current_m6303E6106BFF5C2D4FB4FC5BB63B98DF164D646E;
extern const uint32_t g_rgctx_ReactiveSystem_1_Filter_m99158287EF73C7EC5AA822F22D96868CE2732C81;
extern const uint32_t g_rgctx_TEntity_tD87A519B836D8A1C082D429BFB67278AE8D187BD;
extern const uint32_t g_rgctx_List_1_Add_mC55F3847FC271356D79EE48FF5F9B18F66E3E12A;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m99FF756E8401C79D579DA0AE5B4C0FDA84C0D3DC;
extern const uint32_t g_rgctx_Enumerator_t72037999C52862E2788FE8F6CF1875AA054AE6B3;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t72037999C52862E2788FE8F6CF1875AA054AE6B3_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_List_1_get_Count_m0027F0A4FA8F9FFCCA053421DD337CE166B6F003;
extern const uint32_t g_rgctx_ReactiveSystem_1_Execute_m18EFA8A81A05960C6A785AA73761EA959C60A980;
extern const uint32_t g_rgctx_List_1_get_Item_m6DB70CAD96E3EDB46EC49917FDA995F391BB20B4;
extern const uint32_t g_rgctx_List_1_Clear_m1B1241F367E4C7A68BB83F6EBB68E82DC5C7F30E;
extern const uint32_t g_rgctx_ReactiveSystem_1_Deactivate_m5B4C8CB072FF304668904CE543AD64B1A0173AB2;
extern const uint32_t g_rgctx_IContext_1_t3E1231FA5A2303ADB001A6C1B06E81B99241AF54;
extern const uint32_t g_rgctx_IContext_1_GetGroup_m0558B7748D790422F6B3AA3F1C857619D6A2BBEF;
extern const uint32_t g_rgctx_IGroup_1_tE324B66F2AB7FCD843A6651C5967A72084655988;
extern const uint32_t g_rgctx_IGroup_1_GetEntities_m7F43269888FDCB5640017D6F633E1704DD01649D;
extern const uint32_t g_rgctx_IContext_1_tF7E4CD0FECB4D15A7E2DD9493EA0001C59C8AE1E;
extern const uint32_t g_rgctx_IContext_1_CreateEntity_m9B716DA111C2E477566A5A15736D4543CE946216;
extern const uint32_t g_rgctx_TEntity_tA460876D5D6868770A17C11DCDAA8D08E9497AD4;
extern const uint32_t g_rgctx_Collector_1_t22F24922D48DA6285EAA06C88AB543E5016D4A7C;
extern const uint32_t g_rgctx_Collector_1__ctor_m340A22163F6827292AD782EA0B5DE70DC8E5CB94;
extern const uint32_t g_rgctx_TEntity_t5AF209E3AF2116CA93083CAB1B4060FEFCF86461;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_t913843DF39A3DB547EEB93EE073FF33A32835C2B;
extern const uint32_t g_rgctx_EntityEqualityComparer_1__ctor_mFF9489E3B1810E8B2A7E7F390010064C39632BA7;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_t913843DF39A3DB547EEB93EE073FF33A32835C2B;
extern const uint32_t g_rgctx_IGroup_1_tDC5EF77786F4710CB3D5B60B0A01F185D0B28384;
extern const uint32_t g_rgctx_IGroup_1_GetEntities_m437CC5A56B91B5180F8EB2C009DF2F9898DF0B66;
extern const uint32_t g_rgctx_U3CU3Ec_tADE38DE2AFACB671D8ED0B2B746FD8A17D7497AA;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_ctorU3Eb__0_0_m99D47FD052FD232D042472BAC76A6CAC17C0FB91;
extern const uint32_t g_rgctx_Func_2_tED8A316BAFF932C38A7489A1C00D7FE9FB327F7D;
extern const uint32_t g_rgctx_Func_2__ctor_mD8155FF5E49C31A627554B43209E15FF90A118B3;
extern const uint32_t g_rgctx_Enumerable_Select_TisTEntity_t8E2A11D4122C3F3C0D0CC3918262B0ADFAFB8BD8_TisString_t_mFA49818475696ADA8CB80564B7DA3E0ABD0B8023;
extern const uint32_t g_rgctx_U3CU3Ec_tDE06E9BC956154C29FFD7B6EE6E03DB6AA2D6D43;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_mB50C7FBB3F6CE580C820904CAB94211D94B676B6;
extern const uint32_t g_rgctx_U3CU3Ec_tDE06E9BC956154C29FFD7B6EE6E03DB6AA2D6D43;
extern const uint32_t g_rgctx_TEntity_t7A365C4915987629644581148C29493C98F8B7BD;
extern const uint32_t g_rgctx_HashSet_1_t933DAC2DFF834331E1C92A54D4BD46A526D71C8F;
extern const uint32_t g_rgctx_HashSet_1_get_Count_m945DF2C54A6A1704CF6A0F9A25DFEE0EC53799CA;
extern const uint32_t g_rgctx_IGroup_1U5BU5D_tFCD2113F4AC26EA2BC6696A6C6DB4EF514090B69;
extern const uint32_t g_rgctx_Collector_1__ctor_m9655E6447ABCA7EA37C069CFA95FCA07D52FFF53;
extern const uint32_t g_rgctx_EntityEqualityComparer_1_tEB9DB2AB44EC051D157A4C8DB9841092FB10FF53;
extern const uint32_t g_rgctx_HashSet_1__ctor_mA25E9EC019FA8C300C2562162FB591CBB825A253;
extern const uint32_t g_rgctx_Collector_1_addEntity_mADF71D6DCAD45EC568352109C0F5A071C4FA2222;
extern const uint32_t g_rgctx_GroupChanged_1_t8A789724BAEE8117B48FCB9125D4AD44768CFA06;
extern const uint32_t g_rgctx_GroupChanged_1__ctor_m15A02D91C5DC7EC54F2E7B3F3C205C3309C0CA8B;
extern const uint32_t g_rgctx_Collector_1_Activate_m0F79B1516C71E0C6C91E9422D479A4057E045778;
extern const uint32_t g_rgctx_IGroup_1_t958E08842090CE31AAB837F0688DF84DC190E217;
extern const uint32_t g_rgctx_IGroup_1_remove_OnEntityAdded_m6F693419DCF774190BC5CD85C9C20E965D077CD2;
extern const uint32_t g_rgctx_IGroup_1_add_OnEntityAdded_mAFF27C80D19F94E7957BD58F3FF3E81DBAA13FCD;
extern const uint32_t g_rgctx_IGroup_1_remove_OnEntityRemoved_m109D62CEDF6F9FD397533199706B8970F2F3789A;
extern const uint32_t g_rgctx_IGroup_1_add_OnEntityRemoved_m183C8FAE68A882C0BDEA00C10F389FBE99319EAE;
extern const uint32_t g_rgctx_Collector_1_ClearCollectedEntities_m144E4A8F3AFC7F19EB6A485DE9E6AC74D7B6A45A;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_mB97762BC89CA74DDDE44DB5F6D35CE168AE79305;
extern const uint32_t g_rgctx_Enumerator_get_Current_m9524E6CE2A66D88884ADF859CFFA167DC1DB980C;
extern const uint32_t g_rgctx_TEntity_t1B8141A8721A960865D9FE78AD639F7033C3F985;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m3FE8006570C70E594F2D32FA1482FAA84C6C0C6A;
extern const uint32_t g_rgctx_Enumerator_tE2509925855E7B7A7622A9692A232B968C164326;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tE2509925855E7B7A7622A9692A232B968C164326_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_HashSet_1_Clear_m095E3992453C5B86AEE7BB509F18CDFBD51188A8;
extern const uint32_t g_rgctx_HashSet_1_Add_mA51C5FFEE9A58F4CA25B408DF25AE4ACB024AB19;
extern const uint32_t g_rgctx_Collector_1_Deactivate_m8A7A05C92F854780992FBC2E94500125BE2D4A06;
extern const uint32_t g_rgctx_Enumerable_Cast_TisTCast_t8A5A60660641D71BA21E1ABA0C2FAB7489D50D3C_mE6CC29091D537B33F116FDE627244C59CA4D02EF;
extern const uint32_t g_rgctx_ICollection_1_t7578CC137E3CFA920408ABDC3786E54934AA12A8;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m17AC05ED9B490E47BC228119FF5301A830F73868;
extern const uint32_t g_rgctx_Enumerable_First_TisTEntity_t21B1CA66A73B723FB3C91154BB07B5CCE1513985_mF6EB155EF2A88E1D0FBA996212FEE7CFCBF9219A;
extern const uint32_t g_rgctx_TriggerOnEvent_1U5BU5D_tD849A00E93B00B5F1772894781FC86A1E8AED362;
extern const uint32_t g_rgctx_TriggerOnEvent_1_t2E288C51B95F2C403E4C8042E64061515FA1611C;
extern const uint32_t g_rgctx_TriggerOnEvent_1__ctor_m744E1BB7B4F7E709E5B54A42E716B8509D96440E;
extern const uint32_t g_rgctx_CollectorContextExtension_CreateCollector_TisTEntity_t7FF0ECFE6E67A55BA749398FACF60C0521D6F4D3_m866DFEEFDF7AA6FC4D84C2C4B7D223281B9DD6C5;
extern const uint32_t g_rgctx_IGroup_1U5BU5D_t903174A8FBA57F48C81D7BA44A7C11A4FB6D57D2;
extern const uint32_t g_rgctx_IContext_1_t41F431B9E01358CAF318E2B96CA0CC402D7EF0C5;
extern const uint32_t g_rgctx_IContext_1_GetGroup_m8326B741CEFD623350873828E4BCE521137EBAF3;
extern const uint32_t g_rgctx_Collector_1_t9D229555CB453885419F76977F540067C10B1F3A;
extern const uint32_t g_rgctx_Collector_1__ctor_mE7E562A0A057B94886278E01FE4762F38C4BD49B;
extern const uint32_t g_rgctx_TriggerOnEvent_1_tF35C307E3781B2D260D81EF742A411A977E7253D;
extern const uint32_t g_rgctx_TriggerOnEvent_1__ctor_m333AD558AA5D4AF28D1ABF6D1BDD7FAB39434BD1;
extern const uint32_t g_rgctx_TriggerOnEvent_1_tDB1E7F49A7A2C6C3F6D0926CCD2304D0738F0E65;
extern const uint32_t g_rgctx_TriggerOnEvent_1__ctor_mC6DA95D369516BF3597B80A5407BD4524AA3DF68;
extern const uint32_t g_rgctx_TriggerOnEvent_1_t674C3816F34BA26D9EBD281D093A19F1D35817CA;
extern const uint32_t g_rgctx_TriggerOnEvent_1__ctor_m4824E410473B47635A9F2DB6D47FBD7C20D64068;
extern const uint32_t g_rgctx_MultiReactiveSystem_2_t133A2979E8C9500B26C009A3317C827D9B715271;
extern const uint32_t g_rgctx_MultiReactiveSystem_2_GetTrigger_m713ABA4B8C77100305244ADBC41E5AB76A796ADE;
extern const uint32_t g_rgctx_HashSet_1_tC3625A55CEA773DB853DFE6BEBB2FD79C73B8F24;
extern const uint32_t g_rgctx_HashSet_1__ctor_mCBE0CF497C53F58A46D4DAA3177D349D8FD70BAC;
extern const uint32_t g_rgctx_List_1_tCBB9EF528BBE4FE1CF7247661D76A08927DC8385;
extern const uint32_t g_rgctx_List_1__ctor_m02B3A68DAC54E7B6C565BA7E7BAC6E0300284F06;
extern const uint32_t g_rgctx_ICollector_GetCollectedEntities_TisTEntity_tD06D6B5BBFB93598B50F73174002F2EAB9CC189B_mD55E2C5DD1375A6763B8154A5EF00724AB7AEA80;
extern const uint32_t g_rgctx_HashSet_1_UnionWith_m871199F41F4F81DB8B7AE371DC8FB22C9C8C471F;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_mC90DD2C3F57ACFC373E28E83954C2651C953D51A;
extern const uint32_t g_rgctx_Enumerator_get_Current_m87E69B768CFF2A9CC1B1A0ACE8676279ACDC904C;
extern const uint32_t g_rgctx_MultiReactiveSystem_2_Filter_m11CAD5988C9603BA83DD291A24575914E70B25E7;
extern const uint32_t g_rgctx_TEntity_tD06D6B5BBFB93598B50F73174002F2EAB9CC189B;
extern const uint32_t g_rgctx_List_1_Add_mEABF462EBF3B2E6E956BEF904C70E4E0E758E9B4;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mCB6A5E791EB0432BD227FA1D1F69EC9C95B28AF3;
extern const uint32_t g_rgctx_Enumerator_tB2492E4BEA67DE255C71C0568D40E408DD473CC4;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tB2492E4BEA67DE255C71C0568D40E408DD473CC4_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_List_1_get_Count_m71841502D6D719EC853670EB27E0AD450097D808;
extern const uint32_t g_rgctx_MultiReactiveSystem_2_Execute_mBBE7D51304E4EF2DF44321FA08C9E8106CF4C0C0;
extern const uint32_t g_rgctx_List_1_get_Item_m070CDAF4002D9EE8B29E2FD97D4962310EA0241E;
extern const uint32_t g_rgctx_HashSet_1_Clear_m2F184CF371A98FCBF3CD2E1FDCE194F4FEDC30B8;
extern const uint32_t g_rgctx_List_1_Clear_m1F08476CC02DED25E9107E1796E31A778464D874;
extern const uint32_t g_rgctx_MultiReactiveSystem_2_Deactivate_mE4478F014F1D5B27B8FA1D9EC07021135E5F4547;
static const Il2CppRGCTXDefinition s_rgctxValues[327] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_mergeIndices_mD693162C36C6C4D07979BE28962C0A512DD095DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Matcher_1_t80F588075134563B12B341DC80020874B1193051 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_distinctIndices_m25931E06CC3F21A15972DA6E98223E3761B53E0A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_mergeIndices_m6BD3901580590EC8319D420BAE6A46DC1BB6961F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAllOfMatcher_1_tB98D08552415C852A927A19F9058C1FE7B1771A4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAllOfMatcher_1_AnyOf_m36BDA188255DC3CAFAE8981A8A562C0D198613C2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_NoneOf_mB91E82F680B42A23C4A416147079052095E261D5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t33DCC007E4609FA35E0DB1E49E3CE51F026F9870 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_get_componentNames_m924BB12B7855CAB92CD5F29EBAD505D3093BEDAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_appendIndices_m3C50E98C812B7E9C0D2AD0F1588921C1F19182AC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Matcher_1_t80F588075134563B12B341DC80020874B1193051 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_get_allOfIndices_m4D4D8F9DE8048E63331BB9DDCB567E793366FC7C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_equalIndices_mF6C260A55DF193112D5AFE7CF22BBD4E3B971BC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_get_anyOfIndices_m6D425FF4CFEECCDD709DCD24DFA7155ACEEBAA0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_get_noneOfIndices_m1AE060B9A0144A91D224D40A22042868A7214939 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_applyHash_mE9EB54BAEC66C6C38ED99F9DADBDEA3E33E7C45E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1__ctor_m13AF4FFC85EFDAF22B1D58858A7B7FA397ECDCE8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_AllOf_m98977D011ECC7D733F686C15678AF5EDA6D8B83C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_setComponentNames_mCA6DE37B7C897D5CEDB49462F8AEE43027CFA74A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_AnyOf_mF04DBB74E3B92A5A4026EE94D21379858A9AA0E4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IMatcher_1_tFA8A9AAF6C8C683D873028666C2DDDB9F51E3D7F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IMatcher_1_get_indices_m5F7682AE3E92AB1BD4C6AB3015277665A75E4467 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_getComponentNames_mCA2E523CF115E905B472C1392629CC53F0BD49A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Matcher_1_set_componentNames_m660CD4F7E858FD6E1E9A86105530B1B589FF05DC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2__ctor_m93E39353574CEA4FC62BDB8B7818466B41503905 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AbstractEntityIndex_2_t7ECE3A4578C00C58272C552C38CE1DED3EC5481A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tD7AC7B31549EA23BD40891E6CB14F2FFBA503BB1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m6356493CC0A0A366CE50B5A4A5435EFEC397D433 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AbstractEntityIndex_2_t7ECE3A4578C00C58272C552C38CE1DED3EC5481A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_Activate_m9A20205842413C45E3FE3A943D72642F08FBFEF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2__ctor_mFAF62E022632917D2D604ED636F8F0CB70768F3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m4CC06F93BAE3738D819C00C1590D0A70EEEECD2E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_indexEntities_mF89C2044798BA38616CE4FF3642DF10DED746797 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_mE5712364D4D547F4496A1B946685BC322457C791 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_t185D412F92F54E7B9A0089B5C69C82A7455CB602 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t0FDDE65618E1E9459AF56552EA54510BC595613D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_mA71084EF205A6F7F4BA76A25D47A37ACACFCCBC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_mFD1F9A138D5E389C236F7BA3F480E42716B5FE82 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_get_name_m3BA6446CE9FF3309B19DFD927725D14851AB7EAD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_get_Values_mB648FB2A0B78DFEF65B133DB93DF24C5872153DA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ValueCollection_t2B3003A5FADA7A88823B33D1BFE338FFD1A2D882 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ValueCollection_GetEnumerator_m01449B7DA57F8E92FCEBB1076A5EA8234714D429 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mEAF30F56211CAC11C59ABD6FB8A59F551E34817F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_m2839AEC47A261120280E37C4969F495A0C635908 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m41D4488337C6AD95D2D55218BE4A2E2E7189765D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_tDB046D44A6ED6D4C2A23548C318FBB793C6C0083 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m7986BF109725BD66C6B9EE8AB4C123237DCD63AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t420D149923BDB7E5C1248956D7A911060FAA46D8 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t420D149923BDB7E5C1248956D7A911060FAA46D8_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mF23D6882D53C13BF54A6F167B0750FCC92EF4C39 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t0FA0300228EF204A48344B72D4686B34297994D0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t0FA0300228EF204A48344B72D4686B34297994D0_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Clear_m58A7E125FC52D684294188BC6E9EF4C8FF46E5EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EntityIndex_2_GetEntities_m6A8BE3CFCFB8F5176CF9C8996119EAAA0245D8C5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m5CA9DFF6AD8B46D1146CC50FF55E87A96E288D27 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Remove_m9C885AC72E39D5363FAA710296424C00A5090126 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_onEntityAdded_mFCA3AADDEFEEC15AFAB84B129E3C4AB10DE79E41 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupChanged_1_t97C9084C6E618B6968251CE2EB726BAF25A266FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupChanged_1__ctor_m81E4F7EF1DDB8CA20E2377A1CBFF2C206A8E9E54 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_tADC3721629647AC582212214F0B9EA5278269922 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_add_OnEntityAdded_mEE18240DD6902845357C7D563BB1248D0E221252 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_onEntityRemoved_mBD12C4212D39D80161D6D4D58FFD4B9FF27E0A6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_add_OnEntityRemoved_m475B4F1691072836EF89E0598C61FDCA40690864 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_remove_OnEntityAdded_mCB1BEEC8329DDBB45552D572C868263325868160 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_remove_OnEntityRemoved_m9FE1114943209018E48ED540B7756E583E275CA8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AbstractEntityIndex_2_t7EA5D6ADA6BDC1A3823B595B6533813DC85ED965 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_clear_m72BD5BB22463CC1AB2CFA1C08F4AB5D5DFDEB919 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_get_name_m8F4CEECAC06BCAE4ACBDDDE3119A40D5E2C40638 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_GetEnumerator_m002092B696208FCE40A793275B6B566E45F03AE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mD80A91C6529CCE980E88CE9B71744FA8C4761118 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_3_t861E7FCCCEA652537E6F61CF49C2B3162DF4DD41 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_3_Invoke_m28D4E8A6FD564FF2165AA137FE53339BA63B12B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_addEntity_m972C7266991C1031173540AB465CBCDD23780DF6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_3_tD8B2C2049E219EDEF237EB022C2651B8AB5FE4B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_3_Invoke_m56607F90D980B92DDDFC4A0574BB6C723938783A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m6DAB6C78348EF25BE3CBFF81F08181BD3C10D326 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tC36B4CADEFC7E0E386DF347E8E34EA3DF1BD1800 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tC36B4CADEFC7E0E386DF347E8E34EA3DF1BD1800_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_removeEntity_m0E66B4A2938BB9C0565C2AAA0307F00CAD4533F4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_Deactivate_m6FEFBFA2E855307FE57CA7723C0D3DC433652542 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2__ctor_m2CEC45CCEB580EF950B342FE6EA1FA81E40F0B11 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AbstractEntityIndex_2_tBDF6256C185C4A0DFB70FCCFCC51389D5FA9F781 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tC8CDB88394C85BF57FFC037BCC211B4217186F75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mBC55674CE61580360F9CEA3F15221D8D7A4117F8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AbstractEntityIndex_2_tBDF6256C185C4A0DFB70FCCFCC51389D5FA9F781 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_Activate_m48C93F69A02C4D1009098F7F3CAD8023D8EE0E7E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2__ctor_m405ED93768E362FA2AEAA4F4EB5C03D2ABF9F404 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m98C2589FFD7733E09B1011851EC75E4337CED137 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_indexEntities_m4E36A6601523242D07E4D143C65CE95989890ED0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_m6443AFE3CB9C491258518A91B87AB6D5BD257347 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AbstractEntityIndex_2_get_name_mA395D86F54E72D903E41D1827F87EC5A20804217 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_get_Values_m5671969549DEAA5EF9F6D34B329A665D5651E5E5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ValueCollection_t1B2CA14EB2B4A49C61499EAC81C8F0261A638D61 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ValueCollection_GetEnumerator_m82C261E964AD338D3943BDFDF27C0A309B358F61 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m45A01A8FD7A562D1ECF76149D25DE096C930AEF8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t39A17F5A9AA8F4904DC5D4A1FC99928193AF25AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m34DBB749A6BF79777270D276D27EE4076118A09F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t898ABBD8638331F222C8C5EAC80A16DB1EE85007 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t898ABBD8638331F222C8C5EAC80A16DB1EE85007_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Clear_mDE863D155421E872D8515F8D215732623968E674 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_ContainsKey_mF63AEDDF28AD74EA206028845E2837C27C47D1F6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tA20711CD12D8E99AF6F39DEFDF435657F7984124 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m4C37F465E0799A2515ECFB9591B3438A124AABA3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Remove_m92E18959793FC3B7CBC74BD83125BEBAFEF884F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_tF95E0D63D5A3EBD15D6283DA37FA61F00DCD2E2D_mB4C76D93360EE1838805451F7CDA39F532B034E8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF95E0D63D5A3EBD15D6283DA37FA61F00DCD2E2D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupChanged_1_t8DFAAB7A33A7027410CF423F170D7884D6BAD517 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupUpdated_1_t5FE8D4C6D830816CB0E5B0C05375FA15D847C2A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tDBD2EE7A4E9FA38D4B3EB752385170407DE6EB2C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_get_Count_mE8DF22064216BBB6F7A859D4BDB795BACF20783A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_t72F12B0AA93256503063FF2EAE51655A69CC801A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m35D2568A21538C455417A0B66B1317689003EB99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IMatcher_1_t8CB732FB5B4277540A41D3E8087A04D544214242 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IMatcher_1_Matches_m9D4F8883F87548376BF5A5FB4F8559269BD1D0F5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Group_1_addEntitySilently_mDFBA5B4A61D4560D9E3BEB0DB4827101E3371BB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Group_1_removeEntitySilently_mBF6C7DC19182D9FEB556432ED0E3CC8480894C21 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Group_1_addEntity_m091DBFA7A731111D9C6929887B916B702F47D608 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Group_1_removeEntity_mF0C1B4B7B1B0C609E119C410752BAA81BD4BFFB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Contains_m684A0EA3C2223567AF908AB6452537D9183B728C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupChanged_1_Invoke_m709439EBBEFE63BB5584C5C6E499EC46B7D12B11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupUpdated_1_Invoke_m1501C7DC98CAA5DA4BD21059D24C64F72A2D230B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t15AEC9FEF061C96AA7F02522F8DC21FF1D6EB75E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m6C9374FDCAEDAAE5CBE5A3996C9A31D6F18CCEED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Remove_m47910300765E8DB040A4BA3F56DE6AE160CA16E6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntityU5BU5D_t7BCB017E5E88DD4936C76C5F9089003BD02A20AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyTo_m4646DF4F79D36D6A171B14DAFBEFBEA965ACD692 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t41996C71D62B21CEBE04AAFBFEB7B1A01FB10667 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_mA726BB4F61A214D53AA772FA74385B3B73582868 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_AddRange_m0B46987CAFB40651FA2B015409739C7A841D7D15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_mC21910B2DD1745151732008ED96AA524519E776E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mCE398C902BB5C65E269310015A2BBE639F77350C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m2C794597811B685D7F5AF0FEA1ADB77DAEACCD04 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t0B37828256FB74A662A740855CA169612145FF81 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t0B37828256FB74A662A740855CA169612145FF81_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupSingleEntityException_1_tDE5BC2CA288A05AEA3E75436A43EEFE2578230BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupSingleEntityException_1__ctor_mD859370022C54E6C7FA8F562B648B993BFF5B00B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t00F98C9731F7057BD89D08A6A23AA4330CAB0DF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_get_Count_m743C8F3735AEEA1E62D07ADAB06411F7CEB01DBA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Stack_1_t8B36FBB39D737DD821F4F0992574A60575B70A28 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_get_Count_mD79DBD704C56838AB8FA927283480E69812ED097 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1__ctor_mCCE617AA03A92C44A1142087CB479ECAFE64A755 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_t7756495E52CA22CF50094A8D16DE73CD684DF326 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m6EEAF3CD22277D3E50781D7470BEB35A43A2FFD3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1__ctor_m479C7C49EE26913B85E198B4C8BB243980B25DBB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tC868504C8747D286B44A1C190952D38192E77AFB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m309710B640407900268689C91A5ECE473AAD4C51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_createDefaultContextInfo_mEE31534BE34FDF96C855BF38AC0FBDD38BCEDC52 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tE8E0F51AE4C29F07C550F20599A065A188461FE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_0_mA3B69F7B29A5D972D9F59D48B6A30048A3AEDD6E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1U5BU5D_t078E5A2FF88ADFBDD74396461CBECCF7B5DC96E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_1_mBDC9CA6EC4239B78AD6488F61C1DB3129A56B848 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t414CBB0E891C68F85584623ECBB11D81661E07BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1__ctor_m1AA5C8F4A4457BB0F19FFFF3FC234FF34A215E52 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_ctorU3Eb__43_2_mCA9896195845A32CCF3E881709D342C7DA0A9DC0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t5FE2BA9C1246EC232E8C64D813024826FF2A86FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m77A0EA994F5024DEEB044FBB7C70DA8C6E59E701 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ObjectPool_1_t77241DA234B281A0DA33533A2C0D092BA83490C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_1__ctor_m70220585E600025221741F3EB83555751E29AB50 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_updateGroupsComponentAddedOrRemoved_m12346D7A0593EC08BEE9A151541AEF0FF440D732 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_updateGroupsComponentReplaced_m5A3B751F8640380134D54EC7E668DA82DF27F2FC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_onEntityReleased_mEABB3D2BB63D6738A25B2A4086671CC5BA39C146 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_onDestroyEntity_mB4EEA4B5C4A2ECFB91377151917324E582EFF7BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Pop_mB060E753D90F537043D915EA87A8FBE3761AB38F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_tB4361CA270EEBDAD4ED5DFE9D6727F7D9B789B3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t30ABFBA1F989C289F745811981637AFE2C9D6C50 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m5BF35A2AA7C0BE6C87470384ADDAA77C514F161E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m328F07453C99D4E2C078F2B69872894EC3ACFD35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_GetEntities_m3BCAA9F51E6CC9F67E761310890454546107DEB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Clear_m0583141B1EAEFBE069255B1D5F230CBD05FF1FC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToArray_TisTEntity_tB4361CA270EEBDAD4ED5DFE9D6727F7D9B789B3E_m4A8DA3C50B5E08287BEA16BCA8CC53284A182147 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Contains_m0EE638BCF5656759569B8C6BA07CB94423B338B7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntityU5BU5D_tBF5915973A666FB7FB923D7AD596F757FC183DBF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_CopyTo_m58A148909A617D4193CC4D26800B197AC2E021A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_m723AF823F1EB6C7744EDAE0BFB8D9E99FE86466E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Group_1_tE1EEDAFDDD19626F16B536BACDD612E548340D43 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Group_1__ctor_m4D10620A0B26D610FA906B48AEB866A1992C2341 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_t8374A1F4553F01370785C9D4C347E874FB66B324 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_HandleEntitySilently_m850DA5889457824A48E2BFF1E36E8C459B2C2A43 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_mDE9ABF55CFC5675D337AC3373A95B2A0278DF1F6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IMatcher_1_t5679F9ED9A8E0666299C2E0D7AE6A4D18A7EBC8E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IMatcher_1_get_indices_m94E02697F29640EE9FF7E6B636BD83E0812A141C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t03D948F8B39006FD18AF669F3321BA8289919C5D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m3CF89B90E035CC8EAEC9A28B25A96EB479F36538 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mCC80F7A281741C52FDDB25232AC571FFE8D07493 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_ClearComponentPool_m13ED399A32FFAF5783DEB98A4956E068A247DDC4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_DestroyAllEntities_m5E4AD0EC34FA7B70E5F24916EB0025A5209573D9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Context_1_ResetCreationIndex_m99F709A0C9EBF6BCF84072A6E9F79FC9EE0DDE6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_1_Get_mDD32E94923AE903811580574F15168B93D496AEC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_mAB96805732BF84E7DD0C72A960BE476FB6548331 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_HandleEntity_m0EAF36DDDBC9DE89E051A5E7CD060B343EF0DF53 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t9D94DEC7179070D388299009ADD964D1C05D795B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mEEABC07EF6BFA376B5919FB626E66B208DF9979E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_m80C3FEC4445B4B7B3C85E494CB230785437E15A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_m401448A905E42F078B26710F5A88EAB804097AFC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupChanged_1_tFB65E16A7D30037E860FEC86F5925C6573F314E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupChanged_1_Invoke_mCD58E865D68EE7FCF36FDCCCFC63EB79F53F4650 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_mFCD6A77F21A7ADDF54F739B25B40EA501EF7AF0D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_1_Push_mDBD98A971DF763D0BAA5F9C748C7E15FFFAD1D04 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_UpdateEntity_m540D189B9C9328E2FFFB9C63FE1667C204087C9E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Remove_mAD6CD24D0C149EBA134D78556AFBD899B1EDFC4F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Push_mAF0F45F4BAF8B6046E47A931E9418C6D1AF3FE1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t041FF81E5220C5D73B0000FC4E96CEB72AEFE5C6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_mEB7F90520DA1A475EA0047539DD290BDDAE23ECE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t041FF81E5220C5D73B0000FC4E96CEB72AEFE5C6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t25DC9232AF681813F965004B4E80B14E383A90E1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m7A5373D8DCDDA4C4C8B242A665B4396A00C8B817 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_m4948DEC797481A651B8E6C6C71EE93C60A9C2003 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Job_1U5BU5D_tF6C05EEBCADCA58D681F4EEF794F5B1978495CAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Job_1_tD06B66962AA5D2FF9D19CD2D9B1D78E1CE17C952 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Job_1__ctor_mECB210BD95924A7CC97C48C78028588558B877A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JobSystem_1__ctor_mE73E995116A35CB12903DCDB2BD837284AC302A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_t8FB640B95A7485660A3217B5A12F87634E226727 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_GetEntities_mB24B9EFFEDECF6A4D39C4BACB0E7BE858542BF6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Job_1_Set_mC401436249283C017F7EFD60E562F7BDFDAD2292 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JobSystem_1_queueOnThread_mBC67CFCB82153B33EBC4134F93C2C61A683BC658 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_JobSystem_1_t2770E4F97433EE6FF348D07D0E1CC8A861172384 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JobSystem_1_Execute_mAC72F859CE268DEF5E151A1DB438FE582A380BA0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ReactiveSystem_1_t4B44D6444A3A0A55CF68A136FFAD0D35FD970AAA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ReactiveSystem_1_GetTrigger_m2EE9D38ED5CD907FB9A4CA72E386770921554E5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tB382DF8957A39082D91BED3AB2FEFB70F8AB7B68 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mB07625C729219D1AA06CE8D55D16BCCED24FE206 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollector_1_tB59C776C59661049BA30D0D4F152503B109DBBD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollector_1_get_collectedEntities_m7A1F12B138092B3F3331FBED798020B6E3D170FE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tC9558917B453678CC01C8883801D10647ABB975C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_mF6CC398CEB63E3A6B7E7AAA61B6BF9A04FE73B13 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m6303E6106BFF5C2D4FB4FC5BB63B98DF164D646E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ReactiveSystem_1_Filter_m99158287EF73C7EC5AA822F22D96868CE2732C81 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_tD87A519B836D8A1C082D429BFB67278AE8D187BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mC55F3847FC271356D79EE48FF5F9B18F66E3E12A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m99FF756E8401C79D579DA0AE5B4C0FDA84C0D3DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t72037999C52862E2788FE8F6CF1875AA054AE6B3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t72037999C52862E2788FE8F6CF1875AA054AE6B3_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_m0027F0A4FA8F9FFCCA053421DD337CE166B6F003 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ReactiveSystem_1_Execute_m18EFA8A81A05960C6A785AA73761EA959C60A980 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_m6DB70CAD96E3EDB46EC49917FDA995F391BB20B4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_m1B1241F367E4C7A68BB83F6EBB68E82DC5C7F30E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ReactiveSystem_1_Deactivate_m5B4C8CB072FF304668904CE543AD64B1A0173AB2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IContext_1_t3E1231FA5A2303ADB001A6C1B06E81B99241AF54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IContext_1_GetGroup_m0558B7748D790422F6B3AA3F1C857619D6A2BBEF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_tE324B66F2AB7FCD843A6651C5967A72084655988 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_GetEntities_m7F43269888FDCB5640017D6F633E1704DD01649D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IContext_1_tF7E4CD0FECB4D15A7E2DD9493EA0001C59C8AE1E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IContext_1_CreateEntity_m9B716DA111C2E477566A5A15736D4543CE946216 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_tA460876D5D6868770A17C11DCDAA8D08E9497AD4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Collector_1_t22F24922D48DA6285EAA06C88AB543E5016D4A7C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1__ctor_m340A22163F6827292AD782EA0B5DE70DC8E5CB94 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t5AF209E3AF2116CA93083CAB1B4060FEFCF86461 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_t913843DF39A3DB547EEB93EE073FF33A32835C2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EntityEqualityComparer_1__ctor_mFF9489E3B1810E8B2A7E7F390010064C39632BA7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_t913843DF39A3DB547EEB93EE073FF33A32835C2B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_tDC5EF77786F4710CB3D5B60B0A01F185D0B28384 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_GetEntities_m437CC5A56B91B5180F8EB2C009DF2F9898DF0B66 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tADE38DE2AFACB671D8ED0B2B746FD8A17D7497AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_ctorU3Eb__0_0_m99D47FD052FD232D042472BAC76A6CAC17C0FB91 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tED8A316BAFF932C38A7489A1C00D7FE9FB327F7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mD8155FF5E49C31A627554B43209E15FF90A118B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Select_TisTEntity_t8E2A11D4122C3F3C0D0CC3918262B0ADFAFB8BD8_TisString_t_mFA49818475696ADA8CB80564B7DA3E0ABD0B8023 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tDE06E9BC956154C29FFD7B6EE6E03DB6AA2D6D43 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_mB50C7FBB3F6CE580C820904CAB94211D94B676B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tDE06E9BC956154C29FFD7B6EE6E03DB6AA2D6D43 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t7A365C4915987629644581148C29493C98F8B7BD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t933DAC2DFF834331E1C92A54D4BD46A526D71C8F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_get_Count_m945DF2C54A6A1704CF6A0F9A25DFEE0EC53799CA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1U5BU5D_tFCD2113F4AC26EA2BC6696A6C6DB4EF514090B69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1__ctor_m9655E6447ABCA7EA37C069CFA95FCA07D52FFF53 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EntityEqualityComparer_1_tEB9DB2AB44EC051D157A4C8DB9841092FB10FF53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_mA25E9EC019FA8C300C2562162FB591CBB825A253 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1_addEntity_mADF71D6DCAD45EC568352109C0F5A071C4FA2222 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_GroupChanged_1_t8A789724BAEE8117B48FCB9125D4AD44768CFA06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GroupChanged_1__ctor_m15A02D91C5DC7EC54F2E7B3F3C205C3309C0CA8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1_Activate_m0F79B1516C71E0C6C91E9422D479A4057E045778 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1_t958E08842090CE31AAB837F0688DF84DC190E217 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_remove_OnEntityAdded_m6F693419DCF774190BC5CD85C9C20E965D077CD2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_add_OnEntityAdded_mAFF27C80D19F94E7957BD58F3FF3E81DBAA13FCD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_remove_OnEntityRemoved_m109D62CEDF6F9FD397533199706B8970F2F3789A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IGroup_1_add_OnEntityRemoved_m183C8FAE68A882C0BDEA00C10F389FBE99319EAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1_ClearCollectedEntities_m144E4A8F3AFC7F19EB6A485DE9E6AC74D7B6A45A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_mB97762BC89CA74DDDE44DB5F6D35CE168AE79305 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m9524E6CE2A66D88884ADF859CFFA167DC1DB980C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_t1B8141A8721A960865D9FE78AD639F7033C3F985 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m3FE8006570C70E594F2D32FA1482FAA84C6C0C6A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tE2509925855E7B7A7622A9692A232B968C164326 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tE2509925855E7B7A7622A9692A232B968C164326_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Clear_m095E3992453C5B86AEE7BB509F18CDFBD51188A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_mA51C5FFEE9A58F4CA25B408DF25AE4ACB024AB19 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1_Deactivate_m8A7A05C92F854780992FBC2E94500125BE2D4A06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Cast_TisTCast_t8A5A60660641D71BA21E1ABA0C2FAB7489D50D3C_mE6CC29091D537B33F116FDE627244C59CA4D02EF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_t7578CC137E3CFA920408ABDC3786E54934AA12A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m17AC05ED9B490E47BC228119FF5301A830F73868 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_First_TisTEntity_t21B1CA66A73B723FB3C91154BB07B5CCE1513985_mF6EB155EF2A88E1D0FBA996212FEE7CFCBF9219A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TriggerOnEvent_1U5BU5D_tD849A00E93B00B5F1772894781FC86A1E8AED362 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TriggerOnEvent_1_t2E288C51B95F2C403E4C8042E64061515FA1611C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TriggerOnEvent_1__ctor_m744E1BB7B4F7E709E5B54A42E716B8509D96440E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CollectorContextExtension_CreateCollector_TisTEntity_t7FF0ECFE6E67A55BA749398FACF60C0521D6F4D3_m866DFEEFDF7AA6FC4D84C2C4B7D223281B9DD6C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IGroup_1U5BU5D_t903174A8FBA57F48C81D7BA44A7C11A4FB6D57D2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IContext_1_t41F431B9E01358CAF318E2B96CA0CC402D7EF0C5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IContext_1_GetGroup_m8326B741CEFD623350873828E4BCE521137EBAF3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Collector_1_t9D229555CB453885419F76977F540067C10B1F3A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Collector_1__ctor_mE7E562A0A057B94886278E01FE4762F38C4BD49B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TriggerOnEvent_1_tF35C307E3781B2D260D81EF742A411A977E7253D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TriggerOnEvent_1__ctor_m333AD558AA5D4AF28D1ABF6D1BDD7FAB39434BD1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TriggerOnEvent_1_tDB1E7F49A7A2C6C3F6D0926CCD2304D0738F0E65 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TriggerOnEvent_1__ctor_mC6DA95D369516BF3597B80A5407BD4524AA3DF68 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TriggerOnEvent_1_t674C3816F34BA26D9EBD281D093A19F1D35817CA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TriggerOnEvent_1__ctor_m4824E410473B47635A9F2DB6D47FBD7C20D64068 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_MultiReactiveSystem_2_t133A2979E8C9500B26C009A3317C827D9B715271 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MultiReactiveSystem_2_GetTrigger_m713ABA4B8C77100305244ADBC41E5AB76A796ADE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tC3625A55CEA773DB853DFE6BEBB2FD79C73B8F24 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_mCBE0CF497C53F58A46D4DAA3177D349D8FD70BAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tCBB9EF528BBE4FE1CF7247661D76A08927DC8385 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m02B3A68DAC54E7B6C565BA7E7BAC6E0300284F06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollector_GetCollectedEntities_TisTEntity_tD06D6B5BBFB93598B50F73174002F2EAB9CC189B_mD55E2C5DD1375A6763B8154A5EF00724AB7AEA80 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_UnionWith_m871199F41F4F81DB8B7AE371DC8FB22C9C8C471F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_mC90DD2C3F57ACFC373E28E83954C2651C953D51A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m87E69B768CFF2A9CC1B1A0ACE8676279ACDC904C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MultiReactiveSystem_2_Filter_m11CAD5988C9603BA83DD291A24575914E70B25E7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEntity_tD06D6B5BBFB93598B50F73174002F2EAB9CC189B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mEABF462EBF3B2E6E956BEF904C70E4E0E758E9B4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mCB6A5E791EB0432BD227FA1D1F69EC9C95B28AF3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tB2492E4BEA67DE255C71C0568D40E408DD473CC4 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tB2492E4BEA67DE255C71C0568D40E408DD473CC4_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_m71841502D6D719EC853670EB27E0AD450097D808 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MultiReactiveSystem_2_Execute_mBBE7D51304E4EF2DF44321FA08C9E8106CF4C0C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_m070CDAF4002D9EE8B29E2FD97D4962310EA0241E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Clear_m2F184CF371A98FCBF3CD2E1FDCE194F4FEDC30B8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_m1F08476CC02DED25E9107E1796E31A778464D874 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MultiReactiveSystem_2_Deactivate_mE4478F014F1D5B27B8FA1D9EC07021135E5F4547 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Entitas_CodeGenModule;
const Il2CppCodeGenModule g_Entitas_CodeGenModule = 
{
	"Entitas.dll",
	423,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	25,
	s_rgctxIndices,
	327,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
