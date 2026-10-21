#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800649EC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x800649ECu);
    goto loc_800649EC;

loc_800649EC:
{
}

loc_800649F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80064A04;
    }
}

loc_800649F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_80064A04:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_800649EC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800649EC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800649EC func_800649EC preserves=true fpr_mask=0x00000000
