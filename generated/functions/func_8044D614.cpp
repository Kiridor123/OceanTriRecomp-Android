#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803E1168(CpuContext* ctx);
extern "C" uint64_t func_803E1168_ra308_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8044D614_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8044D614;

loc_8044D614:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r1;
    r3 = 0x806F0000u;
    r30 = (r3 + -28680);
    MemoryInline::FlatWrite32((r13 + -16440), r30);
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 372u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 12), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 16), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 19), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r30 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r30 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 28), r4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 44), r4);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 24), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 32), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 48), r4);
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r30 + 25), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 52), r4);
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r30 + 26), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 40), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 60), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r30 + 64), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r30 + 65), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r30 + 66), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r30 + 67), static_cast<uint8_t>(r4));
    r0 = 10;
    MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 356), r0);
    r3 = 0x806F0000u;
    r0 = (r3 + 21712);
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 360), r0);
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 368), r0);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r30 + 364), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 68), r4);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 72), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 76), r4);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 80), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 84), r4);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 88), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 96), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 106u, (r30 + 106), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 107u, (r30 + 107), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r30 + 108), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 112), r4);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r30 + 116), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r30 + 117), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 118u, (r30 + 118), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 119u, (r30 + 119), static_cast<uint8_t>(r4));
    r4 = 0;
    r3 = r30;
    goto loc_8044D748;
}

loc_8044D720:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 128), r0);
    MemoryInline::FlatWrite32((r3 + 132), r0);
    MemoryInline::FlatWrite32((r3 + 136), r0);
    MemoryInline::FlatWrite32((r3 + 140), r0);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    r3 = (r3 + 28);
    r4 = (r4 + 7);
}

loc_8044D748:
{
}

loc_8044D74C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(37))) {
        goto loc_8044D720;
    }
}

loc_8044D750:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r30 + r0);
    r29 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r29);
    MemoryInline::FlatWrite32((r3 + 124), r29);
    r3 = (r30 + 296);
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r30 + 372), r29);
    MemoryInline::FlatWriteRam32((r30 + 376), r29);
    MemoryInline::FlatWriteRam32((r30 + 1116), r29);
    r3 = (r30 + 25156);
    r4 = 0;
    r5 = 164;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r30 + 25360), r29);
    MemoryInline::FlatWriteRam32((r30 + 25364), r29);
    MemoryInline::FlatWriteRam32((r30 + 25368), r29);
    MemoryInline::FlatWriteRam32((r30 + 25372), r29);
    r3 = (r30 + 25376);
    r4 = 0;
    r5 = 4168;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0;
    r3 = r30;
    goto loc_8044D82C;
}

loc_8044D7BC:
{
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 31384), 0, 288u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + 31384), r0);
    MemoryInline::WriteResolved32(guest_range_3, 256u, (r3 + 31640), r0);
    r4 = (r30 + r5);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 31896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + 31896), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 31388), r0);
    MemoryInline::WriteResolved32(guest_range_3, 260u, (r3 + 31644), r0);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 31897), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 31392), r0);
    MemoryInline::WriteResolved32(guest_range_3, 264u, (r3 + 31648), r0);
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 31898), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 31396), r0);
    MemoryInline::WriteResolved32(guest_range_3, 268u, (r3 + 31652), r0);
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 31899), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 31400), r0);
    MemoryInline::WriteResolved32(guest_range_3, 272u, (r3 + 31656), r0);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 31900), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 31404), r0);
    MemoryInline::WriteResolved32(guest_range_3, 276u, (r3 + 31660), r0);
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 31901), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 31408), r0);
    MemoryInline::WriteResolved32(guest_range_3, 280u, (r3 + 31664), r0);
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 31902), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 31412), r0);
    MemoryInline::WriteResolved32(guest_range_3, 284u, (r3 + 31668), r0);
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 31903), static_cast<uint8_t>(r0));
    r3 = (r3 + 32);
    r5 = (r5 + 8);
}

loc_8044D82C:
{
}

loc_8044D830:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(64))) {
        goto loc_8044D7BC;
    }
}

