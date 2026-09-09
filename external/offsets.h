/*
 * Dumped With: roblox-dumper 3.6
 * Created by: Jonah (jonahw on Discord)
 * Github: https://git.jonah.cool/jonah/roblox-dumper
 * Roblox Version: version-c5aecda2245e4fae
 * Time Taken: 7583 ms (7.583000 seconds)
 * Total Offsets: 321
 */

#pragma once
#include <cstdint>

// clang-format off
namespace offsets {
    inline constexpr const char* roblox_version = "version-c5aecda2245e4fae";

    namespace AirProperties {
        inline constexpr uintptr_t AirDensity = 0x18;
        inline constexpr uintptr_t GlobalWind = 0x3C;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xB8;
        inline constexpr uintptr_t Decay = 0xC4;
        inline constexpr uintptr_t Density = 0xD0;
        inline constexpr uintptr_t Glare = 0xD4;
        inline constexpr uintptr_t Haze = 0xD8;
        inline constexpr uintptr_t Offset = 0xDC;
    }

    namespace BasePart {
        inline constexpr uintptr_t CastShadow = 0x135;
        inline constexpr uintptr_t Color3 = 0x1A8;
        inline constexpr uintptr_t Locked = 0x136;
        inline constexpr uintptr_t Massless = 0x137;
        inline constexpr uintptr_t Primitive = 0x188;
        inline constexpr uintptr_t Reflectance = 0x10C;
        inline constexpr uintptr_t Shape = 0x1B8;
        inline constexpr uintptr_t Transparency = 0x130;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xB8;
        inline constexpr uintptr_t Size = 0xBC;
        inline constexpr uintptr_t Threshold = 0xC0;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem {
        inline constexpr uintptr_t FileMeshData = 0x28;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xD8;
        inline constexpr uintptr_t CameraSubject = 0xC8;
        inline constexpr uintptr_t FieldOfView = 0x140;
        inline constexpr uintptr_t Position = 0xFC;
        inline constexpr uintptr_t Rotation = 0xD8;
        inline constexpr uintptr_t ViewportInt16 = 0x28C;
        inline constexpr uintptr_t ViewportSize = 0x2CC;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xC8;
        inline constexpr uintptr_t BodyPart = 0x148;
        inline constexpr uintptr_t MeshId = 0xF8;
        inline constexpr uintptr_t OverlayTextureId = 0x128;
    }

    namespace ClassDescriptor {
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Creator = 0x230; // ICreator vtable, [0] = create fn
        inline constexpr uintptr_t EventDescriptors = 0x88;
        inline constexpr uintptr_t FunctionDescriptors = 0xD0;
        inline constexpr uintptr_t PropertyDescriptors = 0x40;
    }

    namespace Creator {
        inline constexpr uintptr_t MapEnd = 0x844F058;
        inline constexpr uintptr_t MapStart = 0x844F050;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x180;
        inline constexpr uintptr_t GameId = 0x188;
        inline constexpr uintptr_t GameLoaded = 0x5D8;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t ServerIP = 0x5C0;
        inline constexpr uintptr_t Workspace = 0x158;
    }

    namespace Descriptor {
        inline constexpr uintptr_t Name = 0x8;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x8DC2258;
        inline constexpr uintptr_t RealDataModel = 0x1F8;
    }

    namespace FileMeshData {
        inline constexpr uintptr_t AabbMax = 0x18C;
        inline constexpr uintptr_t AabbMin = 0x180;
        inline constexpr uintptr_t Faces = 0x30;
        inline constexpr uintptr_t FacesEnd = 0x38;
        inline constexpr uintptr_t Vertices = 0x0;
        inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace Fire {
        inline constexpr uintptr_t FireProximityPrompt = 0x3102650;
    }

    namespace FunctionDescriptor {
        inline constexpr uintptr_t Function = 0x80;
    }

