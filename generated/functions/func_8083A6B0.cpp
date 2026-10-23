#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083A6B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t xer = ctx->xer;

    goto loc_8083A6B0;

loc_8083A6B0:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8083A6C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083A6D8;
    }
}

loc_8083A6C4:
{
}

loc_8083A6C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083A6F0;
    }
}

loc_8083A6CC:
{
}

loc_8083A6D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8083A708;
    }
}

loc_8083A6D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return;
}

loc_8083A6D8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r5 - r0);
    r0 = (r3 + r0);
    r3 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return;
}

loc_8083A6F0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r5 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return;
}

loc_8083A708:
{
    r6 = (r4 + 12);
    r4 = MemoryInline::FlatRead16((r4 + 12));
    r7 = (r6 + 2);
    r0 = (r4 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r6 + r0);
    r6 = (r4 + 2);
    goto loc_8083A770;
}

loc_8083A728:
{
    r0 = (r6 - r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r0 + r4_ca_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -4);
    r4 = (r7 + r0);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_2);
}

loc_8083A74C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8083A758;
    }
}

loc_8083A750:
{
    r7 = (r4 + 4);
    goto loc_8083A770;
}

loc_8083A758:
{
}

loc_8083A75C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8083A768;
    }
}

loc_8083A760:
{
    r6 = (r4 + -4);
    goto loc_8083A770;
}

loc_8083A768:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return;
}

loc_8083A770:
{
}

loc_8083A774:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_8083A728;
    }
}

loc_8083A778:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F1 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083A6B0 func_8083A6B0 preserves=true fpr_mask=0x00000000
