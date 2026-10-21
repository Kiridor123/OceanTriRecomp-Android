#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CCE5C(CpuContext* ctx);
extern "C" uint64_t func_803CCE5C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D6848(CpuContext* ctx);
extern "C" uint64_t func_803D6848_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D68A4(CpuContext* ctx);
extern "C" uint64_t func_803D68A4_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DA9C8(CpuContext* ctx);
extern "C" uint64_t func_803DA9C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DDAF4(CpuContext* ctx);
extern "C" uint64_t func_803DDAF4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DDB74(CpuContext* ctx);
extern "C" uint64_t func_803DDB74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DDE1C(CpuContext* ctx);
extern "C" uint64_t func_803DDE1C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DDEB8(CpuContext* ctx);
extern "C" uint64_t func_803DDEB8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DDF54(CpuContext* ctx);
extern "C" uint64_t func_803DDF54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DE0D4(CpuContext* ctx);
extern "C" uint64_t func_803DE0D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DE1B4(CpuContext* ctx);
extern "C" uint64_t func_803DE1B4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DE29C(CpuContext* ctx);
extern "C" uint64_t func_803DE29C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DE738(CpuContext* ctx);
extern "C" uint64_t func_803DE738_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DEED0(CpuContext* ctx);
extern "C" uint64_t func_803DEED0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F881C(CpuContext* ctx);
extern "C" uint64_t func_803F881C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F8894(CpuContext* ctx);
extern "C" uint64_t func_803F8894_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FD840(CpuContext* ctx);
extern "C" uint64_t func_803FD840_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80403380(CpuContext* ctx);
extern "C" uint64_t func_80403380_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_803DC5AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_803DD794_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t stackword36 = 0;
    uint32_t stackword37 = 0;
    uint32_t stackword38 = 0;
    uint32_t stackword39 = 0;
    uint32_t stackword40 = 0;
    uint32_t stackword41 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x803DC5ACu);
    goto loc_803DC5AC;

loc_803DC5AC:
{
    MemoryInline::FlatWriteRam32((r1 + -832), r1);
    r1 = (r1 + -832);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 836), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 816), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 824);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 816);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r26 = r3;
    r27 = r7;
    r28 = r8;
    r0 = (r4 + -32768);
}

loc_803DC5DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(105))) {
        goto loc_803DD790;
    }
}

loc_803DC5E0:
{
    r9 = 0x80600000u;
    r9 = (r9 + -18776);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r9_addr_1 = (r9 + r0);
    r9 = MemoryInline::FlatRead32(r9_addr_1);
    ctr = r9;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803DC5F8u:
        goto loc_803DC5F8;
        break;
    case 0x803DD790u:
        goto loc_803DD790;
        break;
    case 0x803DC8D0u:
        goto loc_803DC8D0;
        break;
    case 0x803DC9ACu:
        goto loc_803DC9AC;
        break;
    case 0x803DCAB4u:
        goto loc_803DCAB4;
        break;
    case 0x803DC7B8u:
        goto loc_803DC7B8;
        break;
    case 0x803DCAD0u:
        goto loc_803DCAD0;
        break;
    case 0x803DCAE0u:
        goto loc_803DCAE0;
        break;
    case 0x803DCE70u:
        goto loc_803DCE70;
        break;
    case 0x803DCCDCu:
        goto loc_803DCCDC;
        break;
    case 0x803DCD84u:
        goto loc_803DCD84;
        break;
    case 0x803DCE08u:
        goto loc_803DCE08;
        break;
    case 0x803DCE18u:
        goto loc_803DCE18;
        break;
    case 0x803DD5B0u:
        goto loc_803DD5B0;
        break;
    case 0x803DD0DCu:
        goto loc_803DD0DC;
        break;
    case 0x803DD14Cu:
        goto loc_803DD14C;
        break;
    case 0x803DD178u:
        goto loc_803DD178;
        break;
    case 0x803DD188u:
        goto loc_803DD188;
        break;
    case 0x803DD408u:
        goto loc_803DD408;
        break;
    case 0x803DCECCu:
        goto loc_803DCECC;
        break;
    case 0x803DCC44u:
        goto loc_803DCC44;
        break;
    case 0x803DCB6Cu:
        goto loc_803DCB6C;
        break;
    case 0x803DCB84u:
        goto loc_803DCB84;
        break;
    case 0x803DCC24u:
        goto loc_803DCC24;
        break;
    case 0x803DD5A0u:
        goto loc_803DD5A0;
        break;
    case 0x803DCFA8u:
        goto loc_803DCFA8;
        break;
    case 0x803DD024u:
        goto loc_803DD024;
        break;
    case 0x803DCF00u:
        goto loc_803DCF00;
        break;
    case 0x803DD46Cu:
        goto loc_803DD46C;
        break;
    case 0x803DD684u:
        goto loc_803DD684;
        break;
    case 0x803DD674u:
        goto loc_803DD674;
        break;
    case 0x803DCC34u:
        goto loc_803DCC34;
        break;
    case 0x803DCCB0u:
        goto loc_803DCCB0;
        break;
    case 0x803DCCC0u:
        goto loc_803DCCC0;
        break;
    case 0x803DCCD0u:
        goto loc_803DCCD0;
        break;
    case 0x803DD754u:
        goto loc_803DD754;
        break;
    case 0x803DD764u:
        goto loc_803DD764;
        break;
    case 0x803DD780u:
        goto loc_803DD780;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_803DC5F8:
{
    r4 = 0;
    r0 = 3;
    ctr = r0;
}

loc_803DC604:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_803DC60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC610:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_803DC61C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC620:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_803DC62C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC630:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_803DC63C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC640:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_803DC64C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC650:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_803DC65C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC660:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_803DC66C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC670:
{
    r3 = (r3 + 28);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803DC604;
    }
}

