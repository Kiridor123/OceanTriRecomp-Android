#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804740C0_ra38_1e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_lfdx_80474188_loc_0 = 0;
    uint32_t addr_lfdx_804741F4_loc_0 = 0;
    uint32_t addr_lfdx_80474210_loc_0 = 0;
    uint32_t addr_lfdx_8047422C_loc_0 = 0;
    uint32_t addr_lfdx_80474248_loc_0 = 0;
    uint32_t addr_lfdx_80474264_loc_0 = 0;
    uint32_t addr_lfdx_80474280_loc_0 = 0;
    uint32_t addr_lfdx_804742A4_loc_0 = 0;
    uint32_t addr_lfdx_804742F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_subfic_ra_0 = 0;
    uint32_t r10_subfic_ra_1 = 0;
    uint32_t r10_subfic_ra_2 = 0;
    uint32_t r10_subfic_ra_3 = 0;
    uint32_t r10_subfic_ra_4 = 0;
    uint32_t r10_subfic_ra_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r11_subfic_ra_1 = 0;
    uint32_t r11_subfic_ra_2 = 0;
    uint32_t r11_subfic_ra_3 = 0;
    uint32_t r11_subfic_ra_4 = 0;
    uint32_t r11_subfic_ra_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804740C0u);
    goto loc_804740C0;

loc_804740C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r9 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2832));
    r0 = 1;
    r5 = 0x80000000u;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    f3.d = MemoryInline::FlatReadFloat64((r3 + 16));
    MemoryInline::FlatWriteFloat64((r4 + 16), f3.d);
    f1.d = (f3.d * f3.d);
    f1.d = (f0.d - f1.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_804740FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80474108;
    }
}

loc_80474100:
{
    r3 = 1;
    goto loc_80474428;
}

loc_80474108:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8047410C:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80474314;
    }
}

loc_80474114:
{
    r6 = 2;
    r11 = -7;
}

loc_80474120:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_804742C0;
    }
}

loc_80474124:
{
    r7 = 0;
    r10 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80474140;
    }
}

loc_80474130:
{
    r6 = (r5 + -2);
}

loc_80474138:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_80474140;
    }
}

loc_8047413C:
{
    r10 = 1;
}

loc_80474140:
{
}

loc_80474144:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80474158;
    }
}

loc_80474148:
{
    r10 = 1;
}

loc_80474150:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80474158;
    }
}

loc_80474154:
{
    r7 = 1;
}

loc_80474158:
{
}

loc_8047415C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804742C0;
    }
}

loc_80474160:
{
    r10 = 0;
    r6 = r3;
    r7 = (r1 + 8);
    ctr = r10;
}

loc_80474174:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(0))) {
        goto loc_804742C0;
    }
}

loc_80474178:
{
    r10 = (2 - r8);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 8u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_2 & -8);
    r28 = (1 - r8);
    addr_lfdx_80474188_loc_0 = (r3 + r10);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474188_loc_0);
    r10 = (r8 + 2);
    r29 = (2 - r10);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r28 = (r28_rot_2 & -8);
    f3.d = (f3.d * f2.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, r6);
    r10 = (r8 + 3);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r29 = (r29_rot_2 & -8);
    r30 = (2 - r10);
    r11 = (r8 + 6);
    f2.d = (f2.d - f3.d);
    r10 = (r8 + 4);
    r31 = (2 - r10);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r30 = (r30_rot_2 & -8);
    r10 = (r8 + 5);
    f2.d = (f2.d / f1.d);
    r12 = (2 - r10);
    r10 = (r8 + 7);
    r11_subfic_ra_2 = r11;
    r11 = (2 - r11_subfic_ra_2);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r31 = (r31_rot_2 & -8);
    r10_subfic_ra_2 = r10;
    r10 = (2 - r10_subfic_ra_2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, r7, f2.d);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_2 & -8);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_2 & -8);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_3 & -8);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    r8 = (r8 + 8);
    addr_lfdx_804741F4_loc_0 = (r3 + r28);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804741F4_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r6 + 8));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r7 + 8), f2.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_80474210_loc_0 = (r3 + r29);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474210_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r6 + 16));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r7 + 16), f2.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_8047422C_loc_0 = (r3 + r30);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_8047422C_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r6 + 24));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r7 + 24), f2.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_80474248_loc_0 = (r3 + r31);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474248_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r6 + 32));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r7 + 32), f2.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_80474264_loc_0 = (r3 + r12);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474264_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r6 + 40));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r7 + 40), f2.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_80474280_loc_0 = (r3 + r11);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474280_loc_0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r6 + 48));
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r7 + 48), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r6 + 56));
    r6 = (r6 + 64);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + 16));
    addr_lfdx_804742A4_loc_0 = (r3 + r10);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804742A4_loc_0);
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r7 + 56), f2.d);
    r7 = (r7 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474178;
    }
}

