#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042496C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8042496C;

loc_8042496C:
{
    r6 = MemoryInline::FlatRead32((r13 + -16440));
    r7 = 0;
    r5 = r6;
    r0 = 64;
    ctr = r0;
}

loc_80424980:
{
    r0 = MemoryInline::FlatRead32((r5 + 31384));
}

loc_80424988:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8042499C;
    }
}

loc_8042498C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 31640), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_8042499C:
{
    r5 = (r5 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80424980;
    }
}

loc_804249A8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8042496C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042496C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042496C func_8042496C preserves=true fpr_mask=0x00000000