loc_803DC67C:
{
}

loc_803DC680:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(21))) {
        goto loc_803DC6B8;
    }
}

loc_803DC684:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 0x80050000u;
    r4 = (r4 + 49);
    r5 = (r1 + 140);
    ctx->lr = 0x803DC698u;
    if constexpr (KnownRegArgsCpuCall<0x803FD840u>(&func_803FD840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803FD840_3207 = func_803FD840_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803FD840_3207);
        r4 = static_cast<uint32_t>(regargs_result_803FD840_3207 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FD840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r26;
    r4 = 3;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r1 + 140));
    r7 = 1;
    r8 = (r1 + 140);
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DC6B8u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_3656 = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_3656);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_3656 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DC6B8:
{
    r0 = MemoryInline::FlatRead32((r26 + 780));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 780), r0);
    r0 = MemoryInline::FlatRead32((r26 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 784), r0);
    r0 = MemoryInline::FlatRead32((r26 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 788), r0);
    r0 = MemoryInline::FlatRead32((r26 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 792), r0);
    r0 = MemoryInline::FlatRead32((r26 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 796), r0);
    r0 = MemoryInline::FlatRead32((r26 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 800), r0);
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    r0 = MemoryInline::FlatRead32((r26 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 808), r0);
    r0 = MemoryInline::FlatRead32((r26 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 812), r0);
    r0 = MemoryInline::FlatRead32((r26 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 816), r0);
    r0 = MemoryInline::FlatRead32((r26 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 820), r0);
    r0 = MemoryInline::FlatRead32((r26 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 824), r0);
    r0 = MemoryInline::FlatRead32((r26 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 828), r0);
    r0 = MemoryInline::FlatRead32((r26 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 832), r0);
    r0 = MemoryInline::FlatRead32((r26 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 836), r0);
    r0 = MemoryInline::FlatRead32((r26 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 840), r0);
    r0 = MemoryInline::FlatRead32((r26 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 844), r0);
    r0 = MemoryInline::FlatRead32((r26 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 848), r0);
    r0 = MemoryInline::FlatRead32((r26 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 852), r0);
    r0 = MemoryInline::FlatRead32((r26 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 856), r0);
    r0 = MemoryInline::FlatRead32((r26 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 860), r0);
    goto loc_803DD790;
}

loc_803DC7B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 780));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 780), r0);
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 804), r0);
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    r0 = MemoryInline::FlatRead32((r3 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 812), r0);
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    r0 = MemoryInline::FlatRead32((r3 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 820), r0);
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    r0 = MemoryInline::FlatRead32((r3 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 828), r0);
    r0 = MemoryInline::FlatRead32((r3 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 832), r0);
    r0 = MemoryInline::FlatRead32((r3 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 836), r0);
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    r0 = MemoryInline::FlatRead32((r3 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 848), r0);
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 852), r0);
    r0 = MemoryInline::FlatRead32((r3 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 856), r0);
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_803DD790;
}

loc_803DC8D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r3 = 0;
    r0 = 3;
    ctr = r0;
}

loc_803DC8F4:
{
    r0 = MemoryInline::FlatRead32((r26 + 864));
}

loc_803DC8FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC90C;
    }
}

loc_803DC900:
{
    r0 = MemoryInline::FlatRead32((r26 + 780));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 780), r0);
}

loc_803DC90C:
{
    r0 = MemoryInline::FlatRead32((r26 + 868));
}

loc_803DC914:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC924;
    }
}

loc_803DC918:
{
    r0 = MemoryInline::FlatRead32((r26 + 784));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 784), r0);
}

loc_803DC924:
{
    r0 = MemoryInline::FlatRead32((r26 + 872));
}

loc_803DC92C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC93C;
    }
}

loc_803DC930:
{
    r0 = MemoryInline::FlatRead32((r26 + 788));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 788), r0);
}

loc_803DC93C:
{
    r0 = MemoryInline::FlatRead32((r26 + 876));
}

loc_803DC944:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC954;
    }
}

loc_803DC948:
{
    r0 = MemoryInline::FlatRead32((r26 + 792));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 792), r0);
}

loc_803DC954:
{
    r0 = MemoryInline::FlatRead32((r26 + 880));
}

loc_803DC95C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC96C;
    }
}

loc_803DC960:
{
    r0 = MemoryInline::FlatRead32((r26 + 796));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 796), r0);
}

