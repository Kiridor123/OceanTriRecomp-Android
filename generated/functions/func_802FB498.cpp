#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB498(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802FB498u);
    goto loc_802FB498;

loc_802FB498:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r3 & 65535);
}

loc_802FB4B0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(27))) {
        goto loc_802FB4BC;
    }
}

loc_802FB4B4:
{
    r3 = 0;
    goto loc_802FB50C;
}

loc_802FB4BC:
{
    r0 = (r3 + -28);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -27696);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_802FB4D4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802FB4FC;
    }
}

loc_802FB4D8:
{
    r3 = 0;
    goto loc_802FB50C;
}

loc_802FB4E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802FB4EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FB4F8;
    }
}

loc_802FB4F0:
{
    r3 = 0;
    goto loc_802FB50C;
}

loc_802FB4F8:
{
    r31 = (r31 + 2);
}

loc_802FB4FC:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_802FB504:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_802FB4E4;
    }
}

loc_802FB508:
{
    r3 = 1;
}

loc_802FB50C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FB498 func_802FB498 preserves=true fpr_mask=0x00000000
