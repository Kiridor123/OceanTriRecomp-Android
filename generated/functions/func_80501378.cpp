#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80501378_ra0_2_18_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t addr_lfsx_805013D4_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x80501378u);
    goto loc_80501378;

loc_80501378:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1568));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<1u, 5u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    r0 = MemoryInline::FlatRead16((r1 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=5 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + 10);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 5u>(ctx, r1_psq_tmp_1));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1564));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1560));
    f2.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 20);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f1.d));
    r3 = MemoryInline::FlatRead16((r1 + 20));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_3 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_3));
    r5 = 0x80630000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & -8);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r3 = (r3_rot_0 & -8388608);
    r5 = (r5 + -1680);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r4 = (r5 + r6);
    addr_lfsx_805013D4_loc_0 = (r5 + r6);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_805013D4_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + r0);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80501378(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80501378_ra0_2_18_0(ctx, ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501378 func_80501378 preserves=true fpr_mask=0x00000000
