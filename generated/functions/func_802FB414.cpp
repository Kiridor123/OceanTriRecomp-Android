#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB414(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_802FB414;

loc_802FB414:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 65535);
}

loc_802FB42C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(27))) {
        goto loc_802FB438;
    }
}

loc_802FB430:
{
    r3 = 0;
    goto loc_802FB484;
}

loc_802FB438:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -27808);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_802FB44C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802FB474;
    }
}

loc_802FB450:
{
    r3 = 0;
    goto loc_802FB484;
}

loc_802FB45C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802FB464:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FB470;
    }
}

loc_802FB468:
{
    r3 = 0;
    goto loc_802FB484;
}

loc_802FB470:
{
    r31 = (r31 + 2);
}

loc_802FB474:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_802FB47C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_802FB45C;
    }
}

loc_802FB480:
{
    r3 = 1;
}

loc_802FB484:
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
// RECOMP_REGISTRATION base 0x802FB414 func_802FB414 preserves=true fpr_mask=0x00000000
