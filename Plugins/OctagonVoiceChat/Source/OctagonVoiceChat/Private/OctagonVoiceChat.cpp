/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#include "OctagonVoiceChatPrivatePCH.h"


class FOctagonVoiceChat : public IOctagonVoiceChat
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FOctagonVoiceChat, OctagonVoiceChat)


void FOctagonVoiceChat::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}

void FOctagonVoiceChat::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
