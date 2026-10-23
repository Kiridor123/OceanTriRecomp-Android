#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE474_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_803FE474;

loc_803FE474:
{
    r6 = (r3 + 65536);
    MemoryInline::FlatWrite32((r6 + -32080), r4);
}

loc_803FE480:
{
    r0 = 1024;
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1024))) {
        goto loc_803FE48C;
    }
}

loc_803FE488:
{
    r0 = r5;
}

loc_803FE48C:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -32116), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_803FE474(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE474_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE474 func_803FE474 preserves=true fpr_mask=0x00000000
