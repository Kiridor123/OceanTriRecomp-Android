#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_8012F4D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8012F54C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8012F4D8;

loc_8012F4D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    r0 = MemoryInline::FlatRead8((r3 + 1083));
}

loc_8012F500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012F538;
    }
}

loc_8012F504:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8012F50C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_8012F538;
    }
}

loc_8012F510:
{
}

loc_8012F514:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8012F538;
    }
}

loc_8012F518:
{
}

loc_8012F51C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(13))) {
        goto loc_8012F538;
    }
}

loc_8012F520:
{
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_80F = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_80F);
        r4 = static_cast<uint32_t>(regargs_result_80126098_80F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r3 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8012F530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012F538;
    }
}

loc_8012F534:
{
    f31.d = MemoryInline::FlatReadFloat32(r3);
}

loc_8012F538:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1980));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1984));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    r0 = 24;
    addr_psqx_8012F54C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012F54C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F4D8 func_8012F4D8 preserves=true fpr_mask=0x00000000
