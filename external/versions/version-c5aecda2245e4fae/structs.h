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
#pragma pack(push, 1)
namespace structs {

    struct AirProperties {
        char pad_0[0x18];
        float AirDensity;  // 0x18
        char pad_1[0x20];
        Vector3 GlobalWind;  // 0x3C
    };  // sizeof = 0x48

    struct Atmosphere {
        char pad_0[0xB8];
        Color3 Color;  // 0xB8
        Color3 Decay;  // 0xC4
        float Density;  // 0xD0
        float Glare;  // 0xD4
        float Haze;  // 0xD8
        float Offset;  // 0xDC
    };  // sizeof = 0xE0

    struct BasePart {
        char pad_0[0x10C];
        float Reflectance;  // 0x10C
        char pad_1[0x20];
        float Transparency;  // 0x130
        char pad_2[0x1];
        bool CastShadow;  // 0x135
        bool Locked;  // 0x136
        bool Massless;  // 0x137
        char pad_3[0x50];
        uintptr_t Primitive;  // 0x188
        char pad_4[0x18];
        Color3 Color3;  // 0x1A8
        char pad_5[0x4];
        uint8_t Shape;  // 0x1B8
    };  // sizeof = 0x1B9

    struct BloomEffect {
        char pad_0[0xB8];
        float Intensity;  // 0xB8
        float Size;  // 0xBC
        float Threshold;  // 0xC0
    };  // sizeof = 0xC4

    struct ByteCode {
        char pad_0[0x10];
        uintptr_t Pointer;  // 0x10
    };  // sizeof = 0x18

    struct CachedItem {
        char pad_0[0x28];
        uintptr_t FileMeshData;  // 0x28
    };  // sizeof = 0x30

    struct Camera {
        char pad_0[0xC8];
        uintptr_t CameraSubject;  // 0xC8
        char pad_1[0x8];
        CFrame CFrame;  // 0xD8
        char pad_2[0x38];
        float FieldOfView;  // 0x140
        char pad_3[0x188];
        Vector2 ViewportSize;  // 0x2CC
    };  // sizeof = 0x2D4

    struct CharacterMesh {
        char pad_0[0x148];
        uint8_t BodyPart;  // 0x148
    };  // sizeof = 0x149

    struct ClassDescriptor {
        char pad_0[0x40];
        uintptr_t PropertyDescriptors;  // 0x40
        char pad_1[0x40];
        uintptr_t EventDescriptors;  // 0x88
        char pad_2[0x40];
        uintptr_t FunctionDescriptors;  // 0xD0
        char pad_3[0x158];
        uintptr_t Creator;  // 0x230  ICreator vtable, [0] = create fn
    };  // sizeof = 0x238

    struct DataModel {
        char pad_0[0x118];
        uintptr_t JobId;  // 0x118
        char pad_1[0x38];
        uintptr_t Workspace;  // 0x158
        char pad_2[0x20];
        uint64_t CreatorId;  // 0x180
        uint64_t GameId;  // 0x188
        uint64_t PlaceId;  // 0x190
        char pad_3[0x428];
        uintptr_t ServerIP;  // 0x5C0
        char pad_4[0x10];
        uint32_t GameLoaded;  // 0x5D8
    };  // sizeof = 0x5DC

    struct Descriptor {
        char pad_0[0x8];
        uintptr_t Name;  // 0x8
    };  // sizeof = 0x10

    struct FakeDataModel {
        char pad_0[0x1F8];
        uintptr_t RealDataModel;  // 0x1F8
    };  // sizeof = 0x200

    struct FileMeshData {
        uintptr_t Vertices;  // 0x0
        uintptr_t VerticesEnd;  // 0x8
        char pad_0[0x20];
        uintptr_t Faces;  // 0x30
        uintptr_t FacesEnd;  // 0x38
        char pad_1[0x140];
        Vector3 AabbMin;  // 0x180
        Vector3 AabbMax;  // 0x18C
    };  // sizeof = 0x198

    struct FunctionDescriptor {
        char pad_0[0x80];
        uintptr_t Function;  // 0x80
    };  // sizeof = 0x88

    struct GuiBase2D {
        char pad_0[0xE8];
        float AbsoluteRotation;  // 0xE8
        char pad_1[0x1C];
        Vector2 AbsolutePosition;  // 0x108
        char pad_2[0x4];
        Vector2 AbsoluteSize;  // 0x114
    };  // sizeof = 0x11C

