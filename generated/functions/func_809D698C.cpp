#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D698C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x809D698Cu);
    goto loc_809D698C;

loc_809D698C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r5 = 0x80A80000u;
    r4 = MemoryInline::FlatRead32((r5 + -31140));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + -31140), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809D69CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809D69D8;
    }
}

loc_809D69D4:
{
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
}

loc_809D69D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 52));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D69E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6B50;
    }
}

loc_809D69E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 53));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D69F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D6A28;
    }
}

loc_809D69F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -7464));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_809D6A1C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_809D6BA8;
    }
}

loc_809D6A20:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r0));
}

loc_809D6A28:
{
    r0 = MemoryInline::FlatRead32((r3 + 76));
}

loc_809D6A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6A48;
    }
}

loc_809D6A34:
{
}

loc_809D6A38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809D6A80;
    }
}

loc_809D6A3C:
{
}

loc_809D6A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809D6AC8;
    }
}

loc_809D6A44:
{
    goto loc_809D6B50;
}

loc_809D6A48:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r4 = (r4 + r0);
}

loc_809D6A5C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(255))) {
        goto loc_809D6A6C;
    }
}

loc_809D6A60:
{
    r4 = 255;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 76), r0);
}

loc_809D6A6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r0 & -256);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    goto loc_809D6B50;
}

loc_809D6A80:
{
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -7460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword1;
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r4 = (r0 - r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
}

loc_809D6AB8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_809D6B50;
    }
}

loc_809D6ABC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 76), r0);
    goto loc_809D6B50;
}

loc_809D6AC8:
{
    r0 = MemoryInline::FlatRead8((r3 + 54));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D6AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_809D6B08;
    }
}

loc_809D6AD8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r4 = MemoryInline::FlatRead8((r3 + 55));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 55), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x809D6BC0 (29 guest instruction(s))
}

loc_inl0_0x809D6BC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 55));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r4 = 0x80A20000u;
    r0 = (r4 + 11376);
    r5 = (r0 + r5);
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_inl0_0x809D6BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x809D6BF4;
    }
}

loc_inl0_0x809D6BE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_809D6BC0;
}

loc_inl0_0x809D6BF4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 54), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 52), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 53), static_cast<uint8_t>(r4));
    r0 = -256;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 76), r4);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 56), r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 60), r0);
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 64), r0);
}

loc_inl0_cont_809D6BC0:
{
    // end of inlined leaf 0x809D6BC0
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 53), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite32((r31 + 72), r0);
    goto loc_809D6B50;
}

loc_809D6B08:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r30 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r30 = (r30 - r0);
}

loc_809D6B1C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(255))) {
        goto loc_809D6B40;
    }
}

loc_809D6B20:
{
    r30 = 0;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r4 = MemoryInline::FlatRead8((r3 + 55));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 55), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x809D6BC0 (29 guest instruction(s))
}

loc_inl1_0x809D6BC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 55));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -8);
    r4 = 0x80A20000u;
    r0 = (r4 + 11376);
    r5 = (r0 + r5);
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_inl1_0x809D6BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_inl1_0x809D6BF4;
    }
}

loc_inl1_0x809D6BE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_809D6BC0;
}

loc_inl1_0x809D6BF4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 54), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 52), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 53), static_cast<uint8_t>(r4));
    r0 = -256;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 76), r4);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 56), r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 60), r0);
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 64), r0);
}

loc_inl1_cont_809D6BC0:
{
    // end of inlined leaf 0x809D6BC0
}

loc_809D6B40:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r0 & -256);
    r0 = (r30 | r0);
    MemoryInline::FlatWrite32((r31 + 68), r0);
}

loc_809D6B50:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r0 = 30003;
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -7448));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_809D6B7C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809D6BA8;
    }
}

loc_809D6B84:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7456));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_809D6BA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D698C func_809D698C preserves=true fpr_mask=0x00000000
