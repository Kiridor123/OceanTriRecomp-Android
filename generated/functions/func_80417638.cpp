#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80417638_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80417638;

loc_80417638:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r5);
    r30 = (static_cast<int32_t>(r0) >> 1);
    r29 = 0;
    r28 = 0;
    r31 = r4;
    goto loc_80417684;
}

loc_80417670:
{
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // inline leaf 0x8045B1C8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1C8
    r29 = (r29 + r3);
    r31 = (r31 + 2);
    r28 = (r28 + 1);
}

loc_80417684:
{
}

loc_80417688:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r30))) {
        goto loc_80417670;
    }
}

loc_8041768C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80417638(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80417638_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80417638 func_80417638 preserves=true fpr_mask=0x00000000
