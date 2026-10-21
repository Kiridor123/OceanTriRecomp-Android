#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FADA4(CpuContext* ctx);
extern "C" uint64_t func_800FADA4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010D6DC(CpuContext* ctx);
extern "C" uint64_t func_8010D6DC_ra188_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801E02A4(CpuContext* ctx);
extern "C" uint64_t func_801E02A4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D2060(CpuContext* ctx);
extern "C" uint64_t func_802D2060_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802D2968(CpuContext* ctx);
extern "C" uint64_t func_802D2968_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D6A64(CpuContext* ctx);
extern "C" uint64_t func_802D6A64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D6C14(CpuContext* ctx);
extern "C" uint32_t func_802D6C14_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D74C8(CpuContext* ctx);
extern "C" uint64_t func_802D74C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D7BC0(CpuContext* ctx);
extern "C" uint64_t func_802D7BC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7C68(CpuContext* ctx);
extern "C" uint64_t func_802D7C68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7CD0(CpuContext* ctx);
extern "C" uint64_t func_802D7CD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D9464(CpuContext* ctx);
extern "C" uint64_t func_802D9464_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_803302E8(CpuContext* ctx);
extern "C" uint64_t func_803302E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803AB0D4(CpuContext* ctx);
extern "C" uint32_t func_803AB0D4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4BD8(CpuContext* ctx);
extern "C" uint32_t func_803B4BD8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B6FF4(CpuContext* ctx);
extern "C" uint64_t func_803B6FF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802C29EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802C29ECu);
    goto loc_802C29EC;

loc_802C29EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    MemoryInline::FlatWrite32((r31 + 364), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    MemoryInline::FlatWriteFloat32((r31 + 376), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 380), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 384), f0.d);
    r3 = r31;
    ctx->lr = 0x802C2A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2060u>(&func_802D2060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802D2060_17C2 = func_802D2060_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802D2060_17C2);
        r4 = static_cast<uint32_t>(regargs_result_802D2060_17C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x802D2060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    MemoryInline::FlatWriteFloat32((r31 + 432), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 436), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 440), f0.d);
    r3 = (r31 + 8);
    ctx->lr = 0x802C2A54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E0978u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r30 = 255;
    MemoryInline::FlatWrite8((r31 + 420), static_cast<uint8_t>(r30));
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802C2A70u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_1FDF = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_1FDF);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_1FDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = 0;
    MemoryInline::FlatWrite16((r31 + 828), static_cast<uint16_t>(r29));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r3 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWrite16((r31 + 830), static_cast<uint16_t>(r3));
    if constexpr (KnownRegArgsCpuCall<0x802D7BC0u>(&func_802D7BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7BC0_27D1 = func_802D7BC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7BC0_27D1);
        r4 = static_cast<uint32_t>(regargs_result_802D7BC0_27D1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7BC0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r31 + 824), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    // inline leaf 0x802D7C08 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19296);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    // end of inlined leaf 0x802D7C08
    MemoryInline::FlatWrite16((r31 + 510), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 824));
    // inline leaf 0x802D7C28 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r3 + 2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19296);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    // end of inlined leaf 0x802D7C28
    MemoryInline::FlatWrite16((r31 + 512), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 528), static_cast<uint16_t>(r29));
    r0 = 100;
    MemoryInline::FlatWrite32((r31 + 500), r0);
    MemoryInline::FlatWrite16((r31 + 504), static_cast<uint16_t>(r0));
    r3 = r31;
    // inline leaf 0x802D36E8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 504));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 500), r0);
    MemoryInline::FlatWrite32((r3 + 496), r0);
    // end of inlined leaf 0x802D36E8
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    MemoryInline::FlatWriteFloat32((r31 + 444), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 448), f0.d);
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r31 + 456), r29);
    r3 = r31;
    // inline leaf 0x802D422C (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 461), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D422C
    r3 = r31;
    // inline leaf 0x802D4264 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4264
    MemoryInline::FlatWrite8((r31 + 465), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r31 + 532), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r31 + 534), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r31 + 530), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r31 + 536), static_cast<uint16_t>(r29));
    r27 = 0;
}

