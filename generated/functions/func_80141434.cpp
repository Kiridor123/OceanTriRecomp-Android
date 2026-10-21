#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141434(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80141434u);
    goto loc_80141434;

loc_80141434:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80141448:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141454;
    }
}

loc_8014144C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_80141454:
{
    r4 = (r4 + 24);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80141460:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014146C;
    }
}

loc_80141464:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_8014146C:
{
    r4 = (r4 + 24);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80141478:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141484;
    }
}

loc_8014147C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_80141484:
{
    r4 = (r4 + 24);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80141490:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014149C;
    }
}

loc_80141494:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_8014149C:
{
    r4 = (r4 + 24);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801414A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801414B4;
    }
}

loc_801414AC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_801414B4:
{
    r4 = (r4 + 24);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801414C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801414CC;
    }
}

loc_801414C4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_801414CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141434 func_80141434 preserves=true fpr_mask=0x00000000
