#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80067ED4(CpuContext* ctx);
extern "C" uint32_t func_80067ED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80067F18(CpuContext* ctx);
extern "C" uint32_t func_80067F18_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8007499C(CpuContext* ctx);
extern "C" uint64_t func_8007499C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074BC8(CpuContext* ctx);
extern "C" uint64_t func_80074BC8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80074ED0(CpuContext* ctx);
extern "C" uint64_t func_80074ED0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80074F88(CpuContext* ctx);
extern "C" uint64_t func_80074F88_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80067F18_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80067F18_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80067BF4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80067BF4;

loc_80067BF4:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80067C3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067C54;
    }
}

loc_80067C40:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80067C4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067C54;
    }
}

loc_80067C50:
{
    r10 = 0;
}

loc_80067C54:
{
}

loc_80067C58:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80067C70;
    }
}

loc_80067C5C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80067C68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067C70;
    }
}

loc_80067C6C:
{
    r9 = 0;
}

loc_80067C70:
{
}

loc_80067C74:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067C88;
    }
}

loc_80067C78:
{
    r0 = (r11 + 1073741824);
}

loc_80067C80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067C88;
    }
}

loc_80067C84:
{
    r8 = 0;
}

loc_80067C88:
{
}

loc_80067C8C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80067CA4;
    }
}

loc_80067C90:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80067C9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067CA4;
    }
}

loc_80067CA0:
{
    r7 = 0;
}

loc_80067CA4:
{
}

loc_80067CA8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80067CC0;
    }
}

loc_80067CAC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80067CB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067CC0;
    }
}

loc_80067CBC:
{
    r6 = 0;
}

loc_80067CC0:
{
}

loc_80067CC4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80067CDC;
    }
}

loc_80067CC8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80067CD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067CDC;
    }
}

loc_80067CD8:
{
    r5 = 0;
}

loc_80067CDC:
{
}

loc_80067CE0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80067D04;
    }
}

loc_80067CE4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1473;
    r5 = 0x80590000u;
    r5 = (r5 + -13672);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067D04u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067D04:
{
    r3 = r30;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80067D10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80067D30;
    }
}

loc_80067D14:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1474;
    r5 = 0x80590000u;
    r5 = (r5 + -12692);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067D30u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067D30:
{
    r3 = (r1 + 76);
    ctx->lr = 0x80067D38u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80067F18u) && KnownTranslatedCpuCall<0x80067F18u>::kAvailable && !KnownTranslatedCpuCall<0x80067F18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80067F18u>()) {
        const auto state_free_result_80067F18_1CA8 = func_80067F18_statefree_v0(r1, r3, r31, 0x80067D38u);
        r0 = static_cast<uint32_t>(state_free_result_80067F18_1CA8[0]);
        r1 = static_cast<uint32_t>(state_free_result_80067F18_1CA8[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80067F18u>(ctx);
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
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r29;
    r4 = (r1 + 76);
    r5 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 140));
    ctr = r12;
    ctx->lr = 0x80067D54u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 2);
}

loc_80067D64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80067D70;
    }
}

loc_80067D68:
{
    r3 = 0;
    goto loc_80067E9C;
}

loc_80067D70:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80067D78:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80067D88;
    }
}

loc_80067D7C:
{
}

loc_80067D80:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80067DA4;
    }
}

loc_80067D84:
{
    goto loc_80067DD4;
}

loc_80067D88:
{
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 28));
    ctx->lr = 0x80067DA0u;
    if constexpr (KnownRegArgsCpuCall<0x80074ED0u>(&func_80074ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80074ED0_2B50 = func_80074ED0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80074ED0_2B50);
        r4 = static_cast<uint32_t>(regargs_result_80074ED0_2B50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80067DF0;
}

loc_80067DA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32024));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    r3 = r30;
    f2.d = (-(f1.d));
    f3.d = (-(f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r29 + 28));
    ctx->lr = 0x80067DD0u;
    if constexpr (KnownRegArgsCpuCall<0x80074F88u>(&func_80074F88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80074F88_3199 = func_80074F88_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80074F88_3199);
        r4 = static_cast<uint32_t>(regargs_result_80074F88_3199 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074F88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_80067DF0;
}

loc_80067DD4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1515;
    r5 = 0x80590000u;
    r5 = (r5 + -12652);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067DF0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067DF0:
{
    r3 = (r1 + 32);
    ctx->lr = 0x80067DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80067ED4u>(&func_80067ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80067ED4_38D6 = func_80067ED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80067ED4_38D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80067ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32(r29);
    r6 = (r0 & 1);
}

loc_80067E04:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80067E14;
    }
}

loc_80067E08:
{
}

loc_80067E0C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(1))) {
        goto loc_80067E38;
    }
}

loc_80067E10:
{
    goto loc_80067E64;
}

loc_80067E14:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = (r1 + 20);
    r4 = (r29 + 32);
    // inline leaf 0x80067EB8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80067EB8
    r4 = r3;
    r3 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80067E80;
}

loc_80067E38:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = (r1 + 8);
    r4 = (r29 + 32);
    // inline leaf 0x80067EB8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80067EB8
    r4 = r3;
    r3 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80067E80;
}

loc_80067E64:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1542;
    r5 = 0x80590000u;
    r5 = (r5 + -12604);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067E80u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067E80:
{
    r3 = r30;
    r4 = (r29 + 8);
    ctx->lr = 0x80067E8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007499Cu>(&func_8007499C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8007499C_455A = func_8007499C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007499C_455A);
        r4 = static_cast<uint32_t>(regargs_result_8007499C_455A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007499Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = (r1 + 32);
    ctx->lr = 0x80067E98u;
    if constexpr (KnownRegArgsCpuCall<0x80074BC8u>(&func_80074BC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80074BC8_496A = func_80074BC8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80074BC8_496A);
        r4 = static_cast<uint32_t>(regargs_result_80074BC8_496A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074BC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = 1;
}

loc_80067E9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80067BF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80067BF4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80067BF4 func_80067BF4 preserves=true fpr_mask=0x00000000
