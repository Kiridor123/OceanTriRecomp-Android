#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80376A9C(CpuContext* ctx);
extern "C" uint32_t func_80376A9C_ra68_1e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80376E10(CpuContext* ctx);
extern "C" uint64_t func_80376E10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80376F84(CpuContext* ctx);
extern "C" uint64_t func_80376F84_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803770BC(CpuContext* ctx);
extern "C" uint64_t func_803770BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80377224(CpuContext* ctx);
extern "C" uint64_t func_80377224_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8037763C(CpuContext* ctx);
extern "C" uint64_t func_8037763C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_803776D8(CpuContext* ctx);
extern "C" uint64_t func_803776D8_ra188_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80377864(CpuContext* ctx);
extern "C" uint64_t func_80377864_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803779BC(CpuContext* ctx);
extern "C" uint64_t func_803779BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80377C44(CpuContext* ctx);
extern "C" uint64_t func_80377C44_ra58_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80377E58(CpuContext* ctx);
extern "C" uint64_t func_80377E58_ra58_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80377FD0(CpuContext* ctx);
extern "C" uint64_t func_80377FD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8037816C(CpuContext* ctx);
extern "C" uint64_t func_8037816C_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8037834C(CpuContext* ctx);
extern "C" uint64_t func_8037834C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803783CC(CpuContext* ctx);
extern "C" uint64_t func_803783CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80378474(CpuContext* ctx);
extern "C" uint64_t func_80378474_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80427B6C(CpuContext* ctx);
extern "C" uint32_t func_80427B6C_ra0_0_8_0(CpuContext*);
extern "C" void func_80452EB0(CpuContext* ctx);
extern "C" uint64_t func_80452EB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803784C8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_803784C8;

loc_803784C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->lr = 0x803784E4u;
    if constexpr (KnownRegArgsCpuCall<0x80427B6Cu>(&func_80427B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80427B6C_136B = func_80427B6C_ra0_0_8_0(ctx);
        r3 = regargs_result_80427B6C_136B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80427B6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803784E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803784EC:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r6 = MemoryInline::FlatRead8(r30);
    r4 = (r6 & 128);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r6 & 127);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80378518:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(22))) {
        goto loc_803788EC;
    }
}

loc_8037851C:
{
    r4 = 0x805F0000u;
    r4 = (r4 + -5000);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80378534u:
        goto loc_80378534;
        break;
    case 0x80378584u:
        goto loc_80378584;
        break;
    case 0x803785C8u:
        goto loc_803785C8;
        break;
    case 0x803785FCu:
        goto loc_803785FC;
        break;
    case 0x80378618u:
        goto loc_80378618;
        break;
    case 0x80378620u:
        goto loc_80378620;
        break;
    case 0x80378674u:
        goto loc_80378674;
        break;
    case 0x80378680u:
        goto loc_80378680;
        break;
    case 0x8037868Cu:
        goto loc_8037868C;
        break;
    case 0x803786D0u:
        goto loc_803786D0;
        break;
    case 0x80378714u:
        goto loc_80378714;
        break;
    case 0x80378768u:
        goto loc_80378768;
        break;
    case 0x80378774u:
        goto loc_80378774;
        break;
    case 0x8037881Cu:
        goto loc_8037881C;
        break;
    case 0x80378860u:
        goto loc_80378860;
        break;
    case 0x8037888Cu:
        goto loc_8037888C;
        break;
    case 0x803788B8u:
        goto loc_803788B8;
        break;
    case 0x803788D4u:
        goto loc_803788D4;
        break;
    case 0x803788DCu:
        goto loc_803788DC;
        break;
    case 0x803788E4u:
        goto loc_803788E4;
        break;
    case 0x803788ECu:
        goto loc_803788EC;
        break;
    case 0x803787C8u:
        goto loc_803787C8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80378534:
{
}

loc_80378538:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_803788EC;
    }
}

loc_8037853C:
{
    r3 = r30;
    ctx->lr = 0x80378544u;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_2638 = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_2638);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_2638 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378548:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037854C:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80378568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037856C:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    r5 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x80378580u;
    if constexpr (KnownRegArgsCpuCall<0x80377224u>(&func_80377224)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80377224_2CA5 = func_80377224_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80377224_2CA5);
        r4 = static_cast<uint32_t>(regargs_result_80377224_2CA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80377224u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    goto loc_803788EC;
}

