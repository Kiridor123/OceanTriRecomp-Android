#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_804DD9D0(CpuContext* ctx);
extern "C" uint64_t func_804DD9D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DDEF0(CpuContext* ctx);
extern "C" uint64_t func_804DDEF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804DDAE0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x804DDAE0u);
    goto loc_804DDAE0;

loc_804DDAE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    r11 = (r1 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r0 = MemoryInline::FlatRead32((r13 + -14776));
    r27 = MemoryInline::FlatRead32((r13 + -14772));
}

loc_804DDB30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDB38;
    }
}

loc_804DDB34:
{
    goto loc_804DDEA8;
}

loc_804DDB38:
{
    f26.d = MemoryInline::FlatReadFloat64((r2 + -1880));
    r31 = 1127219200;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -1888));
    r30 = 1;
    f28.d = MemoryInline::FlatReadFloat32((r2 + -1884));
    r29 = 0;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1896));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1900));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1904));
    goto loc_804DDEA0;
}

loc_804DDB60:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + -1);
}

loc_804DDB6C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804DDE5C;
    }
}

loc_804DDB70:
{
    r28 = (r27 + 13136);
    r26 = 0;
    goto loc_804DDE50;
}

loc_804DDB7C:
{
    r3 = MemoryInline::FlatRead32((r28 + 36));
    r0 = (r3 + -1);
}

loc_804DDB88:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804DDE48;
    }
}

loc_804DDB8C:
{
    r25 = MemoryInline::FlatRead32((r28 + 28));
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_804DDB98:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r25))) {
        goto loc_804DDE30;
    }
}

loc_804DDB9C:
{
    r0 = (r0 - r25);
    MemoryInline::FlatWrite32((r28 + 32), r0);
    goto loc_804DDE48;
}

loc_804DDBAC:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r25 = (r25 - r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804DDBBC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(128))) {
        goto loc_804DDBD0;
    }
}

loc_804DDBC0:
{
    MemoryInline::FlatWrite8((r28 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_804DDBD0:
{
    r0 = MemoryInline::FlatRead8((r28 + 16));
}

loc_804DDBD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_804DDBF0;
    }
}

loc_804DDBDC:
{
}

loc_804DDBE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(247))) {
        goto loc_804DDBF0;
    }
}

loc_804DDBE4:
{
}

loc_804DDBE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_804DDC38;
    }
}

loc_804DDBEC:
{
    goto loc_804DDD98;
}

loc_804DDBF0:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r5 = (r4 & 127);
    goto loc_804DDC1C;
}

loc_804DDC00:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r3 = (r3_rot_9 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r5 = (r3 + r0);
}

loc_804DDC1C:
{
    r0 = (r4 & 128);
}

loc_804DDC20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDC00;
    }
}

loc_804DDC24:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_804DDDA4;
}

loc_804DDC38:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 1);
}

loc_804DDC48:
{
    MemoryInline::FlatWrite32((r28 + 12), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(47))) {
        goto loc_804DDC5C;
    }
}

loc_804DDC50:
{
}

loc_804DDC54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(81))) {
        goto loc_804DDC84;
    }
}

loc_804DDC58:
{
    goto loc_804DDD4C;
}

loc_804DDC5C:
{
    r4 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r28 + 36), r29);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_804DDC78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDDA4;
    }
}

loc_804DDC7C:
{
    MemoryInline::FlatWrite32((r4 + 16), r30);
    goto loc_804DDDA4;
}

loc_804DDC84:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r3 = (r4 & 127);
    goto loc_804DDCB4;
}

loc_804DDC98:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r3 = (r3_rot_7 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r3 = (r3 + r0);
}

loc_804DDCB4:
{
    r0 = (r4 & 128);
}

loc_804DDCB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDC98;
    }
}

loc_804DDCBC:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    stackword9 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r5 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r5);
    r4 = (r5 + 1);
    r3 = (r4 + 1);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r3 + 1);
    stackword10 = r31;
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_4 & -256);
    MemoryInline::FlatWrite32((r28 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r4 = (r5 + r4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r3 = MemoryInline::FlatRead8(r3);
    r3 = (r4 + r3);
    stackword11 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword11));
    MemoryInline::FlatWrite32((r28 + 12), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = MemoryInline::FlatRead32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d / f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 20), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f0.d));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2F22 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2F22;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWrite32((r28 + 28), r3);
    goto loc_804DDDA4;
}