loc_802C2B00:
{
    r0 = (r27 & 255);
    r0 = (r0 * 92);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 581), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r3 + 590), static_cast<uint8_t>(r30));
    r28 = (r3 + 576);
    r3 = r28;
    r4 = 3;
    r5 = r31;
    // inline leaf 0x8029F0A0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0A0
    r3 = r28;
    r4 = 3;
    r5 = r31;
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    r27 = (r27 + 1);
}

loc_802C2B40:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(2))) {
        goto loc_802C2B00;
    }
}

loc_802C2B44:
{
    r3 = (r31 + 760);
    r4 = (r31 + 800);
    // inline leaf 0x8029F1D4 (25 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 65536;
    r0 = (r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 38), r0);
    }
    // end of inlined leaf 0x8029F1D4
    r3 = 0x80660000u;
    r29 = (r3 + -19148);
    r3 = MemoryInline::FlatRead16((r29 + 46));
    MemoryInline::FlatWrite16((r31 + 832), static_cast<uint16_t>(r3));
    if constexpr (KnownRegArgsCpuCall<0x802D7C68u>(&func_802D7C68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7C68_47FC = func_802D7C68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7C68_47FC);
        r4 = static_cast<uint32_t>(regargs_result_802D7C68_47FC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7C68u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r31 + 825), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    // inline leaf 0x802D7CB0 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r0 = (r3 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19628);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    // end of inlined leaf 0x802D7CB0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 982), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 980), static_cast<uint16_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 990), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r31 + 1010), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead8((r29 + 41));
    MemoryInline::FlatWrite8((r31 + 1014), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r29 + 42));
    MemoryInline::FlatWrite8((r31 + 1015), static_cast<uint8_t>(r0));
}

loc_802C2B9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802C2BAC;
    }
}

loc_802C2BA0:
{
    MemoryInline::FlatWrite8((r31 + 1014), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1015), static_cast<uint8_t>(r0));
}

loc_802C2BAC:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 1008), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802C2BBCu;
    if constexpr (KnownRegArgsCpuCall<0x802D6A64u>(&func_802D6A64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802D6A64_5154 = func_802D6A64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D6A64_5154);
        r4 = static_cast<uint32_t>(regargs_result_802D6A64_5154 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802D6A64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r29 = 0;
    MemoryInline::FlatWrite16((r31 + 986), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r31 + 988), static_cast<uint16_t>(r29));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r3 = MemoryInline::FlatRead16((r3 + 48));
    MemoryInline::FlatWrite16((r31 + 834), static_cast<uint16_t>(r3));
    if constexpr (KnownRegArgsCpuCall<0x802D7CD0u>(&func_802D7CD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7CD0_55F4 = func_802D7CD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7CD0_55F4);
        r4 = static_cast<uint32_t>(regargs_result_802D7CD0_55F4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7CD0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r3));
    ctx->lr = 0x802C2BE4u;
    if constexpr (KnownRegArgsCpuCall<0x803AB0D4u>(&func_803AB0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB0D4_597A = func_803AB0D4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB0D4_597A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r31 + 1056), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 19224);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite32((r31 + 1052), r0);
    MemoryInline::FlatWrite16((r31 + 1058), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r31 + 1060), static_cast<uint16_t>(r29));
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x802D6C14u>(&func_802D6C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802D6C14_5E62 = func_802D6C14_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D6C14_5E62;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802D6C14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWrite8((r31 + 1062), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1063), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1064), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1065), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1066), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1067), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r31 + 1068), static_cast<uint16_t>(r29));
    r3 = r31;
    ctx->lr = 0x802C2C34u;
    if constexpr (KnownRegArgsCpuCall<0x802D74C8u>(&func_802D74C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D74C8_64E5 = func_802D74C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D74C8_64E5);
        r4 = static_cast<uint32_t>(regargs_result_802D74C8_64E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D74C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r31 + 854), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r31 + 856), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r31 + 858), static_cast<uint16_t>(r29));
    r3 = r31;
    // inline leaf 0x802D3B3C (8 guest instruction(s))
}

