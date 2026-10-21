#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80530F08_ra18_18_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f3, double arg_f4)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x80530F08u);
    goto loc_80530F08;

loc_80530F08:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r31 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1264));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1260));
    r30 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8050151Cu>(ctx);
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1260));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805014B4u>(ctx);
    f1 = ctx->fpr[1];
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f5.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f9.d = PpcFmulsInline(f1.d, f3.d);
    f8.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    f11.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = (-(f2.d));
    f12.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f10.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r30, f11.d);
    f7.d = (-(f6.d));
    f1.d = PpcFmulsInline(f9.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f12.d);
    f3.d = PpcFmulsInline(f11.d, f4.d);
    f6.d = PpcFmulsInline(f12.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 8), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 16), f9.d);
    f3.d = PpcFmulsInline(f10.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 20), f10.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 24), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 12), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 32), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 36), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 44), f8.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80530F08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80530F08_ra18_18_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x80000000 fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80530F08 func_80530F08 preserves=true fpr_mask=0x00000000
