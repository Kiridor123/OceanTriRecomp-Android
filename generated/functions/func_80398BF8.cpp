#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80398BF8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80398BF8u);
    goto loc_80398BF8;

loc_80398BF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_80398C10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80398C4C;
    }
}

loc_80398C14:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80398C1C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80398C44;
    }
}

loc_80398C20:
{
    r5 = MemoryInline::FlatRead8((r3 + 12329));
    r4 = MemoryInline::FlatRead8((r3 + 12332));
    r0 = (r4 + -1);
}

loc_80398C30:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80398C3C;
    }
}

loc_80398C34:
{
    r3 = 0;
    goto loc_80398C64;
}

loc_80398C3C:
{
    r31 = (r3 + 12784);
    goto loc_80398C54;
}

loc_80398C44:
{
    r3 = 0;
    goto loc_80398C64;
}

loc_80398C4C:
{
    r3 = 0;
    goto loc_80398C64;
}

loc_80398C54:
{
    // inline leaf 0x80398918 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 12328));
    r0 = MemoryInline::FlatRead8((r3 + 12329));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r4 + r0);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80398918
    r0 = (r3 & 65535);
    r0 = (r0 * 12);
    r3 = (r31 + r0);
}

loc_80398C64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80398BF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80398BF8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80398BF8 func_80398BF8 preserves=true fpr_mask=0x00000000