    namespace Functions {
        inline constexpr uintptr_t Clone = 0x1642CE0; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t Destroy = 0x1642D00; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t FindPartOnRay = 0xECE7A0; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t FindPartOnRayWithIgnoreList = 0xECE820; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t FindPartOnRayWithWhitelist = 0xECE8B0; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t FireServer = 0xCAC950; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t Print = 0x1CAB4B0;
        inline constexpr uintptr_t RaisePropertyChanged = 0xF7C720;
        inline constexpr uintptr_t Raycast = 0xEC5D60; // better to resolve at runtime via func descriptors
        inline constexpr uintptr_t SetParent = 0xB21910;
        inline constexpr uintptr_t SetParentInternal = 0x1CF3A00;
        inline constexpr uintptr_t Shapecast = 0xEC7720; // better to resolve at runtime via func descriptors
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0x108;
        inline constexpr uintptr_t AbsoluteRotation = 0xE8;
        inline constexpr uintptr_t AbsoluteSize = 0x114;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x5A8;
        inline constexpr uintptr_t AnchorPoint = 0x558;
        inline constexpr uintptr_t AutomaticSize = 0x560;
        inline constexpr uintptr_t BackgroundColor3 = 0x540;
        inline constexpr uintptr_t BackgroundTransparency = 0x564;
        inline constexpr uintptr_t BorderColor3 = 0x54C;
        inline constexpr uintptr_t BorderMode = 0x568;
        inline constexpr uintptr_t BorderSizePixel = 0x56C;
        inline constexpr uintptr_t ClipsDescendants = 0x5A9;
        inline constexpr uintptr_t GuiState = 0x578;
        inline constexpr uintptr_t Interactable = 0x5AB;
        inline constexpr uintptr_t LayoutOrder = 0x57C;
        inline constexpr uintptr_t Position = 0x510;
        inline constexpr uintptr_t Rotation = 0xE8;
        inline constexpr uintptr_t Selectable = 0x5AC;
        inline constexpr uintptr_t SelectionOrder = 0x598;
        inline constexpr uintptr_t Size = 0x530;
        inline constexpr uintptr_t SizeConstraint = 0x5A0;
        inline constexpr uintptr_t Visible = 0x5AD;
        inline constexpr uintptr_t ZIndex = 0x5A4;
    }

    namespace Highlight {
        inline constexpr uintptr_t Adornee = 0xB8;
        inline constexpr uintptr_t DepthMode = 0x6;
        inline constexpr uintptr_t FillColor = 0xC8;
        inline constexpr uintptr_t FillTransparency = 0xE4;
        inline constexpr uintptr_t OutlineColor = 0xD4;
        inline constexpr uintptr_t OutlineTransparency = 0xEC;
    }

    namespace HopperBin {
        inline constexpr uintptr_t BinType = 0x468;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1D4;
        inline constexpr uintptr_t AutoRotate = 0x1D5;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1D6;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1D7;
        inline constexpr uintptr_t CameraOffset = 0x128;
        inline constexpr uintptr_t DisplayDistanceType = 0x180;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1D8;
        inline constexpr uintptr_t Health = 0x190;
        inline constexpr uintptr_t HealthDisplayDistance = 0x188;
        inline constexpr uintptr_t HealthDisplayType = 0x18C;
        inline constexpr uintptr_t HipHeight = 0x194;
        inline constexpr uintptr_t JumpHeight = 0x1A0;
        inline constexpr uintptr_t JumpPower = 0x1A4;
        inline constexpr uintptr_t MaxHealth = 0x1A8;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1AC;
        inline constexpr uintptr_t NameDisplayDistance = 0x1B0;
        inline constexpr uintptr_t NameOcclusion = 0x1B4;
        inline constexpr uintptr_t RequiresNeck = 0x1DD;
        inline constexpr uintptr_t RigType = 0x1C0;
        inline constexpr uintptr_t SeatPart = 0x108;
        inline constexpr uintptr_t Sit = 0x1DE;
        inline constexpr uintptr_t TargetPoint = 0x14C;
        inline constexpr uintptr_t UseJumpPower = 0x1E0;
        inline constexpr uintptr_t WalkSpeed = 0x1D0;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3B4;
        inline constexpr uintptr_t WalkToPoint = 0x164;
    }

    namespace ICreator {
        inline constexpr uintptr_t Create = 0x0;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xD4;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t Name = 0x8;
        inline constexpr uintptr_t NameContainer = 0x70;
        inline constexpr uintptr_t Parent = 0x68;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xD0;
        inline constexpr uintptr_t Atmosphere = 0x1D8;
        inline constexpr uintptr_t Brightness = 0x118;
        inline constexpr uintptr_t ClockTime = 0xC8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xDC;
        inline constexpr uintptr_t ColorShift_Top = 0xE8;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x11C;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x120;
        inline constexpr uintptr_t ExposureCompensation = 0x124;
        inline constexpr uintptr_t FogColor = 0xF4;
        inline constexpr uintptr_t FogEnd = 0x12C;
        inline constexpr uintptr_t FogStart = 0x130;
        inline constexpr uintptr_t OutdoorAmbient = 0x100;
        inline constexpr uintptr_t ShadowSoftness = 0x13C;
        inline constexpr uintptr_t Sky = 0x1C8;
    }

