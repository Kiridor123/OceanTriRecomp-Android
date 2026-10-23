#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8019E9C4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t xer = ctx->xer;

    goto loc_8019E9C4;

loc_8019E9C4:
{
    r3 = (r3 + 808);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 3);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
}

loc_8019E9D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_8019E9DC;
    }
}

loc_8019E9D8:
{
    r0 = 3;
}

loc_8019E9DC:
{
    r7 = (r3 + r0);
    r6 = MemoryAlias::FlatRead8((r7 + 44));
    r5 = 1;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & -536870912);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -1);
    r0 = (r0 + r3);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryAlias::FlatWrite8((r7 + 44), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_8019E9C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8019E9C4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019E9C4 func_8019E9C4 preserves=true fpr_mask=0x00000000