loc_80378584:
{
    r3 = r30;
    ctx->lr = 0x8037858Cu;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_313A = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_313A);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_313A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378590:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378594:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803785B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803785B4:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x803785C4u;
    if constexpr (KnownRegArgsCpuCall<0x80376E10u>(&func_80376E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80376E10_3798 = func_80376E10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80376E10_3798);
        r4 = static_cast<uint32_t>(regargs_result_80376E10_3798 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80376E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_803785C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 36));
    r0 = (r0 * 2848);
    r31 = (r3 + r0);
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r3 = (r3 + 4);
    ctx->lr = 0x803785E4u;
    if constexpr (KnownRegArgsCpuCall<0x80452EB0u>(&func_80452EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80452EB0_3F9A = func_80452EB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80452EB0_3F9A);
        r4 = static_cast<uint32_t>(regargs_result_80452EB0_3F9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80452EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r30 + 40));
    r5 = MemoryInline::FlatRead8((r30 + 36));
    r6 = 1;
    ctx->lr = 0x803785F8u;
    if constexpr (KnownRegArgsCpuCall<0x80376F84u>(&func_80376F84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80376F84_4405 = func_80376F84_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80376F84_4405);
        r4 = static_cast<uint32_t>(regargs_result_80376F84_4405 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80376F84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_803785FC:
{
    r3 = MemoryInline::FlatRead8((r30 + 36));
    ctx->lr = 0x80378604u;
    if constexpr (KnownRegArgsCpuCall<0x803770BCu>(&func_803770BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803770BC_4B7D = func_803770BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803770BC_4B7D);
        r4 = static_cast<uint32_t>(regargs_result_803770BC_4B7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803770BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r3 = (r3 + 4);
    ctx->lr = 0x80378614u;
    if constexpr (KnownRegArgsCpuCall<0x80452EB0u>(&func_80452EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80452EB0_52F4 = func_80452EB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80452EB0_52F4);
        r4 = static_cast<uint32_t>(regargs_result_80452EB0_52F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80452EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    goto loc_803788EC;
}

loc_80378618:
{
    ctx->lr = 0x8037861Cu;
    if constexpr (KnownRegArgsCpuCall<0x80376A9Cu>(&func_80376A9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_80376A9C_5713 = func_80376A9C_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80376A9C_5713;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80376A9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    goto loc_803788EC;
}

loc_80378620:
{
    r3 = r30;
    ctx->lr = 0x80378628u;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_5CC8 = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_5CC8);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_5CC8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_8037862C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378630:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8037864C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378650:
{
    r3 = (r4 * 2848);
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r0 & 255);
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 2817), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 2818), static_cast<uint8_t>(r0));
    goto loc_803788EC;
}

loc_80378674:
{
    r3 = r30;
    // inline leaf 0x8037748C (32 guest instruction(s))
}

loc_inl1_0x8037748C:
{
    r4 = 0x806B0000u;
    r5 = (r4 + -12348);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_inl1_0x8037749C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803774A0:
{
    r4 = MemoryInline::FlatRead8((r5 + 329));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 39));
}

loc_inl1_0x803774AC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803774B0:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 330), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 36));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 331), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 334), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 37));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 332), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 336), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 38));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r5 + 338), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 46));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r5 + 340), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 48));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r5 + 342), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 50));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r5 + 344), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 52));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r5 + 346), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_8037748C;
}

loc_inl1_return:
{
}

loc_inl1_cont_8037748C:
{
    // end of inlined leaf 0x8037748C
    goto loc_803788EC;
}

loc_80378680:
{
    r3 = r30;
    // inline leaf 0x8037750C (12 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 38));
    MemoryInline::FlatWriteRam16((r4 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 40));
    r0 = (r0 & 255);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 354), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8037750C
    goto loc_803788EC;
}

