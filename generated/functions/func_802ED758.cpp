#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802ED758_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802ED758u);
    goto loc_802ED758;

loc_802ED758:
{
}

loc_802ED75C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802ED76C;
    }
}

loc_802ED760:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802ED76C:
{
    r7 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802ED778:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_802ED7C0;
    }
}

loc_802ED77C:
{
    r7 = 0;
    r6 = 1;
    ctr = r4;
}

loc_802ED78C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802ED790:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r3 & r0);
}

loc_802ED79C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED7B4;
    }
}

loc_802ED7A0:
{
    r0 = (r7 & 255);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802ED7B4:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802ED790;
    }
}

loc_802ED7BC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802ED7C0:
{
    r6 = 1;
    r0 = MemoryInline::FlatRead8(r5);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r3 & r0);
}

loc_802ED7D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED7E8;
    }
}

loc_802ED7D8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802ED7E8;
    }
}

loc_802ED7DC:
{
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802ED7E8:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r7 = 0;
    r6 = 1;
    ctr = r4;
}

loc_802ED800:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802ED804:
{
    r8 = MemoryInline::FlatRead8(r5);
    r0 = (r8 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802ED818:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_802ED820;
    }
}

loc_802ED81C:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r7));
}

loc_802ED820:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r3 & r0);
}

loc_802ED830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED840;
    }
}

loc_802ED834:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802ED840:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802ED804;
    }
}

loc_802ED844:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_802ED758(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802ED758_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802ED758 func_802ED758 preserves=true fpr_mask=0x00000000
