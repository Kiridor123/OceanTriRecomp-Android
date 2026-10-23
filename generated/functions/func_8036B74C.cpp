#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800407D4(CpuContext* ctx);
extern "C" uint64_t func_800407D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800407FC(CpuContext* ctx);
extern "C" uint64_t func_800407FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80040828(CpuContext* ctx);
extern "C" uint64_t func_80040828_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005BEA4(CpuContext* ctx);
extern "C" uint32_t func_8005BEA4_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A6BD0(CpuContext* ctx);
extern "C" uint64_t func_802A6BD0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8033A120(CpuContext* ctx);
extern "C" uint64_t func_8033A120_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8036B74C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8036B74C;

loc_8036B74C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r31 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    r28 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 412), static_cast<uint16_t>(r28));
    r26 = 0;
    MemoryInline::FlatWrite16((r3 + 414), static_cast<uint16_t>(r26));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8036B790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B7B0;
    }
}

loc_8036B794:
{
}

loc_8036B798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8036B7B8;
    }
}

loc_8036B79C:
{
}

loc_8036B7A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8036B860;
    }
}

loc_8036B7A4:
{
}

loc_8036B7A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8036B96C;
    }
}

loc_8036B7AC:
{
    goto loc_8036BB64;
}

loc_8036B7B0:
{
    r4 = MemoryInline::FlatRead8((r3 + 29));
    // inline leaf 0x8036B704 (18 guest instruction(s))
}

loc_inl1_0x8036B704:
{
    r4 = (r4 & 255);
}

loc_inl1_0x8036B70C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8036B720;
    }
}

loc_inl1_0x8036B710:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8036B704;
}

loc_inl1_0x8036B720:
{
    r6 = (r4 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    r0 = (r4 * r5);
    r0 = (r6 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
}

loc_inl1_cont_8036B704:
{
    // end of inlined leaf 0x8036B704
}

loc_8036B7B8:
{
    r0 = (r28 & 16);
}

loc_8036B7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B810;
    }
}

loc_8036B7C4:
{
    r3 = 0;
    ctx->lr = 0x8036B7CCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_18C6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_18C6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_18C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r27 + 28));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8036B7D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8036B7F4;
    }
}

loc_8036B7DC:
{
    r0 = MemoryInline::FlatRead8((r27 + 29));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8036B7E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8036B7F4;
    }
}

loc_8036B7EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 29), static_cast<uint8_t>(r0));
}

loc_8036B7F4:
{
    r3 = MemoryInline::FlatRead8((r27 + 28));
    r0 = (r3 + 2);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r0));
    goto loc_8036BB64;
}

loc_8036B810:
{
    r0 = (r28 & 32);
}

loc_8036B818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B82C;
    }
}

loc_8036B81C:
{
    r31 = 2;
    r3 = 1;
    ctx->lr = 0x8036B828u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_2550 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2550);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2550 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8036BB64;
}

loc_8036B82C:
{
    r0 = (r28 & 3);
}

loc_8036B834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036BB64;
    }
}

loc_8036B838:
{
    r3 = MemoryInline::FlatRead8((r27 + 28));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = 2;
    r5 = r28;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x8036B854u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802A8F60_2F0D = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_2F0D);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_2F0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A8F60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r27 + 28), static_cast<uint8_t>(r0));
    goto loc_8036BB64;
}

loc_8036B860:
{
    r0 = (r28 & 16);
}

loc_8036B868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B910;
    }
}

loc_8036B86C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead8((r27 + 29));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x8021B688 (14 guest instruction(s))
}

loc_inl2_0x8021B688:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8021B690:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(117))) {
        goto loc_inl2_0x8021B69C;
    }
}

loc_inl2_0x8021B694:
{
    r3 = 0;
    goto loc_inl2_cont_8021B688;
}

loc_inl2_0x8021B69C:
{
    r4 = 1;
    r0 = (r5 & 31);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(r5) >> 5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16644));
    r3 = (r4 & r0);
}

loc_inl2_cont_8021B688:
{
    // end of inlined leaf 0x8021B688
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_8036B88C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B904;
    }
}

loc_8036B890:
{
    r5 = MemoryInline::FlatRead8((r27 + 29));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r4 + 16139));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8036B8A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8036B8F0;
    }
}

loc_8036B8A8:
{
    MemoryInline::FlatWrite8((r4 + 16139), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r27 + 400));
    r3 = (r3 + 1499);
    ctx->lr = 0x8036B8B8u;
    if constexpr (KnownRegArgsCpuCall<0x8033A120u>(&func_8033A120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8033A120_3F30 = func_8033A120_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033A120_3F30);
        r4 = static_cast<uint32_t>(regargs_result_8033A120_3F30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8033A120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8036B8C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8036B8E8;
    }
}

loc_8036B8C4:
{
    r4 = (r0 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + 1984);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8036B8DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B8E8;
    }
}

loc_8036B8E0:
{
    r0 = MemoryInline::FlatRead8((r27 + 29));
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
}

loc_8036B8E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 798), static_cast<uint8_t>(r0));
}

loc_8036B8F0:
{
    r3 = 0;
    ctx->lr = 0x8036B8F8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_46E8 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_46E8);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_46E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r0));
    goto loc_8036BB64;
}

loc_8036B904:
{
    r3 = 2;
    ctx->lr = 0x8036B90Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_4FBB = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4FBB);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4FBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8036BB64;
}