loc_8037868C:
{
    r3 = r30;
    ctx->lr = 0x80378694u;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_7260 = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_7260);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_7260 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378698:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037869C:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803786B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803786BC:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x803786CCu;
    if constexpr (KnownRegArgsCpuCall<0x8037763Cu>(&func_8037763C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037763C_78BE = func_8037763C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8037763C_78BE);
        r4 = static_cast<uint32_t>(regargs_result_8037763C_78BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037763Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
    goto loc_803788EC;
}

loc_803786D0:
{
    r3 = r30;
    ctx->lr = 0x803786D8u;
    if constexpr (KnownRegArgsCpuCall<0x80378474u>(&func_80378474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80378474_7E0A = func_80378474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80378474_7E0A);
        r4 = static_cast<uint32_t>(regargs_result_80378474_7E0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80378474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803786DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803788EC;
    }
}

loc_803786E0:
{
    r4 = MemoryInline::FlatRead8((r30 + 1));
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803786FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378700:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x80378710u;
    if constexpr (KnownRegArgsCpuCall<0x803776D8u>(&func_803776D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803776D8_849D = func_803776D8_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_803776D8_849D);
        r4 = static_cast<uint32_t>(regargs_result_803776D8_849D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803776D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803788EC;
}

loc_80378714:
{
    r3 = r30;
    ctx->lr = 0x8037871Cu;
    if constexpr (KnownRegArgsCpuCall<0x80378474u>(&func_80378474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80378474_893C = func_80378474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80378474_893C);
        r4 = static_cast<uint32_t>(regargs_result_80378474_893C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80378474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378720:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803788EC;
    }
}

loc_80378724:
{
    r3 = r30;
    ctx->lr = 0x8037872Cu;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_8E40 = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_8E40);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_8E40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378730:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378734:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80378750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378754:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x80378764u;
    if constexpr (KnownRegArgsCpuCall<0x80377864u>(&func_80377864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80377864_949E = func_80377864_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377864_949E);
        r4 = static_cast<uint32_t>(regargs_result_80377864_949E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377864u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_80378768:
{
    r3 = r30;
    ctx->lr = 0x80378770u;
    if constexpr (KnownRegArgsCpuCall<0x803779BCu>(&func_803779BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803779BC_9BF6 = func_803779BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803779BC_9BF6);
        r4 = static_cast<uint32_t>(regargs_result_803779BC_9BF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803779BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_80378774:
{
    r3 = r30;
    ctx->lr = 0x8037877Cu;
    if constexpr (KnownRegArgsCpuCall<0x803783CCu>(&func_803783CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803783CC_A34E = func_803783CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803783CC_A34E);
        r4 = static_cast<uint32_t>(regargs_result_803783CC_A34E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803783CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378780:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378784:
{
    r3 = r30;
    ctx->lr = 0x8037878Cu;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_A850 = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_A850);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_A850 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378790:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378794:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803787B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803787B4:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x803787C4u;
    if constexpr (KnownRegArgsCpuCall<0x80377C44u>(&func_80377C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_80377C44_AEC9 = func_80377C44_ra58_1fc_18_0(ctx, r3, r4, r6, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377C44_AEC9);
        r4 = static_cast<uint32_t>(regargs_result_80377C44_AEC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377C44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_803787C8:
{
    r3 = r30;
    ctx->lr = 0x803787D0u;
    if constexpr (KnownRegArgsCpuCall<0x803783CCu>(&func_803783CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803783CC_B61B = func_803783CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803783CC_B61B);
        r4 = static_cast<uint32_t>(regargs_result_803783CC_B61B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803783CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803787D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803788EC;
    }
}

loc_803787D8:
{
    r3 = r30;
    ctx->lr = 0x803787E0u;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_BB1F = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_BB1F);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_BB1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803787E4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803787E8:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80378804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378808:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x80378818u;
    if constexpr (KnownRegArgsCpuCall<0x80377C44u>(&func_80377C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_80377C44_C198 = func_80377C44_ra58_1fc_18_0(ctx, r3, r4, r6, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377C44_C198);
        r4 = static_cast<uint32_t>(regargs_result_80377C44_C198 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377C44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_8037881C:
{
    r3 = r30;
    ctx->lr = 0x80378824u;
    if constexpr (KnownRegArgsCpuCall<0x8037834Cu>(&func_8037834C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037834C_C8EA = func_8037834C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8037834C_C8EA);
        r4 = static_cast<uint32_t>(regargs_result_8037834C_C8EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037834Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378828:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037882C:
{
    r4 = (r3 & 255);
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r0 = (r4 * 304);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80378848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037884C:
{
    r0 = (r4 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x8037885Cu;
    if constexpr (KnownRegArgsCpuCall<0x80377E58u>(&func_80377E58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_80377E58_CF63 = func_80377E58_ra58_1fc_18_0(ctx, r3, r4, r6, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377E58_CF63);
        r4 = static_cast<uint32_t>(regargs_result_80377E58_CF63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377E58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_80378860:
{
    r3 = r30;
    ctx->lr = 0x80378868u;
    if constexpr (KnownRegArgsCpuCall<0x803783CCu>(&func_803783CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803783CC_D6B5 = func_803783CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803783CC_D6B5);
        r4 = static_cast<uint32_t>(regargs_result_803783CC_D6B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803783CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_8037886C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_80378870:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (r3 & 255);
    r0 = (r0 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x80378888u;
    if constexpr (KnownRegArgsCpuCall<0x80377FD0u>(&func_80377FD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80377FD0_DCB7 = func_80377FD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377FD0_DCB7);
        r4 = static_cast<uint32_t>(regargs_result_80377FD0_DCB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80377FD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_8037888C:
{
    r3 = r30;
    ctx->lr = 0x80378894u;
    if constexpr (KnownRegArgsCpuCall<0x803783CCu>(&func_803783CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803783CC_E40F = func_803783CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803783CC_E40F);
        r4 = static_cast<uint32_t>(regargs_result_803783CC_E40F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803783CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80378898:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_8037889C:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (r3 & 255);
    r0 = (r0 * 2848);
    r3 = (r31 + r0);
    r4 = r30;
    ctx->lr = 0x803788B4u;
    if constexpr (KnownRegArgsCpuCall<0x8037816Cu>(&func_8037816C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8037816C_EA2C = func_8037816C_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8037816C_EA2C);
        r4 = static_cast<uint32_t>(regargs_result_8037816C_EA2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8037816Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803788EC;
}

loc_803788B8:
{
    r3 = r30;
    ctx->lr = 0x803788C0u;
    if constexpr (KnownRegArgsCpuCall<0x803783CCu>(&func_803783CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803783CC_F185 = func_803783CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803783CC_F185);
        r4 = static_cast<uint32_t>(regargs_result_803783CC_F185 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803783CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803788C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803788EC;
    }
}

loc_803788C8:
{
    r3 = r30;
    // inline leaf 0x80378294 (12 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 38));
    MemoryInline::FlatWriteRam16((r4 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 40));
    r0 = (r0 & 255);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 354), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80378294
    goto loc_803788EC;
}

loc_803788D4:
{
    // inline leaf 0x8020FE24 (11 guest instruction(s))
}

loc_inl6_0x8020FE24:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_inl6_0x8020FE30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8020FE34:
{
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 326));
}

loc_inl6_0x8020FE40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8020FE44:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 326), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_8020FE24;
}

loc_inl6_return:
{
}

loc_inl6_cont_8020FE24:
{
    // end of inlined leaf 0x8020FE24
    goto loc_803788EC;
}

loc_803788DC:
{
    // inline leaf 0x8020FE50 (11 guest instruction(s))
}

loc_inl7_0x8020FE50:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_inl7_0x8020FE5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8020FE60:
{
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 327));
}

loc_inl7_0x8020FE6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8020FE70:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 327), static_cast<uint8_t>(r0));
    goto loc_inl7_cont_8020FE50;
}

loc_inl7_return:
{
}

loc_inl7_cont_8020FE50:
{
    // end of inlined leaf 0x8020FE50
    goto loc_803788EC;
}

loc_803788E4:
{
    r3 = r30;
    ctx->lr = 0x803788ECu;
    if constexpr (KnownRegArgsCpuCall<0x80378474u>(&func_80378474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80378474_FF78 = func_80378474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80378474_FF78);
        r4 = static_cast<uint32_t>(regargs_result_80378474_FF78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80378474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803788EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803784C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803784C8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803784C8 func_803784C8 preserves=true fpr_mask=0x00000000
