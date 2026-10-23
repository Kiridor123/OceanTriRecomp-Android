#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052A918(CpuContext* ctx);
extern "C" uint64_t func_8052A918_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8053122C(CpuContext* ctx);
extern "C" uint64_t func_8053122C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80535B9C(CpuContext* ctx);
extern "C" uint64_t func_80535B9C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80535D1C(CpuContext* ctx);
extern "C" uint32_t func_80535D1C_ra38_e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8052E8A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052E8A8;

loc_8052E8A8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    ctx->lr = 0x8052E8CCu;
    if constexpr (KnownRegArgsCpuCall<0x8052A918u>(&func_8052A918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        const auto regargs_result_8052A918_F0A = func_8052A918_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8052A918_F0A);
        r4 = static_cast<uint32_t>(regargs_result_8052A918_F0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052A918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x80650000u;
    r4 = 0x80060000u;
    r3 = (r3 + -13300);
    r5 = 0x80060000u;
    r28 = (r25 + 232);
    MemoryInline::FlatWrite32(r25, r3);
    r3 = r28;
    r4 = (r4 + 18584);
    r5 = (r5 + -19828);
    r6 = 4;
    r7 = 4;
    ctx->lr = 0x8052E8FCu;
    if constexpr (KnownRegArgsCpuCall<0x80457198u>(&func_80457198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457198_17B0 = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_17B0);
        r4 = static_cast<uint32_t>(regargs_result_80457198_17B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457198u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r28 + 16);
    // inline leaf 0x80535B38 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x80535B38
    r0 = MemoryInline::FlatRead32((r26 + 96));
    r28 = 8;
    r30 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r30 + 18));
}

loc_8052E918:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_8052E920;
    }
}

loc_8052E91C:
{
    r28 = r0;
}

loc_8052E920:
{
    r4 = (r28 & 255);
}

loc_8052E924:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052E930;
    }
}

loc_8052E928:
{
    r3 = (r25 + 248);
    ctx->lr = 0x8052E930u;
    if constexpr (KnownRegArgsCpuCall<0x80535B9Cu>(&func_80535B9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80535B9C_2367 = func_80535B9C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80535B9C_2367);
        r4 = static_cast<uint32_t>(regargs_result_80535B9C_2367 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80535B9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8052E930:
{
    f3.d = MemoryInline::FlatReadFloat32((r26 + 76));
    r5 = (r28 & 255);
}

loc_8052E938:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 88));
    r6 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r7 = MemoryInline::FlatRead32((r27 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r25 + 216), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r25 + 216), f3.d);
    r29 = (r7 + 12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r25 + 220), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r25 + 224), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r25 + 228), f0.d);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r25 + 232), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r25 + 236), r4);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r25 + 240), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r25 + 244), r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8052E998;
    }
}

loc_8052E980:
{
    r0 = MemoryInline::FlatRead8((r25 + 248));
}

loc_8052E988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052E998;
    }
}

loc_8052E98C:
{
    r3 = (r25 + 248);
    r4 = (r30 + 20);
    if constexpr (KnownRegArgsCpuCall<0x80535D1Cu>(&func_80535D1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80535D1C_341B = func_80535D1C_ra38_e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r4 = regargs_result_80535D1C_341B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80535D1Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8052E998:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r4 = 92;
    r7 = MemoryInline::FlatRead32((r27 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32(r27);
    r29_addr_0 = (r29 + r0);
    r6 = MemoryInline::FlatRead32(r29_addr_0);
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r28 = (r7 + r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x8052E9D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052E9D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052E9F0;
    }
}

loc_8052E9DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052E9F4;
    }
}

loc_8052E9E0:
{
    r4 = r28;
    r5 = (r1 + 24);
    ctx->lr = 0x8052E9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8053122Cu>(&func_8053122C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8053122C_4132 = func_8053122C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8053122C_4132);
        r4 = static_cast<uint32_t>(regargs_result_8053122C_4132 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8053122Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8052E9F4;
}

loc_8052E9F0:
{
    r3 = 0;
}

loc_8052E9F4:
{
    r30 = MemoryInline::FlatRead8((r26 + 92));
    r28 = 0;
    MemoryInline::FlatWrite32((r25 + 40), r3);
}

loc_8052EA04:
{
    MemoryInline::FlatWrite8((r25 + 260), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r25 + 256), r28);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8052EB10;
    }
}

loc_8052EA10:
{
    MemoryInline::FlatWrite8((r25 + 260), static_cast<uint8_t>(r28));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & 2040);
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    ctx->lr = 0x8052EA20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8052EA24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052EA30;
    }
}

loc_8052EA28:
{
    r3 = 0;
    goto loc_8052EA58;
}

loc_8052EA30:
{
    r4 = r3;
    ctr = r30;
}

loc_8052EA3C:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(0))) {
        goto loc_8052EA58;
    }
}

loc_8052EA40:
{
}

loc_8052EA44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052EA50;
    }
}

loc_8052EA48:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r4 + 4), r28);
}

loc_8052EA50:
{
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052EA40;
    }
}

loc_8052EA58:
{
}

loc_8052EA5C:
{
    MemoryInline::FlatWrite32((r25 + 256), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052EA68;
    }
}

loc_8052EA64:
{
    MemoryInline::FlatWrite8((r25 + 260), static_cast<uint8_t>(r30));
}

loc_8052EA68:
{
    r0 = MemoryInline::FlatRead32((r26 + 100));
    r28 = 0;
    r30 = 0;
    r31 = (r26 + r0);
    goto loc_8052EB04;
}

loc_8052EA7C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r4 = 92;
    r3 = MemoryInline::FlatRead32((r25 + 256));
    r6 = (r26 + r0);
    r26_addr_2 = (r26 + r0);
    r0 = MemoryInline::FlatRead16(r26_addr_2);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r7 = MemoryInline::FlatRead32((r27 + 8));
    r3_addr_2 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32(r27);
    r29_addr_2 = (r29 + r0);
    r6 = MemoryInline::FlatRead32(r29_addr_2);
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r24 = (r7 + r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8052EACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052EAD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052EAE8;
    }
}

loc_8052EAD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052EAEC;
    }
}

loc_8052EAD8:
{
    r4 = r24;
    r5 = (r1 + 8);
    ctx->lr = 0x8052EAE4u;
    if constexpr (KnownRegArgsCpuCall<0x8053122Cu>(&func_8053122C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8053122C_5DB8 = func_8053122C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8053122C_5DB8);
        r4 = static_cast<uint32_t>(regargs_result_8053122C_5DB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8053122Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8052EAEC;
}

loc_8052EAE8:
{
    r3 = 0;
}

loc_8052EAEC:
{
    r0 = MemoryInline::FlatRead32((r25 + 256));
    r31 = (r31 + 4);
    r28 = (r28 + 1);
    r4 = (r0 + r30);
    r30 = (r30 + 8);
    MemoryInline::FlatWrite32((r4 + 4), r3);
}

loc_8052EB04:
{
    r0 = MemoryInline::FlatRead8((r25 + 260));
}

loc_8052EB0C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_8052EA7C;
    }
}

loc_8052EB10:
{
    r11 = (r1 + 80);
    r3 = r25;
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052E8A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052E8A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052E8A8 func_8052E8A8 preserves=true fpr_mask=0x00000000
