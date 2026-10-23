#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8015D998_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8015D998;

loc_8015D998:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r3 & 1);
}

loc_8015D9A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D9B0;
    }
}

loc_8015D9AC:
{
    r4 = 1;
}

loc_8015D9B0:
{
    r0 = (r3 & 2);
}

loc_8015D9B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D9C4;
    }
}

loc_8015D9BC:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8015D9C4:
{
    r0 = (r3 & 4);
}

loc_8015D9CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D9D8;
    }
}

loc_8015D9D0:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8015D9D8:
{
    r0 = (r3 & 8);
}

loc_8015D9E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D9EC;
    }
}

loc_8015D9E4:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8015D9EC:
{
    r0 = (r3 & 16);
}

loc_8015D9F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015DA00;
    }
}

loc_8015D9F8:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8015DA00:
{
    r0 = (r3 & 32);
}

loc_8015DA08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015DA14;
    }
}

loc_8015DA0C:
{
    r0 = (r4 + 1);
    r4 = (r0 & 255);
}

loc_8015DA14:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8015D998(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8015D998_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015D998 func_8015D998 preserves=true fpr_mask=0x00000000
