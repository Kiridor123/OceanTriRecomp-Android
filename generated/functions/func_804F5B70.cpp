#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804F5B70_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_subfic_ra_0 = 0;
    uint32_t r8_subfic_ra_1 = 0;
    uint32_t r8_subfic_ra_2 = 0;
    uint32_t r8_subfic_ra_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x804F5B70u);
    goto loc_804F5B70;

loc_804F5B70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 2040);
    r0 = (r5 * 12);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 9u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, r6);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 2));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r8 = (r8_rot_0 & 768);
    r7 = (r7 + r3);
    r8 = (r9 | r8);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r8));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 2));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_1 & 768);
    r8 = (r9 | r8);
    r7 = (r7 + r3);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r8_subfic_ra_0 = r8;
    r8 = (767 - r8_subfic_ra_0);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r6 + 7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r9 = (r9_rot_0 & 65280);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r6 + 8));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r7 = (r7 + r0);
    r8 = (r9 | r8);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r8 = (r8_rot_2 & 65472);
    MemoryInline::FlatWrite16((r7 + 50), static_cast<uint16_t>(r8));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 2));
    r7 = (r7 + r0);
    r8 = (r8 & 15);
    MemoryInline::FlatWrite8((r7 + 52), static_cast<uint8_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r6 + 3));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r9 = (r8 + 1);
    r7 = (r7 + r0);
    r8_subfic_ra_1 = r8;
    r8 = (-1 - r8_subfic_ra_1);
    r8 = ~(r9 | r8);
    r8 = (static_cast<int32_t>(r8) >> 31);
    r8 = (r10 & ~r8);
    MemoryInline::FlatWrite16((r7 + 42), static_cast<uint16_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 4));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r9 = (r8 + 1);
    r7 = (r7 + r0);
    r8_subfic_ra_2 = r8;
    r8 = (-1 - r8_subfic_ra_2);
    r8 = ~(r9 | r8);
    r8 = (static_cast<int32_t>(r8) >> 31);
    r8 = (r10 & ~r8);
    MemoryInline::FlatWrite16((r7 + 44), static_cast<uint16_t>(r8));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r6 + 5));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r9 = (r8 + 1);
    r7 = (r7 + r0);
    r8_subfic_ra_3 = r8;
    r8 = (-1 - r8_subfic_ra_3);
    r8 = ~(r9 | r8);
    r8 = (static_cast<int32_t>(r8) >> 31);
    r8 = (r10 & ~r8);
    MemoryInline::FlatWrite16((r7 + 46), static_cast<uint16_t>(r8));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 6));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r8 = (r7 + 1);
    r6 = (r6 + r0);
    r7_subfic_ra_0 = r7;
    r7 = (-1 - r7_subfic_ra_0);
    r7 = ~(r8 | r7);
    r7 = (static_cast<int32_t>(r7) >> 31);
    r7 = (r9 & ~r7);
    MemoryInline::FlatWrite16((r6 + 48), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r6 = 1127219200;
    stackword1 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r8 = (r7 + r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1672));
    r7 = MemoryInline::FlatRead16((r8 + 42));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    stackword2 = r6;
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & -8);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1664));
    MemoryInline::FlatWrite16((r8 + 42), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (r6 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6_subfic_ra_0 = r6;
    r6 = (767 - r6_subfic_ra_0);
    MemoryInline::FlatWrite16((r7 + 44), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (r6 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 46));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    MemoryInline::FlatWrite16((r7 + 46), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (r6 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 48));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6_subfic_ra_1 = r6;
    r6 = (767 - r6_subfic_ra_1);
    MemoryInline::FlatWrite16((r7 + 48), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (r6 + r0);
    r6 = (r6 + r3);
    r7 = MemoryInline::FlatRead8((r7 + 52));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r7 = (r7 ^ -2147483648);
    stackword3 = r7;
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    stackword4 = r7;
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword0;
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r7));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = (r8 + r3);
    r6 = MemoryInline::FlatRead16((r7 + 12));
}

loc_804F5D68:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804F5D94;
    }
}

loc_804F5D6C:
{
    r6 = MemoryInline::FlatRead16((r7 + 8));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_804F5D74:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1023))) {
        goto loc_804F5D94;
    }
}

loc_804F5D78:
{
    r6 = MemoryInline::FlatRead16((r7 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_804F5D80:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(767))) {
        goto loc_804F5D94;
    }
}

loc_804F5D84:
{
    r6 = (r8 + r0);
    r6 = MemoryInline::FlatRead8((r6 + 52));
}

loc_804F5D90:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(15))) {
        goto loc_804F5DD4;
    }
}

loc_804F5D94:
{
    r6 = (r8 + r3);
    r8 = 0;
    MemoryInline::FlatWrite16((r6 + 8), static_cast<uint16_t>(r8));
    r7 = 767;
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r6 = (r6 + r3);
    MemoryInline::FlatWrite16((r6 + 10), static_cast<uint16_t>(r7));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r6 = (r6 + r3);
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r8));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite16((r6 + 50), static_cast<uint16_t>(r8));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 52), static_cast<uint8_t>(r8));
}

loc_804F5DD4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r5));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_804F5B70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804F5B70_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000007CB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F5B70 func_804F5B70 preserves=true fpr_mask=0x00000000
