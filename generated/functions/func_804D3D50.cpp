#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D3D50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D3D50u);
    goto loc_804D3D50;

loc_804D3D50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 2;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0;
    r5 = 16;
    r0 = -1;
    r31 = 0x80750000u;
    r31 = (r31 + -1192);
    r30 = (r31 + 0);
    r29 = 0x80000000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 712), 0, 68u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 712), static_cast<uint16_t>(r3));
    r3 = r30;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 714), static_cast<uint16_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 724), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 720), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 716), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 728), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 752), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 748), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 744), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 760), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 756), r4);
    }
    MemoryInline::FlatWriteRam32((r29 + 216), r30);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl0_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl0_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl0_cont_804CD870;
}

loc_inl0_return:
{
}

loc_inl0_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r30;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl1_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl1_0x804CD668;
    }
}

loc_inl1_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl1_cont_804CD630;
}

loc_inl1_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl1_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r3 = 0x807B0000u;
    r5 = 0x807A0000u;
    r3 = (r3 + -840);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 772), r3);
    r5 = (r5 + -840);
    r4 = r30;
    r3 = -559022080;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 776), r5);
    r0 = (r3 + -17730);
    MemoryInline::FlatWriteRam32(r5, r0);
    r12 = MemoryInline::FlatRead32((r13 + -20064));
    r3 = MemoryInline::FlatRead32((r29 + 228));
    ctr = r12;
    ctx->lr = 0x804D3E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r29 + 228), r30);
    // inline leaf 0x804CD800 (2 guest instruction(s))
    r3 = r1;
    // end of inlined leaf 0x804CD800
    r4 = MemoryInline::FlatRead32((r29 + 228));
    r4 = MemoryInline::FlatRead32((r4 + 776));
    r8 = (r4 + 4);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r8), static_cast<uint32_t>(r3));
}

loc_804D3E1C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_804D3EDC;
    }
}

loc_804D3E20:
{
    r5 = (r3 - r8);
    r6 = (r3 + -32);
    r4 = (r5 + 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
}

loc_804D3E38:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_804D3EB4;
    }
}

loc_804D3E3C:
{
    r7 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_804D3E68;
    }
}

loc_804D3E44:
{
    r0 = (r5 & -2147483648);
}

loc_804D3E48:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D3E5C;
    }
}

loc_804D3E50:
{
    r0 = (r4 & -2147483648);
}

loc_804D3E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D3E5C;
    }
}

loc_804D3E58:
{
    r5 = 0;
}

loc_804D3E5C:
{
}

loc_804D3E60:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804D3E68;
    }
}

loc_804D3E64:
{
    r7 = 1;
}

loc_804D3E68:
{
}

loc_804D3E6C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D3EB4;
    }
}

loc_804D3E70:
{
    r0 = (r6 + 31);
    r4 = 0;
    r0 = (r0 - r8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    ctr = r0;
}

loc_804D3E88:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6))) {
        goto loc_804D3EB4;
    }
}

loc_804D3E8C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r8, r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r8 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r8 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r8 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r8 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r8 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + 28), r4);
    }
    r8 = (r8 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D3E8C;
    }
}

loc_804D3EB4:
{
    r0 = (r3 + 3);
    r4 = 0;
    r0 = (r0 - r8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    ctr = r0;
}

loc_804D3ECC:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r3))) {
        goto loc_804D3EDC;
    }
}

loc_804D3ED0:
{
    MemoryInline::FlatWrite32(r8, r4);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D3ED0;
    }
}

loc_804D3EDC:
{
    r0 = 2;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -14984), r3);
    r4 = (r31 + 792);
    MemoryInline::FlatWrite32((r13 + -14988), r3);
    ctr = r0;
}

loc_804D3EF4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r4 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 40), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r4 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r4 + 48), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r4 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r4 + 56), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r4 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r4 + 64), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r4 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r4 + 72), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r4 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r4 + 80), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r4 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r4 + 88), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r4 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r4 + 96), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r4 + 108), r3);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r4 + 104), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r4 + 116), r3);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r4 + 112), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r4 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r4 + 120), r3);
    }
    r4 = (r4 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D3EF4;
    }
}

loc_804D3F7C:
{
    r3 = 0x80000000u;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r3 + 224), r4);
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    MemoryInline::FlatWriteRam32((r3 + 220), r30);
}

loc_804D3F98:
{
    r29 = 0;
    MemoryInline::FlatWriteRam32((r30 + 768), r4);
    r4 = 0x80000000u;
    r3 = (r31 + 1048);
    MemoryInline::FlatWriteRam32((r30 + 764), r29);
    MemoryInline::FlatWriteRam32((r4 + 224), r30);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl3_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl3_cont_804CD870;
}

loc_inl3_return:
{
}

loc_inl3_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    MemoryInline::FlatWrite32((r13 + -14992), r29);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D3D50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D3D50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D3D50 func_804D3D50 preserves=true fpr_mask=0x00000000
