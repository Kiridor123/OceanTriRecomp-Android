#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80490C6C(CpuContext* ctx);
extern "C" uint64_t func_80490C6C_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80490CB0(CpuContext* ctx);
extern "C" uint64_t func_80490CB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804912AC(CpuContext* ctx);
extern "C" uint64_t func_804912AC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047ECF8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t ctr = ctx->ctr;

    goto loc_8047ECF8;

loc_8047ECF8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 6;
    r29 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    ctx->lr = 0x8047ED20u;
    if constexpr (KnownRegArgsCpuCall<0x80490C6Cu>(&func_80490C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80490C6C_963 = func_80490C6C_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80490C6C_963);
        r4 = static_cast<uint32_t>(regargs_result_80490C6C_963 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80490C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = 0x80740000u;
    r4 = 0;
    r3 = (r31 + -18168);
    r5 = 560;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r3 = (r13 + -20632);
    ctx->lr = 0x8047ED40u;
    if constexpr (KnownRegArgsCpuCall<0x804912ACu>(&func_804912AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804912AC_F2F = func_804912AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804912AC_F2F);
        r4 = static_cast<uint32_t>(regargs_result_804912AC_F2F >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804912ACu>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = 0x80480000u;
    r3 = (r3 + 424);
    ctx->lr = 0x8047ED4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80490CB0u>(&func_80490CB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80490CB0_18A7 = func_80490CB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80490CB0_18A7);
        r4 = static_cast<uint32_t>(regargs_result_80490CB0_18A7 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80490CB0u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_8047ED50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047EE34;
    }
}

loc_8047ED54:
{
    r4 = MemoryInline::FlatRead32((r29 + 48));
    r12 = (r31 + -18168);
    r3 = 0;
    r0 = 2;
    MemoryInline::FlatWriteRam32((r12 + 548), r4);
    r29 = 0;
    r11 = 1;
    r10 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r9 = 16;
    ctr = r0;
}

loc_8047ED80:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r3 = (r3_rot_2 & 8160);
    r0 = (r29 & 255);
    r31 = (r12 + r3);
    r8 = (r29 + 1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 34), 0, 235u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 44), static_cast<uint8_t>(r11));
    r30 = (r12 + r0);
    r7 = (r29 + 2);
    r6 = (r29 + 3);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 38), static_cast<uint8_t>(r10));
    r5 = (r29 + 4);
    r4 = (r29 + 5);
    r3 = (r29 + 6);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 34), static_cast<uint8_t>(r29));
    r0 = (r29 + 7);
    r29 = (r29 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 532), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 532), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r31 + 76), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + 70), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r31 + 66), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 533), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r31 + 108), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r31 + 102), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r31 + 98), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 534), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 106u, (r31 + 140), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r31 + 134), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r31 + 130), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 535), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 138u, (r31 + 172), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r31 + 166), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 128u, (r31 + 162), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 536), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 170u, (r31 + 204), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 164u, (r31 + 198), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 160u, (r31 + 194), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 537), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 202u, (r31 + 236), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 196u, (r31 + 230), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 192u, (r31 + 226), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r30 + 538), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (r31 + 268), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r31 + 262), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r31 + 258), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 539), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047ED80;
    }
}

loc_8047EE34:
{
    r5 = 0x80740000u;
    r4 = (r1 + 8);
    r5 = (r5 + -18168);
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r5 + 548));
    ctr = r12;
    ctx->lr = 0x8047EE50u;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047ECF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047ECF8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047ECF8 func_8047ECF8 preserves=true fpr_mask=0x00000000
