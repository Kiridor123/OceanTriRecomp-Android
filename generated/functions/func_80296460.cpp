#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80296460_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80296460;

loc_80296460:
{
    r0 = MemoryInline::FlatRead32((r6 + 56));
}

loc_80296468:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_802964A4;
    }
}

loc_8029646C:
{
}

loc_80296470:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_802964A4;
    }
}

loc_80296474:
{
    r0 = MemoryInline::FlatRead32((r6 + 52));
}

loc_8029647C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_802964A4;
    }
}

loc_80296480:
{
}

loc_80296484:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_802964A4;
    }
}

loc_80296488:
{
    r0 = MemoryInline::FlatRead32((r6 + 48));
}

loc_80296490:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_802964A4;
    }
}

loc_80296494:
{
}

loc_80296498:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_802964A4;
    }
}

loc_8029649C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_802964A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80296460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80296460_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80296460 func_80296460 preserves=true fpr_mask=0x00000000
