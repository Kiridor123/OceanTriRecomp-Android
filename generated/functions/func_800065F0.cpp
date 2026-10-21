#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800065F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x800065F0u);
    goto loc_800065F0;

loc_800065F0:
{
    r5 = -65536;
    r5 = (r5 | 65521);
    r5 = (r5 & r3);
    r3 = (r3 - r5);
    r4 = (r4 + r3);
}

loc_80006604:
{
    // dcbst @ 0x80006604 (no-op)
    // sync @ 0x80006608 (no-op)
    // icbi @ 0x8000660C (no-op)
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + 8);
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -8);
}

loc_80006618:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80006604;
    }
}

loc_8000661C:
{
    // isync @ 0x8000661C (no-op)
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800065F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800065F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800065F0 func_800065F0 preserves=true fpr_mask=0x00000000
