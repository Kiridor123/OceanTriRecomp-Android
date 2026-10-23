#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052BE8(CpuContext* ctx);
extern "C" uint32_t func_80052BE8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80052C24(CpuContext* ctx);
extern "C" uint64_t func_80052C24_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534CC(CpuContext* ctx);
extern "C" uint64_t func_800534CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534F0(CpuContext* ctx);
extern "C" uint64_t func_800534F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053514(CpuContext* ctx);
extern "C" uint64_t func_80053514_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053A18(CpuContext* ctx);
extern "C" uint64_t func_80053A18_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80053AF4(CpuContext* ctx);
extern "C" uint32_t func_80053AF4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80053BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80053D34_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80053BCC;

loc_80053BCC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r28 = r4;
    r29 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r3 = (r3 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80053A18u>(&func_80053A18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053A18_AD6 = func_80053A18_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80053A18_AD6);
        r4 = static_cast<uint32_t>(regargs_result_80053A18_AD6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053A18u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r30 & 65535);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r3 = (r1 + 12);
    r4 = 0x80670000u;
    r31 = (r4 + -12896);
    r4 = (r31 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 600));
    ctx->lr = 0x80053C34u;
    if constexpr (KnownRegArgsCpuCall<0x80052C24u>(&func_80052C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052C24_E86 = func_80052C24_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052C24_E86);
        r4 = static_cast<uint32_t>(regargs_result_80052C24_E86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80052C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r31 + 224);
    ctx->lr = 0x80053C40u;
    if constexpr (KnownRegArgsCpuCall<0x80052BE8u>(&func_80052BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052BE8_11CE = func_80052BE8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80052BE8_11CE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80052BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 8);
    r4 = (r31 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 732));
    ctx->lr = 0x80053C50u;
    if constexpr (KnownRegArgsCpuCall<0x80053514u>(&func_80053514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053514_147C = func_80053514_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053514_147C);
        r4 = static_cast<uint32_t>(regargs_result_80053514_147C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r31 + 228);
    ctx->lr = 0x80053C5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80053AF4u>(&func_80053AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053AF4_17C7 = func_80053AF4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80053AF4_17C7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r31 + 224);
    ctx->lr = 0x80053C64u;
    if constexpr (KnownRegArgsCpuCall<0x800534F0u>(&func_800534F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534F0_1A31 = func_800534F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534F0_1A31);
        r4 = static_cast<uint32_t>(regargs_result_800534F0_1A31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800534F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = (r31 + 224);
    ctx->lr = 0x80053C88u;
    if constexpr (KnownRegArgsCpuCall<0x800534CCu>(&func_800534CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534CC_1EF5 = func_800534CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534CC_1EF5);
        r4 = static_cast<uint32_t>(regargs_result_800534CC_1EF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800534CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead16(r28);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32400));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 100u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r31 + 108), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 84), f0.d);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r31 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 92), f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r31 + 88), f0.d);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r31 + 112), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r31 + 104), f0.d);
    r0 = (r31 + 84);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 16), r0);
    r0 = 56;
    addr_psqx_80053D34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80053D34_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FE gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053BCC func_80053BCC preserves=true fpr_mask=0x00000000
