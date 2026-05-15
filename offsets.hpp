// dumped by nick \\
// date: 2026-05-14 22:22:48 \\
// took 14.9s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE   = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)     ((x) + Roblox_BASE)
#define HYP_REBASE(x) ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-ec412128eba3476e";
	
	namespace hyperion
	{
    	static constexpr uintptr_t ControlFlowGuard = HYP_REBASE(0xac2b20);
    	static constexpr uintptr_t BitMap = HYP_REBASE(0x11ae918);

   		enum Offsets    {
            ByteShift = 15,   // 0xf
            PageShift = 12,   // 0xc
            BitMask   = 7,   // 0x7
            PageSize  = 0x1000,  // 4096
            PageMask  = 0xfff   // 4095
    	};
	} // namespace hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x773d56);
        const uintptr_t FakeDataModelPointer = REBASE(0x74f8758);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x528be4);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t Identity = 0xe8;
        inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
        inline constexpr uintptr_t Userdata = 0x100;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x5e89d0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d8d4f0);
        const uintptr_t GetTlsPointer = REBASE(0x1c7d4e0);
        const uintptr_t Impersonator = REBASE(0x5e89d0);
    } // namespace RobloxThread

    namespace Instance
    {
		const uintptr_t NiggaNiggaSahur67 = REBASE(0x6767) // ud real +rep im tuff
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0x1d00bf0);
        const uintptr_t HashTableLookup = REBASE(0x1c30660);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t getglobalstate = REBASE(0x1c49af0);
        const uintptr_t getluastate = REBASE(0x1d6f610);
        const uintptr_t loadsafe = REBASE(0x4750e50);
        const uintptr_t lua_getfield = REBASE(0x474cfaa);
        const uintptr_t lua_resume = REBASE(0x1dab210);
        const uintptr_t lua_setfield = REBASE(0x4748be0);
        const uintptr_t luaA_toobject = REBASE(0x474cfaa);
        const uintptr_t luaB_assert = REBASE(0x475f030);
        const uintptr_t luaB_error = REBASE(0x475eaf0);
        const uintptr_t luaB_gcinfo = REBASE(0x475ef20);
        const uintptr_t luaB_getfenv = REBASE(0x475ec80);
        const uintptr_t luaB_getmetatable = REBASE(0x475eb60);
        const uintptr_t luaB_newproxy = REBASE(0x475f180);
        const uintptr_t luaB_next = REBASE(0x475efd0);
        const uintptr_t luaB_print = REBASE(0x475e8d0);
        const uintptr_t luaB_rawequal = REBASE(0x475edc0);
        const uintptr_t luaB_rawget = REBASE(0x475ee10);
        const uintptr_t luaB_rawlen = REBASE(0x475eec0);
        const uintptr_t luaB_rawset = REBASE(0x475ee60);
        const uintptr_t luaB_select = REBASE(0x475f0a0);
        const uintptr_t luaB_setfenv = REBASE(0x475ece0);
        const uintptr_t luaB_setmetatable = REBASE(0x475ebc0);
        const uintptr_t luaB_tonumber = REBASE(0x475e9b0);
        const uintptr_t luaB_tostring = REBASE(0x475f150);
        const uintptr_t luaB_type = REBASE(0x475ef50);
        const uintptr_t luaB_typeof = REBASE(0x475ef90);
        const uintptr_t luaC_step = REBASE(0x474f580);
        const uintptr_t luaF_freeproto = REBASE(0x474a150);
        const uintptr_t luaG_runerror = REBASE(0x1da2eb0);
        const uintptr_t luaG_runerrorl = REBASE(0x476ba60);
        const uintptr_t luaL_argerror = REBASE(0x5fe610);
        const uintptr_t luaL_argerrorl = REBASE(0x1dab410);
        const uintptr_t luaL_checkstring = REBASE(0x474cfaa);
        const uintptr_t luaL_checktype = REBASE(0x474c3e0);
        const uintptr_t luaL_testudata = REBASE(0x47769c0);
        const uintptr_t luaM_free = REBASE(0x476ba60);
        const uintptr_t luaM_toobig = REBASE(0x476ba60);
        const uintptr_t luaT_Eventnames = REBASE(0x62f5298);
        const uintptr_t luaT_objtypename = REBASE(0x474cfaa);
        const uintptr_t luau_execute = REBASE(0x475c680);
        const uintptr_t luau_opcode = REBASE(0x47514b9);
        const uintptr_t luavm__load = REBASE(0x1c7b740);
        const uintptr_t luax_move = REBASE(0x474c3e0);
        const uintptr_t pseudo2addr = REBASE(0x4b0db40);
        const uintptr_t std_runtime_error = REBASE(0x4b0db40);
    } // namespace Luau

    namespace Task // i confirmed in ida
    {
        const uintptr_t defer = REBASE(0x1daa520);
        const uintptr_t spawn = REBASE(0x1dab470);
		const uintptr_t delay = REBASE(0x1daa980);
        const uintptr_t synchronize = REBASE(0x1dab5f0);
		const uintptr_t desynchronize = REBASE(0x1daabc0);
        const uintptr_t wait = REBASE(0x1dab800);
		const uintptr_t cancel = REBASE(0x1daa210);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireProximityPrompt = REBASE(0x5ccf10);
        const uintptr_t FireTouchInterest = REBASE(0x4af4a80);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d1b0f0);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d1b310);
        const uintptr_t Connection_Dc = REBASE(0x1c6a5be);
        const uintptr_t Event_Connect = REBASE(0x1c69450);
        const uintptr_t Event_ConnPar = REBASE(0x1c69880);
        const uintptr_t Event_Once = REBASE(0x1c6d070);
        const uintptr_t EventAccess = REBASE(0x1d174c0);
        const uintptr_t FilterDescendants = REBASE(0x1ce01e7);
        const uintptr_t FunctionCall = REBASE(0x1d1b0f0);
        const uintptr_t Instance_FromExist = REBASE(0x1d762e0);
        const uintptr_t LocalSafe_Call = REBASE(0x1d1b0f0);
        const uintptr_t LocalSafe_Write = REBASE(0x1d1b310);
        const uintptr_t PropRead = REBASE(0x1d174c0);
        const uintptr_t PropWrite = REBASE(0x1d1b310);
        const uintptr_t ScriptConnect = REBASE(0x1c69880);
    } // namespace IsParallel

    // misc
    const uintptr_t AppDataInfo = REBASE(0x74e8c88);
    const uintptr_t EnableLoadModule = REBASE(0x1d8d580);
    const uintptr_t GetContextObject = REBASE(0x4af4eb0);
    const uintptr_t GetContextObject2 = REBASE(0x1c884f0);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ade5e0);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x4a38c20);
    const uintptr_t GetFFlag = REBASE(0x4b2a120);
    const uintptr_t GetGlobalState = REBASE(0x5104d40);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d6f300);
    const uintptr_t newclasspage2 = REBASE(0x476bb89);
    const uintptr_t OpcodeLookupTable = REBASE(0x34ae732);
    const uintptr_t Print = REBASE(0x1dd05b0); // ud
    const uintptr_t Register = REBASE(0x82b870);
    const uintptr_t RobloxLogCrash = REBASE(0x4af4eb0);
    const uintptr_t WndProcessCheck = REBASE(0x70ad018);

} // namespace Offsets
