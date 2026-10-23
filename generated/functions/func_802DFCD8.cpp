#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DFCD8_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_802DFCD8;

loc_802DFCD8:
{
    r3 = 1;
}

loc_802DFCF0:
{
    r0 = 1;
    r6 = (r3 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r4 = ~(r0 | r0);
    r3 = 0x806C0000u;
    r5 = (r3 + 312);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r4 & 255);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    r4 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DFCD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DFCD8_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DFCD8 func_802DFCD8 preserves=true fpr_mask=0x00000000
