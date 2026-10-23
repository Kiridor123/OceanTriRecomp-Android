#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BE09C(CpuContext* ctx);
extern "C" uint32_t func_802BE09C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8026FAD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8026FAD0;

loc_8026FAD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 297));
}

loc_8026FB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026FB20;
    }
}

loc_8026FB0C:
{
    ctx->lr = 0x8026FB10u;
    if constexpr (KnownRegArgsCpuCall<0x802BE09Cu>(&func_802BE09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BE09C_549 = func_802BE09C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE09C_549;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BE09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r28 + 168));
    r0 = (r0 - r3);
    r4 = (r0 & 65535);
}

loc_8026FB20:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 212));
}

loc_8026FB30:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_8026FB60;
    }
}

loc_8026FB34:
{
    r0 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
    r0 = (r0 - r30);
    r3 = (r0 & 65535);
    r0 = (r31 - r30);
    r0 = (r0 & 65535);
}

loc_8026FB54:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8026FB60;
    }
}

loc_8026FB58:
{
    r3 = 1;
    goto loc_8026FB64;
}

loc_8026FB60:
{
    r3 = 0;
}

loc_8026FB64:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026FAD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026FAD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026FAD0 func_8026FAD0 preserves=true fpr_mask=0x00000000
