#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033CF24_ra68_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8033CF24u);
    goto loc_8033CF24;

loc_8033CF24:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r4 + 15875));
    r7 = (r0 & 127);
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 118), static_cast<uint16_t>(r0));
    r8 = 0;
    r5 = 1;
    goto loc_8033CF68;
}

loc_8033CF44:
{
    r6 = (r8 & 255);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 8));
}

loc_8033CF54:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8033CF64;
    }
}

loc_8033CF58:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 114), static_cast<uint16_t>(r0));
}

loc_8033CF64:
{
    r8 = (r8 + 1);
}

loc_8033CF68:
{
    r4 = (r8 & 255);
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033CF74:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8033CF44;
    }
}

loc_8033CF78:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

extern "C" void func_8033CF24(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8033CF24_ra68_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
}

// RECOMP_GUEST_ABI gpr_read=0x000021E9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033CF24 func_8033CF24 preserves=true fpr_mask=0x00000000