loc_803DC96C:
{
    r0 = MemoryInline::FlatRead32((r26 + 884));
}

loc_803DC974:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC984;
    }
}

loc_803DC978:
{
    r0 = MemoryInline::FlatRead32((r26 + 800));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 800), r0);
}

loc_803DC984:
{
    r0 = MemoryInline::FlatRead32((r26 + 888));
}

loc_803DC98C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DC99C;
    }
}

loc_803DC990:
{
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r26 + 804), r0);
}

loc_803DC99C:
{
    r26 = (r26 + 28);
    r3 = (r3 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803DC8F4;
    }
}

loc_803DC9A8:
{
    goto loc_803DD790;
}

loc_803DC9AC:
{
}

loc_803DC9B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DC9B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 780));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 780), r0);
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    r0 = MemoryInline::FlatRead32((r3 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 800), r0);
    r0 = MemoryInline::FlatRead32((r3 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 804), r0);
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    r0 = MemoryInline::FlatRead32((r3 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 812), r0);
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    r0 = MemoryInline::FlatRead32((r3 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 820), r0);
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    r0 = MemoryInline::FlatRead32((r3 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 828), r0);
    r0 = MemoryInline::FlatRead32((r3 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 832), r0);
    r0 = MemoryInline::FlatRead32((r3 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 836), r0);
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    r0 = MemoryInline::FlatRead32((r3 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 844), r0);
    r0 = MemoryInline::FlatRead32((r3 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 848), r0);
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 852), r0);
    r0 = MemoryInline::FlatRead32((r3 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 856), r0);
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_803DD790;
}

loc_803DCAB4:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    r0 = MemoryInline::FlatRead32((r3 + 788));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 788), r0);
    goto loc_803DD790;
}

loc_803DCAD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    goto loc_803DD790;
}

loc_803DCAE0:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 1052), r0);
}

loc_803DCAEC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803DCB2C;
    }
}

loc_803DCAF0:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 128), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 56);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803DCB28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCB2C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1320), r0);
    MemoryInline::FlatWrite32((r3 + 1328), r0);
    MemoryInline::FlatWrite8((r3 + 1334), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1335), static_cast<uint8_t>(r0));
    r4 = 0;
    r5 = (r3 + 1012);
    r6 = (r3 + 1020);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x803DCB5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DE0D4u>(&func_803DE0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE0D4_70D9 = func_803DE0D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE0D4_70D9);
        r4 = static_cast<uint32_t>(regargs_result_803DE0D4_70D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r26 + 792));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r26 + 792), r0);
    goto loc_803DD790;
}

loc_803DCB6C:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r3 + 2796), r0);
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    goto loc_803DD790;
}

loc_803DCB84:
{
}

loc_803DCB88:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_803DCBC8;
    }
}

loc_803DCB8C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803DCBC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCBC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 2800));
    r0_subfic_ra_1 = r0;
    r0 = (32 - r0_subfic_ra_1);
}

loc_803DCBD4:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_803DCBDC;
    }
}

loc_803DCBD8:
{
    r27 = r0;
}

loc_803DCBDC:
{
    r22 = 0;
    goto loc_803DCC00;
}

loc_803DCBE4:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r26 + 2800));
    r5 = r28;
    r6 = (r28 + 892);
    ctx->lr = 0x803DCBF8u;
    if constexpr (KnownRegArgsCpuCall<0x803DDB74u>(&func_803DDB74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDB74_83B0 = func_803DDB74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDB74_83B0);
        r4 = static_cast<uint32_t>(regargs_result_803DDB74_83B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDB74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r28 = (r28 + 1152);
    r22 = (r22 + 1);
}

loc_803DCC00:
{
}

loc_803DCC04:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803DCBE4;
    }
}

loc_803DCC08:
{
    r0 = MemoryInline::FlatRead32((r26 + 2792));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r26 + 2792), r0);
    r0 = MemoryInline::FlatRead32((r26 + 796));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r26 + 796), r0);
    goto loc_803DD790;
}

loc_803DCC24:
{
    r0 = MemoryInline::FlatRead32((r3 + 796));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32((r3 + 796), r0);
    goto loc_803DD790;
}

loc_803DCC34:
{
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 | 33554432);
    MemoryInline::FlatWrite32((r3 + 784), r0);
    goto loc_803DD790;
}

loc_803DCC44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 2800), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 28276), static_cast<uint8_t>(r0));
    r22 = 0;
}

loc_803DCC58:
{
    r3 = r26;
    r4 = r22;
    ctx->lr = 0x803DCC64u;
    if constexpr (KnownRegArgsCpuCall<0x803DDAF4u>(&func_803DDAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDAF4_8FDF = func_803DDAF4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDAF4_8FDF);
        r4 = static_cast<uint32_t>(regargs_result_803DDAF4_8FDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDAF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r22 = (r22 + 1);
}

loc_803DCC6C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(32))) {
        goto loc_803DCC58;
    }
}

loc_803DCC70:
{
    r22 = 0;
    goto loc_803DCC98;
}

