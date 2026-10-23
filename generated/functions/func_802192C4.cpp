#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802192C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802192C4;

loc_802192C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_802192E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021931C;
    }
}

loc_802192E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802192FC;
    }
}

loc_802192E8:
{
}

loc_802192EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_80219310;
    }
}

loc_802192F0:
{
}

loc_802192F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8021936C;
    }
}

loc_802192F8:
{
    goto loc_8021938C;
}

loc_802192FC:
{
}

loc_80219300:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8021938C;
    }
}

loc_80219304:
{
}

loc_80219308:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_80219310;
    }
}

loc_8021930C:
{
    goto loc_80219344;
}

loc_80219310:
{
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r3 = (r3 + 464);
    goto loc_80219390;
}

loc_8021931C:
{
    r3 = MemoryInline::FlatRead32((r3 + 52));
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80219328:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80219338;
    }
}

loc_8021932C:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r3 + 488);
    goto loc_80219390;
}

loc_80219338:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r3 + 464);
    goto loc_80219390;
}

loc_80219344:
{
    r3 = MemoryInline::FlatRead32((r3 + 52));
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80219350:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80219360;
    }
}

loc_80219354:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r3 + 500);
    goto loc_80219390;
}

loc_80219360:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r3 + 464);
    goto loc_80219390;
}

loc_8021936C:
{
    r3 = r0;
    // inline leaf 0x8027E2F4 (3 guest instruction(s))
    r0 = (r3 + -1);
    r3 = (r0 & 255);
    // end of inlined leaf 0x8027E2F4
    r0 = (r3 & 255);
    r3 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r0 + r3);
    r3 = (r3 + 320);
    goto loc_80219390;
}

loc_8021938C:
{
    r3 = 0;
}

loc_80219390:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802192C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802192C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802192C4 func_802192C4 preserves=true fpr_mask=0x00000000