loc_804DDD4C:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r5 = (r4 & 127);
    goto loc_804DDD7C;
}

loc_804DDD60:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r3 = (r3_rot_5 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r5 = (r3 + r0);
}

loc_804DDD7C:
{
    r0 = (r4 & 128);
}

loc_804DDD80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDD60;
    }
}

loc_804DDD84:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_804DDDA4;
}

loc_804DDD98:
{
    r4 = r28;
    r3 = (r27 + 20);
    ctx->lr = 0x804DDDA4u;
    if constexpr (KnownRegArgsCpuCall<0x804DD9D0u>(&func_804DD9D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_804DD9D0_3637 = func_804DD9D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DD9D0_3637);
        r4 = static_cast<uint32_t>(regargs_result_804DD9D0_3637 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804DD9D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
}

loc_804DDDA4:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = MemoryInline::FlatRead32((r28 + 8));
}

loc_804DDDB0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804DDDD8;
    }
}

loc_804DDDB4:
{
    r4 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r28 + 36), r29);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_804DDDD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDDD8;
    }
}

loc_804DDDD4:
{
    MemoryInline::FlatWrite32((r4 + 16), r30);
}

loc_804DDDD8:
{
    r0 = MemoryInline::FlatRead32((r28 + 36));
}

loc_804DDDE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DDE3C;
    }
}

loc_804DDDE4:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r5 = (r4 & 127);
    goto loc_804DDE14;
}

loc_804DDDF8:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r3 = (r3_rot_12 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r5 = (r3 + r0);
}

loc_804DDE14:
{
    r0 = (r4 & 128);
}

loc_804DDE18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DDDF8;
    }
}

loc_804DDE1C:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r3);
    MemoryInline::FlatWrite32((r28 + 32), r0);
}

loc_804DDE30:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_804DDE38:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r0))) {
        goto loc_804DDBAC;
    }
}

loc_804DDE3C:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
    r0 = (r0 - r25);
    MemoryInline::FlatWrite32((r28 + 32), r0);
}

loc_804DDE48:
{
    r28 = (r28 + 40);
    r26 = (r26 + 1);
}

loc_804DDE50:
{
    r0 = MemoryInline::FlatRead16((r27 + 8));
}

loc_804DDE58:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_804DDB7C;
    }
}

loc_804DDE5C:
{
    r0 = MemoryInline::FlatRead32((r27 + 16));
}

loc_804DDE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DDE9C;
    }
}

loc_804DDE68:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
}

loc_804DDE70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804DDE90;
    }
}

loc_804DDE74:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x804DDE80u;
    if constexpr (KnownRegArgsCpuCall<0x804DDEF0u>(&func_804DDEF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804DDEF0_46BE = func_804DDEF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DDEF0_46BE);
        r4 = static_cast<uint32_t>(regargs_result_804DDEF0_46BE >> 32);
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
        InvokeDirectCpu<0x804DDEF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = r27;
    r4 = 2;
    ctx->lr = 0x804DDE8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DDEF0u>(&func_804DDEF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804DDEF0_4A55 = func_804DDEF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DDEF0_4A55);
        r4 = static_cast<uint32_t>(regargs_result_804DDEF0_4A55 >> 32);
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
        InvokeDirectCpu<0x804DDEF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_804DDE9C;
}

loc_804DDE90:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x804DDE9Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DDEF0u>(&func_804DDEF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804DDEF0_4E16 = func_804DDEF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DDEF0_4E16);
        r4 = static_cast<uint32_t>(regargs_result_804DDEF0_4E16 >> 32);
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
        InvokeDirectCpu<0x804DDEF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_804DDE9C:
{
    r27 = MemoryInline::FlatRead32(r27);
}

loc_804DDEA0:
{
}

loc_804DDEA4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804DDB60;
    }
}

loc_804DDEA8:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 132u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 108u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 92u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DDAE0 func_804DDAE0 preserves=true fpr_mask=0x00000000
