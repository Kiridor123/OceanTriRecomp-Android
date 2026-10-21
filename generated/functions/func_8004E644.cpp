#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004E644_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8004E644u);
    goto loc_8004E644;

loc_8004E644:
{
    r5 = (r4 & 65535);
}

loc_8004E64C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8004E650:
{
    r0 = (r3 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r6);
    r0 = MemoryInline::FlatRead16((r3 + 15296));
}

loc_8004E668:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_8004E674;
    }
}

loc_8004E66C:
{
}

loc_8004E670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004E678;
    }
}

loc_8004E674:
{
    MemoryInline::FlatWrite16((r3 + 15296), static_cast<uint16_t>(r4));
}

loc_8004E678:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = (r0 + r6);
    r3 = MemoryInline::FlatRead16((r5 + 15298));
    r0 = (r4 & 65535);
}

loc_8004E68C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_8004E690:
{
    MemoryInline::FlatWrite16((r5 + 15298), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8004E644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004E644_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004E644 func_8004E644 preserves=true fpr_mask=0x00000000
