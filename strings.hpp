/*
  hi
  call after xref means sub_xxxx(string) and the sub is the offset
  if theres no comments then its the func at xref (function at the xref)
*/

// luau stuff
const uintptr_t print = "Breakpoint %s:%d ignored: %s"
const uintptr_t luaL_register = "name conflict for module '%s'"
const uintptr_t lua_resume = "too many arguments to resume"
const uintptr_t luaopen_bit32 = "os"
const uintptr_t luaopen_os = "bit32"
const uintptr_t lua_createtable = "Unexpected trailing character: '{}'"
const uintptr_t luaO_str2d = "Bad argument occupancy[%d][%d][%d] to 'WriteVoxels'" // call after xref
const uintptr_t luau_execute = "iterate over"
const uintptr_t luau_load = "bytecode corrupted"
const uintptr_t RaiseErr = "Attempt to migrate WeakObjectRef across VM boundary" /// calla fter xref
const uintptr_t luaL_error = "name conflict for module '%s'" // xall after xref
const uintptr_t lua_getfield = "invalid argument #%d to '%s' (%s expected, got %s)" // trust
const uintptr_t lua_newstate = "error in error handling" // second fucn at xref i think
const uintptr_t luaG_runerror = "table overflow" // call after xref
const uintptr_t luaG_aritherror = "attempt to perform arithmetic (%s) on %s"
const uintptr_t luaH_dummynode = "{\"type\":\"table\",\"cat\":%d,\"size\":%d" // its a unk a little over the string
const uintptr_t RobloxLogCrash = "Invalid Facet Access" // sub_xxxxxxx(0, "Invalid Facet Access"); like this
const uintptr_t luaB_newproxy = "nil or boolean"
const uintptr_t luaB_pcallrun = "xpcall"
const uintptr_t luaB_pcall = "pcall"
const uintptr_t luaB_setmetatable = "cannot change a protected metatable"
const uintptr_t luaB_setfenv = "'setfenv' cannot change environment of given object"
const uintptr_t luaB_tonumber = "base out of range"
const uintptr_t luaB_rawlen = "table or string expected"
const uintptr_t luaB_getmetatable = "__metatable" // func at xref
const uintptr_t luaL_getmetafield = "__metatable" // first call in func
const uintptr_t luaB_assert = "assertion failed!"
const uintptr_t luaL_tostring = "__tostring"
const uintptr_t luaopen_base = "xpcall"
const uintptr_t lua_pushfstringL = "%s: bytecode version mismatch (expected [%d..%d], got %d)" // call after xref
const uintptr_t luaV_gettable = "'__index' chain too long; possible loop"
const uintptr_t luaV_settable = "'__newindex' chain too long; possible loop" // theres luaO_nilobject in here
const uintptr_t lua_break = "attempt to break across metamethod/C-call boundary"
const uintptr_t lua_yield = "attempt to yield across metamethod/C-call boundary" // small func is it but bigger func is Instance::WaitForChild
const uintptr_t luaG_runerrorl = "'__index' chain too long; possible loop" // call after xref
const uintptr_t luaopen_math = "sqrt2" // func at xre´f
const uintptr_t lua_setfield = "sqrt2" // call after xref
const uintptr_t luaL_typerrorL = "invalid argument #%d to '%s' (%s expected, got %s)"
const uintptr_t luaL_argerrorL = "invalid argument #%d to '%s' (%s)"
const uintptr_t pusherror = "error in error handling" // func at xref
const uintptr_t GetLuaStateForInstance = "Script Start" // theres enough tutorials for ts already u can figure it out

// fflag stuff
const uintptr_t GetFFlag = "[FLog::ResetFilters] ParseAndSetFilterValue saving {} = {} for {}" // look for the 2nd if thing before the xref, the sub_ where its at is it, like this: if ( (unsigned __int8)sub_xxxx(a1, a2, Src, v21, a5) )
const uintptr_t SetFFlag = "[FLog::FastLogValueChanged] Setting variable {}" // func at xref

// property stuff
const uintptr_t ClassDescriptor = "Could not find property descriptor" // decimal (turn into hex)
const uintptr_t getter, ttype, ttype_number, scriptable = "Unable to query property {}. It is not scriptable"
const uintptr_t GetProperty = "%s is not a valid member of %s \"%s\"" // call after xref
const uintptr_t GetValues = "Invalid table key type used"

// instance
const uintptr_t GetModuleFromVMStateMap = "Requested module was required recursively"
const uintptr_t GetValues = "Invalid table key type used"
const uintptr_t WaitForChild = "illegal argument #2 (timeOut must be greater than 0)"
const uintptr_t SetParent = "Attempt to set {} as its own parent"