loc_803DCC78:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r28 + 876));
    r4 = (r4 + -1);
    r5 = r28;
    r6 = (r28 + 892);
    ctx->lr = 0x803DCC90u;
    if constexpr (KnownRegArgsCpuCall<0x803DDB74u>(&func_803DDB74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDB74_996D = func_803DDB74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDB74_996D);
        r4 = static_cast<uint32_t>(regargs_result_803DDB74_996D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDB74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r28 = (r28 + 1152);
    r22 = (r22 + 1);
}

loc_803DCC98:
{
}

loc_803DCC9C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803DCC78;
    }
}

loc_803DCCA0:
{
    r0 = MemoryInline::FlatRead32((r26 + 800));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r26 + 800), r0);
    goto loc_803DD790;
}

loc_803DCCB0:
{
    r4 = r28;
    r5 = (r8 + 892);
    ctx->lr = 0x803DCCBCu;
    if constexpr (KnownRegArgsCpuCall<0x803DDE1Cu>(&func_803DDE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDE1C_A33D = func_803DDE1C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDE1C_A33D);
        r4 = static_cast<uint32_t>(regargs_result_803DDE1C_A33D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCCC0:
{
    r4 = r28;
    r5 = (r8 + 892);
    ctx->lr = 0x803DCCCCu;
    if constexpr (KnownRegArgsCpuCall<0x803DDF54u>(&func_803DDF54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDF54_ABCD = func_803DDF54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDF54_ABCD);
        r4 = static_cast<uint32_t>(regargs_result_803DDF54_ABCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDF54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCCD0:
{
    r4 = MemoryInline::FlatRead32(r8);
    ctx->lr = 0x803DCCD8u;
    if constexpr (KnownRegArgsCpuCall<0x803DDEB8u>(&func_803DDEB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DDEB8_B461 = func_803DDEB8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DDEB8_B461);
        r4 = static_cast<uint32_t>(regargs_result_803DDEB8_B461 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DDEB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCCDC:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 1052), r0);
    r23 = MemoryInline::FlatRead8((r8 + 4));
    MemoryInline::FlatWrite8((r3 + 1334), static_cast<uint8_t>(r23));
}

loc_803DCCF0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803DCD1C;
    }
}

loc_803DCCF4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803DCCFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DCD1C;
    }
}

loc_803DCD00:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DCD10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803DCD18:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_803DCD58;
    }
}

loc_803DCD1C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 32);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803DCD54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCD58:
{
    r3 = r26;
    r5 = (r26 + 1012);
    r6 = (r26 + 1020);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x803DCD74u;
    if constexpr (KnownRegArgsCpuCall<0x803DE0D4u>(&func_803DE0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE0D4_C98A = func_803DE0D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE0D4_C98A);
        r4 = static_cast<uint32_t>(regargs_result_803DE0D4_C98A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    goto loc_803DD790;
}

loc_803DCD84:
{
    r22 = MemoryInline::FlatRead8((r8 + 4));
    r0 = MemoryInline::FlatRead8((r8 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DCD94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DCD98:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCDA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DCDA4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DCDB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCDBC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_803DD790;
    }
}

loc_803DCDC0:
{
    r3 = r26;
    r5 = (r28 + 6);
    r6 = (r28 + 14);
    r7 = 0;
    r8 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r8 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
    r9 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 28));
}

loc_803DCDEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DCE00;
    }
}

loc_803DCDF0:
{
    r0 = MemoryInline::FlatRead32((r26 + 40));
}

loc_803DCDF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DCE00;
    }
}

loc_803DCDFC:
{
    r9 = 1;
}

loc_803DCE00:
{
    ctx->lr = 0x803DCE04u;
    if constexpr (KnownRegArgsCpuCall<0x803DE0D4u>(&func_803DE0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE0D4_DCC0 = func_803DE0D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE0D4_DCC0);
        r4 = static_cast<uint32_t>(regargs_result_803DE0D4_DCC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCE08:
{
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    goto loc_803DD790;
}

loc_803DCE18:
{
    r22 = MemoryInline::FlatRead8((r8 + 4));
    r0 = MemoryInline::FlatRead8((r8 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DCE28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DCE2C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCE34:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DCE38:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DCE48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCE50:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_803DD790;
    }
}

loc_803DCE54:
{
    r3 = r26;
    r5 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r5 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    ctx->lr = 0x803DCE6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DE1B4u>(&func_803DE1B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE1B4_EE18 = func_803DE1B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE1B4_EE18);
        r4 = static_cast<uint32_t>(regargs_result_803DE1B4_EE18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE1B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DCE70:
{
    r0 = MemoryInline::FlatRead32((r8 + 872));
    MemoryInline::FlatWrite32((r3 + 1056), r0);
    r3 = (r3 + 1060);
    r4 = (r8 + 4);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1123), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 856));
    MemoryInline::FlatWrite32((r26 + 1320), r0);
    r0 = MemoryInline::FlatRead32((r28 + 860));
    MemoryInline::FlatWrite32((r26 + 1328), r0);
    r0 = MemoryInline::FlatRead32((r28 + 864));
    MemoryInline::FlatWrite32((r26 + 1316), r0);
    r0 = MemoryInline::FlatRead32((r28 + 868));
    MemoryInline::FlatWrite32((r26 + 1324), r0);
    r0 = MemoryInline::FlatRead32((r26 + 792));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r26 + 792), r0);
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    goto loc_803DD790;
}

loc_803DCECC:
{
    r0 = MemoryInline::FlatRead32((r3 + 908));
}

loc_803DCED4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DCEE4;
    }
}

