// dumped by nick \\
// date: 2026-05-20 01:26:51 \\
// took 11.0s \\
// PRE-DUMP \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-3b42a15a305e47ec"; // FUTURE

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x1567be8);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x1482210);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x4819b6a);
        const uintptr_t FakeDataModelPointer = REBASE(0x786a890);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x1c2b2a0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d453d0);
        const uintptr_t GetTlsPointer = REBASE(0x1c28ea0);
        const uintptr_t Impersonator = REBASE(0x1c2b2a0);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t IsLegalSendEvent = REBASE(0xa0fdc0);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0x1cc8460);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t GetLuaState = REBASE(0x1ce6270);
        const uintptr_t luaB_assert = REBASE(0x43c7bb0);
        const uintptr_t luaB_error = REBASE(0x43c7670);
        const uintptr_t luaB_gcinfo = REBASE(0x43c7aa0);
        const uintptr_t luaB_getfenv = REBASE(0x43c7800);
        const uintptr_t luaB_getmetatable = REBASE(0x43c76e0);
        const uintptr_t luaB_newproxy = REBASE(0x43c7d00);
        const uintptr_t luaB_next = REBASE(0x43c7b50);
        const uintptr_t luaB_print = REBASE(0x43c7450);
        const uintptr_t luaB_rawequal = REBASE(0x43c7940);
        const uintptr_t luaB_rawget = REBASE(0x43c7990);
        const uintptr_t luaB_rawset = REBASE(0x43c79e0);
        const uintptr_t luaB_select = REBASE(0x43c7c20);
        const uintptr_t luaB_tonumber = REBASE(0x43c7530);
        const uintptr_t luaB_tostring = REBASE(0x43c7cd0);
        const uintptr_t luaB_type = REBASE(0x43c7ad0);
        const uintptr_t luaB_typeof = REBASE(0x43c7b10);
        const uintptr_t luaC_step = REBASE(0x43b9c60);
        const uintptr_t luaC_step = REBASE(0x1d864c0);
        const uintptr_t luaL_argerror = REBASE(0x622e40);
        const uintptr_t luaT_eventnames = REBASE(0x65e1048);
        const uintptr_t luaT_typenames = REBASE(0x5a50a80);
        const uintptr_t Luau_OpCode = REBASE(0x43bbaa9);
        const uintptr_t pseudo2addr = REBASE(0x480f460);
        const uintptr_t uau_execute = REBASE(0x43c7090);
    } // namespace Luau

    namespace Task // ima verify myself later
    {
        const uintptr_t desynchronize = REBASE(0x1d62ca0);
        const uintptr_t synchronize = REBASE(0x1d638f0);
        const uintptr_t wait = REBASE(0x1d63ae0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireProximityPrompt = REBASE(0x6319e0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c1aac0);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c1ace0);
        const uintptr_t Connection_Dc = REBASE(0x1c374d0);
        const uintptr_t Event_Connect = REBASE(0x1c36380);
        const uintptr_t Event_ConnPar = REBASE(0x1c367b0);
        const uintptr_t Event_Once = REBASE(0x1c39ee0);
        const uintptr_t EventAccess = REBASE(0x1c173f0);
        const uintptr_t FunctionCall = REBASE(0x1c1aac0);
        const uintptr_t LocalSafe_Call = REBASE(0x1c1aac0);
        const uintptr_t LocalSafe_Write = REBASE(0x1c1ace0);
        const uintptr_t PropRead = REBASE(0x1c173f0);
        const uintptr_t PropWrite = REBASE(0x1c1ace0);
        const uintptr_t ScriptConnect = REBASE(0x1c367b0);
    } // namespace IsParallel

    // misc
	// NOOOOOOO MY UD PRINT TECHNIQUE IS GONEEEEE (i think)
    const uintptr_t AppDataInfo = REBASE(0x78662c8);
    const uintptr_t EnableLoadModule = REBASE(0x5953d50);
    const uintptr_t GetContextObject = REBASE(0x323d5f0);
    const uintptr_t GetCurrentThreadId = REBASE(0x47e0370);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x4659870);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c30560);
    const uintptr_t newclasspage2 = REBASE(0x43d6449);
    const uintptr_t Register = REBASE(0x69eb00);
    const uintptr_t ScriptContextResume = REBASE(0x1d00ca0);
    const uintptr_t WndProcessCheck = REBASE(0x7413018);

} // namespace Offsets