// identity
const uintptr_t GetTlsPointer = "Current identity is %d" // just scroll up a little and a func that looks like sub_xxxx (4 chars)
const uintptr_t IdentityPtr = "Current identity is %d" // if u found gettlspointer its like a unk thats in the gettlspointer call (e.g. sub_xxxx(unk_xxxxxx) and the unk is the identity ptr)

// taskscheduler
const uintptr_t JobName = "HumanoidParallelManagerTaskQueue" // 3rd qword in func
const uintptr_t RawScheduler = "HumanoidParallelManagerTaskQueue" // dword before xref
const uintptr_t MaxFps = "Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value" // figure it out
const uintptr_t TaskSchedulerPointer = "Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value" // figure it out
const uintptr_t JobsEnd = "Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value" // figure it out
const uintptr_t JobsStart = "TaskScheduler" // 2nd qword in func i think 

// scriptcontext
const uintptr_t Resume = "Can't resume script in this context" // func at xref
const uintptr_t ToResume = "Can't resume script in this context" // scroll up completely then go a little down till its not random shit anymore, its just a decimal like 2016 (convert it to hex tho)
const uintptr_t TaskQueue = "ScriptContextTaskQueue"
const uintptr_t identity = "Cannot require a RobloxScript module from a non RobloxScript context"
const uintptr_t userdata = "Cannot require a RobloxScript module from a non RobloxScript context"
const uintptr_t IsCoreScript = "Cannot require a RobloxScript module from a non RobloxScript context"
const uintptr_t RequireBypass = "Cannot require a RobloxScript module from a non RobloxScript context"
/*
  here since im so nice (not the latest btw)

  if ( !*(_BYTE *)(v25 + 2200) )                // RequireBypass
  {
    v26 = *(_QWORD *)(a1 + 88);                 // userdata
    v153 = *(_OWORD *)(v26 + 64);               // identity
    v154 = *(_QWORD *)(v26 + 80);               // prob some other member
    if ( (sub_8F7FD0(&v153) & 8) != 0 )
    {
      if ( (*(_BYTE *)(v129 + 360) & 1) == 0 )  // IsCoreScript
        sub_2D1E6E0("Cannot require a non-RobloxScript module from a RobloxScript");
    }
    else if ( (*(_BYTE *)(v129 + 360) & 1) != 0 )// IsCoreScript
    {
      sub_2D1E6E0("Cannot require a RobloxScript module from a non RobloxScript context");
    }
  }
*/

// basepart
const uintptr_t Primitive = "All parts passed to ArePartsTouchingOthers must be in the WorldRoot" // decimal a little over the xrefri think (theres overlap here too i think)
const uintptr_t Overlap = "new overlap in different world" // appears like 50 times in the xref (decimal so convert to hex)

// signals
/*
  lwk almost everyone uses sigs for the fire stuff but why not just find the strings
  havent found any for the firemousehover stuff yet but if i do ill put it here
*/
const uintptr_t FireTouchInterest = "new overlap in different world" // last return sub_xxx at the bottom of the xref
const uintptr_t FireRightMouseClick = "EchoSoundEffect" // call after xref
const uintptr_t FireMouseClick = "[FLog::CSG3Errors] Failed to create CDEC recomputation's async task" // first call in fun
const uintptr_t FireProximityPrompt = "getBestFitProximityPrompts"
const uintptr_t TouchInterest = "TouchInterest"
const uintptr_t InvokeClient = "InvokeClient can only be called from the server"
const uintptr_t FireAllClients = "FireAllClients can only be called from the server"
const uintptr_t InvokeServer = "invokeServer" // or u can use some other string but i forgot it
const uintptr_t FireServer = "FireServer can only be called from the client"
const uintptr_t IsLegalSendEvent = "signalName"

// hyperion
const uintptr_t BitMap = "0x7fffffffffff" // constant in RobloxPlayerBeta.dll
const uintptr_t ControlFlowGuard = "0x7fffffffffff" // constant in RobloxPlayerBeta.dll

// raknet
const uintptr_t ProcessNetworkPacket = "RakPeer::ProcessNetworkPacket"
const uintptr_t ReportNetworkError = "[DFLog::NetworkTrace] reportPerServerMetric::: sc(%s:%d).state = %d :: returning false"
const uintptr_t HandleConnectionState = "[DFLog::NetworkTrace] updateServerConnectionState::: sc(%s).old_state = %d -> new_state = %d :: returning false"
const uintptr_t Receive = "[DFLog::RakNetStoppedProduction] RakNet has not produced packets for {} frames / {} ms"

// some other networking shit idk
const uintptr_t ClientOnRecieve = "Client::OnReceive error while trying to decompress packet: %s"

