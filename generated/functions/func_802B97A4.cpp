#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802B97A4_ra38_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802B97A4;

loc_802B97A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = r5;
    r31 = r6;
    ctx->lr = 0x802B97CCu;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BED34_47A = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_47A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead8((r3 + 493));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 494));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 494));
}

loc_802B97E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B9804;
    }
}

loc_802B97E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 380));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 472));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_802B9804:
{
    r3 = MemoryInline::FlatRead8((r3 + 492));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_802B97A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B97A4_ra38_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B97A4 func_802B97A4 preserves=true fpr_mask=0x00000000
