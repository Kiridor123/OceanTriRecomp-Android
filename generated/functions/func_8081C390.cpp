#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081C390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8081C390;

loc_8081C390:
{
    r3 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C39C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C3A8;
    }
}

loc_8081C3A0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C3A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C3B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C3BC;
    }
}

loc_8081C3B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C3BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C3C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C3D0;
    }
}

loc_8081C3C8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C3D0:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C3D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C3E4;
    }
}

loc_8081C3DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C3E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C3EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C3F8;
    }
}

loc_8081C3F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C3F8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C400:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C40C;
    }
}

loc_8081C404:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C40C:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C420;
    }
}

loc_8081C418:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C420:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C428:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C434;
    }
}

loc_8081C42C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C434:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C43C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C448;
    }
}

loc_8081C440:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C448:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C450:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C45C;
    }
}

loc_8081C454:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8081C45C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081C270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081C390 func_8081C390 preserves=true fpr_mask=0x00000000
