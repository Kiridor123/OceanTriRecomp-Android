#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808340D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_808340D0;

loc_808340D0:
{
    r4 = 1431633920;
    r5 = MemoryInline::FlatRead8((r3 + 252));
    r0 = (r4 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r4 = 0x80840000u;
    r4 = (r4 + 18680);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
}

loc_80834100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80834114;
    }
}

loc_80834104:
{
}

loc_80834108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8083411C;
    }
}

loc_8083410C:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

loc_80834114:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

loc_8083411C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808340D0 func_808340D0 preserves=true fpr_mask=0x00000000
