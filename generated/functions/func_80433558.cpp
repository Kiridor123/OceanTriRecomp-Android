#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80433558_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80433558;

loc_80433558:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80433578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_80433588;
    }
}

loc_8043357C:
{
}

loc_80433580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_804335A0;
    }
}

loc_80433584:
{
    goto loc_804335B4;
}

loc_80433588:
{
    r3 = (r31 & 255);
    r0 = (r3 + -5);
}

loc_80433594:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_804335B4;
    }
}

loc_80433598:
{
    r3 = 1;
    goto loc_804335B8;
}

loc_804335A0:
{
    r0 = (r31 & 255);
}

loc_804335A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804335B4;
    }
}

loc_804335AC:
{
    r3 = 1;
    goto loc_804335B8;
}

loc_804335B4:
{
    r3 = 0;
}

loc_804335B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80433558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80433558_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80433558 func_80433558 preserves=true fpr_mask=0x00000000
