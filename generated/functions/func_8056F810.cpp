#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056F810_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
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

    goto loc_8056F810;

loc_8056F810:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r6 = MemoryInline::FlatRead16((r4 + 6));
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F838:
{
    r3 = (r6 & 255);
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F858;
    }
}

loc_8056F844:
{
}

loc_8056F848:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(8))) {
        goto loc_8056F858;
    }
}

loc_8056F84C:
{
}

loc_8056F850:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(10))) {
        goto loc_8056F858;
    }
}

loc_8056F854:
{
    r0 = 1;
}

loc_8056F858:
{
}

loc_8056F85C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056F868;
    }
}

loc_8056F860:
{
    r3 = 0;
    goto loc_8056F998;
}

loc_8056F868:
{
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r3 = 1885405184;
    r24 = 0x80660000u;
    r29 = 0;
    r30 = (r4 + r0);
    r31 = (r3 + 26929);
    r24 = (r24 + -22184);
    r28 = 0;
    r23 = 1380712448;
    goto loc_8056F988;
}

loc_8056F890:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8056F898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r31))) {
        goto loc_8056F8A0;
    }
}

loc_8056F89C:
{
    goto loc_8056F97C;
}

loc_8056F8A0:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = (r23 + 21584);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8056F8AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F914;
    }
}

loc_8056F8B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056F8E4;
    }
}

loc_8056F8B4:
{
    r0 = (r23 + 19779);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8056F8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F914;
    }
}

loc_8056F8C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056F8D4;
    }
}

loc_8056F8C4:
{
    r0 = (r23 + 16718);
}

loc_8056F8CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8056F914;
    }
}

loc_8056F8D0:
{
    goto loc_8056F95C;
}

loc_8056F8D4:
{
    r0 = (r23 + 20545);
}

loc_8056F8DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8056F914;
    }
}

loc_8056F8E0:
{
    goto loc_8056F95C;
}

loc_8056F8E4:
{
    r0 = (r23 + 22083);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8056F8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F914;
    }
}

loc_8056F8F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056F904;
    }
}

loc_8056F8F4:
{
    r0 = (r23 + 21587);
}

loc_8056F8FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8056F914;
    }
}

loc_8056F900:
{
    goto loc_8056F95C;
}

loc_8056F904:
{
    r0 = (r23 + 22089);
}

loc_8056F90C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8056F914;
    }
}

loc_8056F910:
{
    goto loc_8056F95C;
}

loc_8056F914:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4 = 32;
    ctx->lr = 0x8056F920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8056F924:
{
    r22 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F934;
    }
}

loc_8056F92C:
{
    // inline leaf 0x805342E0 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1176));
    r4 = 0x80650000u;
    r0 = 0;
    r4 = (r4 + -12912);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805342E0
    MemoryInline::FlatWrite32(r22, r24);
}

loc_8056F934:
{
}

loc_8056F938:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8056F95C;
    }
}

loc_8056F93C:
{
    r12 = MemoryInline::FlatRead32(r22);
    r3 = r22;
    r4 = r30;
    r5 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8056F958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r22;
}

loc_8056F95C:
{
}

loc_8056F960:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8056F97C;
    }
}

loc_8056F964:
{
    r0 = (r25 + 8);
    r3 = (r25 + 4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r5 = (r29 + 4);
    // inline leaf 0x80502478 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x80502478
}

loc_8056F97C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r28 = (r28 + 1);
    r30 = (r30 + r0);
}

loc_8056F988:
{
    r0 = MemoryInline::FlatRead16((r26 + 14));
}

loc_8056F990:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_8056F890;
    }
}

loc_8056F994:
{
    r3 = r29;
}

loc_8056F998:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056F810(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056F810_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056F810 func_8056F810 preserves=true fpr_mask=0x00000000
