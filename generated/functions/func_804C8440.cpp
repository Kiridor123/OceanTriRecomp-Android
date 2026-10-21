#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C8440_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804C8440u);
    goto loc_804C8440;

loc_804C8440:
{
    r0 = (r4 & 1);
}

loc_804C8444:
{
    r7 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8450;
    }
}

loc_804C844C:
{
    r7 = (r7 | 16);
}

loc_804C8450:
{
    r0 = (r4 & 2);
}

loc_804C8454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C845C;
    }
}

loc_804C8458:
{
    r7 = (r7 | 32);
}

loc_804C845C:
{
    r0 = (r5 & 1);
}

loc_804C8460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8468;
    }
}

loc_804C8464:
{
    r7 = (r7 | 4);
}

loc_804C8468:
{
    r0 = (r5 & 2);
}

loc_804C846C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8474;
    }
}

loc_804C8470:
{
    r7 = (r7 | 8);
}

loc_804C8474:
{
    r0 = (r6 & 1);
}

loc_804C8478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8480;
    }
}

loc_804C847C:
{
    r7 = (r7 | 1);
}

loc_804C8480:
{
    r0 = (r6 & 2);
}

loc_804C8484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C848C;
    }
}

loc_804C8488:
{
    r7 = (r7 | 2);
}

loc_804C848C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return;
}

}

extern "C" void func_804C8440(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804C8440_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C8440 func_804C8440 preserves=true fpr_mask=0x00000000