    struct GuiObject {
        char pad_0[0xE8];
        float Rotation;  // 0xE8
        char pad_1[0x454];
        Color3 BackgroundColor3;  // 0x540
        Color3 BorderColor3;  // 0x54C
        Vector2 AnchorPoint;  // 0x558
        uint8_t AutomaticSize;  // 0x560
        char pad_2[0x3];
        float BackgroundTransparency;  // 0x564
        uint8_t BorderMode;  // 0x568
        char pad_3[0x3];
        int32_t BorderSizePixel;  // 0x56C
        char pad_4[0x8];
        uint8_t GuiState;  // 0x578
        char pad_5[0x3];
        int32_t LayoutOrder;  // 0x57C
        char pad_6[0x18];
        int32_t SelectionOrder;  // 0x598
        char pad_7[0x4];
        uint8_t SizeConstraint;  // 0x5A0
        char pad_8[0x3];
        int32_t ZIndex;  // 0x5A4
        bool Active;  // 0x5A8
        bool ClipsDescendants;  // 0x5A9
        char pad_9[0x1];
        bool Interactable;  // 0x5AB
        bool Selectable;  // 0x5AC
        bool Visible;  // 0x5AD
    };  // sizeof = 0x5AE

    struct Highlight {
        char pad_0[0x6];
        uint8_t DepthMode;  // 0x6
        char pad_1[0xB1];
        uintptr_t Adornee;  // 0xB8
        char pad_2[0x8];
        Color3 FillColor;  // 0xC8
        Color3 OutlineColor;  // 0xD4
        char pad_3[0x4];
        float FillTransparency;  // 0xE4
        char pad_4[0x4];
        float OutlineTransparency;  // 0xEC
    };  // sizeof = 0xF0

    struct HopperBin {
        char pad_0[0x468];
        uint32_t BinType;  // 0x468
    };  // sizeof = 0x46C

    struct Humanoid {
        char pad_0[0x108];
        uintptr_t SeatPart;  // 0x108
        char pad_1[0x18];
        Vector3 CameraOffset;  // 0x128
        char pad_2[0x18];
        Vector3 TargetPoint;  // 0x14C
        char pad_3[0xC];
        Vector3 WalkToPoint;  // 0x164
        char pad_4[0x10];
        uint8_t DisplayDistanceType;  // 0x180
        char pad_5[0x7];
        float HealthDisplayDistance;  // 0x188
        uint8_t HealthDisplayType;  // 0x18C
        char pad_6[0x3];
        float Health;  // 0x190
        float HipHeight;  // 0x194
        char pad_7[0x8];
        float JumpHeight;  // 0x1A0
        float JumpPower;  // 0x1A4
        float MaxHealth;  // 0x1A8
        float MaxSlopeAngle;  // 0x1AC
        float NameDisplayDistance;  // 0x1B0
        uint8_t NameOcclusion;  // 0x1B4
        char pad_8[0xB];
        uint8_t RigType;  // 0x1C0
        char pad_9[0xF];
        float WalkSpeed;  // 0x1D0
        bool AutoJumpEnabled;  // 0x1D4
        bool AutoRotate;  // 0x1D5
        bool AutomaticScalingEnabled;  // 0x1D6
        bool BreakJointsOnDeath;  // 0x1D7
        bool EvaluateStateMachine;  // 0x1D8
        char pad_10[0x4];
        bool RequiresNeck;  // 0x1DD
        bool Sit;  // 0x1DE
        char pad_11[0x1];
        bool UseJumpPower;  // 0x1E0
        char pad_12[0x1D3];
        float WalkSpeedCheck;  // 0x3B4
    };  // sizeof = 0x3B8

    struct InputObject {
        char pad_0[0xD4];
        Vector2 MousePosition;  // 0xD4
    };  // sizeof = 0xDC

    struct Instance {
        char pad_0[0x18];
        uintptr_t ClassDescriptor;  // 0x18
        char pad_1[0x48];
        uintptr_t Parent;  // 0x68
        uintptr_t NameContainer;  // 0x70
        uintptr_t ChildrenStart;  // 0x78
    };  // sizeof = 0x80

    struct Lighting {
        char pad_0[0xC8];
        uint64_t ClockTime;  // 0xC8
        Color3 Ambient;  // 0xD0
        Color3 ColorShift_Bottom;  // 0xDC
        Color3 ColorShift_Top;  // 0xE8
        Color3 FogColor;  // 0xF4
        Color3 OutdoorAmbient;  // 0x100
        char pad_1[0xC];
        float Brightness;  // 0x118
        float EnvironmentDiffuseScale;  // 0x11C
        float EnvironmentSpecularScale;  // 0x120
        float ExposureCompensation;  // 0x124
        char pad_2[0x4];
        float FogEnd;  // 0x12C
        float FogStart;  // 0x130
        char pad_3[0x8];
        float ShadowSoftness;  // 0x13C
        char pad_4[0x88];
        uintptr_t Sky;  // 0x1C8
        char pad_5[0x8];
        uintptr_t Atmosphere;  // 0x1D8
    };  // sizeof = 0x1E0

