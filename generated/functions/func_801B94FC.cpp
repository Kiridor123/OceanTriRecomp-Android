#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801B94FC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B94FC;

loc_801B94FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801B951C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_801B954C;
    }
}

loc_801B9520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801B9524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B956C;
    }
}

loc_801B9528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B9540;
    }
}

loc_801B952C:
{
}

loc_801B9530:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801B95A4;
    }
}

loc_801B9534:
{
}

loc_801B9538:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801B956C;
    }
}

loc_801B953C:
{
    goto loc_801B95A4;
}

loc_801B9540:
{
}

loc_801B9544:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_801B956C;
    }
}

loc_801B9548:
{
    goto loc_801B95A4;
}

loc_801B954C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_801B9550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B956C;
    }
}

loc_801B9554:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B95A4;
    }
}

loc_801B9558:
{
}

loc_801B955C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_801B95A4;
    }
}

loc_801B9560:
{
}

loc_801B9564:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_801B956C;
    }
}

loc_801B9568:
{
    goto loc_801B95A4;
}

loc_801B956C:
{
    r3 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r3 & 1);
}

loc_801B9578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B9590;
    }
}

loc_801B957C:
{
    r0 = (r3 & 254);
    r0 = (r0 & 253);
}

loc_801B9584:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
    goto loc_801B95B8;
}

loc_801B9590:
{
    r0 = (r3 | 1);
    r0 = (r0 | 2);
    r0 = (r0 & 251);
}

loc_801B959C:
{
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
    goto loc_801B95B8;
}

loc_801B95A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r0 | 1);
    r0 = (r0 & 253);
}

loc_801B95B0:
{
    r0 = (r0 & 251);
}

loc_801B95B4:
{
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
}

loc_801B95B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801B94FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801B94FC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B94FC func_801B94FC preserves=true fpr_mask=0x00000000
