#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DFC80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x802DFC80u);
    goto loc_802DFC80;

loc_802DFC80:
{
    r5 = 0x806C0000u;
    r6 = (r5 + 312);
    r5 = 1;
    r0 = (r3 & 255);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r5 = (r5 & 255);
    r0 = (r0 | r5);
    MemoryInline::FlatWriteRam8((r6 + 1), static_cast<uint8_t>(r0));
}

loc_802DFCA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_802DFCB8;
    }
}

loc_802DFCAC:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r0 = (r0 | r5);
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r0));
}

loc_802DFCB8:
{
    r4 = 0;
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DFC80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DFC80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DFC80 func_802DFC80 preserves=true fpr_mask=0x00000000
