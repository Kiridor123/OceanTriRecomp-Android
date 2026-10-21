#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E9460_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804E9460u);
    goto loc_804E9460;

loc_804E9460:
{
    r7 = MemoryInline::FlatRead32((r13 + -14292));
    r9 = (r4 + -1);
    r8 = 0x80760000u;
    r4 = (r3 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r7 + 26));
    r8 = (r8 + -10560);
    r10 = MemoryInline::FlatRead32((r8 + 36));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_804E9488:
{
    r0 = (r8 + r0);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804E9554;
    }
}

loc_804E9490:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_804E9498:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_804E94F4;
    }
}

loc_804E949C:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
}

loc_804E94B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804E94C4;
    }
}

loc_804E94B8:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E94C4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
}

loc_804E94D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804E94E0;
    }
}

loc_804E94D4:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E94E0:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E94F4:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r0 = (r0 - r9);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
}

loc_804E9510:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804E9520;
    }
}

loc_804E9514:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9520:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r7 + 10));
    r4 = (r9 - r4);
}

loc_804E952C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804E953C;
    }
}

loc_804E9530:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E953C:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r4 = (r0 & -2);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9554:
{
}

loc_804E9558:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_804E95C8;
    }
}

loc_804E955C:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_804E9564:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r9))) {
        goto loc_804E956C;
    }
}

loc_804E9568:
{
    r0 = (r0 - r9);
}

loc_804E956C:
{
    r4 = MemoryInline::FlatRead32((r13 + -14292));
    r8 = MemoryInline::FlatRead8(r4);
    r10 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
}

loc_804E9588:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804E9598;
    }
}

loc_804E958C:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9598:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
}

loc_804E95A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804E95B4;
    }
}

loc_804E95A8:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E95B4:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E95C8:
{
}

loc_804E95CC:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(2))) {
        goto loc_804E9688;
    }
}

loc_804E95D0:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_804E95D8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_804E9630;
    }
}

loc_804E95DC:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
}

loc_804E95F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804E9604;
    }
}

loc_804E95F8:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9604:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
}

loc_804E9610:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804E9620;
    }
}

loc_804E9614:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9620:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9630:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r0 = (r0 - r9);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
}

loc_804E964C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804E965C;
    }
}

loc_804E9650:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E965C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r7 + 10));
    r4 = (r9 - r4);
}

loc_804E9668:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804E9678;
    }
}

loc_804E966C:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_804E9688;
}

loc_804E9678:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
}

loc_804E9688:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return r4;
}

}

extern "C" void func_804E9460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E9460_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x00000791 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E9460 func_804E9460 preserves=true fpr_mask=0x00000000
