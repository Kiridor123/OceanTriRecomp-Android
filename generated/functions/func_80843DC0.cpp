#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_80843DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80843DC0;

loc_80843DC0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 48);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r6 = 0x80840000u;
    r25 = r3;
    r6 = (r6 + 18896);
    r28 = r4;
    f28.d = MemoryInline::FlatReadFloat64((r6 + 24));
    r26 = r5;
    f29.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r29 = (r3 + 9244);
    f30.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r30 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r31 = 0;
    goto loc_80843E9C;
}

loc_80843E28:
{
    r3 = MemoryInline::FlatRead32(r28);
    r27 = MemoryInline::FlatRead32((r28 + 4));
    r28 = (r28 + 8);
    r0 = (r3 + -1297350656);
}

loc_80843E3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29291))) {
        goto loc_80843E8C;
    }
}

loc_80843E40:
{
    MemoryInline::FlatWrite32(r29, r25);
    r0 = (r28 + r27);
    MemoryInline::FlatWrite32((r29 + 4), r28);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 12), r28);
    r0 = MemoryInline::FlatRead16((r25 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    stackword9 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f0.d));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_119B = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_119B;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
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
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r28 = (r28 + r27);
    MemoryInline::FlatWrite32((r29 + 36), r31);
    goto loc_80843E94;
}

loc_80843E8C:
{
    r28 = (r28 + r27);
    goto loc_80843E28;
}

loc_80843E94:
{
    r26 = (r26 + -1);
    r29 = (r29 + 40);
}

loc_80843E9C:
{
}

loc_80843EA0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80843E28;
    }
}

loc_80843EA4:
{
    r11 = (r1 + 48);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 48));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000085B gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843DC0 func_80843DC0 preserves=true fpr_mask=0x00000000
