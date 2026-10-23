#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803C4B18_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;

    goto loc_803C4B18;

loc_803C4B18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r3 = (r3 & 255);
    r0 = (r3 + -43);
}

loc_803C4B34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803C4B54;
    }
}

loc_803C4B38:
{
}

loc_803C4B3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(39))) {
        goto loc_803C4B54;
    }
}

loc_803C4B40:
{
}

loc_803C4B44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(47))) {
        goto loc_803C4B54;
    }
}

loc_803C4B48:
{
}

loc_803C4B4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(255))) {
        goto loc_803C4B5C;
    }
}

loc_803C4B50:
{
    goto loc_803C4B64;
}

loc_803C4B54:
{
    r3 = 1;
    goto loc_803C4B68;
}

loc_803C4B5C:
{
    r3 = 1;
    goto loc_803C4B68;
}

loc_803C4B64:
{
    r3 = 0;
}

loc_803C4B68:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803C4B18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803C4B18_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C4B18 func_803C4B18 preserves=true fpr_mask=0x00000000
