#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80379070_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80379070;

loc_80379070:
{
    r5 = 0;
    r0 = (r4 & 255);
}

loc_8037907C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8037909C;
    }
}

loc_80379080:
{
}

loc_80379084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803790A8;
    }
}

loc_80379088:
{
}

loc_8037908C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803790BC;
    }
}

loc_80379090:
{
}

loc_80379094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803790D0;
    }
}

loc_80379098:
{
    goto loc_803790E0;
}

loc_8037909C:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r5 = (r0 & 3);
    goto loc_803790E0;
}

loc_803790A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r0 & 12);
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5 = (r0 & 255);
    goto loc_803790E0;
}

loc_803790BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r0 & 48);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r5 = (r0 & 255);
    goto loc_803790E0;
}

loc_803790D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r0 & 192);
    r0 = (static_cast<int32_t>(r0) >> 6);
    r5 = (r0 & 255);
}

loc_803790E0:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80379070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80379070_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80379070 func_80379070 preserves=true fpr_mask=0x00000000
