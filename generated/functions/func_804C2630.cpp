#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804C2630_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x804C2630u);
    goto loc_804C2630;

loc_804C2630:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = 0;
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r6 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_804C26B8;
}

loc_804C2650:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804C2658:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_804C2664;
    }
}

loc_804C265C:
{
    r8 = r6;
    goto loc_804C26B4;
}

loc_804C2664:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804C266C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_804C26C0;
    }
}

loc_804C2670:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r7 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r6 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r5 + 16);
}

loc_804C2688:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C2698;
    }
}

loc_804C2690:
{
    MemoryInline::FlatWrite32((r7 + 12), r6);
    goto loc_804C269C;
}

loc_804C2698:
{
    MemoryInline::FlatWrite32(r3, r6);
}

loc_804C269C:
{
}

loc_804C26A0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804C26AC;
    }
}

loc_804C26A4:
{
    MemoryInline::FlatWrite32((r6 + 8), r7);
    goto loc_804C26C0;
}

loc_804C26AC:
{
    MemoryInline::FlatWrite32((r3 + 4), r7);
    goto loc_804C26C0;
}

loc_804C26B4:
{
    r6 = MemoryInline::FlatRead32((r6 + 12));
}

loc_804C26B8:
{
}

loc_804C26BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804C2650;
    }
}

loc_804C26C0:
{
}

loc_804C26C4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804C2718;
    }
}

loc_804C26C8:
{
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r8 + r5);
    r4 = (r4 + 16);
}

loc_804C26DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804C2718;
    }
}

loc_804C26E0:
{
    r5 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
}

loc_804C26EC:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804C26FC;
    }
}

loc_804C26F4:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    goto loc_804C2700;
}

loc_804C26FC:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_804C2700:
{
}

loc_804C2704:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C2710;
    }
}

loc_804C2708:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_804C2714;
}

loc_804C2710:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_804C2714:
{
    r8 = r5;
}

loc_804C2718:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 - r5);
}

loc_804C2728:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(16))) {
        goto loc_804C2734;
    }
}

loc_804C272C:
{
    r3 = 0;
    goto loc_804C2790;
}

loc_804C2734:
{
    r0 = 18002;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = 0;
}

loc_804C2744:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r4));
    r0 = (r5 + 16);
    r0 = (r6 - r0);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite32((r5 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804C276C;
    }
}

loc_804C2760:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r5);
    goto loc_804C2774;
}

loc_804C276C:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r5);
}

loc_804C2774:
{
}

loc_804C2778:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C2788;
    }
}

loc_804C2780:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_804C278C;
}

loc_804C2788:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_804C278C:
{
    r3 = 1;
}

loc_804C2790:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C2630(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C2630_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C2630 func_804C2630 preserves=true fpr_mask=0x00000000