loc_803DCED8:
{
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 824), r0);
}

loc_803DCEE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 896));
}

loc_803DCEEC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DD790;
    }
}

loc_803DCEF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 812));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 812), r0);
    goto loc_803DD790;
}

loc_803DCF00:
{
    r22 = 0;
    goto loc_803DCF90;
}

loc_803DCF08:
{
    r23 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803DCF14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DCF88;
    }
}

loc_803DCF18:
{
    r3 = r26;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DCF2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803DCF34:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_803DCF88;
    }
}

loc_803DCF38:
{
    r0 = MemoryInline::FlatRead8((r26 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DCF44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_803DCF88;
    }
}

loc_803DCF48:
{
    r0 = (r4 * 72);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1336));
}

loc_803DCF58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DCF88;
    }
}

loc_803DCF5C:
{
    r3 = r26;
    r5 = (r28 + 8);
    r6 = (r28 + 16);
    r0 = MemoryInline::FlatRead8((r28 + 6));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r7);
    r0 = (r0 | r7);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x803DCF88u;
    if constexpr (KnownRegArgsCpuCall<0x803DE0D4u>(&func_803DE0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE0D4_1061D = func_803DE0D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE0D4_1061D);
        r4 = static_cast<uint32_t>(regargs_result_803DE0D4_1061D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DCF88:
{
    r28 = (r28 + 48);
    r22 = (r22 + 1);
}

loc_803DCF90:
{
}

loc_803DCF94:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r27))) {
        goto loc_803DCF08;
    }
}

loc_803DCF98:
{
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    goto loc_803DD790;
}

loc_803DCFA8:
{
    r22 = MemoryInline::FlatRead8((r8 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCFB4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DCFD4;
    }
}

loc_803DCFB8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DCFC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DCFD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803DD010;
    }
}

loc_803DCFD4:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803DD00Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD010:
{
    MemoryInline::FlatWrite8((r26 + 1335), static_cast<uint8_t>(r22));
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    goto loc_803DD790;
}

loc_803DD024:
{
    r22 = MemoryInline::FlatRead8((r8 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DD030:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD034:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DD044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_803DD04C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r3))) {
        goto loc_803DD790;
    }
}

loc_803DD050:
{
    r0 = (r5 * 72);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1336));
}

loc_803DD060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD064:
{
    r0 = MemoryInline::FlatRead8((r26 + 1335));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r5))) {
        goto loc_803DD790;
    }
}

loc_803DD074:
{
    MemoryInline::FlatWrite8((r26 + 1335), static_cast<uint8_t>(r22));
    r0 = MemoryInline::FlatRead8((r3 + 1337));
}

loc_803DD080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD0A0;
    }
}

loc_803DD084:
{
    r3 = r26;
    r4 = 14;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DD0A0u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_12562 = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_12562);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_12562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DD0A0:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead8((r26 + 1335));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 448));
    ctr = r12;
    ctx->lr = 0x803DD0BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803DD0C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD0C8:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
}

loc_803DD0D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD0D4:
{
    // inline leaf 0x803D25FC (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + 18469), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x803D25FC
    goto loc_803DD790;
}

loc_803DD0DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 792));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r3 + 792), r0);
    r0 = MemoryInline::FlatRead32((r3 + 804));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r3 + 804), r0);
    r0 = MemoryInline::FlatRead32((r3 + 936));
}

loc_803DD0FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DD114;
    }
}

loc_803DD100:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r3 + 852), r0);
}

loc_803DD114:
{
    r0 = MemoryInline::FlatRead32((r3 + 908));
}

loc_803DD11C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DD790;
    }
}

loc_803DD120:
{
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 1010), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r3 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 1339), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r3 + 824), r0);
    goto loc_803DD790;
}

loc_803DD14C:
{
    r4 = MemoryInline::FlatRead8((r8 + 7));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r8 + 6));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r7);
    r0 = (r0 | r7);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    ctx->lr = 0x803DD174u;
    if constexpr (KnownRegArgsCpuCall<0x803DE29Cu>(&func_803DE29C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE29C_13B12 = func_803DE29C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE29C_13B12);
        r4 = static_cast<uint32_t>(regargs_result_803DE29C_13B12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE29Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD178:
{
    r0 = MemoryInline::FlatRead32((r3 + 808));
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r3 + 808), r0);
    goto loc_803DD790;
}

loc_803DD188:
{
    r31 = MemoryInline::FlatRead32((r8 + 4));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1636), r0);
    MemoryInline::FlatWrite8((r3 + 1644), static_cast<uint8_t>(r0));
    r3 = (r3 + 1646);
    r4 = 0;
    r5 = 294;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803DD1AC:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(4))) {
        goto loc_803DD1B4;
    }
}