    struct LightingParameters {
        char pad_0[0x134];
        float GeographicLatitude;  // 0x134
        Vector3 SkyAmbient2;  // 0x138
        char pad_1[0xC];
        Vector3 SkyAmbient;  // 0x150
        Vector3 LightColor;  // 0x15C
        Vector3 LightDirection;  // 0x168
        uint8_t Source;  // 0x174
        char pad_2[0x3];
        Vector3 TrueSunPosition;  // 0x178
        Vector3 TrueMoonPosition;  // 0x184
    };  // sizeof = 0x190

    struct LocalScript {
        char pad_0[0xD0];
        uintptr_t Hash;  // 0xD0
        char pad_1[0xB8];
        uintptr_t Bytecode;  // 0x190
    };  // sizeof = 0x198

    struct LruHolder {
        char pad_0[0x20];
        uintptr_t MemEnforcedLRUCache;  // 0x20
    };  // sizeof = 0x28

    struct LruNode {
        uintptr_t Next;  // 0x0
        char pad_0[0x8];
        uintptr_t MeshId;  // 0x10
        char pad_1[0x20];
        uintptr_t CachedItem;  // 0x38
    };  // sizeof = 0x40

    struct MemEnforcedLRUCache {
        char pad_0[0x8];
        uintptr_t Head;  // 0x8
    };  // sizeof = 0x10

    struct MeshContentProvider {
        char pad_0[0xD8];
        uintptr_t LruHolder;  // 0xD8
    };  // sizeof = 0xE0

    struct Model {
        char pad_0[0x144];
        float Scale;  // 0x144
        char pad_1[0x110];
        uintptr_t PrimaryPart;  // 0x258
    };  // sizeof = 0x260

    struct ModuleScript {
        char pad_0[0xD0];
        uintptr_t Hash;  // 0xD0
        char pad_1[0x60];
        uintptr_t Bytecode;  // 0x138
    };  // sizeof = 0x140

    struct MouseService {
        char pad_0[0x100];
        uintptr_t InputObject;  // 0x100
    };  // sizeof = 0x108

    struct Player {
        char pad_0[0xD0];
        uint64_t UserId;  // 0xD0
        char pad_1[0x1C0];
        uintptr_t Character;  // 0x298
        char pad_2[0x38];
        uintptr_t Team;  // 0x2D8
        char pad_3[0x7C];
        uint32_t AccountAge;  // 0x35C
        char pad_4[0x34];
        float HealthDisplayDistance;  // 0x394
        char pad_5[0xC];
        float NameDisplayDistance;  // 0x3A4
        char pad_6[0x8];
        uint32_t TeamColor;  // 0x3B0
    };  // sizeof = 0x3B4

    struct Players {
        char pad_0[0x130];
        uintptr_t LocalPlayer;  // 0x130
    };  // sizeof = 0x138

    struct Primitive {
        char pad_0[0xC8];
        CFrame CFrame;  // 0xC8
        Vector3 AssemblyLinearVelocity;  // 0xF8
        Vector3 AssemblyAngularVelocity;  // 0x104
        char pad_1[0xA6];
        uint8_t PrimitiveFlags;  // 0x1B6
        char pad_2[0x5];
        Vector3 Size;  // 0x1BC
        char pad_3[0x48];
        uintptr_t Part;  // 0x210
        char pad_4[0x2E];
        uint16_t Material;  // 0x246
    };  // sizeof = 0x248

    struct PropertyDescriptor {
        char pad_0[0x68];
        uintptr_t TType;  // 0x68
        char pad_1[0x20];
        uintptr_t GetSetImpl;  // 0x90
    };  // sizeof = 0x98

    struct ProximityPrompt {
        char pad_0[0x120];
        float HoldDuration;  // 0x120
        uint32_t KeyboardKeyCode;  // 0x124
        float MaxActivationDistance;  // 0x128
        char pad_1[0xA];
        bool Enabled;  // 0x136
        bool RequiresLineOfSight;  // 0x137
    };  // sizeof = 0x138

    struct RenderView {
        char pad_0[0x8];
        uintptr_t DeviceD3D11;  // 0x8
        char pad_1[0x268];
        uint16_t LightingValid;  // 0x278
        char pad_2[0x13];
        uint16_t SkyboxValid;  // 0x28D
    };  // sizeof = 0x28F

    struct Seat {
        char pad_0[0x218];
        uintptr_t Occupant;  // 0x218
    };  // sizeof = 0x220

    struct Sky {
        char pad_0[0x238];
        Vector3 SkyboxOrientation;  // 0x238
        float MoonAngularSize;  // 0x244
        uint32_t StarCount;  // 0x248
        float SunAngularSize;  // 0x24C
    };  // sizeof = 0x250

    struct SpecialMesh {
        char pad_0[0xB8];
        Vector3 Offset;  // 0xB8
        Vector3 Scale;  // 0xC4
    };  // sizeof = 0xD0

