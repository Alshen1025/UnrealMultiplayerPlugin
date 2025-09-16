// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MenuSystemCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MENUSYSTEM_MenuSystemCharacter_generated_h
#error "MenuSystemCharacter.generated.h already included, missing '#pragma once' in MenuSystemCharacter.h"
#endif
#define MENUSYSTEM_MenuSystemCharacter_generated_h

#define FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinGameSession); \
	DECLARE_FUNCTION(execCreateGameSession);


#define FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuSystemCharacter(); \
	friend struct Z_Construct_UClass_AMenuSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AMenuSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), NO_API) \
	DECLARE_SERIALIZER(AMenuSystemCharacter)


#define FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMenuSystemCharacter(AMenuSystemCharacter&&); \
	AMenuSystemCharacter(const AMenuSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMenuSystemCharacter) \
	NO_API virtual ~AMenuSystemCharacter();


#define FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_20_PROLOG
#define FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MENUSYSTEM_API UClass* StaticClass<class AMenuSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_goseo_Desktop_UnrealMultiplayerPlugin_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