    namespace LightingParameters { // these are in the lighting service
        inline constexpr uintptr_t GeographicLatitude = 0x134;
        inline constexpr uintptr_t LightColor = 0x15C;
        inline constexpr uintptr_t LightDirection = 0x168;
        inline constexpr uintptr_t SkyAmbient = 0x150;
        inline constexpr uintptr_t SkyAmbient2 = 0x138;
        inline constexpr uintptr_t Source = 0x174;
        inline constexpr uintptr_t TrueMoonPosition = 0x184;
        inline constexpr uintptr_t TrueSunPosition = 0x178;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x190;
        inline constexpr uintptr_t Hash = 0xD0;
    }

    namespace LruHolder {
        inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LruNode {
        inline constexpr uintptr_t CachedItem = 0x38;
        inline constexpr uintptr_t MeshId = 0x10;
        inline constexpr uintptr_t Next = 0x0;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MemEnforcedLRUCache {
        inline constexpr uintptr_t Head = 0x8;
    }

    namespace MeshContentProvider {
        inline constexpr uintptr_t LruHolder = 0xD8;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x310;
        inline constexpr uintptr_t TextureId = 0x340;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x258;
        inline constexpr uintptr_t Scale = 0x144;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x138;
        inline constexpr uintptr_t Hash = 0xD0;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x100;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x35C;
        inline constexpr uintptr_t Character = 0x298;
        inline constexpr uintptr_t DisplayName = 0x138;
        inline constexpr uintptr_t HealthDisplayDistance = 0x394;
        inline constexpr uintptr_t LocaleId = 0x748;
        inline constexpr uintptr_t NameDisplayDistance = 0x3A4;
        inline constexpr uintptr_t Team = 0x2D8;
        inline constexpr uintptr_t TeamColor = 0x3B0;
        inline constexpr uintptr_t UserId = 0xD0;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x130;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x104;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xF8;
        inline constexpr uintptr_t CFrame = 0xC8;
        inline constexpr uintptr_t Material = 0x246;
        inline constexpr uintptr_t Orientation = 0xC8;
        inline constexpr uintptr_t Part = 0x210;
        inline constexpr uintptr_t Position = 0xEC;
        inline constexpr uintptr_t PrimitiveFlags = 0x1B6;
        inline constexpr uintptr_t Rotation = 0xC8;
        inline constexpr uintptr_t Size = 0x1BC;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanQuery = 0x20;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace PropertyDescriptor {
        inline constexpr uintptr_t GetSetImpl = 0x90;
        inline constexpr uintptr_t TType = 0x68;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xB0;
        inline constexpr uintptr_t Enabled = 0x136;
        inline constexpr uintptr_t HoldDuration = 0x120;
        inline constexpr uintptr_t KeyboardKeyCode = 0x124;
        inline constexpr uintptr_t MaxActivationDistance = 0x128;
        inline constexpr uintptr_t ObjectText = 0xD0;
        inline constexpr uintptr_t RequiresLineOfSight = 0x137;
    }

    namespace RenderView {
        inline constexpr uintptr_t DeviceD3D11 = 0x8;
        inline constexpr uintptr_t LightingValid = 0x278;
        inline constexpr uintptr_t SkyboxValid = 0x28D;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x218;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x244;
        inline constexpr uintptr_t MoonTextureId = 0xC8;
        inline constexpr uintptr_t SkyboxBk = 0xF8;
        inline constexpr uintptr_t SkyboxDn = 0x128;
        inline constexpr uintptr_t SkyboxFt = 0x158;
        inline constexpr uintptr_t SkyboxLf = 0x188;
        inline constexpr uintptr_t SkyboxOrientation = 0x238;
        inline constexpr uintptr_t SkyboxRt = 0x1B8;
        inline constexpr uintptr_t SkyboxUp = 0x1E8;
        inline constexpr uintptr_t StarCount = 0x248;
        inline constexpr uintptr_t SunAngularSize = 0x24C;
        inline constexpr uintptr_t SunTextureId = 0x218;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0xF8;
        inline constexpr uintptr_t Offset = 0xB8;
        inline constexpr uintptr_t Scale = 0xC4;
        inline constexpr uintptr_t TextureId = 0x128;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xB8;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1F0;
        inline constexpr uintptr_t MaterialColors = 0x4B8;
        inline constexpr uintptr_t WaterColor = 0x1E0;
        inline constexpr uintptr_t WaterReflectance = 0x1F8;
        inline constexpr uintptr_t WaterTransparency = 0x1FC;
        inline constexpr uintptr_t WaterWaveSize = 0x200;
        inline constexpr uintptr_t WaterWaveSpeed = 0x204;
    }

    namespace TextButton {
        inline constexpr uintptr_t AutoButtonColor = 0x9DC;
        inline constexpr uintptr_t ContentText = 0xE18;
        inline constexpr uintptr_t LineHeight = 0xF30;
        inline constexpr uintptr_t LocalizedText = 0xE18;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x114C;
        inline constexpr uintptr_t Modal = 0x9DD;
        inline constexpr uintptr_t RichText = 0x102E;
        inline constexpr uintptr_t Selected = 0x9DE;
        inline constexpr uintptr_t Text = 0xE18;
        inline constexpr uintptr_t TextColor3 = 0x1130;
        inline constexpr uintptr_t TextDirection = 0xFD0;
        inline constexpr uintptr_t TextScaled = 0xE01;
        inline constexpr uintptr_t TextSize = 0x1154;
        inline constexpr uintptr_t TextStrokeColor3 = 0x113C;
        inline constexpr uintptr_t TextStrokeTransparency = 0x1158;
        inline constexpr uintptr_t TextTransparency = 0x115C;
        inline constexpr uintptr_t TextTruncate = 0x1029;
        inline constexpr uintptr_t TextWrapped = 0x1028;
        inline constexpr uintptr_t TextXAlignment = 0x1164;
        inline constexpr uintptr_t TextYAlignment = 0xF78;
    }

    namespace TextLabel {
        inline constexpr uintptr_t ContentText = 0xB98;
        inline constexpr uintptr_t LineHeight = 0xCB0;
        inline constexpr uintptr_t LocalizedText = 0xB98;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0xECC;
        inline constexpr uintptr_t RichText = 0xDAE;
        inline constexpr uintptr_t Text = 0xB98;
        inline constexpr uintptr_t TextColor3 = 0xEB0;
        inline constexpr uintptr_t TextDirection = 0xD50;
        inline constexpr uintptr_t TextScaled = 0xDA6;
        inline constexpr uintptr_t TextSize = 0xED4;
        inline constexpr uintptr_t TextStrokeColor3 = 0xEBC;
        inline constexpr uintptr_t TextStrokeTransparency = 0xED8;
        inline constexpr uintptr_t TextTransparency = 0xEDC;
        inline constexpr uintptr_t TextTruncate = 0xEE0;
        inline constexpr uintptr_t TextWrapped = 0xDA6;
        inline constexpr uintptr_t TextXAlignment = 0xEE4;
        inline constexpr uintptr_t TextYAlignment = 0xCF8;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x4B8;
        inline constexpr uintptr_t Enabled = 0x4B9;
        inline constexpr uintptr_t Grip = 0x488;
        inline constexpr uintptr_t GripForward = 0x4A0;
        inline constexpr uintptr_t GripPos = 0x4AC;
        inline constexpr uintptr_t GripRight = 0x488;
        inline constexpr uintptr_t GripUp = 0x494;
        inline constexpr uintptr_t ManualActivationOnly = 0x4BA;
        inline constexpr uintptr_t RequiresHandle = 0x4BB;
        inline constexpr uintptr_t Tooltip = 0x468;
    }

    namespace Types {
        inline constexpr uintptr_t AllTypes = 0x89482B8;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xB8;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x228;
        inline constexpr uintptr_t Occupant = 0x208;
        inline constexpr uintptr_t SteerFloat = 0x22C;
        inline constexpr uintptr_t ThrottleFloat = 0x230;
        inline constexpr uintptr_t Torque = 0x234;
        inline constexpr uintptr_t TurnSpeed = 0x238;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xB10;
        inline constexpr uintptr_t FakeDataModel = 0xAF0;
        inline constexpr uintptr_t Pointer = 0x83F0A08;
        inline constexpr uintptr_t RenderView = 0xC30;
        inline constexpr uintptr_t ViewMatrix = 0x1B0;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x4B8;
        inline constexpr uintptr_t ReadOnlyGravity = 0xA00;
        inline constexpr uintptr_t World = 0x410;
    }

    namespace World {
        inline constexpr uintptr_t AirProperties = 0x240;
        inline constexpr uintptr_t Gravity = 0x228;
        inline constexpr uintptr_t Primitives = 0x2B0;
        inline constexpr uintptr_t WorldSteps = 0x728;
    }

} // namespace offsets

namespace enums {
    enum class ReflectionType : int {
        Null = 0x0,
        Bool = 0x1,
        Int = 0x2,
        Int64 = 0x3,
        Float = 0x4,
        Double = 0x5,
        String = 0x6,
        ProtectedString = 0x7,
        Instance = 0x8,
        Instances = 0x9,
        Ray = 0xA,
        Vector2 = 0xB,
        Vector3 = 0xC,
        Vector2int16 = 0xD,
        Vector3int16 = 0xE,
        Rect2D = 0xF,
        CoordinateFrame = 0x10,
        Color3 = 0x11,
        Color3uint8 = 0x12,
        UDim = 0x13,
        UDim2 = 0x14,
        Faces = 0x15,
        Axes = 0x16,
        Region3 = 0x17,
        Region3int16 = 0x18,
        CellId = 0x19,
        GuidData = 0x1A,
        PhysicalProperties = 0x1B,
        BrickColor = 0x1C,
        SystemAddress = 0x1D,
        BinaryString = 0x1E,
        Surface = 0x1F,
        CollectionHandle = 0x20,
        Enum = 0x21,
        Property = 0x22,
        Tuple = 0x23,
        Array = 0x24,
        Dictionary = 0x25,
        Map = 0x26,
        Variant = 0x27,
        GenericFunction = 0x28,
        Function = 0x29,
        ColorSequence = 0x2A,
        ColorSequenceKeypoint = 0x2B,
        NumberRange = 0x2C,
        NumberSequence = 0x2D,
        NumberSequenceKeypoint = 0x2E,
        Connection = 0x30,
        ContentId = 0x31,
        DescribedBase = 0x32,
        RefType = 0x33,
        EventInstance = 0x36,
        TweenInfo = 0x37,
        DockWidgetPluginGuiInfo = 0x38,
        PluginDrag = 0x39,
        Random = 0x3A,
        PathWaypoint = 0x3B,
        FloatCurveKey = 0x3C,
        RotationCurveKey = 0x3D,
        ValueCurveKey = 0x3E,
        SharedString = 0x3F,
        DateTime = 0x40,
        RaycastParams = 0x41,
        RaycastResult = 0x42,
        OverlapParams = 0x43,
        LazyTable = 0x44,
        DebugTable = 0x45,
        CatalogSearchParams = 0x46,
        OptionalCoordinateFrame = 0x47,
        CSGPropertyData = 0x48,
        UniqueId = 0x49,
        Font = 0x4A,
        SharedTable = 0x4B,
        SharedTableIterator = 0x4C,
        AnimationMask = 0x4D,
        AnimationPose = 0x4E,
        ClipEvaluator = 0x4F,
        OpenCloudModel = 0x50,
        InstanceRef = 0x51,
        SecurityCapabilities = 0x52,
        ArticulatedJoint = 0x53,
        AnimationContext = 0x54,
        Secret = 0x55,
        Buffer = 0x56,
        Integer = 0x57,
        Path2DControlPoint = 0x58,
        ReplicationPV = 0x59,
        FacsReplicationData = 0x5A,
        AnimationMaskModifier = 0x5B,
        Content = 0x5C,
        NetAssetHandle = 0x5D,
        NetAssetRef = 0x5E,
        Object = 0x5F,
        AdReward = 0x60,
        AssetContentMap = 0x61,
        SlimReplicationData = 0x62,
        User = 0x63,
        WebViewParams = 0x64,
        AnimTrackPlayState = 0x65,
        AnimTrackMetadata = 0x66,
        AnimTrackWeight = 0x67,
        ScopedInstanceIdentity = 0x68,
    };

} // namespace enums
