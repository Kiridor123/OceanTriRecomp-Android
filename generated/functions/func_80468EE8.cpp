#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80468EE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x80468EE8u);
    goto loc_80468EE8;

loc_80468EE8:
{
    r5 = -65536;
    r5 = (r5 | 65521);
    r5 = (r5 & r3);
    r3 = (r3 - r5);
    r4 = (r4 + r3);
}

loc_80468EFC:
{
    // dcbst @ 0x80468EFC (no-op)
    // dcbf @ 0x80468F00 (no-op)
    // sync @ 0x80468F04 (no-op)
    // icbi @ 0x80468F08 (no-op)
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + 8);
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -8);
}

loc_80468F14:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80468EFC;
    }
}

loc_80468F18:
{
    // isync @ 0x80468F18 (no-op)
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80468EE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80468EE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80468EE8 func_80468EE8 preserves=true fpr_mask=0x00000000