loc_inl11_0x802D3B3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 852));
}

loc_inl11_0x802D3B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x802D3B48:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 848), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 852), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 850), static_cast<uint16_t>(r0));
    goto loc_inl11_cont_802D3B3C;
}

loc_inl11_return:
{
}

loc_inl11_cont_802D3B3C:
{
    // end of inlined leaf 0x802D3B3C
    r3 = r31;
    // inline leaf 0x802D3B5C (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 546), 0, 608u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 294u, (r3 + 840), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 295u, (r3 + 841), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 296u, (r3 + 842), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 297u, (r3 + 843), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B5C
    r3 = r31;
    // inline leaf 0x802D3B74 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 299u, (r3 + 845), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 300u, (r3 + 846), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B74
    r3 = r31;
    // inline leaf 0x802D3B88 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 352u, (r3 + 898), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 297u, (r3 + 843), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3B88
    r3 = r31;
    // inline leaf 0x802D3A84 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 301u, (r3 + 847), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3A84
    r3 = r31;
    // inline leaf 0x802D3D1C (5 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 420u, (r3 + 966), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 426u, (r3 + 972), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 606u, (r3 + 1152), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D1C
    MemoryInline::WriteResolved8(guest_range_1, 422u, (r31 + 968), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 424u, (r31 + 970), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 428u, (r31 + 974), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 430u, (r31 + 976), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 432u, (r31 + 978), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 314u, (r31 + 860), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 316u, (r31 + 862), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 320u, (r31 + 866), static_cast<uint8_t>(r29));
    r3 = r31;
    // inline leaf 0x802D429C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 340u, (r3 + 886), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 342u, (r3 + 888), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D429C
    MemoryInline::WriteResolved8(guest_range_1, 341u, (r31 + 887), static_cast<uint8_t>(r29));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 346u, (r31 + 892), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 350u, (r31 + 896), static_cast<uint16_t>(r29));
    r3 = r31;
    // inline leaf 0x802D3D40 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 558), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 562), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D40
    r3 = r31;
    // inline leaf 0x802D3D50 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 546), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 550), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D50
    MemoryInline::WriteResolved8(guest_range_1, 501u, (r31 + 1047), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 502u, (r31 + 1048), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_1, 322u, (r31 + 868), r29);
    r3 = (r31 + 872);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 326u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 326u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 330u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 334u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved8(guest_range_1, 500u, (r31 + 1046), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 362u, (r31 + 908), static_cast<uint16_t>(r29));
    r28 = 0;
}

loc_802C2CE4:
{
    r3 = (r31 + 912);
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r28 + 1);
}

loc_802C2CFC:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(12))) {
        goto loc_802C2CE4;
    }
}