loc_803DD1B0:
{
    r27 = 4;
}

loc_803DD1B4:
{
    r30 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -4920));
    r24 = 1127219200;
    r23 = 1;
    r25 = 2;
    goto loc_803DD2D8;
}

loc_803DD1CC:
{
    r29 = MemoryInline::FlatRead8((r31 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803DD1D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DD2D0;
    }
}

loc_803DD1DC:
{
    r3 = r26;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 220));
    ctr = r12;
    ctx->lr = 0x803DD1F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_803DD1F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_803DD2D0;
    }
}

loc_803DD1FC:
{
    r0 = (r4 * 72);
    r22 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r22 + 1336));
}

loc_803DD20C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD2D0;
    }
}

loc_803DD210:
{
    r0 = MemoryInline::FlatRead8((r26 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD21C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_803DD2A4;
    }
}

loc_803DD220:
{
    MemoryInline::FlatWrite8((r26 + 1644), static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_803DD22C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_803DD24C;
    }
}

loc_803DD230:
{
}

loc_803DD234:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(80))) {
        goto loc_803DD24C;
    }
}

loc_803DD238:
{
    stackword36 = r0;
    MemoryInline::FlatWriteRam32((r1 + 764), r0);
    stackword37 = r24;
    MemoryInline::FlatWriteRam32((r1 + 760), r24);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword37), static_cast<uint32_t>(stackword36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r13 + -21744), f0.d);
}

loc_803DD24C:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_803DD254:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_803DD274;
    }
}

loc_803DD258:
{
}

loc_803DD25C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(100))) {
        goto loc_803DD274;
    }
}

loc_803DD260:
{
    stackword38 = r0;
    MemoryInline::FlatWriteRam32((r1 + 764), r0);
    stackword39 = r24;
    MemoryInline::FlatWriteRam32((r1 + 760), r24);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword39), static_cast<uint32_t>(stackword38));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r13 + -21740), f0.d);
}

loc_803DD274:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
}

loc_803DD27C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_803DD29C;
    }
}

loc_803DD280:
{
}

loc_803DD284:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(100))) {
        goto loc_803DD29C;
    }
}

loc_803DD288:
{
    stackword40 = r0;
    MemoryInline::FlatWriteRam32((r1 + 764), r0);
    stackword41 = r24;
    MemoryInline::FlatWriteRam32((r1 + 760), r24);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword41), static_cast<uint32_t>(stackword40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r13 + -21736), f0.d);
}

loc_803DD29C:
{
    MemoryInline::FlatWrite8((r26 + 1010), static_cast<uint8_t>(r25));
    goto loc_803DD2BC;
}

loc_803DD2A4:
{
    r3 = (r22 + 1400);
    r4 = r31;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16((r22 + 1404), static_cast<uint16_t>(r0));
}

loc_803DD2BC:
{
    r4 = MemoryInline::FlatRead32((r26 + 1636));
    r3 = (r26 + r4);
    MemoryInline::FlatWrite8((r3 + 1640), static_cast<uint8_t>(r29));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r26 + 1636), r0);
}

loc_803DD2D0:
{
    r31 = (r31 + 48);
    r30 = (r30 + 1);
}

loc_803DD2D8:
{
}

loc_803DD2DC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r27))) {
        goto loc_803DD1CC;
    }
}

loc_803DD2E0:
{
    r0 = MemoryInline::FlatRead8((r26 + 1644));
}

loc_803DD2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD30C;
    }
}

loc_803DD2EC:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_803DD2F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803DD30C;
    }
}

loc_803DD2F8:
{
    r0 = MemoryInline::FlatRead32((r26 + 1636));
}

loc_803DD300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803DD30C;
    }
}

loc_803DD304:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1644), static_cast<uint8_t>(r0));
}

loc_803DD30C:
{
    r3 = r26;
    // inline leaf 0x803DE7EC (16 guest instruction(s))
}

loc_inl7_0x803DE7EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1335));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl7_0x803DE7F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_inl7_0x803DE804;
    }
}

loc_inl7_0x803DE7FC:
{
    r3 = 0;
    goto loc_inl7_cont_803DE7EC;
}

loc_inl7_0x803DE804:
{
    r0 = MemoryInline::FlatRead8((r3 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl7_0x803DE810:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl7_0x803DE81C;
    }
}

loc_inl7_0x803DE814:
{
    r3 = 0;
    goto loc_inl7_cont_803DE7EC;
}

loc_inl7_0x803DE81C:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl7_cont_803DE7EC:
{
    // end of inlined leaf 0x803DE7EC
}

loc_803DD318:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD31C:
{
    r0 = MemoryInline::FlatRead8((r26 + 962));
}

loc_803DD324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD334;
    }
}

loc_803DD328:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 963), static_cast<uint8_t>(r0));
    goto loc_803DD790;
}

loc_803DD334:
{
    r0 = MemoryInline::FlatRead8((r26 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1337));
}

loc_803DD34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD350:
{
    r0 = MemoryInline::FlatRead8((r26 + 1644));
}