loc_8036B910:
{
    r0 = (r28 & 32);
}

loc_8036B918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B93C;
    }
}

loc_8036B91C:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r4 + 16139));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8036B934u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_59CA = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_59CA);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_59CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r26));
    goto loc_8036BB64;
}

loc_8036B93C:
{
    r3 = (r3 + 412);
    r4 = 117;
    ctx->lr = 0x8036B948u;
    if constexpr (KnownRegArgsCpuCall<0x802A6BD0u>(&func_802A6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802A6BD0_62A9 = func_802A6BD0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A6BD0_62A9);
        r4 = static_cast<uint32_t>(regargs_result_802A6BD0_62A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A6BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead8((r27 + 419));
    r0 = MemoryInline::FlatRead8((r27 + 416));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead8((r27 + 418));
    r3 = (r0 + r3);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r27 + 29), static_cast<uint8_t>(r0));
    goto loc_8036BB64;
}

loc_8036B96C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8036B974:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036B98C;
    }
}

loc_8036B978:
{
}

loc_8036B97C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8036B9E4;
    }
}

loc_8036B980:
{
}

loc_8036B984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8036BB54;
    }
}

loc_8036B988:
{
    goto loc_8036BB64;
}

loc_8036B98C:
{
    r3 = 0;
    ctx->lr = 0x8036B994u;
    if constexpr (KnownRegArgsCpuCall<0x800407FCu>(&func_800407FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800407FC_6E58 = func_800407FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800407FC_6E58);
        r4 = static_cast<uint32_t>(regargs_result_800407FC_6E58 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800407FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8036B998:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8036BB64;
    }
}

loc_8036B99C:
{
    r28 = 1;
    MemoryInline::FlatWrite8((r27 + 813), static_cast<uint8_t>(r28));
    r26 = 0x806C0000u;
    r3 = (r26 + 6336);
    r4 = 0;
    r5 = 170;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r26 + 6336);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 21132);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_783A = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_783A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r26 + 6336);
    r4 = 168;
    ctx->lr = 0x8036B9D4u;
    if constexpr (KnownRegArgsCpuCall<0x80040828u>(&func_80040828)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80040828_7CBB = func_80040828_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040828_7CBB);
        r4 = static_cast<uint32_t>(regargs_result_80040828_7CBB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80040828u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 1;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r28));
    goto loc_8036BB64;
}

loc_8036B9E4:
{
    ctx->lr = 0x8036B9E8u;
    if constexpr (KnownRegArgsCpuCall<0x800407D4u>(&func_800407D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800407D4_85F7 = func_800407D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800407D4_85F7);
        r4 = static_cast<uint32_t>(regargs_result_800407D4_85F7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800407D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8036B9EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8036B9FC;
    }
}

loc_8036B9F0:
{
}

loc_8036B9F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8036BB3C;
    }
}

loc_8036B9F8:
{
    goto loc_8036BB64;
}

loc_8036B9FC:
{
    r3 = 0x806C0000u;
    r30 = (r3 + 6336);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r29 = (r3 + 21132);
    r28 = 84;
    r3 = r29;
    r4 = 0;
    r5 = 86;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r26 = 0x80000000u;
}

loc_8036BA24:
{
    r3 = r30;
    ctx->lr = 0x8036BA2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BEA4u>(&func_8005BEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BEA4_90A4 = func_8005BEA4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8005BEA4_90A4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8036BA30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8036BA44;
    }
}

loc_8036BA34:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8036BA40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036BB1C;
    }
}

loc_8036BA44:
{
    r0 = (r28 - r3);
}

loc_8036BA4C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8036BB1C;
    }
}

loc_8036BA50:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8036BA58:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8036BB14;
    }
}

loc_8036BA5C:
{
    r4 = (r3 + -8);
}

loc_8036BA64:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8036BAEC;
    }
}

loc_8036BA68:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8036BA80;
    }
}

loc_8036BA70:
{
    r0 = (r26 + -2);
}

loc_8036BA78:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8036BA80;
    }
}

loc_8036BA7C:
{
    r5 = 1;
}

loc_8036BA80:
{
}

loc_8036BA84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8036BAEC;
    }
}

loc_8036BA88:
{
    r0 = (r4 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_8036BA98:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8036BAEC;
    }
}

loc_8036BA9C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r30);
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r30 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r30 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r30 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 7));
    r30 = (r30 + 8);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r29 + 7), static_cast<uint8_t>(r0));
    r29 = (r29 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8036BA9C;
    }
}

loc_8036BAEC:
{
    r0 = (r3 - r6);
    ctr = r0;
}

loc_8036BAF8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r3))) {
        goto loc_8036BB14;
    }
}

loc_8036BAFC:
{
    r0 = MemoryInline::FlatRead8(r30);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r29 = (r29 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8036BAFC;
    }
}

loc_8036BB14:
{
    r28 = (r28 - r3);
    goto loc_8036BA24;
}

loc_8036BB1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 813), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    r3 = MemoryInline::FlatRead8((r27 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r0));
    goto loc_8036BB64;
}

loc_8036BB3C:
{
    MemoryInline::FlatWrite8((r27 + 813), static_cast<uint8_t>(r26));
    r3 = 0;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r26));
    goto loc_8036BB64;
}

loc_8036BB54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 798), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r26));
}

loc_8036BB64:
{
    r3 = r31;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8036B74C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8036B74C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8036B74C func_8036B74C preserves=true fpr_mask=0x00000000
