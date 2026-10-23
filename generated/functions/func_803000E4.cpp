#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803000E4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_803000E4;

loc_803000E4:
{
    r6 = 0;
    r7 = 0;
    r0 = 5;
    ctr = r0;
}

loc_803000F4:
{
    r5 = MemoryInline::FlatRead16((r4 + 4));
}

loc_803000FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80300124;
    }
}

loc_80300100:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80300108:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300114;
    }
}

loc_8030010C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    goto loc_80300118;
}

loc_80300114:
{
    r0 = 1;
}

loc_80300118:
{
    r0 = (r5 * r0);
    r0 = (r0 & 65535);
    r6 = (r6 + r0);
}

loc_80300124:
{
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead16((r4 + 12));
}

loc_80300130:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80300158;
    }
}

loc_80300134:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8030013C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300148;
    }
}

loc_80300140:
{
    r0 = MemoryInline::FlatRead16((r4 + 10));
    goto loc_8030014C;
}

loc_80300148:
{
    r0 = 1;
}

loc_8030014C:
{
    r0 = (r5 * r0);
    r0 = (r0 & 65535);
    r6 = (r6 + r0);
}

loc_80300158:
{
    r4 = (r4 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803000F4;
    }
}

loc_80300164:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803000E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803000E4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803000E4 func_803000E4 preserves=true fpr_mask=0x00000000
