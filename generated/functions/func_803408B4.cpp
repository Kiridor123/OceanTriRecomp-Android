#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80340248(CpuContext* ctx);
extern "C" uint64_t func_80340248_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" void func_803408B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_803409B4_loc_0 = 0;
    uint32_t addr_lfsx_80340B8C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803408B4;

loc_803408B4:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r28 = r3;
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = 0;
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x80340908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8034048Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_80340914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340924;
    }
}

loc_80340918:
{
}

loc_8034091C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803409F4;
    }
}

loc_80340920:
{
    goto loc_80340BDC;
}

loc_80340924:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_80340934:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8034094C;
    }
}

loc_80340938:
{
    r4 = MemoryInline::FlatRead32((r29 + 64));
    r0 = MemoryInline::FlatRead32((r29 + 80));
    r0 = (r0 - r4);
}

loc_80340948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803409C0;
    }
}

loc_8034094C:
{
    r4 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r0 = 256;
    MemoryInline::FlatWrite32((r29 + 72), r0);
}

loc_8034096C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803409A0;
    }
}

loc_80340970:
{
    r3 = (r28 + 24);
    r4 = (r29 + 8);
    ctx->lr = 0x8034097Cu;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80340248_1580 = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_1580);
        r4 = static_cast<uint32_t>(regargs_result_80340248_1580 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl4_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl4_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CEF40;
    }
}

loc_inl4_0x800CEF3C:
{
    r0 = 1;
}

loc_inl4_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl4_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 15);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_9 & -2048);
    r3 = (r31 + r0);
    r0 = (r3 + -16384);
    MemoryInline::FlatWrite32((r29 + 64), r0);
}

loc_803409A0:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -32352);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10176));
    addr_lfsx_803409B4_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_803409B4_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_803409C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r0 = (32 - r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    r3 = (r29 + 80);
    r4 = (r29 + 64);
    r5 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x803409E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 95), static_cast<uint8_t>(r0));
    goto loc_80340BDC;
}

loc_803409F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r29 + 76));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r29 + 80));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r29 + 84));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80050914u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r28 + 24);
    r4 = (r1 + 32);
    ctx->lr = 0x80340A48u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 72));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 72), r0);
    r3 = MemoryInline::FlatRead32((r29 + 72));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 72), r0);
}

loc_80340A74:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80340AB0;
    }
}

loc_80340A78:
{
    r3 = (r28 + 24);
    r4 = (r30 + 24);
    ctx->lr = 0x80340A84u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80050FE4_31FE = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_31FE);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_31FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80340A8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80340AA4;
    }
}

loc_80340A90:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 56), r30);
    goto loc_80340AB8;
}

loc_80340AA4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 56), r0);
    goto loc_80340AB8;
}

loc_80340AB0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 56), r0);
}

loc_80340AB8:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
}

loc_80340AC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340AFC;
    }
}

loc_80340AC4:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80340ACC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340AFC;
    }
}

loc_80340AD0:
{
    r0 = MemoryInline::FlatRead8((r3 + 1430));
}

loc_80340AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340AFC;
    }
}

loc_80340ADC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r3));
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 12), r0);
    MemoryInline::FlatWrite32((r29 + 72), r3);
    r31 = 1;
}

loc_80340AFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80340B14:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80340BB4;
    }
}

loc_80340B1C:
{
}

loc_80340B20:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80340BB4;
    }
}

loc_80340B24:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r31));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl5_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl5_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CEF40;
    }
}

loc_inl5_0x800CEF3C:
{
    r0 = 1;
}

loc_inl5_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl5_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 20);
    r3 = (r4 - r0);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -10184));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -32352);
    addr_lfsx_80340B8C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80340B8C_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 12), r0);
    MemoryInline::FlatWrite32((r29 + 72), r31);
}

loc_80340BB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r0 = (256 - r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    r3 = (r29 + 80);
    r4 = (r29 + 64);
    r5 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x80340BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80340BDC:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl6_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl6_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CFB10;
    }
}

loc_inl6_0x800CFB08:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl6_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl6_0x800CFB24;
    }
}

loc_inl6_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB24:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl6_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r31 = (r31 + r0);
    r3 = r31;
    // inline leaf 0x803405F8 (13 guest instruction(s))
}

loc_inl8_0x803405F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl8_0x80340600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x80340624;
    }
}

loc_inl8_0x80340604:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -63);
    r0 = (r0 & 65535);
}

loc_inl8_0x80340618:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_inl8_0x80340624;
    }
}

loc_inl8_0x8034061C:
{
    r3 = 1;
    goto loc_inl8_cont_803405F8;
}

loc_inl8_0x80340624:
{
    r3 = 0;
}

loc_inl8_cont_803405F8:
{
    // end of inlined leaf 0x803405F8
}

loc_80340C04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80340C60;
    }
}

loc_80340C08:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_80340C10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80340C24;
    }
}

loc_80340C14:
{
    r0 = MemoryInline::FlatRead16((r31 + 1444));
    r0 = (r0 & 2);
}

loc_80340C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340C60;
    }
}

loc_80340C24:
{
    r3 = (r31 + 60);
    r4 = (r29 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    InvokeDirectCpu<0x8028F680u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80340C38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80340C60;
    }
}

loc_80340C3C:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 91), static_cast<uint8_t>(r0));
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 92), static_cast<uint16_t>(r0));
}

loc_80340C60:
{
    r0 = MemoryInline::FlatRead8((r29 + 96));
}

loc_80340C68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80340CAC;
    }
}

loc_80340C6C:
{
}

loc_80340C70:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80340CAC;
    }
}

loc_80340C74:
{
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead16((r29 + 92));
    r0 = MemoryInline::FlatRead16((r4 + 774));
}

loc_80340C84:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80340CAC;
    }
}

loc_80340C88:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 774));
    MemoryInline::FlatWrite16((r29 + 92), static_cast<uint16_t>(r0));
}

loc_80340CAC:
{
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x80340CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8034048Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_80340CC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80340CF4;
    }
}

loc_80340CC4:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
}

loc_80340CDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340CEC;
    }
}

loc_80340CE0:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead16((r3 + 774));
    MemoryInline::FlatWrite16((r29 + 92), static_cast<uint16_t>(r0));
}

loc_80340CEC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 91), static_cast<uint8_t>(r0));
}

loc_80340CF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803408B4 func_803408B4 preserves=true fpr_mask=0x00000000
