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
extern "C" void func_800D2DB4(CpuContext* ctx);
extern "C" uint64_t func_800D2DB4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E4904(CpuContext* ctx);
extern "C" void func_800E4904_ra0_2_0_0(CpuContext*, double);
extern "C" void func_800E490C(CpuContext* ctx);
extern "C" void func_800E490C_ra0_2_0_0(CpuContext*, double);
extern "C" void func_800F1738(CpuContext* ctx);
extern "C" uint64_t func_800F1738_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F6398(CpuContext* ctx);
extern "C" uint64_t func_800F6398_ra0_0_18_0(CpuContext*);
extern "C" void func_8028D340(CpuContext* ctx);
extern "C" uint64_t func_8028D340_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8028E450(CpuContext* ctx);
extern "C" uint64_t func_8028E450_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_8033A1C4(CpuContext* ctx);
extern "C" uint64_t func_8033A1C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B2A70(CpuContext* ctx);
extern "C" uint64_t func_803B2A70_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B8718(CpuContext* ctx);
extern "C" uint64_t func_803B8718_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B890C(CpuContext* ctx);
extern "C" uint32_t func_803B890C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B8F80(CpuContext* ctx);
extern "C" uint64_t func_803B8F80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BECD4(CpuContext* ctx);
extern "C" uint32_t func_803BECD4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_800E4904_statefree(uint32_t, PPC_FPR);
extern "C" void func_800E490C_statefree(uint32_t, PPC_FPR);

extern "C" uint64_t func_8028E11C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8028E11C;

loc_8028E11C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004392Cu>(&func_8004392C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004392C_1013 = func_8004392C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004392C_1013;
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
    r0 = MemoryInline::FlatRead8((r30 + 274));
}

loc_8028E144:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8028E178;
    }
}

loc_8028E148:
{
    ctx->lr = 0x8028E14Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_1324 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_1324);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_1324 >> 32);
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

loc_8028E150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8028E178;
    }
}

loc_8028E154:
{
    r3 = MemoryInline::FlatRead32((r30 + 276));
}

loc_8028E15C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8028E168;
    }
}

loc_8028E160:
{
    ctx->lr = 0x8028E164u;
    if constexpr (KnownRegArgsCpuCall<0x8033A1C4u>(&func_8033A1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033A1C4_174B = func_8033A1C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8033A1C4_174B);
        r4 = static_cast<uint32_t>(regargs_result_8033A1C4_174B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8028E170;
}

loc_8028E168:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 276), r0);
}

loc_8028E170:
{
    r3 = r30;
    ctx->lr = 0x8028E178u;
    if constexpr (KnownRegArgsCpuCall<0x803B2A70u>(&func_803B2A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803B2A70_1DDF = func_803B2A70_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B2A70_1DDF);
        r4 = static_cast<uint32_t>(regargs_result_803B2A70_1DDF >> 32);
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

loc_8028E178:
{
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80046F70
}

loc_8028E180:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028E18C;
    }
}

loc_8028E184:
{
    r3 = r30;
    ctx->lr = 0x8028E18Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B8718u>(&func_803B8718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B8718_230E = func_803B8718_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B8718_230E);
        r4 = static_cast<uint32_t>(regargs_result_803B8718_230E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803B8718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_8028E18C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_8028E194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028E1A4;
    }
}

loc_8028E198:
{
}

loc_8028E19C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8028E214;
    }
}

loc_8028E1A0:
{
    goto loc_8028E298;
}

loc_8028E1A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8028E1AC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8028E1C0;
    }
}

loc_8028E1B0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
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
}

loc_8028E1C0:
{
    r3 = r30;
    ctx->lr = 0x8028E1C8u;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = 0;
    ctx->lr = 0x8028E1D0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2DB4u>(&func_800D2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2DB4_38FC = func_800D2DB4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D2DB4_38FC);
        r4 = static_cast<uint32_t>(regargs_result_800D2DB4_38FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80046F70
}

loc_8028E1D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028E298;
    }
}