    struct Team {
        char pad_0[0xB8];
        uint32_t TeamColor;  // 0xB8
    };  // sizeof = 0xBC

    struct Terrain {
        char pad_0[0x1E0];
        Color3 WaterColor;  // 0x1E0
        char pad_1[0x4];
        float GrassLength;  // 0x1F0
        char pad_2[0x4];
        float WaterReflectance;  // 0x1F8
        float WaterTransparency;  // 0x1FC
        float WaterWaveSize;  // 0x200
        float WaterWaveSpeed;  // 0x204
        char pad_3[0x2B0];
        uintptr_t MaterialColors;  // 0x4B8
    };  // sizeof = 0x4C0

    struct TextButton {
        char pad_0[0x9DC];
        bool AutoButtonColor;  // 0x9DC
        bool Modal;  // 0x9DD
        bool Selected;  // 0x9DE
        char pad_1[0x422];
        bool TextScaled;  // 0xE01
        char pad_2[0x12E];
        float LineHeight;  // 0xF30
        char pad_3[0x44];
        uint8_t TextYAlignment;  // 0xF78
        char pad_4[0x57];
        uint8_t TextDirection;  // 0xFD0
        char pad_5[0x57];
        bool TextWrapped;  // 0x1028
        uint8_t TextTruncate;  // 0x1029
        char pad_6[0x4];
        bool RichText;  // 0x102E
        char pad_7[0x101];
        Color3 TextColor3;  // 0x1130
        Color3 TextStrokeColor3;  // 0x113C
        char pad_8[0x4];
        int32_t MaxVisibleGraphemes;  // 0x114C
        char pad_9[0x4];
        float TextSize;  // 0x1154
        float TextStrokeTransparency;  // 0x1158
        float TextTransparency;  // 0x115C
        char pad_10[0x4];
        uint8_t TextXAlignment;  // 0x1164
    };  // sizeof = 0x1165

    struct TextLabel {
        char pad_0[0xCB0];
        float LineHeight;  // 0xCB0
        char pad_1[0x44];
        uint8_t TextYAlignment;  // 0xCF8
        char pad_2[0x57];
        uint8_t TextDirection;  // 0xD50
        char pad_3[0x55];
        bool TextScaled;  // 0xDA6
        char pad_4[0x7];
        bool RichText;  // 0xDAE
        char pad_5[0x101];
        Color3 TextColor3;  // 0xEB0
        Color3 TextStrokeColor3;  // 0xEBC
        char pad_6[0x4];
        int32_t MaxVisibleGraphemes;  // 0xECC
        char pad_7[0x4];
        float TextSize;  // 0xED4
        float TextStrokeTransparency;  // 0xED8
        float TextTransparency;  // 0xEDC
        uint8_t TextTruncate;  // 0xEE0
        char pad_8[0x3];
        uint8_t TextXAlignment;  // 0xEE4
        // overlapping aliases:
        // TextWrapped = 0xDA6 (bool)
    };  // sizeof = 0xEE5

    struct Tool {
        char pad_0[0x488];
        CFrame Grip;  // 0x488
        bool CanBeDropped;  // 0x4B8
        bool Enabled;  // 0x4B9
        bool ManualActivationOnly;  // 0x4BA
        bool RequiresHandle;  // 0x4BB
    };  // sizeof = 0x4BC

    struct VehicleSeat {
        char pad_0[0x208];
        uintptr_t Occupant;  // 0x208
        char pad_1[0x18];
        float MaxSpeed;  // 0x228
        float SteerFloat;  // 0x22C
        float ThrottleFloat;  // 0x230
        float Torque;  // 0x234
        float TurnSpeed;  // 0x238
    };  // sizeof = 0x23C

    struct VisualEngine {
        char pad_0[0x1B0];
        Matrix4x4 ViewMatrix;  // 0x1B0
        char pad_1[0x900];
        uintptr_t FakeDataModel;  // 0xAF0
        char pad_2[0x18];
        Vector2 Dimensions;  // 0xB10
        char pad_3[0x118];
        uintptr_t RenderView;  // 0xC30
    };  // sizeof = 0xC38

    struct Workspace {
        char pad_0[0x410];
        uintptr_t World;  // 0x410
        char pad_1[0xA0];
        uintptr_t CurrentCamera;  // 0x4B8
        char pad_2[0x540];
        float ReadOnlyGravity;  // 0xA00
    };  // sizeof = 0xA04

    struct World {
        char pad_0[0x228];
        float Gravity;  // 0x228
        char pad_1[0x14];
        uintptr_t AirProperties;  // 0x240
        char pad_2[0x68];
        uintptr_t Primitives;  // 0x2B0
        char pad_3[0x470];
        float WorldSteps;  // 0x728
    };  // sizeof = 0x72C

} // namespace structs
#pragma pack(pop)
