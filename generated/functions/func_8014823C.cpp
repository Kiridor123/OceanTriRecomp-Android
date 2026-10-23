#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014823C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_8014823C;

loc_8014823C:
{
    r4 = MemoryInline::FlatRead16((r3 + 852));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148827708);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 852), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80148250:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(50))) {
        goto loc_return;
    }
}

loc_80148254:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 852), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_8014823C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8014823C_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014823C func_8014823C preserves=true fpr_mask=0x00000000
