// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoGameModeBase_generated_h
#error "DemoGameModeBase.generated.h already included, missing '#pragma once' in DemoGameModeBase.h"
#endif
#define DEMO_DemoGameModeBase_generated_h

#define Demo_Source_Demo_DemoGameModeBase_h_15_RPC_WRAPPERS
#define Demo_Source_Demo_DemoGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Demo_Source_Demo_DemoGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoGameModeBase(); \
	friend struct Z_Construct_UClass_ADemoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADemoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoGameModeBase)


#define Demo_Source_Demo_DemoGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADemoGameModeBase(); \
	friend struct Z_Construct_UClass_ADemoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADemoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoGameModeBase)


#define Demo_Source_Demo_DemoGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoGameModeBase(ADemoGameModeBase&&); \
	NO_API ADemoGameModeBase(const ADemoGameModeBase&); \
public:


#define Demo_Source_Demo_DemoGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoGameModeBase(ADemoGameModeBase&&); \
	NO_API ADemoGameModeBase(const ADemoGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoGameModeBase)


#define Demo_Source_Demo_DemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Demo_Source_Demo_DemoGameModeBase_h_12_PROLOG
#define Demo_Source_Demo_DemoGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoGameModeBase_h_15_RPC_WRAPPERS \
	Demo_Source_Demo_DemoGameModeBase_h_15_INCLASS \
	Demo_Source_Demo_DemoGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_Source_Demo_DemoGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_Source_Demo_DemoGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
