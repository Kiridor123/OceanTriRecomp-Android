#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027A3A4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027A3A4;

loc_8027A3A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027A3C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027A3D0;
    }
}

loc_8027A3CC:
{
    r31 = 0;
}

loc_8027A3D0:
{
    r3 = r30;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8027A3DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027A3E4;
    }
}

loc_8027A3E0:
{
    r31 = 0;
}

loc_8027A3E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1510));
}

loc_8027A3EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A3F4;
    }
}

loc_8027A3F0:
{
    r31 = 0;
}

loc_8027A3F4:
{
    r3 = r30;
    r4 = 29;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A404:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027A454;
    }
}

loc_8027A408:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8027A410:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8027A450;
    }
}

loc_8027A414:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_8027A41C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_8027A454;
    }
}

loc_8027A420:
{
}

loc_8027A424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_8027A454;
    }
}

loc_8027A428:
{
}

loc_8027A42C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_8027A454;
    }
}

loc_8027A430:
{
}

loc_8027A434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_8027A454;
    }
}

loc_8027A438:
{
}

loc_8027A43C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(44))) {
        goto loc_8027A454;
    }
}

loc_8027A440:
{
}

loc_8027A444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8027A454;
    }
}

loc_8027A448:
{
    r31 = 0;
    goto loc_8027A454;
}

loc_8027A450:
{
    r31 = 0;
}

loc_8027A454:
{
    r3 = MemoryInline::FlatRead8((r30 + 10));
    r0 = (r3 + -5);
}

loc_8027A460:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_8027A530;
    }
}

loc_8027A464:
{
}

loc_8027A468:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A480;
    }
}

loc_8027A46C:
{
}

loc_8027A470:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8027A50C;
    }
}

loc_8027A474:
{
}

loc_8027A478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8027A530;
    }
}

loc_8027A47C:
{
    goto loc_8027A534;
}

loc_8027A480:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(73));
}

loc_8027A488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027A504;
    }
}

loc_8027A48C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027A4D8;
    }
}

loc_8027A490:
{
}

loc_8027A494:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8027A4C0;
    }
}

loc_8027A498:
{
}

loc_8027A49C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_8027A4B4;
    }
}

loc_8027A4A0:
{
}

loc_8027A4A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8027A534;
    }
}

loc_8027A4A8:
{
}

loc_8027A4AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8027A504;
    }
}

loc_8027A4B0:
{
    goto loc_8027A534;
}

loc_8027A4B4:
{
}

loc_8027A4B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_8027A534;
    }
}

loc_8027A4BC:
{
    goto loc_8027A504;
}

loc_8027A4C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(28));
}

loc_8027A4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027A504;
    }
}

loc_8027A4C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027A534;
    }
}

loc_8027A4CC:
{
}

loc_8027A4D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(22))) {
        goto loc_8027A534;
    }
}

loc_8027A4D4:
{
    goto loc_8027A504;
}

loc_8027A4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(122));
}

loc_8027A4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027A504;
    }
}

loc_8027A4E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027A4F0;
    }
}

loc_8027A4E4:
{
}

loc_8027A4E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(91))) {
        goto loc_8027A504;
    }
}

loc_8027A4EC:
{
    goto loc_8027A534;
}

loc_8027A4F0:
{
}

loc_8027A4F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(162))) {
        goto loc_8027A534;
    }
}

loc_8027A4F8:
{
}

loc_8027A4FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(158))) {
        goto loc_8027A504;
    }
}

loc_8027A500:
{
    goto loc_8027A534;
}

loc_8027A504:
{
    r31 = 0;
    goto loc_8027A534;
}

loc_8027A50C:
{
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r3 + -2);
}

loc_8027A518:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027A528;
    }
}

loc_8027A51C:
{
    r0 = (r3 + -16);
}

loc_8027A524:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027A534;
    }
}

loc_8027A528:
{
    r31 = 0;
    goto loc_8027A534;
}

loc_8027A530:
{
    r31 = 0;
}

loc_8027A534:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_8027A3A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027A3A4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027A3A4 func_8027A3A4 preserves=true fpr_mask=0x00000000
