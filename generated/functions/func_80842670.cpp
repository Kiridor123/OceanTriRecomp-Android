#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80842670;

loc_80842670:
{
}

loc_80842674:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(7))) {
        goto loc_8084268C;
    }
}

loc_80842678:
{
}

loc_8084267C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(10))) {
        goto loc_808426AC;
    }
}

loc_80842680:
{
}

loc_80842684:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(91))) {
        goto loc_808426B8;
    }
}

loc_80842688:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_8084268C:
{
    r5 = 0x80850000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r5 = (r5 + -30032);
    r3 = (r3 + r0);
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    MemoryInline::FlatWrite32((r3 + 108), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_808426AC:
{
    r3 = (r3 + r4);
    MemoryInline::FlatWrite8((r3 + 236), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_808426B8:
{
    r5 = 0x80850000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
    r5 = (r5 + -30032);
    r3 = (r3 + r0);
    r5_addr_0 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    MemoryInline::FlatWrite32((r3 + 172), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80842670 func_80842670 preserves=true fpr_mask=0x00000000