// task lib
const uintptr_t task.defer = "task.defer is not available for AuroraScripts"
const uintptr_t task.spawn = "task.spawn is not available for AuroraScripts"
const uintptr_t task.desynchronize = "task.desynchronize() may only be called from a script that is a descendant of an Actor"
const uintptr_t task.synchronize = "task.synchronize() may only be called from a script that is a descendant of an Actor"
const uintptr_t task.wait = "task.wait is not available for AuroraScripts"
const uintptr_t task.cancel = "cannot cancel thread"

// task lib (ez version)
/*
 * showcased version: version-ec412128eba3476e
 * 
 * how to find them:
 * search for the string "desynchronize" and check its xrefs
 * you will find the registration block for the task functions:
 *
 *   qword_761AD80 = (__int64)"synchronize";
 *   qword_761AD88 = (__int64)sub_1DAB5F0;   // task.synchronize
 *   qword_761AD90 = (__int64)"desynchronize";
 *   qword_761AD98 = (__int64)sub_1DAABC0;   // task.desynchronize
 *   qword_761ADA0 = (__int64)"defer";
 *   qword_761ADA8 = (__int64)qword_1DAA520; // task.defer
 *   qword_761ADB0 = (__int64)"spawn";
 *   qword_761ADB8 = (__int64)sub_1DAB470;   // task.spawn
 *   qword_761ADC0 = (__int64)"delay";
 *   qword_761ADC8 = (__int64)sub_1DAA980;   // task.delay
 *   qword_761ADD0 = (__int64)"wait";
 *   qword_761ADD8 = (__int64)qword_1DAB800; // task.wait
 *   qword_761ADE0 = (__int64)"cancel";
 *   qword_761ADE8 = (__int64)sub_1DAA210;   // task.cancel
 * and these are all offsets for the task lib (found this accidentally)
 */

// coroutine lib
const uintptr_t coroutine.close = "cannot close %s coroutine"

// coroutine lib (ez version)
/*
 * showcased version: version-36a2600cebf1487d
 * search for the string "isyieldable" and check its xrefs
 * you will find some block shit of the coroutine functions:
 * .rdata:00000000064A9380 off_64A9380     dq offset aCreate_0     ; DATA XREF: sub_3E819B0+6↑o
 * .rdata:00000000064A9380                                         ; "create"
 * .rdata:00000000064A9388                 dq offset sub_3E81220 // coroutine.create
 * .rdata:00000000064A9390                 dq offset aRunning_1    ; "running"
 * .rdata:00000000064A9398                 dq offset sub_3E812E0 // coroutine.running
 * .rdata:00000000064A93A0                 dq offset aStatus       ; "status"
 * .rdata:00000000064A93A8                 dq offset sub_3E811B0 // coroutine.status
 * .rdata:00000000064A93B0                 dq offset aWrap_0       ; "wrap"
 * .rdata:00000000064A93B8                 dq offset sub_3E81260 // coroutine.wrap
 * .rdata:00000000064A93C0                 dq offset aYield        ; "yield"
 * .rdata:00000000064A93C8                 dq offset sub_3E812C0 // coroutine.yield
 * .rdata:00000000064A93D0                 dq offset aIsyieldable  ; "isyieldable"
 * .rdata:00000000064A93D8                 dq offset sub_3E81310 // coroutine.isyieldable
 * .rdata:00000000064A93E0                 dq offset aClose_0      ; "close"
 * .rdata:00000000064A93E8                 dq offset sub_3E81340 // coroutine.close
 *
 * btw under all of this if u scroll down a bit theres more libs like the string lib, bit lib and more
 */

// and because for some reason people cant dump reflection types:
const uintptr_t ReflectionTypes = "ProtectedString" // use ur brain
// look at this: (cleaned up a little bit)
char *__fastcall sub_8FAF80(int a1) {
    switch (a1) {
        case 0: return "Void";
        case 1: return "Bool";
        case 2: return "Int";
        case 3: return "Int64";
        case 4: return "Float";
        case 5: return "Double";
        case 6: return "String";
        case 7: return "ProtectedString";
        case 8: return "Instance";
        case 9: return "Instances";
        // more cases here bla bla bla
        case 105: return (char *)&word_6B5E060;
        default: return &byte_61058A5;
    }
}

// boom ez

// other stuff
const uintptr_t ConnectionDisconnect = "Function Connection.Disconnect is not safe to call in parallel" // prob
const uintptr_t EnableLoadModule = "debug.loadmodule is not enabled." // its the only byte or unk in the func at the xref
const uintptr_t rbxSpawn = "spawn is not available for AuroraScripts"
const uintptr_t impersonator = "Callbacks cannot yield" // nested call after xref (idfk if this still works but yea)