loc_802C2D00:
{
    r29 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 836), 0, 319u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r31 + 854), static_cast<uint16_t>(r29));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 124u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_2, 124u, (r31 + 960), r29);
        MemoryInline::WriteResolved16(guest_range_2, 126u, (r31 + 962), r29);
    }
    MemoryInline::WriteResolved8(guest_range_2, 249u, (r31 + 1085), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 250u, (r31 + 1086), static_cast<uint16_t>(r29));
    r30 = 1;
    MemoryInline::WriteResolved8(guest_range_2, 69u, (r31 + 905), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 252u, (r31 + 1088), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 248u, (r31 + 1084), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 257u, (r31 + 1093), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 258u, (r31 + 1094), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 269u, (r31 + 1105), static_cast<uint8_t>(r29));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 264u, (r31 + 1100), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 63u, (r31 + 899), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_2, 66u, (r31 + 902), static_cast<uint16_t>(r29));
    r3 = r31;
    r4 = 0;
    // inline leaf 0x802D8534 (2 guest instruction(s))
    MemoryInline::WriteResolved16(guest_range_2, 312u, (r3 + 1148), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D8534
    MemoryInline::WriteResolved16(guest_range_2, 316u, (r31 + 1152), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead8((r31 + 1056));
    r0 = (r3 + 2);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 318u, (r31 + 1154), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 284u, (r31 + 1120), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 285u, (r31 + 1121), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 286u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_2, 286u, (r31 + 1122), r29);
        MemoryInline::WriteResolved16(guest_range_2, 288u, (r31 + 1124), r29);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r31 + 836), r29);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r31 + 838), r29);
    }
    r3 = r31;
    ctx->lr = 0x802C2D84u;
    if constexpr (KnownRegArgsCpuCall<0x801E02A4u>(&func_801E02A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_801E02A4_8BA2 = func_801E02A4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801E02A4_8BA2);
        r4 = static_cast<uint32_t>(regargs_result_801E02A4_8BA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801E02A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    ctx->lr = 0x802C2D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8010D6DCu>(&func_8010D6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_8010D6DC_9321 = func_8010D6DC_ra188_1fe_18_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010D6DC_9321);
        r4 = static_cast<uint32_t>(regargs_result_8010D6DC_9321 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8010D6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13348));
    ctx->lr = 0x802C2D98u;
    if constexpr (KnownRegArgsCpuCall<0x803302E8u>(&func_803302E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803302E8_9AC0 = func_803302E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803302E8_9AC0);
        r4 = static_cast<uint32_t>(regargs_result_803302E8_9AC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803302E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    ctx->lr = 0x802C2DA0u;
    if constexpr (KnownRegArgsCpuCall<0x800FADA4u>(&func_800FADA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800FADA4_A225 = func_800FADA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FADA4_A225);
        r4 = static_cast<uint32_t>(regargs_result_800FADA4_A225 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800FADA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    ctx->lr = 0x802C2DA8u;
    if constexpr (KnownRegArgsCpuCall<0x803B4BD8u>(&func_803B4BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4BD8_A952 = func_803B4BD8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4BD8_A952;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C2DAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C2DDC;
    }
}

loc_802C2DB0:
{
    ctx->lr = 0x802C2DB4u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_AC66 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_AC66;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C2DB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802C2DDC;
    }
}

loc_802C2DBC:
{
    MemoryInline::FlatWrite8((r31 + 1155), static_cast<uint8_t>(r30));
    r3 = r31;
    ctx->lr = 0x802C2DC8u;
    if constexpr (KnownRegArgsCpuCall<0x802D9464u>(&func_802D9464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802D9464_B01B = func_802D9464_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802D9464_B01B);
        r4 = static_cast<uint32_t>(regargs_result_802D9464_B01B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802D9464u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 90;
    MemoryInline::FlatWrite16((r31 + 1158), static_cast<uint16_t>(r0));
    r0 = 40;
    MemoryInline::FlatWrite16((r31 + 512), static_cast<uint16_t>(r0));
    goto loc_802C2E1C;
}

loc_802C2DDC:
{
    r3 = 0;
    ctx->lr = 0x802C2DE4u;
    if constexpr (KnownRegArgsCpuCall<0x803B6FF4u>(&func_803B6FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B6FF4_B4E8 = func_803B6FF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6FF4_B4E8);
        r4 = static_cast<uint32_t>(regargs_result_803B6FF4_B4E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B6FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C2DE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C2DF8;
    }
}

loc_802C2DEC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 1155), static_cast<uint8_t>(r0));
    goto loc_802C2E1C;
}

loc_802C2DF8:
{
    r3 = 1;
    ctx->lr = 0x802C2E00u;
    if constexpr (KnownRegArgsCpuCall<0x803B6FF4u>(&func_803B6FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B6FF4_B8B5 = func_803B6FF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6FF4_B8B5);
        r4 = static_cast<uint32_t>(regargs_result_803B6FF4_B8B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B6FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C2E04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C2E14;
    }
}

loc_802C2E08:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 1155), static_cast<uint8_t>(r0));
    goto loc_802C2E1C;
}

loc_802C2E14:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1155), static_cast<uint8_t>(r0));
}

loc_802C2E1C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
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

extern "C" void func_802C29EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C29EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFE fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C29EC func_802C29EC preserves=true fpr_mask=0x00000000
