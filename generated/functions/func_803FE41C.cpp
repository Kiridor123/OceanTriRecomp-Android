#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803FE41C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_803FE41C;

loc_803FE41C:
{
}

loc_803FE420:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_803FE44C;
    }
}

loc_803FE424:
{
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32084), r5);
}

loc_803FE430:
{
    r4 = 65536;
    r0 = (r4 + -32768);
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(32768))) {
        goto loc_803FE440;
    }
}

loc_803FE43C:
{
    r0 = r6;
}

loc_803FE440:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -32120), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803FE44C:
{
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32088), r5);
}

loc_803FE458:
{
    r4 = 65536;
    r0 = (r4 + -32768);
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(32768))) {
        goto loc_803FE468;
    }
}

loc_803FE464:
{
    r0 = r6;
}

loc_803FE468:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -32124), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FE41C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FE41C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE41C func_803FE41C preserves=true fpr_mask=0x00000000
