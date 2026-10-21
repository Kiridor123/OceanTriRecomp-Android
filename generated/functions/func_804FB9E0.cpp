#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DD940(CpuContext* ctx);
extern "C" uint64_t func_804DD940_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804FE950(CpuContext* ctx);
extern "C" uint64_t func_804FE950_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FB9E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804FB9E0u);
    goto loc_804FB9E0;

loc_804FB9E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = 0x80760000u;
    r29 = (r29 + 3936);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = MemoryInline::FlatRead8((r29 + 1765));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804FBA10:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804FBA1C;
    }
}

loc_804FBA14:
{
    r3 = 3;
    goto loc_804FBBC8;
}

loc_804FBA1C:
{
    r30 = 0;
    r31 = 0;
}

loc_804FBA24:
{
    r3 = (r29 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 317));
}

loc_804FBA30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804FBA3C;
    }
}

loc_804FBA34:
{
    r3 = (r3 + 292);
    ctx->lr = 0x804FBA3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804FE950u>(&func_804FE950)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_804FE950_DEC = func_804FE950_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FE950_DEC);
        r4 = static_cast<uint32_t>(regargs_result_804FE950_DEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804FE950u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
}

loc_804FBA3C:
{
    r30 = (r30 + 1);
    r31 = (r31 + 96);
}

loc_804FBA48:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(10))) {
        goto loc_804FBA24;
    }
}

loc_804FBA4C:
{
    r30 = 0;
    r31 = 0;
}

loc_804FBA54:
{
    r3 = (r29 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 1277));
}

loc_804FBA60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804FBA6C;
    }
}

loc_804FBA64:
{
    r3 = (r3 + 1252);
    ctx->lr = 0x804FBA6Cu;
    if constexpr (KnownRegArgsCpuCall<0x804FE950u>(&func_804FE950)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_804FE950_1639 = func_804FE950_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804FE950_1639);
        r4 = static_cast<uint32_t>(regargs_result_804FE950_1639 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804FE950u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
}

loc_804FBA6C:
{
    r30 = (r30 + 1);
    r31 = (r31 + 96);
}

loc_804FBA78:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(6))) {
        goto loc_804FBA54;
    }
}

loc_804FBA7C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14056));
}

loc_804FBA84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FBBC4;
    }
}

loc_804FBA88:
{
    ctx->lr = 0x804FBA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DD940u>(&func_804DD940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_804DD940_1E31 = func_804DD940_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DD940_1E31);
        r4 = static_cast<uint32_t>(regargs_result_804DD940_1E31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DD940u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804FBBBC;
    }
}

loc_804FBA94:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_804FBAB0:
{
    r3 = 0x80760000u;
    r4 = (r1 + 16);
    r3 = (r3 + 7296);
    r5 = 16;
    r3 = (r3 + 6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804FBAD0:
{
    r3 = MemoryInline::FlatRead32((r13 + -14052));
    r4 = 0x80760000u;
    r0 = 8;
    r4 = (r4 + 7296);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 65535);
    r6 = (r3 & 65535);
    ctr = r0;
}

loc_804FBAEC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    r4 = (r4 + 16);
    r0 = ~(r3 | r3);
    r5 = (r5 + r3);
    r0 = (r6 + r0);
    r6 = (r0 & 65535);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FBAEC;
    }
}

loc_804FBB94:
{
    r3 = 0x80760000u;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6_mrot_1 = (r6_rot_1 & -65536);
    r6_mdest_1 = (r6 & 65535);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = (r3 + 7296);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r4 = (r1 + 8);
    r5 = 4;
    r3 = (r3 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 100;
    goto loc_804FBBC8;
}

loc_804FBBBC:
{
    r3 = 5;
    goto loc_804FBBC8;
}

loc_804FBBC4:
{
    r3 = 5;
}

loc_804FBBC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FB9E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FB9E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FB9E0 func_804FB9E0 preserves=true fpr_mask=0x00000000