loc_8044D834:
{
    r4 = 0;
    r3 = r30;
    goto loc_8044D8A4;
}

loc_8044D840:
{
    r0 = (r4 & 255);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 31961), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r3 + 31961), static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 92u, (r3 + 32053), static_cast<uint8_t>(r0));
    r0 = (r4 + 2);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 184u, (r3 + 32145), static_cast<uint8_t>(r0));
    r0 = (r4 + 3);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 276u, (r3 + 32237), static_cast<uint8_t>(r0));
    r0 = (r4 + 4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 368u, (r3 + 32329), static_cast<uint8_t>(r0));
    r0 = (r4 + 5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 460u, (r3 + 32421), static_cast<uint8_t>(r0));
    r0 = (r4 + 6);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 552u, (r3 + 32513), static_cast<uint8_t>(r0));
    r0 = (r4 + 7);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_5, 644u, (r3 + 32605), static_cast<uint8_t>(r0));
    r3 = (r3 + 736);
    r4 = (r4 + 8);
}

loc_8044D8A4:
{
}

loc_8044D8A8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(16))) {
        goto loc_8044D840;
    }
}

loc_8044D8AC:
{
    r3 = (r30 + 65536);
    r3 = (r3 + -32100);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r6 = 0;
    MemoryInline::FlatWriteRam32((r30 + 100), r6);
    MemoryInline::FlatWriteRam8((r30 + 104), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r30 + 105), static_cast<uint8_t>(r6));
    r5 = (r30 + 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + -16596), 0, 1100u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + -16596), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + -16595), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + -16594), static_cast<uint8_t>(r6));
    r4 = -1;
    MemoryInline::FlatWriteRam8((r30 + 106), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r30 + 107), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r30 + 108), static_cast<uint8_t>(r4));
    r0 = 736;
    MemoryInline::FlatWriteRam32((r30 + 25360), r0);
    r0 = 512;
    MemoryInline::FlatWriteRam32((r30 + 25364), r0);
    r0 = 8800;
    MemoryInline::FlatWriteRam32((r30 + 25368), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2241), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 548u, (r5 + -16048), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 549u, (r5 + -16047), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 550u, (r5 + -16046), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 812u, (r5 + -15784), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 813u, (r5 + -15783), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 1080u, (r5 + -15516), r6);
    MemoryInline::FlatWriteRam32((r30 + 25104), r4);
    MemoryInline::FlatWriteRam32((r30 + 25108), r4);
    MemoryInline::FlatWriteRam32((r30 + 25112), r4);
    MemoryInline::FlatWriteRam32((r30 + 25116), r4);
    MemoryInline::WriteResolved8(guest_range_1, 657u, (r5 + -15939), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 408u, (r5 + -16188), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 472u, (r5 + -16124), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 1084u, (r5 + -15512), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 1076u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 1076u, (r5 + -15520), r6);
        MemoryInline::WriteResolved16(guest_range_1, 1078u, (r5 + -15518), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1080u, (r5 + -15516), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1088u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1088u, (r5 + -15508), r6);
        MemoryInline::WriteResolved32(guest_range_1, 1092u, (r5 + -15504), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1096u, (r5 + -15500), r6);
    MemoryInline::WriteResolved8(guest_range_1, 1085u, (r5 + -15511), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 658u, (r5 + -15938), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 659u, (r5 + -15937), static_cast<uint8_t>(r6));
    r29 = 0;
    r28 = (r30 + 31126);
    goto loc_8044D994;
}

loc_8044D97C:
{
    r3 = r28;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8044D994:
{
}

loc_8044D998:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(64))) {
        goto loc_8044D97C;
    }
}

loc_8044D99C:
{
    r29 = 0;
    r28 = (r30 + 29832);
    goto loc_8044D9C0;
}

loc_8044D9A8:
{
    r3 = r28;
    r4 = 0;
    r5 = 288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r28 + 288);
    r29 = (r29 + 1);
}

loc_8044D9C0:
{
}

loc_8044D9C4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_8044D9A8;
    }
}

