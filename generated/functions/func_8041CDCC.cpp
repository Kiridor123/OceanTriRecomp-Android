#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041C9A8(CpuContext* ctx);
extern "C" uint32_t func_8041C9A8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8041CDCC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8041CDCC;

loc_8041CDCC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r31 = (r3 + r30);
    r4 = MemoryInline::FlatRead32((r31 + 52));
    if constexpr (KnownRegArgsCpuCall<0x8041C9A8u>(&func_8041C9A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041C9A8_4F1 = func_8041C9A8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8041C9A8_4F1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8041C9A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r28 + 40));
    goto loc_8041CE30;
}

loc_8041CE0C:
{
    r0 = (r5 & 255);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 36));
}

loc_8041CE1C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_8041CE2C;
    }
}

loc_8041CE20:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    goto loc_8041CE3C;
}

loc_8041CE2C:
{
    r5 = (r5 + 1);
}

loc_8041CE30:
{
    r0 = (r5 & 255);
}

loc_8041CE38:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8041CE0C;
    }
}

loc_8041CE3C:
{
    r0 = 0;
    r3 = (r28 + r30);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r31 + 52), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8041CDCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041CDCC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041CDCC func_8041CDCC preserves=true fpr_mask=0x00000000
