#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800CFFC4_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x800CFFC4u);
    goto loc_800CFFC4;

loc_800CFFC4:
{
    r4 = 0x80690000u;
    r6 = (r4 + 28984);
    r4 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 33));
}

loc_800CFFD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CFFE4;
    }
}

loc_800CFFDC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_800CFFE4:
{
    r4 = MemoryInline::FlatRead8((r6 + 32));
    r0 = (r4 + -1);
}

loc_800CFFF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_800CFFFC;
    }
}

loc_800CFFF4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_800CFFFC:
{
    MemoryInline::FlatWriteRam8((r6 + 32), static_cast<uint8_t>(r0));
    r5 = (r0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r6 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 356));
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
    r3 = MemoryInline::FlatRead32((r4 + 356));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r6 + 12), r0);
    r4 = 0;
    r3 = (r6 + r5);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r6 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 100), r4);
    r0 = MemoryInline::FlatRead8((r6 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = MemoryInline::FlatRead8((r6 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite8((r3 + 612), static_cast<uint8_t>(r4));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_800CFFC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800CFFC4_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CFFC4 func_800CFFC4 preserves=true fpr_mask=0x00000000
