#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005C874(CpuContext* ctx);
extern "C" uint64_t func_8005C874_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005C954(CpuContext* ctx);
extern "C" uint64_t func_8005C954_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A0338(CpuContext* ctx);
extern "C" uint32_t func_802A0338_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802A956C(CpuContext* ctx);
extern "C" uint64_t func_802A956C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DF7BC(CpuContext* ctx);
extern "C" uint64_t func_802DF7BC_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0E70(CpuContext* ctx);
extern "C" uint64_t func_802E0E70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802A2758_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_802A2758;

loc_802A2758:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x802A0338u>(&func_802A0338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_802A0338_E1B = func_802A0338_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802A0338_E1B;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A0338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802A2780:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A2994;
    }
}

loc_802A2784:
{
    r0 = (r29 & 255);
    r4 = (r0 * 816);
    r3 = 0x806B0000u;
    r0 = (r3 + -4792);
    r31 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r31 + 444));
}

loc_802A27A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A2994;
    }
}

loc_802A27A4:
{
    r30 = 1;
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802A27B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A27CC;
    }
}

loc_802A27B4:
{
    r3 = 12;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl1_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl1_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl1_0x803BECF4;
    }
}

loc_inl1_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (r0 ^ 1);
    goto loc_inl1_cont_803BECD4;
}

loc_inl1_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl1_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_802A27C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802A27CC;
    }
}

loc_802A27C8:
{
    r30 = 0;
}

loc_802A27CC:
{
    r3 = 778;
    r4 = (r1 + 8);
    ctx->lr = 0x802A27D8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_185B = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_185B);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_185B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = 51;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x8029F810
    r4 = MemoryInline::FlatRead8((r31 + 445));
    r4 = (r4 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x802A27F0u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_802E0E70_1E34 = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_1E34);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_1E34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 798;
    r4 = 0;
    ctx->lr = 0x802A27FCu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_252C = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_252C);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_252C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r29 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_29D8 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_29D8);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_29D8 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_802A2810:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_802A2848;
    }
}

loc_802A2814:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = (r31 + 466);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A2844u;
    if constexpr (KnownRegArgsCpuCall<0x8005C954u>(&func_8005C954)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005C954_30A8 = func_8005C954_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C954_30A8);
        r4 = static_cast<uint32_t>(regargs_result_8005C954_30A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C954u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_802A287C;
}

loc_802A2848:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = (r13 + -27528);
    r7 = (r31 + 456);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A287Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005C874u>(&func_8005C874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005C874_3B12 = func_8005C874_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C874_3B12);
        r4 = static_cast<uint32_t>(regargs_result_8005C874_3B12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_802A287C:
{
    r3 = 799;
    r4 = 0;
    ctx->lr = 0x802A2888u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_4221 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_4221);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_4221 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r29 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_46CD = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_46CD);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_46CD >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead16((r31 + 434));
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl3_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F6A8;
    }
}

loc_inl3_0x8029F6A4:
{
    r3 = 0;
}

loc_inl3_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl3_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    r7 = r3;
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = (r13 + -27528);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A28D4u;
    if constexpr (KnownRegArgsCpuCall<0x8005C874u>(&func_8005C874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005C874_5007 = func_8005C874_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C874_5007);
        r4 = static_cast<uint32_t>(regargs_result_8005C874_5007 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 16);
    r4 = (r13 + -27524);
    r5 = MemoryInline::FlatRead16((r31 + 438));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A28E8u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_5847 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_5847);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_5847 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r31 + 438));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802A28F0:
{
    r3 = 801;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_802A28FC;
    }
}

loc_802A28F8:
{
    r3 = 800;
}

loc_802A28FC:
{
    r4 = 0;
    ctx->lr = 0x802A2904u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_606C = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_606C);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_606C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::FlatRead16((r29 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    ctx->lr = 0x802A2924u;
    if constexpr (KnownRegArgsCpuCall<0x802A956Cu>(&func_802A956C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_802A956C_663A = func_802A956C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A956C_663A);
        r4 = static_cast<uint32_t>(regargs_result_802A956C_663A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A956Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r30 = r3;
    r3 = MemoryInline::FlatRead16((r29 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r29 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_6B32 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_6B32);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_6B32 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = (r13 + -27528);
    r7 = (r1 + 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A295Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005C874u>(&func_8005C874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005C874_7095 = func_8005C874_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005C874_7095);
        r4 = static_cast<uint32_t>(regargs_result_8005C874_7095 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r31 + 400));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 7;
    ctx->lr = 0x802A296Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803BED04_77F7 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_77F7);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_77F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802A2974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A2988;
    }
}

loc_802A2978:
{
    r3 = 838;
    r4 = 6;
    ctx->lr = 0x802A2984u;
    if constexpr (KnownRegArgsCpuCall<0x802DF7BCu>(&func_802DF7BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_802DF7BC_7C89 = func_802DF7BC_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DF7BC_7C89);
        r4 = static_cast<uint32_t>(regargs_result_802DF7BC_7C89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802DF7BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_802A2994;
}

loc_802A2988:
{
    r3 = 838;
    r4 = 9;
    ctx->lr = 0x802A2994u;
    if constexpr (KnownRegArgsCpuCall<0x802DF7BCu>(&func_802DF7BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_802DF7BC_83FB = func_802DF7BC_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DF7BC_83FB);
        r4 = static_cast<uint32_t>(regargs_result_802DF7BC_83FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802DF7BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_802A2994:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_802A2758(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A2758_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A2758 func_802A2758 preserves=true fpr_mask=0x00000000
