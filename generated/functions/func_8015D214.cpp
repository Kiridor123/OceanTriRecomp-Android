#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8015D214_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8015D214;

loc_8015D214:
{
    r0 = (r4 & 255);
}

loc_8015D21C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_8015D24C;
    }
}

loc_8015D220:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8015D228:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8015D24C;
    }
}

loc_8015D22C:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -19);
}

loc_8015D238:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8015D244;
    }
}

loc_8015D23C:
{
}

loc_8015D240:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(9))) {
        goto loc_8015D24C;
    }
}

loc_8015D244:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8015D24C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8015D214(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8015D214_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015D214 func_8015D214 preserves=true fpr_mask=0x00000000
