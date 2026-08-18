/*
  n
  i
  c
  k
  
  everyone just thinks i am a stupid mf
  but well
  i just ignore that and do my stuff
*/

// 10 stars on this shit and ill add more strings

// some new ones (tested on version-5cf2272675e145f5)
const uintptr_t print = Breakpoint %s:%d ignored: %s
const uintptr_t luaL_register = name conflict for module '%s'
const uintptr_t luaH_dummynode = "{\"type\":\"table\",\"cat\":%d,\"size\":%d" // can use ,\"pairs\":[ and \"%p\" and ,\"metatable\": and more too
const uintptr_t overlap = new overlap in different world // look for a number, convert it to hex (e.g. if u see 504 and press h its 0x1f8 so thats the overlap offset)
const uintptr_t Register = Local player already exists
const uintptr_t RobloxLogCrash = Invalid Facet Access // sub_4AF5610(0, "Invalid Facet Access"); like this
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
const uintptr_t luaV_settable = '__newindex' chain too long; possible loop // theres luaO_nilobject in here btw :v:
const uintptr_t lua_break = attempt to break across metamethod/C-call boundary
const uintptr_t lua_yield = attempt to yield across metamethod/C-call boundary // small func is it but bigger func is Instance::WaitForChild
const uintptr_t luaG_runerrorl = '__index' chain too long; possible loop // call after xref
const uintptr_t luaopen_math = sqrt2 // func at xre´f
const uintptr_t lua_setfield = sqrt2 // call after xref
const uintptr_t luaL_typeerrorL = invalid argument #%d to '%s' (%s expected, got %s)
const uintptr_t luaL_argerrorl = invalid argument #%d to '%s' (%s)
const uintptr_t pusherror = error in error handling // func at xref
const uintptr_t f_luaopen = error in error handling // second func at xref
const uintptr_t GetFFlag = [FLog::ResetFilters] ParseAndSetFilterValue saving {} = {} for {} // 
/*
    if ( (unsigned __int8)sub_4B27090(a1, a2, Src, v21, a5) )// GetFFlag
    {
      if ( (unsigned __int8)xmmword_7956BE0 >= 6u && BYTE1(xmmword_7956BE0) >= 5u )
      {
        v36 = "[FLog::ResetFilters] ParseAndSetFilterValue saving {} = {} for {}";
*/
const uintptr_t SetFFlag = [FLog::FastLogValueChanged] Setting variable {} // func at xref
const uintptr_t GetTlsPointer = AggregateBroadphaseGrids // return call (click on it and it returns gettlspointer)
const uintptr_t GetIdentityStruct = GetStyled(): Property %s is write-only // second call in func
const uintptr_t IdentityPtr = GetStyled(): Property %s is write-only // go into GetIdentityStruct (double click it) and it returns the IdentityPtr to GetTlsPointer
//
const uintptr_t InstancePush = Binding does not exist // figure it out yourself
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
//
const uintptr_t BitMap = 0x7fffffffffff // constant in RobloxPlayerBeta.dll
const uintptr_t ControlFlowGuard = 0x7fffffffffff // constant in RobloxPlayerBeta.dll

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

// and because for some reason people cant dump reflection types:
const uintptr_t ReflectionTypes = ProtectedString // use ur brain
// look at ts: (cleaned up a little bit)
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
        case 10: return "Ray";
        case 11: return "Vector2";
        case 12: return "Vector3";
        case 13: return "Vector2Int16";
        case 14: return "Vector3Int16";
        case 15: return "Rect2d";
        case 16: return "CoordinateFrame";
        case 17: return "Color3";
        case 18: return "Color3uint8";
        case 19: return "UDim";
        case 20: return "UDim2";
        case 21: return "Faces";
        case 22: return "Axes";
        case 23: return "Region3";
        case 24: return "Region3Int16";
        case 25: return "CellId";
        case 26: return "GuidData";
        case 27: return "PhysicalProperties";
        case 28: return "BrickColor";
        case 29: return "SystemAddress";
        case 30: return "BinaryString";
        case 31: return "Surface";
        case 32: return "CollectionHandle";
        case 33: return "Enum";
        case 34: return "Property";
        case 35: return "Tuple";
        case 36: return "ValueArray";
        case 37: return "ValueTable";
        case 38: return "ValueMap";
        case 39: return "Variant";
        case 40: return "GenericFunction";
        case 41: return "WeakFunctionRef";
        case 42: return "ColorSequence";
        case 43: return "ColorSequenceKeypoint";
        case 44: return "NumberRange";
        case 45: return "NumberSequence";
        case 46: return "NumberSequenceKeypoint";
        case 47: return "InputObject";
        case 48: return "Connection";
        case 49: return "ContentId";
        case 50: return "DescribedBase";
        case 51: return "RefType";
        case 52: return "QFont";
        case 53: return "QDir";
        case 54: return "EventInstance";
        case 55: return "TweenInfo";
        case 56: return "DockWidgetPluginGuiInfo";
        case 57: return "PluginDrag";
        case 58: return "Random";
        case 59: return "PathWaypoint";
        case 60: return "FloatCurveKey";
        case 61: return "RotationCurveKey";
        case 62: return "ValueCurveKey";
        case 63: return "SharedString";
        case 64: return "DateTime";
        case 65: return "RaycastParams";
        case 66: return "RaycastResult";
        case 67: return "OverlapParams";
        case 68: return "LazyTable";
        case 69: return "DebugTable";
        case 70: return "CatalogSearchParams";
        case 71: return "OptionalCoordinateFrame";
        case 72: return "CSGPropertyData";
        case 73: return "UniqueId";
        case 74: return "Font";
        case 75: return "SharedTable";
        case 76: return "SharedTableIterator";
        case 77: return "AnimationMask";
        case 78: return "AnimationPose";
        case 79: return "ClipEvaluator";
        case 80: return "OpenCloudModel";
        case 81: return "InstanceRef";
        case 82: return "SecurityCapabilities";
        case 83: return "ArticulatedJoint";
        case 84: return "AnimationContext";
        case 85: return "Secret";
        case 86: return "Buffer";
        case 87: return "Integer";
        case 88: return "Path2DControlPoint";
        case 89: return "ReplicationPV";
        case 90: return "FacsReplicationData";
        case 91: return "AnimationMaskModifier";
        case 92: return "Content";
        case 93: return "NetAssetHandle";
        case 94: return "NetAssetRef";
        case 95: return "Object";
        case 96: return "AdReward";
        case 97: return "AssetContentMap";
        case 98: return "SlimReplicationData";
        case 99: return "User";
        case 100: return "WebViewParams";
        case 101: return "AnimTrackPlayState";
        case 102: return "AnimTrackMetadata";
        case 103: return "AnimTrackWeight";
        case 104: return "ScopedInstanceIdentity";
        case 105: return (char *)&word_6B5E060;
        default: return &byte_61058A5;
    }
}
