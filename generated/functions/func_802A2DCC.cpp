#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A2DCC_ra58_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    goto loc_802A2DCC;

loc_802A2DCC:
{
    r0 = (r3 & 255);
    r5 = (r0 * 816);
    r3 = 0x806B0000u;
    r0 = (r3 + -4792);
    r5 = (r0 + r5);
    r6 = 0;
    r3 = r5;
    goto loc_802A2E08;
}

loc_802A2DEC:
{
    r0 = (r4 - r6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 109), static_cast<uint8_t>(r0));
    r3 = (r3 + 24);
    r6 = (r6 + 1);
}

loc_802A2E08:
{
    r0 = MemoryInline::FlatRead8((r5 + 23));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A2E14:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802A2DEC;
    }
}

loc_802A2E18:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_802A2DCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A2DCC_ra58_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A2DCC func_802A2DCC preserves=true fpr_mask=0x00000000
