#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800427F0(CpuContext* ctx);
extern "C" uint64_t func_800427F0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8004392C(CpuContext* ctx);
extern "C" uint32_t func_8004392C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800580A8(CpuContext* ctx);
extern "C" uint64_t func_800580A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CF27C(CpuContext* ctx);
extern "C" uint32_t func_800CF27C_ra0_0_8_0(CpuContext*);
extern "C" void func_800D2DB4(CpuContext* ctx);
extern "C" uint64_t func_800D2DB4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F4958(CpuContext* ctx);
extern "C" uint64_t func_800F4958_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8028D340(CpuContext* ctx);
extern "C" uint64_t func_8028D340_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8028E450(CpuContext* ctx);
extern "C" uint64_t func_8028E450_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_802A01EC(CpuContext* ctx);
extern "C" uint64_t func_802A01EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E5464(CpuContext* ctx);
extern "C" uint32_t func_802E5464_ra0_0_8_0(CpuContext*);
extern "C" void func_8033A1C4(CpuContext* ctx);
extern "C" uint64_t func_8033A1C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8035B660(CpuContext* ctx);
extern "C" uint64_t func_8035B660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AA480(CpuContext* ctx);
extern "C" uint32_t func_803AA480_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B2A70(CpuContext* ctx);
extern "C" uint64_t func_803B2A70_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B3374(CpuContext* ctx);
extern "C" uint64_t func_803B3374_ra1c0_1f0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_803B3414(CpuContext* ctx);
extern "C" uint32_t func_803B3414_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B501C(CpuContext* ctx);
extern "C" uint32_t func_803B501C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8042B620(CpuContext* ctx);
extern "C" uint64_t func_8042B620_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800CF27C_statefree();

extern "C" uint64_t func_8028CE14_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8028CE14;

loc_8028CE14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004392Cu>(&func_8004392C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004392C_1365 = func_8004392C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004392C_1365;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004392Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 0;
    // inline leaf 0x80058180 (9 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80058180
}

loc_8028CE3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028D04C;
    }
}

loc_8028CE40:
{
    r0 = MemoryInline::FlatRead8((r31 + 8922));
}

loc_8028CE48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8028CE74;
    }
}

loc_8028CE4C:
{
    // inline leaf 0x8042A690 (15 guest instruction(s))
}

loc_inl1_0x8042A690:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl1_0x8042A698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8042A6A4;
    }
}

loc_inl1_0x8042A69C:
{
    r3 = 0;
    goto loc_inl1_cont_8042A690;
}

loc_inl1_0x8042A6A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_inl1_0x8042A6AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x8042A6B8;
    }
}

loc_inl1_0x8042A6B0:
{
    r3 = 1;
    goto loc_inl1_cont_8042A690;
}

loc_inl1_0x8042A6B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl1_cont_8042A690:
{
    // end of inlined leaf 0x8042A690
}

loc_8028CE54:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8028CE6C;
    }
}

loc_8028CE58:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2241));
}

loc_8028CE68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8028CE74;
    }
}

loc_8028CE6C:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 250), static_cast<uint8_t>(r0));
}

loc_8028CE74:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8028CE80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8028CE94;
    }
}

loc_8028CE84:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8028CE90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8028D04C;
    }
}

loc_8028CE94:
{
    r3 = 0;
    ctx->lr = 0x8028CE9Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B501Cu>(&func_803B501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B501C_21EF = func_803B501C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B501C_21EF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028CEA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8028CED4;
    }
}

loc_8028CEA4:
{
    r0 = MemoryInline::FlatRead8((r31 + 274));
}

loc_8028CEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8028CED4;
    }
}

loc_8028CEB0:
{
    r3 = MemoryInline::FlatRead32((r31 + 276));
}

loc_8028CEB8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8028CEC4;
    }
}

loc_8028CEBC:
{
    ctx->lr = 0x8028CEC0u;
    if constexpr (KnownRegArgsCpuCall<0x8033A1C4u>(&func_8033A1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033A1C4_268E = func_8033A1C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8033A1C4_268E);
        r4 = static_cast<uint32_t>(regargs_result_8033A1C4_268E >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8033A1C4u>(ctx);
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
    }
    goto loc_8028CECC;
}

loc_8028CEC4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 276), r0);
}

loc_8028CECC:
{
    r3 = r31;
    ctx->lr = 0x8028CED4u;
    if constexpr (KnownRegArgsCpuCall<0x803B2A70u>(&func_803B2A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803B2A70_2DC4 = func_803B2A70_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B2A70_2DC4);
        r4 = static_cast<uint32_t>(regargs_result_803B2A70_2DC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B2A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8028CED4:
{
    r0 = MemoryInline::FlatRead8((r31 + 250));
}

loc_8028CEDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_8028CEE4;
    }
}

loc_8028CEE0:
{
    ctx->lr = 0x8028CEE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803B0228u>(ctx);
    r0 = ctx->gpr[0];
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
}

loc_8028CEE4:
{
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80046F70
}

loc_8028CEEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028D04C;
    }
}

loc_8028CEF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 273));
}

loc_8028CEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028CF08;
    }
}