loc_804742C0:
{
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r11 = (r11_rot_4 & -8);
    r10 = (r1 + 8);
    r6 = (2 - r8);
    r7 = (r3 + r11);
    r10 = (r10 + r11);
    ctr = r6;
}

loc_804742DC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_80474314;
    }
}

loc_804742E0:
{
    r6 = (2 - r8);
    f2.d = MemoryInline::FlatReadFloat64(r7);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    f4.d = MemoryInline::FlatReadFloat64((r4 + 16));
    addr_lfdx_804742F0_loc_0 = (r3 + r6);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804742F0_loc_0);
    r7 = (r7 + 8);
    r8 = (r8 + 1);
    f3.d = (f4.d * f3.d);
    f2.d = (f2.d - f3.d);
    f2.d = (f2.d / f1.d);
    MemoryInline::FlatWriteFloat64(r10, f2.d);
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804742E0;
    }
}

loc_80474314:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80474318:
{
    r10 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8047440C;
    }
}

loc_80474320:
{
    r6 = 2;
    r7 = -7;
}

loc_8047432C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_804743D4;
    }
}

loc_80474330:
{
    r6 = 0;
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8047434C;
    }
}

loc_8047433C:
{
    r5 = (r5 + -2);
}

loc_80474344:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_8047434C;
    }
}

loc_80474348:
{
    r8 = 1;
}

loc_8047434C:
{
}

loc_80474350:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80474364;
    }
}

loc_80474354:
{
    r8 = 1;
}

loc_8047435C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80474364;
    }
}

loc_80474360:
{
    r6 = 1;
}

loc_80474364:
{
}

loc_80474368:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804743D4;
    }
}

loc_8047436C:
{
    r5 = 0;
    r8 = r3;
    r6 = (r1 + 8);
    ctr = r5;
}

loc_80474380:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_804743D4;
    }
}

loc_80474384:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 0u, r6);
    r10 = (r10 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r8, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 0u, r8, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r6 + 8));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 8u, (r8 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r6 + 16));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 16u, (r8 + 16), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r6 + 24));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 24u, (r8 + 24), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r6 + 32));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r8 + 32), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r6 + 40));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 40u, (r8 + 40), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r6 + 48));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r8 + 48), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r6 + 56));
    r6 = (r6 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 56u, (r8 + 56), f1.d);
    r8 = (r8 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474384;
    }
}

loc_804743D4:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r6 = (r1 + 8);
    r5 = (2 - r10);
    r6 = (r6 + r7);
    r3 = (r3 + r7);
    ctr = r5;
}

loc_804743F0:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r0))) {
        goto loc_8047440C;
    }
}

loc_804743F4:
{
    f1.d = MemoryInline::FlatReadFloat64(r6);
    r10 = (r10 + 1);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    r3 = (r3 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804743F4;
    }
}

loc_8047440C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteFloat64((r4 + 8), f1.d);
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8047441C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80474424;
    }
}

loc_80474420:
{
    r9 = 1;
}

loc_80474424:
{
    r3 = r9;
}

loc_80474428:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804740C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804740C0_ra38_1e_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FEB gpr_return=0x00000008 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804740C0 func_804740C0 preserves=true fpr_mask=0x00000000
