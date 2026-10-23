#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80228324_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80228408_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80228324;

loc_80228324:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r30 = r4;
    r31 = r5;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15800));
}

loc_80228354:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8022835C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022837C;
    }
}

loc_80228360:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    goto loc_80228404;
}

loc_8022837C:
{
    r3 = r29;
    r4 = 5;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    ctx->lr = 0x8022838Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_A48 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_A48);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_A48 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
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
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_80228390:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802283FC;
    }
}

loc_80228394:
{
    r3 = r29;
    // inline leaf 0x8026A3B0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // end of inlined leaf 0x8026A3B0
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 32u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 28));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    goto loc_80228404;
}

loc_802283FC:
{
    r30 = (r30 + 16);
    goto loc_80228354;
}

loc_80228404:
{
    r0 = 40;
    addr_psqx_80228408_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80228408_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80228324(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80228324_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80228324 func_80228324 preserves=true fpr_mask=0x00000000