loc_803DD358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD3D4;
    }
}

loc_803DD35C:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead8((r26 + 1335));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 448));
    ctr = r12;
    ctx->lr = 0x803DD378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803DD380:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_803DD398;
    }
}

loc_803DD384:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
}

loc_803DD38C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803DD398;
    }
}

loc_803DD390:
{
    // inline leaf 0x803D25FC (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + 18469), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x803D25FC
    goto loc_803DD3D4;
}

loc_803DD398:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x803DD3D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD3D4:
{
    r3 = r26;
    r4 = 25;
    r5 = MemoryInline::FlatRead8((r26 + 1334));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = MemoryInline::FlatRead8((r26 + 1644));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r6 = (0 - r0);
    r7 = MemoryInline::FlatRead32((r26 + 1636));
    r8 = (r26 + 1640);
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DD404u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_17457 = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_17457);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_17457 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD408:
{
    r0 = MemoryInline::FlatRead32((r3 + 904));
}

loc_803DD410:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DD438;
    }
}

loc_803DD414:
{
    r6 = 1;
    MemoryInline::FlatWrite8((r3 + 1010), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead8((r3 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 1339), static_cast<uint8_t>(r6));
    r0 = 4194304;
    MemoryInline::FlatWrite32((r3 + 820), r0);
}

loc_803DD438:
{
    r0 = MemoryInline::FlatRead32((r3 + 908));
}

loc_803DD440:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803DD790;
    }
}

loc_803DD444:
{
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 1010), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r3 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 1339), static_cast<uint8_t>(r5));
    r0 = 4194304;
    MemoryInline::FlatWrite32((r3 + 824), r0);
    goto loc_803DD790;
}

loc_803DD46C:
{
    r3 = MemoryInline::FlatRead32((r8 + 12));
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD480:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803DD488:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803DD790;
    }
}

loc_803DD48C:
{
    r22 = MemoryInline::FlatRead8((r3 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_803DD498:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803DD790;
    }
}

loc_803DD49C:
{
    r23 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r1 + 152);
    ctx->lr = 0x803DD4A8u;
    if constexpr (KnownRegArgsCpuCall<0x803F881Cu>(&func_803F881C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F881C_18418 = func_803F881C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F881C_18418);
        r4 = static_cast<uint32_t>(regargs_result_803F881C_18418 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F881Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 152);
    r4 = 3;
    r5 = r28;
    r6 = 8;
    ctx->lr = 0x803DD4BCu;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_18C99 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_18C99);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_18C99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DD4C0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_803DD4D8;
    }
}

loc_803DD4C4:
{
}

loc_803DD4C8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(1))) {
        goto loc_803DD4FC;
    }
}

loc_803DD4CC:
{
}

loc_803DD4D0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(3))) {
        goto loc_803DD560;
    }
}

loc_803DD4D4:
{
    goto loc_803DD590;
}

loc_803DD4D8:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = MemoryInline::FlatRead32((r26 + 1052));
    r0 = MemoryInline::FlatRead8((r26 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 1396));
    r6 = r28;
    ctx->lr = 0x803DD4FCu;
    if constexpr (KnownRegArgsCpuCall<0x80403380u>(&func_80403380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80403380_19836 = func_80403380_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80403380_19836);
        r4 = static_cast<uint32_t>(regargs_result_80403380_19836 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80403380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DD4FC:
{
    r3 = r26;
    r4 = (r1 + 152);
    ctx->lr = 0x803DD508u;
    if constexpr (KnownRegArgsCpuCall<0x803DE738u>(&func_803DE738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE738_1A0B2 = func_803DE738_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE738_1A0B2);
        r4 = static_cast<uint32_t>(regargs_result_803DE738_1A0B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803DD510:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_803DD590;
    }
}

loc_803DD514:
{
    r3 = (r5 * 72);
    r0 = 1;
    r3 = (r26 + r3);
    MemoryInline::FlatWrite8((r3 + 1338), static_cast<uint8_t>(r0));
    r8 = (r3 + 1396);
    r0 = MemoryInline::FlatRead32(r8);
}

loc_803DD530:
{
    if ((static_cast<uint32_t>(r23) == static_cast<uint32_t>(r0))) {
        goto loc_803DD590;
    }
}

loc_803DD534:
{
    MemoryInline::FlatWrite32(r8, r23);
    r0 = MemoryInline::FlatRead8((r3 + 1337));
}

loc_803DD540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD590;
    }
}

loc_803DD544:
{
    r3 = r26;
    r4 = 21;
    r6 = 0;
    r7 = 1;
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DD55Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_1AC3C = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_1AC3C);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_1AC3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD590;
}

loc_803DD560:
{
    r3 = r26;
    r4 = (r1 + 152);
    ctx->lr = 0x803DD56Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DE738u>(&func_803DE738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE738_1B4CF = func_803DE738_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE738_1B4CF);
        r4 = static_cast<uint32_t>(regargs_result_803DE738_1B4CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803DD574:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803DD590;
    }
}

loc_803DD578:
{
}