loc_8044D9C8:
{
    r3 = (r30 + 65536);
    r29 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -15495), 0, 35u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 3u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 3u, (r3 + -15492), r29);
        MemoryInline::WriteResolved32(guest_range_2, 7u, (r3 + -15488), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 11u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 11u, (r3 + -15484), r29);
        MemoryInline::WriteResolved32(guest_range_2, 15u, (r3 + -15480), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 19u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 19u, (r3 + -15476), r29);
        MemoryInline::WriteResolved32(guest_range_2, 23u, (r3 + -15472), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 27u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 27u, (r3 + -15468), r29);
        MemoryInline::WriteResolved32(guest_range_2, 31u, (r3 + -15464), r29);
    }
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + -15495), static_cast<uint8_t>(r29));
    r3 = (r3 + -15928);
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = (r4 + 2211);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FBD4_4CEE = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4CEE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam8((r3 + -32060), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -32058), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -32059), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -32057), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -32056), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -15376), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + -15374), static_cast<uint8_t>(r29));
    r3 = (r3 + -32040);
    r4 = 0;
    r5 = 5132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -26908);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -26896);
    r4 = 0;
    r5 = 2308;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -24588);
    r4 = 0;
    r5 = 240;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r3 + -24348), r29);
    MemoryInline::FlatWriteRam32((r3 + -24344), r29);
    MemoryInline::FlatWriteRam32((r3 + -24340), r29);
    MemoryInline::FlatWriteRam32((r3 + -24336), r29);
    r3 = (r3 + -24252);
    r4 = 0;
    r5 = 108;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r3 + -24136), r29);
    MemoryInline::FlatWriteRam32((r3 + -16044), r29);
    r3 = (r3 + -16040);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -15936);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r3 + -15732), r29);
    r3 = 0x90030000u;
    r28 = (r3 + -160);
    r3 = r28;
    r4 = 0;
    r5 = 65536;
    r5 = (r5 + -32768);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0;
    r4 = r30;
    goto loc_8044DB2C;
}

loc_8044DAF8:
{
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite32((r3 + -15460), r28);
    r0 = (r28 + 1024);
    MemoryInline::FlatWrite32((r3 + -15456), r0);
    r0 = (r28 + 2048);
    MemoryInline::FlatWrite32((r3 + -15452), r0);
    r0 = (r28 + 3072);
    MemoryInline::FlatWrite32((r3 + -15448), r0);
    r0 = (r28 + 4096);
    MemoryInline::FlatWrite32((r3 + -15444), r0);
    r28 = (r28 + 5120);
    r4 = (r4 + 20);
    r5 = (r5 + 5);
}

loc_8044DB2C:
{
}

loc_8044DB30:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(10))) {
        goto loc_8044DAF8;
    }
}

loc_8044DB34:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r3 + -15380), r28);
    r3 = (r3 + -15420);
    r4 = 0;
    r5 = 40;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r4 = 0;
    r5 = 11960;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 9204;
    r29 = 0x90010000u;
    r4 = (r29 + 32608);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_8044DB78:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8044DBA4;
    }
}

loc_8044DB7C:
{
    MemoryInline::FlatWriteRam32((r31 + 28), r1);
    ctx->lr = 0x8044DB84u;
    if constexpr (KnownRegArgsCpuCall<0x803E1168u>(&func_803E1168)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        const auto regargs_result_803E1168_618E = func_803E1168_ra308_1fe_18_0(ctx, r3, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E1168_618E);
        r4 = static_cast<uint32_t>(regargs_result_803E1168_618E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803E1168u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8044DBA4:
{
    r4 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r4 + -15236), r28);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + -15236));
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWriteRam8((r4 + -15232), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + -15228), r0);
    MemoryInline::FlatWriteRam8((r4 + -15208), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15207), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15206), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15205), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15204), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15203), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15202), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + -15200), r0);
    MemoryInline::FlatWriteRam8((r4 + -15201), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15196), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15195), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15194), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -15193), static_cast<uint8_t>(r0));
    r10 = r31;
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8044D614(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044D614_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8044D614 func_8044D614 preserves=true fpr_mask=0x00000000
