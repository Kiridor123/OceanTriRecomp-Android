#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800EEF60(CpuContext* ctx);
extern "C" uint64_t func_800EEF60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B74F4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B74F4u);
    goto loc_803B74F4;

loc_803B74F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
}

loc_803B7520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B7A60;
    }
}

loc_803B7524:
{
    r3 = 0x806D0000u;
    r3 = (r3 + -5984);
    r4 = 0;
    r5 = 26184;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = (r3 + 1252);
    r5 = 24576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r30 = (r3 + 92);
    r3 = 0x80600000u;
    r29 = (r3 + -31576);
    r28 = 0;
    goto loc_803B759C;
}

loc_803B7568:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = (r30 + 8);
    r4 = (r29 + 8);
    ctx->lr = 0x803B7588u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_1352 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_1352);
        r4 = static_cast<uint32_t>(regargs_result_80142444_1352 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r28 = (r28 + 1);
    r29 = (r29 + 48);
    r30 = (r30 + 60);
}

loc_803B7598:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(13))) {
        goto loc_803B75A8;
    }
}

loc_803B759C:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_803B75A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B7568;
    }
}

loc_803B75A8:
{
    r29 = 0;
    r30 = 0;
}

loc_803B75B0:
{
    r3 = 2048;
    ctx->lr = 0x803B75B8u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_18FC = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_18FC);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_18FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = (r0 + r30);
    MemoryInline::FlatWrite32((r4 + 25924), r3);
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 25924));
}

loc_803B75D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B75E4;
    }
}

loc_803B75D8:
{
    r4 = 0;
    r5 = 2048;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803B75E4:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_803B75F0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(32))) {
        goto loc_803B75B0;
    }
}

loc_803B75F4:
{
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -22424), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r30 = (r3 + 17532);
    r0 = MemoryInline::FlatRead8((r30 + 208));
}

loc_803B7620:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B7648;
    }
}

loc_803B7624:
{
    r0 = MemoryInline::FlatRead8((r30 + 209));
}

loc_803B762C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B7648;
    }
}

loc_803B7630:
{
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r4));
    goto loc_803B76A8;
}

loc_803B7648:
{
    r29 = 0;
}

loc_803B764C:
{
    r5 = (r30 + r29);
    r3 = MemoryInline::FlatRead8((r5 + 208));
}

loc_803B7658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B769C;
    }
}

loc_803B765C:
{
    r0 = (r3 + -1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r29);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r4 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r4 + r0);
    r3 = (r3 + 92);
    r0 = MemoryInline::FlatRead8((r5 + 208));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r4 = (r30 + r0);
    // inline leaf 0x803B74B0 (17 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 49), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r3 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 5u, (r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 7u, (r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 9u, (r3 + 58), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x803B74B0
}

loc_803B769C:
{
    r29 = (r29 + 1);
}

loc_803B76A4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_803B764C;
    }
}

loc_803B76A8:
{
    r5 = 0;
    r4 = -1;
    r0 = 2;
    ctr = r0;
}

loc_803B76B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r4));
    r5 = (r5 + 16);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r4));
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B76B8;
    }
}

loc_803B7784:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r0 = MemoryInline::FlatRead16((r3 + 17742));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r5 = (r3 + -19148);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 35u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r5 + 8));
    MemoryInline::FlatWrite8((r31 + 8916), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 33u, (r5 + 41));
    MemoryInline::FlatWrite8((r31 + 8917), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 34u, (r5 + 42));
    MemoryInline::FlatWrite8((r31 + 8918), static_cast<uint8_t>(r0));
    r4 = 0;
    r6 = 0;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r5 + 30));
}

loc_803B77C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B77E4;
    }
}

loc_803B77C8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26052), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r5 + 31));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26053), static_cast<uint8_t>(r0));
    r6 = 2;
    r4 = 1;
}

loc_803B77E4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r5 + 32));
}

loc_803B77EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7814;
    }
}

loc_803B77F0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26052), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r5 + 33));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26053), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r4 = (r4 + 1);
}

loc_803B7814:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r5 + 34));
}

loc_803B781C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7844;
    }
}

loc_803B7820:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26052), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r5 + 35));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26053), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r4 = (r4 + 1);
}

loc_803B7844:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r5 + 36));
}

loc_803B784C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7870;
    }
}

loc_803B7850:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26052), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r5 + 37));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 26053), static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_803B7870:
{
}

loc_803B7874:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_803B7A14;
    }
}

loc_803B7878:
{
    r6 = (4 - r4);
}

loc_803B7880:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_803B79DC;
    }
}

loc_803B7884:
{
    r3 = 0;
    r5 = 0;
    r0 = 0;
}

loc_803B7894:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(5))) {
        goto loc_803B789C;
    }
}

loc_803B7898:
{
    r0 = 1;
}

loc_803B789C:
{
}

loc_803B78A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B78B4;
    }
}

loc_803B78A4:
{
    r0 = (r4 + -2147483648);
}

loc_803B78AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803B78B4;
    }
}

loc_803B78B0:
{
    r5 = 1;
}

loc_803B78B4:
{
}

loc_803B78B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803B78EC;
    }
}

loc_803B78BC:
{
    r5 = 1;
    r0 = (0 - r4);
    r0 = (r0 & -2147483648);
}

loc_803B78CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B78E0;
    }
}

loc_803B78D0:
{
    r0 = (r6 & -2147483648);
}

loc_803B78D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B78E0;
    }
}

loc_803B78DC:
{
    r5 = 0;
}

loc_803B78E0:
{
}

loc_803B78E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803B78EC;
    }
}

loc_803B78E8:
{
    r3 = 1;
}

loc_803B78EC:
{
}

loc_803B78F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B79DC;
    }
}

loc_803B78F4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = 0;
    r5 = (3 - r4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    ctr = r5;
}

loc_803B790C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-4))) {
        goto loc_803B79DC;
    }
}

loc_803B7910:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26052), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26053), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26054), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26055), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26056), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26057), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26058), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26059), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26060), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26061), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26062), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26063), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26064), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26065), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26066), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite8((r5 + 26067), static_cast<uint8_t>(r0));
    r3 = (r3 + 16);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B7910;
    }
}

loc_803B79DC:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r5 = 0;
    r0 = (4 - r4);
    ctr = r0;
}

loc_803B79F0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_803B7A14;
    }
}

loc_803B79F4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + 26052), static_cast<uint8_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + 26053), static_cast<uint8_t>(r5));
    r6 = (r6 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B79F4;
    }
}

loc_803B7A14:
{
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26060), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26061), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -22424));
    r0 = (r3 + 26052);
    MemoryInline::FlatWrite32((r3 + 26064), r0);
    ctx->lr = 0x803B7A38u;
    if constexpr (KnownRegArgsCpuCall<0x800EEF60u>(&func_800EEF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800EEF60_6213 = func_800EEF60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800EEF60_6213);
        r4 = static_cast<uint32_t>(regargs_result_800EEF60_6213 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800EEF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r31 + 8924), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 9));
    MemoryInline::FlatWrite8((r31 + 8920), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead16((r3 + 17744));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 26180), static_cast<uint8_t>(r0));
}

loc_803B7A60:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B74F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B74F4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B74F4 func_803B74F4 preserves=true fpr_mask=0x00000000
