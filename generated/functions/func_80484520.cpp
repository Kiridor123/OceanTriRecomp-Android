#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80484520_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80484520u);
    goto loc_80484520;

loc_80484520:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80484528:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8048452C:
{
    r4 = 0x80740000u;
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (r4 + -17608);
    MemoryInline::FlatWriteRam8((r4 + 1589), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWriteRam8((r4 + 1588), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWriteRam8((r4 + 1587), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWriteRam8((r4 + 1586), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWriteRam8((r4 + 1585), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWriteRam8((r4 + 1584), static_cast<uint8_t>(r0));
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

extern "C" void func_80484520(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80484520_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80484520 func_80484520 preserves=true fpr_mask=0x00000000