loc_803DD57C:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(3))) {
        goto loc_803DD590;
    }
}

loc_803DD580:
{
    r4 = (r23 & 255);
    r0 = (r0 * 72);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + 1340), static_cast<uint8_t>(r4));
}

loc_803DD590:
{
    r3 = (r1 + 152);
    r4 = -1;
    ctx->lr = 0x803DD59Cu;
    if constexpr (KnownRegArgsCpuCall<0x803CCE5Cu>(&func_803CCE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803CCE5C_1BFDE = func_803CCE5C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CCE5C_1BFDE);
        r4 = static_cast<uint32_t>(regargs_result_803CCE5C_1BFDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CCE5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD5A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 848));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r3 + 848), r0);
    goto loc_803DD790;
}

loc_803DD5B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 962));
}

loc_803DD5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD5EC;
    }
}

loc_803DD5C4:
{
    r5 = 65536;
    r0 = (r5 + -32695);
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
    r4 = 0x80050000u;
    r0 = (r4 + 54);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 964), r0);
    goto loc_803DD790;
}

loc_803DD5EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_803DD5F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD5F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
}

loc_803DD600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD604:
{
    r0 = MemoryInline::FlatRead8((r3 + 1334));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 72);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1337));
}

loc_803DD61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD668;
    }
}

loc_803DD620:
{
    r5 = 65536;
    r0 = (r5 + -32695);
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r4 = 0x80050000u;
    r6 = (r4 + 54);
    r6 = (r0 + r6);
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r4 = 12;
    r5 = 0;
    r7 = 1;
    r8 = (r1 + 68);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x803DD668u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_1D30F = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_1D30F);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_1D30F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DD668:
{
    r3 = r26;
    ctx->lr = 0x803DD670u;
    if constexpr (KnownRegArgsCpuCall<0x803DA9C8u>(&func_803DA9C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DA9C8_1DB76 = func_803DA9C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DA9C8_1DB76);
        r4 = static_cast<uint32_t>(regargs_result_803DA9C8_1DB76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DA9C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD674:
{
    r0 = MemoryInline::FlatRead32((r3 + 840));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r3 + 840), r0);
    goto loc_803DD790;
}

loc_803DD684:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD694:
{
    r0 = MemoryInline::FlatRead8((r8 + 264));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DD790;
    }
}

loc_803DD6A4:
{
    r3 = (r1 + 184);
    ctx->lr = 0x803DD6ACu;
    if constexpr (KnownRegArgsCpuCall<0x803D68A4u>(&func_803D68A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803D68A4_1E65B = func_803D68A4_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D68A4_1E65B);
        r4 = static_cast<uint32_t>(regargs_result_803D68A4_1E65B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D68A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 184);
    r4 = 3;
    r5 = (r28 + 264);
    r6 = 8;
    ctx->lr = 0x803DD6C0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803F8894_1EEE4 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_1EEE4);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_1EEE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 216);
    r4 = (r28 + 272);
    r5 = 19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    MemoryInline::FlatWriteRam8((r1 + 235), static_cast<uint8_t>(r27));
    r3 = (r1 + 236);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 237);
    r4 = r28;
    r5 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam8((r1 + 492), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 749), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r28 + 256));
    MemoryInline::FlatWriteRam32((r1 + 752), r0);
    r0 = MemoryInline::FlatRead32((r28 + 260));
    MemoryInline::FlatWriteRam32((r1 + 756), r0);
    r3 = r26;
    r4 = (r1 + 184);
    ctx->lr = 0x803DD71Cu;
    if constexpr (KnownRegArgsCpuCall<0x803DE738u>(&func_803DE738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DE738_1FB4B = func_803DE738_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DE738_1FB4B);
        r4 = static_cast<uint32_t>(regargs_result_803DE738_1FB4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DE738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803DD724:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_803DD744;
    }
}

loc_803DD728:
{
    r3 = r26;
    r4 = 19;
    r6 = 0;
    r7 = 1;
    r8 = (r1 + 184);
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DD744u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_204C8 = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_204C8);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_204C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DD744:
{
    r3 = (r1 + 184);
    r4 = -1;
    ctx->lr = 0x803DD750u;
    if constexpr (KnownRegArgsCpuCall<0x803D6848u>(&func_803D6848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803D6848_20E07 = func_803D6848_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D6848_20E07);
        r4 = static_cast<uint32_t>(regargs_result_803D6848_20E07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D6848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803DD790;
}

loc_803DD754:
{
    r0 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r3 + 816), r0);
    goto loc_803DD790;
}

loc_803DD764:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DD770:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803DD790;
    }
}

loc_803DD774:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1644), static_cast<uint8_t>(r0));
    goto loc_803DD790;
}

loc_803DD780:
{
    r3 = (r3 + 1646);
    r4 = r28;
    r5 = 294;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803DD790:
{
    r0 = 824;
    addr_psqx_803DD794_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803DD794_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 816));
    r11 = (r1 + 816);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 836));
    ctx->lr = r0;
    r1 = (r1 + 832);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803DC5AC func_803DC5AC preserves=true fpr_mask=0x00000000
