#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803B1E1C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803B1E1Cu);
    goto loc_803B1E1C;

loc_803B1E1C:
{
    r6 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803B1E24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803B1E28:
{
    r0 = MemoryInline::FlatRead8((r6 + 27178));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B1E34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_return;
    }
}

loc_803B1E38:
{
    r0 = (r0 * 6);
    r7 = (r6 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 27180));
    r0 = (r3 & 255);
}

loc_803B1E4C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803B1E50:
{
    r3 = MemoryInline::FlatRead16((r7 + 27182));
    r0 = (r4 & 65535);
}

loc_803B1E5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803B1E60:
{
    r3 = MemoryInline::FlatRead16((r7 + 27184));
}

loc_803B1E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803B1E6C:
{
    r0 = (r5 & 65535);
    r0 = (r3 - r0);
}

loc_803B1E78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803B1E80;
    }
}

loc_803B1E7C:
{
    r0 = 0;
}

loc_803B1E80:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r7 + 27184), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_803B1E1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B1E1C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B1E1C func_803B1E1C preserves=true fpr_mask=0x00000000
