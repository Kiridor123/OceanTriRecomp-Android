#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EBE8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x809EBE8Cu);
    goto loc_809EBE8C;

loc_809EBE8C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 1127219200;
    stackword1 = r0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 & 1);
}

loc_809EBEAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EBF84;
    }
}

loc_809EBEB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(41));
}

loc_809EBEB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBF08;
    }
}

loc_809EBEBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EBEEC;
    }
}

loc_809EBEC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_809EBEC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBF08;
    }
}

loc_809EBEC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EBEE0;
    }
}

loc_809EBECC:
{
}

loc_809EBED0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_809EBF84;
    }
}

loc_809EBED4:
{
}

loc_809EBED8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_809EBF08;
    }
}

loc_809EBEDC:
{
    goto loc_809EBF84;
}

loc_809EBEE0:
{
}

loc_809EBEE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(38))) {
        goto loc_809EBF48;
    }
}

loc_809EBEE8:
{
    goto loc_809EBF84;
}

loc_809EBEEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_809EBEF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBF08;
    }
}

loc_809EBEF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EBF84;
    }
}

loc_809EBEF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(44));
}

loc_809EBEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBF08;
    }
}

loc_809EBF00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EBF84;
    }
}

loc_809EBF04:
{
    goto loc_809EBF48;
}

loc_809EBF08:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6720));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6752));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    goto loc_809EBF84;
}

loc_809EBF48:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6720));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6748));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
}

loc_809EBF84:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 & 2);
}

loc_809EBF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC020;
    }
}

loc_809EBF94:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -10);
}

loc_809EBFA0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_809EC020;
    }
}

loc_809EBFA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6720));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6752));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6712));
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword3;
    r0 = (r4 & 65535);
}

loc_809EC010:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809EC018;
    }
}

loc_809EC014:
{
    r4 = 255;
}

loc_809EC018:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
}

loc_809EC020:
{
    r5 = MemoryInline::FlatRead8((r3 + 7));
    r6 = (r5 & 4);
}

loc_809EC02C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_809EC048;
    }
}

loc_809EC030:
{
    r0 = (r5 & 8);
}

loc_809EC038:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EC048;
    }
}

loc_809EC03C:
{
    r0 = (r5 & 16);
}

loc_809EC044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC108;
    }
}

loc_809EC048:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_809EC050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_809EC05C;
    }
}

loc_809EC054:
{
}

loc_809EC058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(40))) {
        goto loc_809EC108;
    }
}

loc_809EC05C:
{
    r7 = MemoryInline::FlatRead8((r3 + 166));
}

loc_809EC064:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_809EC108;
    }
}

loc_809EC068:
{
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6744));
}

loc_809EC074:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809EC084;
    }
}

loc_809EC078:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6740));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EC084:
{
    r0 = (r5 & 8);
}

loc_809EC08C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC09C;
    }
}

loc_809EC090:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6736));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EC09C:
{
    r0 = (r5 & 16);
}

loc_809EC0A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC0B4;
    }
}

loc_809EC0A8:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6740));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EC0B4:
{
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6712));
    stackword7 = r7;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r7);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6732));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EC0D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_809EC0E4;
    }
}

loc_809EC0DC:
{
    f1.d = f0.d;
    goto loc_809EC0F8;
}

loc_809EC0E4:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6744));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EC0F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EC0F8;
    }
}

loc_809EC0F4:
{
    f1.d = f0.d;
}

loc_809EC0F8:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
}

loc_809EC108:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 & 32);
}

loc_809EC114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC12C;
    }
}

loc_809EC118:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_809EC120:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_809EC12C;
    }
}

loc_809EC124:
{
    r0 = 150;
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
}

loc_809EC12C:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 & 64);
}

loc_809EC138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC1AC;
    }
}

loc_809EC13C:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -10);
}

loc_809EC148:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_809EC1AC;
    }
}

loc_809EC14C:
{
    r0 = MemoryInline::FlatRead8((r3 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6720));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6728));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword5;
    r0 = (r4 & 65535);
}

loc_809EC18C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EC198;
    }
}

loc_809EC190:
{
    r4 = 1;
    goto loc_809EC1A4;
}

loc_809EC198:
{
}

loc_809EC19C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(127))) {
        goto loc_809EC1A4;
    }
}

loc_809EC1A0:
{
    r4 = 127;
}

loc_809EC1A4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWrite8((r3 + 170), static_cast<uint8_t>(r0));
}

loc_809EC1AC:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809EBE8C func_809EBE8C preserves=true fpr_mask=0x00000000
