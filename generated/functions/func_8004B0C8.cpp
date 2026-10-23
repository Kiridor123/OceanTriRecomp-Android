#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004B0C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_8004B0C8;

loc_8004B0C8:
{
    r6 = 0;
    r3 = (r3 & 65535);
}

loc_8004B0D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004B100;
    }
}

loc_8004B0D8:
{
    ctr = r5;
}

loc_8004B0E0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8004B100;
    }
}

loc_8004B0E4:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8004B0EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004B0F8;
    }
}

loc_8004B0F0:
{
    r6 = MemoryInline::FlatRead16((r4 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    goto loc_8004B100;
}

loc_8004B0F8:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004B0E4;
    }
}

loc_8004B100:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004B0C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004B0C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B0C8 func_8004B0C8 preserves=true fpr_mask=0x00000000
