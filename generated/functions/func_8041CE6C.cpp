#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041CE6C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x8041CE6Cu);
    goto loc_8041CE6C;

loc_8041CE6C:
{
    r8 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 40));
    goto loc_8041CEA0;
}

loc_8041CE78:
{
    r6 = (r8 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 68));
}

loc_8041CE8C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8041CE9C;
    }
}

loc_8041CE90:
{
    r3 = (r3 + r6);
    r3 = MemoryInline::FlatRead8((r3 + 84));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

loc_8041CE9C:
{
    r8 = (r8 + 1);
}

loc_8041CEA0:
{
    r0 = (r8 & 255);
}

loc_8041CEA8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_8041CE78;
    }
}

loc_8041CEAC:
{
    r0 = MemoryInline::FlatRead8((r3 + 17517));
}

loc_8041CEB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041CEE4;
    }
}

loc_8041CEB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_8041CEC0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8041CEE4;
    }
}

loc_8041CEC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 17520));
}

loc_8041CECC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8041CEDC;
    }
}

loc_8041CED0:
{
    r0 = MemoryInline::FlatRead32((r3 + 17524));
}

loc_8041CED8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8041CEE4;
    }
}

loc_8041CEDC:
{
    r3 = MemoryInline::FlatRead8((r3 + 17518));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

loc_8041CEE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_8041CE6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041CE6C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000179 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041CE6C func_8041CE6C preserves=true fpr_mask=0x00000000