loc_8028E1DC:
{
    ctx->lr = 0x8028E1E0u;
    if constexpr (KnownRegArgsCpuCall<0x803B890Cu>(&func_803B890C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B890C_40DE = func_803B890C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B890C_40DE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B890Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8028E1E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8028E208;
    }
}

loc_8028E1E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 8921));
}

loc_8028E1F0:
{
    r31 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8028E1FC;
    }
}

loc_8028E1F8:
{
    r31 = r0;
}

loc_8028E1FC:
{
    r3 = 6;
    ctx->lr = 0x8028E204u;
    if constexpr (KnownRegArgsCpuCall<0x800F1738u>(&func_800F1738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F1738_44FA = func_800F1738_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F1738_44FA);
        r4 = static_cast<uint32_t>(regargs_result_800F1738_44FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x800F1738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8028E23C;
}

loc_8028E208:
{
    r3 = r30;
    ctx->lr = 0x8028E210u;
    if constexpr (KnownRegArgsCpuCall<0x8028E450u>(&func_8028E450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        const auto regargs_result_8028E450_4B4C = func_8028E450_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028E450_4B4C);
        r4 = static_cast<uint32_t>(regargs_result_8028E450_4B4C >> 32);
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
    goto loc_8028E298;
}

loc_8028E214:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8028E220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8028E230;
    }
}

loc_8028E224:
{
    r3 = 0;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800580A8_5157 = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_5157);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_5157 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
    }
}

loc_8028E230:
{
    r3 = 1;
    ctx->lr = 0x8028E238u;
    if constexpr (KnownRegArgsCpuCall<0x8028D340u>(&func_8028D340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8028D340_5469 = func_8028D340_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8028D340_5469);
        r4 = static_cast<uint32_t>(regargs_result_8028D340_5469 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
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
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_8028E298;
}

loc_8028E23C:
{
    ctx->lr = 0x8028E240u;
    if constexpr (KnownRegArgsCpuCall<0x800F6398u>(&func_800F6398)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800F6398_5B01 = func_800F6398_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800F6398_5B01);
        r4 = static_cast<uint32_t>(regargs_result_800F6398_5B01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F6398u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 17;
    if constexpr (KnownRegArgsCpuCall<0x803BECD4u>(&func_803BECD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BECD4_5E0A = func_803BECD4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BECD4_5E0A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BECD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 8934), static_cast<uint8_t>(r0));
    r3 = 18;
    if constexpr (KnownRegArgsCpuCall<0x803BECD4u>(&func_803BECD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BECD4_6056 = func_803BECD4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BECD4_6056;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BECD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 8935), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E4904u) && KnownTranslatedCpuCall<0x800E4904u>::kAvailable && !KnownTranslatedCpuCall<0x800E4904u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E4904u>()) {
        func_800E4904_statefree(r13, f1);
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
        InvokeDirectCpu<0x800E4904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E490Cu) && KnownTranslatedCpuCall<0x800E490Cu>::kAvailable && !KnownTranslatedCpuCall<0x800E490Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E490Cu>()) {
        func_800E490C_statefree(r13, f1);
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
        InvokeDirectCpu<0x800E490Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800427F0u>(&func_800427F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800427F0_6BC9 = func_800427F0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800427F0_6BC9);
        r4 = static_cast<uint32_t>(regargs_result_800427F0_6BC9 >> 32);
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
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = 150;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r3 = (r31 & 255);
    ctx->lr = 0x8028E298u;
    if constexpr (KnownRegArgsCpuCall<0x803B8F80u>(&func_803B8F80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B8F80_6F65 = func_803B8F80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B8F80_6F65);
        r4 = static_cast<uint32_t>(regargs_result_803B8F80_6F65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803B8F80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_8028E298:
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

extern "C" void func_8028E11C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028E11C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8028E11C func_8028E11C preserves=true fpr_mask=0x00000000
