#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047AC10(CpuContext* ctx);
extern "C" uint64_t func_8047AC10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047D8DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8047D8DC;

loc_8047D8DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8047D8E8:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047DA50;
    }
}

loc_8047D8FC:
{
    r3 = MemoryInline::FlatRead32((r13 + -20700));
    r7 = 1;
    r9 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8047DA40;
}

loc_8047D90C:
{
    r8 = (r7 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r0 = (r0 - r8);
    r8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r8 + 1));
}

loc_8047D924:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047D930;
    }
}

loc_8047D928:
{
}

loc_8047D92C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8047DA3C;
    }
}

loc_8047D930:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_8047D938:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8047DA3C;
    }
}

loc_8047D93C:
{
    r0 = MemoryInline::FlatRead8((r8 + 2));
}

loc_8047D944:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8047DA3C;
    }
}

loc_8047D948:
{
    r8 = 0x80740000u;
    r11 = MemoryInline::FlatRead8((r3 + 1));
    r10 = MemoryInline::FlatRead8((r8 + -18216));
    r9 = (r8 + -18216);
    r31 = 0;
    r29 = 1;
    goto loc_8047D9C0;
}

loc_8047D964:
{
    r8 = (r29 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r0 = (r0 - r8);
    r12 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r12 + 2));
}

loc_8047D97C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8047D9BC;
    }
}

loc_8047D980:
{
    r30 = 0;
    goto loc_8047D9B0;
}

loc_8047D988:
{
    r8 = (r30 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r8 = (r0 + r8);
    r0 = MemoryInline::FlatRead8(r12);
    r8 = (r9 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 7));
}

loc_8047D9A4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8047D9AC;
    }
}

loc_8047D9A8:
{
    r31 = 1;
}

loc_8047D9AC:
{
    r30 = (r30 + 1);
}

loc_8047D9B0:
{
    r0 = (r30 & 255);
}

loc_8047D9B8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r10))) {
        goto loc_8047D988;
    }
}

loc_8047D9BC:
{
    r29 = (r29 + 1);
}

loc_8047D9C0:
{
    r0 = (r29 & 255);
}

loc_8047D9C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r11))) {
        goto loc_8047D964;
    }
}

loc_8047D9CC:
{
}

loc_8047D9D0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8047DAF8;
    }
}

loc_8047D9D4:
{
    r3 = (r7 & 255);
    r30 = 0x80740000u;
    r3 = (r3 + -1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r30 = (r30 + -18648);
    r29 = (r0 + r3);
    r31 = (r30 + r29);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r5));
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r4));
    r4 = r6;
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r0 = MemoryInline::FlatRead8((r13 + -15848));
    r3 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 8), static_cast<uint8_t>(r3));
    r7 = r31;
}

loc_8047DA18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8047DAF8;
    }
}

loc_8047DA1C:
{
    r4 = 0x80610000u;
    r5 = MemoryInline::FlatRead8((r31 + 7));
    r6 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 + 14476);
    r7 = MemoryInline::FlatRead8((r7 + 8));
    r3 = 1283;
    ctx->lr = 0x8047DA38u;
    if constexpr (KnownRegArgsCpuCall<0x8047AC10u>(&func_8047AC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8047AC10_1C99 = func_8047AC10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC10_1C99);
        r4 = static_cast<uint32_t>(regargs_result_8047AC10_1C99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047AC10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8047DAF8;
}

loc_8047DA3C:
{
    r7 = (r7 + 1);
}

loc_8047DA40:
{
    r0 = (r7 & 255);
}

loc_8047DA48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r9))) {
        goto loc_8047D90C;
    }
}

loc_8047DA4C:
{
    goto loc_8047DAF8;
}

loc_8047DA50:
{
}

loc_8047DA54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8047DAF8;
    }
}

loc_8047DA58:
{
    r7 = MemoryInline::FlatRead32((r13 + -20700));
    r8 = 1;
    r6 = MemoryInline::FlatRead8((r7 + 1));
    goto loc_8047DAEC;
}

loc_8047DA68:
{
    r3 = (r8 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1020);
    r0 = (r0 - r3);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8047DA80:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047DA8C;
    }
}

loc_8047DA84:
{
}

loc_8047DA88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8047DAE8;
    }
}

loc_8047DA8C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8047DA94:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8047DAE8;
    }
}

loc_8047DA98:
{
    r3 = (r8 & 255);
    r0 = MemoryInline::FlatRead8((r13 + -15848));
    r5 = (r3 + -1);
    r3 = 0x80740000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8047DAAC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r0 = (r4 + r5);
    r3 = (r3 + -18648);
    r3 = (r3 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8047DAF8;
    }
}

loc_8047DAC8:
{
    r4 = 0x80610000u;
    r5 = MemoryInline::FlatRead8((r3 + 7));
    r6 = MemoryInline::FlatRead8((r3 + 6));
    r4 = (r4 + 14536);
    r7 = MemoryInline::FlatRead8((r3 + 8));
    r3 = 1283;
    ctx->lr = 0x8047DAE4u;
    if constexpr (KnownRegArgsCpuCall<0x8047AC10u>(&func_8047AC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8047AC10_2E4F = func_8047AC10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC10_2E4F);
        r4 = static_cast<uint32_t>(regargs_result_8047AC10_2E4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047AC10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8047DAF8;
}

loc_8047DAE8:
{
    r8 = (r8 + 1);
}

loc_8047DAEC:
{
    r0 = (r8 & 255);
}

loc_8047DAF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8047DA68;
    }
}

loc_8047DAF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047D8DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047D8DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047D8DC func_8047D8DC preserves=true fpr_mask=0x00000000
