#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802E04F4_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802E04F4;

loc_802E04F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80040424
}

loc_802E0520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802E0598;
    }
}

loc_802E0524:
{
    r0 = (r30 & 255);
}

loc_802E052C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802E054C;
    }
}

loc_802E0530:
{
}

loc_802E0534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802E0554;
    }
}

loc_802E0538:
{
}

loc_802E053C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802E0578;
    }
}

loc_802E0540:
{
}

loc_802E0544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802E057C;
    }
}

loc_802E0548:
{
    goto loc_802E0598;
}

loc_802E054C:
{
    r31 = 32;
    goto loc_802E0598;
}

loc_802E0554:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12768));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0 = (r3 + -320);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_802E0598;
}

loc_802E0578:
{
    r31 = -32;
}

loc_802E057C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r0 = (r3 + -640);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r31 = (r31 + r0);
}

loc_802E0598:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_802E04F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802E04F4_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E04F4 func_802E04F4 preserves=true fpr_mask=0x00000000
