#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004DA94_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8004DA94u);
    goto loc_8004DA94;

loc_8004DA94:
{
    r6 = MemoryInline::FlatRead16(r3);
    r0 = (r4 & 65535);
}

loc_8004DAA0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8004DAAC;
    }
}

loc_8004DAA4:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

loc_8004DAAC:
{
    r0 = (r5 & 65535);
}

loc_8004DAB4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_8004DAB8:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_8004DA94(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8004DA94_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DA94 func_8004DA94 preserves=true fpr_mask=0x00000000