loc_8028CEFC:
{
}

loc_8028CF00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8028CF40;
    }
}

loc_8028CF04:
{
    goto loc_8028D04C;
}

loc_8028CF08:
{
    r3 = 1;
    ctx->lr = 0x8028CF10u;
    if constexpr (KnownRegArgsCpuCall<0x803AA480u>(&func_803AA480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AA480_3835 = func_803AA480_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AA480_3835;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AA480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028CF14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028CF30;
    }
}

loc_8028CF18:
{
    ctx->lr = 0x8028CF1Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_3B4C = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_3B4C);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_3B4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028CF20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8028D04C;
    }
}

loc_8028CF24:
{
    r3 = r31;
    ctx->lr = 0x8028CF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028E450u>(&func_8028E450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        const auto regargs_result_8028E450_3EF5 = func_8028E450_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028E450_3EF5);
        r4 = static_cast<uint32_t>(regargs_result_8028E450_3EF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8028E450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_8028D04C;
}

loc_8028CF30:
{
    r3 = MemoryInline::FlatRead8((r31 + 273));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 273), static_cast<uint8_t>(r0));
    goto loc_8028D04C;
}

loc_8028CF40:
{
    r3 = 2;
    ctx->lr = 0x8028CF48u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_447B = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_447B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028CF4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028D04C;
    }
}

loc_8028CF50:
{
    r3 = 0;
    // inline leaf 0x800427F0 (40 guest instruction(s))
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r4 = (r0 + r4);
    r3 = 0;
    MemoryInline::FlatWrite16((r4 + 214), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r4 + 218));
    r0 = (r0 & 2);
    MemoryInline::FlatWrite16((r4 + 218), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 220), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 222), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 226), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 228), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 232), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 230), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 236), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 234), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 240), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 238), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 244), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 242), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 247), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 246), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + 252), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 256), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 258), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 260), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 264), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 266), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 270), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 268), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 274), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 272), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 278), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 276), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 282), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 280), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 285), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 284), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800427F0
    r0 = 3;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    ctx->lr = 0x8028CF70u;
    if constexpr (KnownRegArgsCpuCall<0x802E5464u>(&func_802E5464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E5464_5265 = func_802E5464_ra0_0_8_0(ctx);
        r3 = regargs_result_802E5464_5265;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802E5464u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    ctx->lr = 0x8028CF78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8028CCE0u>(ctx);
    r0 = ctx->gpr[0];
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
    ctx->lr = 0x8028CF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A01ECu>(&func_802A01EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A01EC_576B = func_802A01EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A01EC_576B);
        r4 = static_cast<uint32_t>(regargs_result_802A01EC_576B >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A01ECu>(ctx);
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
    }
    ctx->lr = 0x8028CF80u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_5DEB = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_5DEB);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_5DEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028CF84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028D00C;
    }
}

loc_8028CF88:
{
    r0 = MemoryInline::FlatRead8((r31 + 250));
}

loc_8028CF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8028CFB0;
    }
}

loc_8028CF94:
{
}

loc_8028CF98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8028CFC8;
    }
}

loc_8028CF9C:
{
}

loc_8028CFA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8028CFE0;
    }
}

loc_8028CFA4:
{
}

loc_8028CFA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8028CFF8;
    }
}

loc_8028CFAC:
{
    goto loc_8028D00C;
}

loc_8028CFB0:
{
    r3 = 13;
    ctx->lr = 0x8028CFB8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_6406 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_6406;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x8028CFC4u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_6654 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_6654);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_6654 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_8028D00C;
}

loc_8028CFC8:
{
    r3 = 14;
    ctx->lr = 0x8028CFD0u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_6A57 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_6A57;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x8028CFDCu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_6CA5 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_6CA5);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_6CA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_8028D00C;
}

loc_8028CFE0:
{
    r3 = 15;
    ctx->lr = 0x8028CFE8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_70A8 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_70A8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x8028CFF4u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_72F6 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_72F6);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_72F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_8028D00C;
}

loc_8028CFF8:
{
    r3 = 36;
    ctx->lr = 0x8028D000u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_76F9 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_76F9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 0;
    ctx->lr = 0x8028D00Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8035B660_7947 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_7947);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_7947 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_8028D00C:
{
    r0 = MemoryInline::FlatRead8((r31 + 8922));
}

loc_8028D014:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8028D13C;
    }
}

loc_8028D018:
{
    r0 = MemoryInline::FlatRead8((r31 + 250));
}

loc_8028D020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8028D030;
    }
}

loc_8028D024:
{
}

loc_8028D028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8028D038;
    }
}

loc_8028D02C:
{
    goto loc_8028D13C;
}

loc_8028D030:
{
    ctx->lr = 0x8028D034u;
    if constexpr (KnownRegArgsCpuCall<0x8042B620u>(&func_8042B620)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B620_7F6F = func_8042B620_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B620_7F6F);
        r4 = static_cast<uint32_t>(regargs_result_8042B620_7F6F >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8042B620u>(ctx);
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
    }
    goto loc_8028D13C;
}

loc_8028D038:
{
    // inline leaf 0x8042A690 (15 guest instruction(s))
}

