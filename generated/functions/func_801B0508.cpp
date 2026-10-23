#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801B0508_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_801B0508;

loc_801B0508:
{
    r4 = MemoryInline::FlatRead8((r3 + 819));
}

loc_801B0510:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801B0520;
    }
}

loc_801B0514:
{
}

loc_801B0518:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_801B053C;
    }
}

loc_801B051C:
{
    goto loc_801B055C;
}

loc_801B0520:
{
    r0 = MemoryInline::FlatRead8((r3 + 1889));
    r0 = (r0 & 47);
}

loc_801B0528:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r3 + 1889), static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 819), static_cast<uint8_t>(r0));
    goto loc_801B055C;
}

loc_801B053C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1889));
    r0 = (r0 & 79);
}

loc_801B0544:
{
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 1889), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 819), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801B055C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B0508(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B0508_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B0508 func_801B0508 preserves=true fpr_mask=0x00000000
