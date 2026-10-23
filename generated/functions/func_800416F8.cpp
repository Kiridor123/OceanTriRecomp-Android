#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048FFC(CpuContext* ctx);
extern "C" uint64_t func_80048FFC_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_800416F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800416F8;

loc_800416F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r3 = 0x80660000u;
    r27 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r27 + 5));
}

loc_8004171C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004173C;
    }
}

loc_80041720:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8004172C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80041744;
    }
}

loc_80041730:
{
    // inline leaf 0x804360A0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27968);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x804360A0
}

loc_80041738:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80041744;
    }
}

loc_8004173C:
{
    if constexpr (KnownRegArgsCpuCall<0x80048FFCu>(&func_80048FFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80048FFC_A01 = func_80048FFC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80048FFC_A01);
        r4 = static_cast<uint32_t>(regargs_result_80048FFC_A01 >> 32);
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80048FFCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x80041744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80048890u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80041744:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r26 = (r26_rot_0 & 1);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r27 + 12), r0);
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl3_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF40;
    }
}

loc_inl3_0x800CEF3C:
{
    r0 = 1;
}

loc_inl3_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl3_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = MemoryInline::FlatRead8((r27 + 5));
}

loc_80041770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80041778;
    }
}

loc_80041774:
{
    r26 = 1;
}

loc_80041778:
{
    r27 = 0;
    r3 = 0x80660000u;
    r28 = (r3 + -18992);
    r31 = 4;
    r30 = 0;
    r29 = 8;
}

loc_80041790:
{
}

loc_80041794:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_800417A4;
    }
}

loc_80041798:
{
    r0 = (r27 + -2);
}

loc_800417A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8004182C;
    }
}

loc_800417A4:
{
    r0 = MemoryInline::FlatRead16(r28);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800417AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800417D4;
    }
}

loc_800417B0:
{
}

loc_800417B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_800417DC;
    }
}

loc_800417B8:
{
}

loc_800417BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_800417E4;
    }
}

loc_800417C0:
{
}

loc_800417C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800417F8;
    }
}

loc_800417C8:
{
}

loc_800417CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80041804;
    }
}

loc_800417D0:
{
    goto loc_8004182C;
}

loc_800417D4:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r29));
    goto loc_8004182C;
}

loc_800417DC:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r29));
    goto loc_8004182C;
}

loc_800417E4:
{
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r28 + 4));
    ctr = r12;
    ctx->lr = 0x800417F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8004182C;
}

loc_800417F8:
{
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r31));
    goto loc_8004182C;
}

loc_80041804:
{
    r3 = MemoryInline::FlatRead16((r28 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80041818:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80041824;
    }
}

loc_8004181C:
{
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r30));
    goto loc_8004182C;
}

loc_80041824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004182C;
    }
}

loc_80041828:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r31));
}

loc_8004182C:
{
    r27 = (r27 + 1);
    r28 = (r28 + 32);
}

loc_80041838:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(16))) {
        goto loc_80041790;
    }
}

loc_8004183C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800416F8 func_800416F8 preserves=true fpr_mask=0x00000000
