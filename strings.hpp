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

// some new ones
const uintptr_t Print = Breakpoint %s:%d ignored: %s

// task lib
const uintptr_t task.defer = task.defer is not available for AuroraScripts
const uintptr_t task.spawn = task.spawn is not available for AuroraScripts
const uintptr_t task.desynchronize = task.desynchronize() may only be called from a script that is a descendant of an Actor
const uintptr_t task.synchronize = task.synchronize() may only be called from a script that is a descendant of an Actor
const uintptr_t task.wait = task.wait is not available for AuroraScripts

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
 * and these are all offsets for the task lib ez im so tuff (found ts by myself accidentally
 */
