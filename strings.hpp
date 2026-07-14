// fucking from like version-acc4b74f79e743b9 idk
// i have like 100 strings, not leaking all of them gng
const uintptr_t luaO_nilobject = Attempt to migrate WeakObjectRef across VM boundary
const uintptr_t luaT_Eventnames = __call
const uintptr_t luaT_typenames = userdata
const uintptr_t RawScheduler = HumanoidParallelManagerTaskQueue
const uintptr_t HashTableLookup = Unable to query property {}. It is not scriptable
const uintptr_t ScriptContextResume = Script execution is not allowed in this context | ScriptResumeBlocked
const uintptr_t FlogDataBank = WindowsRealtimeProtocolEnabled
const uintptr_t Print = Current identity is %d
const uintptr_t KTable = Trying to call method on object of type: `%s` with incorrect arguments.
const uintptr_t LockViolationInstanceCrash =  LockViolationInstanceCrash 
const uintptr_t luaH_dummynode = Attempt to migrate WeakObjectRef across VM boundary
const uintptr_t TaskSchedulerTargetFps = TaskSchedulerTargetFps
const uintptr_t OpcodeLookupTable = ; R%d: %s%s from %d to %d
const uintptr_t FireTouchInterest = new overlap in different world
const uintptr_t GetGlobalState = Script Start
const uintptr_t GetFFlag = _DataCenterFilter

// some new ones (tested on version-5cf2272675e145f5)
const uintptr_t print = Breakpoint %s:%d ignored: %s
const uintptr_t luaL_register = name conflict for module '%s'
const uintptr_t luaH_dummynode = "{\"type\":\"table\",\"cat\":%d,\"size\":%d" // can use ,\"pairs\":[ and \"%p\" and ,\"metatable\": and more too
const uintptr_t overlap = new overlap in different world // look for a number, convert it to hex
const uintptr_t Register = Local player already exists
const uintptr_t RobloxLogCrash = Invalid Facet Access
const uintptr_t coroutine.close = cannot close %s coroutine
const uintptr_t luaB_newproxy = nil or boolean
const uintptr_t luaB_pcallrun = xpcall
const uintptr_t luaB_pcall = pcall
const uintptr_t luaB_setmetatable = cannot change a protected metatable
const uintptr_t luaB_setfenv = 'setfenv' cannot change environment of given object
const uintptr_t luaB_tonumber = base out of range
const uintptr_t luaB_rawlen = table or string expected
const uintptr_t luaB_getmetatable = __metatable // func at xref
const uintptr_t luaL_getmetafield = __metatable // first call in func
const uintptr_t luaopen_base = xpcall
const uintptr_t luaB_assert = assertion failed!
const uintptr_t lua_pushfstringL = %s: bytecode version mismatch (expected [%d..%d], got %d) // call after xref
const uintptr_t luaV_gettable = '__index' chain too long; possible loop
const uintptr_t luaV_settable = '__newindex' chain too long; possible loop
const uintptr_t lua_break = attempt to break across metamethod/C-call boundary
const uintptr_t lua_yield = attempt to yield across metamethod/C-call boundary
const uintptr_t luaG_runerrorl = '__index' chain too long; possible loop // call after xref
const uintptr_t luaopen_math = sqrt2 // func at xre´f
const uintptr_t lua_setfield = sqrt2 // call after xref
const uintptr_t luaL_typeerrorL = invalid argument #%d to '%s' (%s expected, got %s)
const uintptr_t luaL_argerrorl = invalid argument #%d to '%s' (%s)
const uintptr_t pusherror = error in error handling // func at xref
const uintptr_t f_luaopen = error in error handling // second func at xref
//
const uintptr_t InstancePush = Binding does not exist // figure it out yourself, not that hard
const uintptr_t ClassDescriptor = Could not find property descriptor // figure it out yourslelf
const uintptr_t GetProperty = Could not find property descriptor // figure it out yourself
const uintptr_t JobName = HumanoidParallelManagerTaskQueue // 3rd qword in func
const uintptr_t RawScheduler = HumanoidParallelManagerTaskQueue // dword before xref
const uintptr_t MaxFps = Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value // figure it out
const uintptr_t TaskSchedulerPointer = Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value // figure it out
const uintptr_t JobsEnd = Out of arbiter nodes: Increase the FInt::TaskSchedulerMaxNumOfArbiters value // figure it out
const uintptr_t JobsStart = TaskScheduler // 2nd qword in func i think 
const uintptr_t ScriptContextResume = "Can't resume script in this context" // func at xref
const uintptr_t ScriptContextToResume = "Can't resume script in this context" // figure it out
const uintptr_t RequireBypass = "Cannot require a non-RobloxScript module from a RobloxScript" // i think
//
const uintptr_t BitMap = 0x7fffffffffff // constant in RobloxPlayerBeta.dll
const uintptr_t ControlFlowGuard = 0x7fffffffffff // constant in RobloxPlayerBeta.dll
// unsure ones:
const uintptr_t SetFFlag = [FLog::ResetFilters] ApplyFilteredVariables resetting {} to {} // i think
const uintptr_t GetFFlag = GetFFlag // i think
const uintptr_t WndProcessCheck = WndProcessCheck // i think
const uintptr_t LuaStepIntervalMsOverrideEnabled = LuaStepIntervalMsOverrideEnabled // i think
const uintptr_t PhysicsSenderMaxBandwidthBps = PhysicsSenderMaxBandwidthBps // i think
const uintptr_t WebSocketServiceEnableClientCreation = WebSocketServiceEnableClientCreation // i think
const uintptr_t LockViolationScriptCrash = LockViolationScriptCrash // i think

// raknet (tested on version-5cf2272675e145f5)
// 3/4 are accurate
const uintptr_t Send = [DFLog::ReduceMeshDebugLog] ReducedMeshAeroForceModel: original #tris = {} // NOT ACCURATE
const uintptr_t ProcessNetworkPacket = RakPeer::ProcessNetworkPacket
const uintptr_t ReportNetworkError = [DFLog::NetworkTrace] reportPerServerMetric::: sc(%s:%d).state = %d :: returning false
const uintptr_t HandleConnectionState = [DFLog::NetworkTrace] updateServerConnectionState::: sc(%s).old_state = %d -> new_state = %d :: returning false
  
// task lib
const uintptr_t task.defer = task.defer is not available for AuroraScripts
const uintptr_t task.spawn = task.spawn is not available for AuroraScripts
const uintptr_t task.desynchronize = task.desynchronize() may only be called from a script that is a descendant of an Actor
const uintptr_t task.synchronize = task.synchronize() may only be called from a script that is a descendant of an Actor
const uintptr_t task.wait = task.wait is not available for AuroraScripts
const uintptr_t task.cancel = cannot cancel thread

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
const uintptr_t coroutine.close = cannot close %s coroutine
const uintptr_t coroutine.resume = too many arguments to resume

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