loc_inl6_0x8042A690:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl6_0x8042A698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x8042A6A4;
    }
}

loc_inl6_0x8042A69C:
{
    r3 = 0;
    goto loc_inl6_cont_8042A690;
}

loc_inl6_0x8042A6A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_inl6_0x8042A6AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl6_0x8042A6B8;
    }
}

loc_inl6_0x8042A6B0:
{
    r3 = 1;
    goto loc_inl6_cont_8042A690;
}

loc_inl6_0x8042A6B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
}

loc_inl6_cont_8042A690:
{
    // end of inlined leaf 0x8042A690
}

loc_8028D040:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8028D13C;
    }
}

loc_8028D044:
{
    ctx->lr = 0x8028D048u;
    if constexpr (KnownRegArgsCpuCall<0x8042B620u>(&func_8042B620)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B620_8A93 = func_8042B620_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B620_8A93);
        r4 = static_cast<uint32_t>(regargs_result_8042B620_8A93 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8042B620u>(ctx);
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
    }
    goto loc_8028D13C;
}

loc_8028D04C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8028D054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028D064;
    }
}

loc_8028D058:
{
}

loc_8028D05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8028D108;
    }
}

loc_8028D060:
{
    goto loc_8028D13C;
}

loc_8028D064:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150158436);
}

loc_8028D06C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8028D080;
    }
}

loc_8028D070:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800427F0u>(&func_800427F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800427F0_943D = func_800427F0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800427F0_943D);
        r4 = static_cast<uint32_t>(regargs_result_800427F0_943D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800427F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028D080:
{
    r3 = r31;
    ctx->lr = 0x8028D088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8028CCE0u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = 0;
    ctx->lr = 0x8028D090u;
    if constexpr (KnownRegArgsCpuCall<0x800D2DB4u>(&func_800D2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2DB4_99CC = func_800D2DB4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D2DB4_99CC);
        r4 = static_cast<uint32_t>(regargs_result_800D2DB4_99CC >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D2DB4u>(ctx);
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
    }
    r0 = MemoryInline::FlatRead8((r31 + 8931));
}

loc_8028D098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028D0A8;
    }
}

loc_8028D09C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8931), static_cast<uint8_t>(r0));
    ctx->lr = 0x8028D0A8u;
    if constexpr (KnownRegArgsCpuCall<0x803B3374u>(&func_803B3374)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_803B3374_A1D0 = func_803B3374_ra1c0_1f0_18_0(ctx, r6, r7, r8, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B3374_A1D0);
        r4 = static_cast<uint32_t>(regargs_result_803B3374_A1D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803B3374u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8028D0A8:
{
    ctx->lr = 0x8028D0ACu;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_A890 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_A890);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_A890 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028D0B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028D0C8;
    }
}

loc_8028D0B4:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_8028D0C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8028D0C8;
    }
}

loc_8028D0C4:
{
    ctx->lr = 0x8028D0C8u;
    if constexpr (KnownRegArgsCpuCall<0x800F4958u>(&func_800F4958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F4958_ADEC = func_800F4958_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F4958_ADEC);
        r4 = static_cast<uint32_t>(regargs_result_800F4958_ADEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F4958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8028D0C8:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_3 = r0;
    r0 = (1 - r0_subfic_ra_3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_8028D0D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028D13C;
    }
}

loc_8028D0D8:
{
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r0 = (r3 + 242);
    r0 = (r0 & 255);
}

loc_8028D0E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_8028D100;
    }
}

loc_8028D0EC:
{
    r0 = (r3 & 255);
}

loc_8028D0F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(39))) {
        goto loc_8028D100;
    }
}

loc_8028D0F8:
{
}

loc_8028D0FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(43))) {
        goto loc_8028D13C;
    }
}

loc_8028D100:
{
    ctx->lr = 0x8028D104u;
    if constexpr (KnownRegArgsCpuCall<0x800F4958u>(&func_800F4958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F4958_B977 = func_800F4958_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F4958_B977);
        r4 = static_cast<uint32_t>(regargs_result_800F4958_B977 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F4958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8028D13C;
}

loc_8028D108:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8028D114:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8028D128;
    }
}

loc_8028D118:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CF27Cu) && KnownTranslatedCpuCall<0x800CF27Cu>::kAvailable && !KnownTranslatedCpuCall<0x800CF27Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CF27Cu>()) {
        const auto state_free_result_800CF27C_C227 = func_800CF27C_statefree();
        r3 = static_cast<uint32_t>(state_free_result_800CF27C_C227);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
}

loc_8028D124:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8028D134;
    }
}

loc_8028D128:
{
    r3 = 0;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800580A8_C76D = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_C76D);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_C76D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800580A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_8028D134:
{
    r3 = 0;
    ctx->lr = 0x8028D13Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028D340u>(&func_8028D340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8028D340_CB21 = func_8028D340_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8028D340_CB21);
        r4 = static_cast<uint32_t>(regargs_result_8028D340_CB21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8028D340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8028D13C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8028CE14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028CE14_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8028CE14 func_8028CE14 preserves=true fpr_mask=0x00000000
