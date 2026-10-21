#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802249F0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802249F0u);
    goto loc_802249F0;

loc_802249F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = 0;
    r31 = r28;
    r30 = (r3 + 4);
}

loc_80224A1C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r4 = (r0 | 1);
    // inline leaf 0x800E0C4C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x800E0C4C
    r31 = (r31 + 356);
    r30 = (r30 + 356);
    r29 = (r29 + 1);
}

loc_80224A3C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(7))) {
        goto loc_80224A1C;
    }
}

loc_80224A40:
{
    r30 = 0;
    r31 = (r28 + 2580);
}

loc_80224A48:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r28 + 2636));
    r4 = (r0 | 1);
    // inline leaf 0x800E0C4C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x800E0C4C
    r28 = (r28 + 356);
    r31 = (r31 + 356);
    r30 = (r30 + 1);
}

loc_80224A68:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_80224A48;
    }
}

loc_80224A6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802249F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802249F0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802249F0 func_802249F0 preserves=true fpr_mask=0x00000000
