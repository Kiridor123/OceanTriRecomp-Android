#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800458BC(CpuContext* ctx);
extern "C" uint64_t func_800458BC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80045960(CpuContext* ctx);
extern "C" double func_80045960_ra38_2_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800459D8(CpuContext* ctx);
extern "C" uint32_t func_800459D8_ra38_2_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80045A4C(CpuContext* ctx);
extern "C" uint64_t func_80045A4C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80045CA8(CpuContext* ctx);
extern "C" uint64_t func_80045CA8_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80045F14(CpuContext* ctx);
extern "C" uint64_t func_80045F14_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80046074(CpuContext* ctx);
extern "C" uint64_t func_80046074_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80046220(CpuContext* ctx);
extern "C" uint64_t func_80046220_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800462EC(CpuContext* ctx);
extern "C" uint64_t func_800462EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804F1A30(CpuContext* ctx);
extern "C" uint64_t func_804F1A30_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800468A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800468A0u);
    goto loc_800468A0;

loc_800468A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 0x80660000u;
    r31 = (r3 + -11504);
    r3 = 0;
    ctx->lr = 0x800468C8u;
    if constexpr (KnownRegArgsCpuCall<0x804F1A30u>(&func_804F1A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F1A30_C27 = func_804F1A30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804F1A30_C27);
        r4 = static_cast<uint32_t>(regargs_result_804F1A30_C27 >> 32);
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
        InvokeDirectCpu<0x804F1A30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_800468CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800468F0;
    }
}

loc_800468D0:
{
    r4 = (r31 + 276);
    r3 = -1;
    r0 = (r31 + 240);
}

loc_800468DC:
{
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r3));
    r4 = (r4 + -12);
}

loc_800468E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_800468DC;
    }
}

loc_800468EC:
{
    goto loc_800468FC;
}

loc_800468F0:
{
    r3 = r31;
    r4 = (r30 + 32);
    if constexpr (KnownRegArgsCpuCall<0x800458BCu>(&func_800458BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800458BC_1182 = func_800458BC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800458BC_1182);
        r4 = static_cast<uint32_t>(regargs_result_800458BC_1182 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800458BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800468FC:
{
    r3 = r31;
    r4 = (r31 + 240);
    if constexpr (KnownRegArgsCpuCall<0x80045960u>(&func_80045960)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045960_16BC = func_80045960_ra38_2_0_2(ctx, r3, r4, r5, f1.d);
        f1.d = regargs_result_80045960_16BC;
        r0 = ctx->gpr[0];
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045960u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r31 + 240);
    if constexpr (KnownRegArgsCpuCall<0x800459D8u>(&func_800459D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800459D8_19F8 = func_800459D8_ra38_2_10_0(ctx, r3, r4, r5, f1.d);
        r4 = regargs_result_800459D8_19F8;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x800459D8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 312), static_cast<uint16_t>(r0));
    r4 = (r31 + 276);
    r0 = (r31 + 240);
}

loc_80046920:
{
    r3 = MemoryInline::FlatRead8((r4 + 8));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8004692C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004693C;
    }
}

loc_80046930:
{
    r3 = MemoryInline::FlatRead16((r31 + 312));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 312), static_cast<uint16_t>(r3));
}

loc_8004693C:
{
    r4 = (r4 + -12);
}

loc_80046944:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80046920;
    }
}

loc_80046948:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32596));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046954:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80046A64;
    }
}

loc_8004695C:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80046968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80046974;
    }
}

loc_8004696C:
{
}

loc_80046970:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-2))) {
        goto loc_800469C0;
    }
}

loc_80046974:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8004697C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_80046998;
    }
}

loc_80046980:
{
    r3 = r31;
    ctx->lr = 0x80046988u;
    if constexpr (KnownRegArgsCpuCall<0x80045A4Cu>(&func_80045A4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045A4C_247F = func_80045A4C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80045A4C_247F);
        r4 = static_cast<uint32_t>(regargs_result_80045A4C_247F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045A4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80046994:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_80046998:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800469A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80046A64;
    }
}

loc_800469A4:
{
    r3 = r31;
    ctx->lr = 0x800469ACu;
    if constexpr (KnownRegArgsCpuCall<0x80045CA8u>(&func_80045CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045CA8_2B1D = func_80045CA8_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80045CA8_2B1D);
        r4 = static_cast<uint32_t>(regargs_result_80045CA8_2B1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800469B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_800469BC:
{
    goto loc_80046A64;
}

loc_800469C0:
{
}

loc_800469C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800469D0;
    }
}

loc_800469C8:
{
}

loc_800469CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80046A1C;
    }
}

loc_800469D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800469D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_800469F4;
    }
}

loc_800469DC:
{
    r3 = r31;
    ctx->lr = 0x800469E4u;
    if constexpr (KnownRegArgsCpuCall<0x80045F14u>(&func_80045F14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045F14_339F = func_80045F14_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80045F14_339F);
        r4 = static_cast<uint32_t>(regargs_result_80045F14_339F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045F14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800469F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_800469F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800469FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80046A64;
    }
}

loc_80046A00:
{
    r3 = r31;
    ctx->lr = 0x80046A08u;
    if constexpr (KnownRegArgsCpuCall<0x80045CA8u>(&func_80045CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045CA8_39E9 = func_80045CA8_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80045CA8_39E9);
        r4 = static_cast<uint32_t>(regargs_result_80045CA8_39E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80046A14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_80046A18:
{
    goto loc_80046A64;
}

loc_80046A1C:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80046A24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_80046A40;
    }
}

loc_80046A28:
{
    r3 = r31;
    ctx->lr = 0x80046A30u;
    if constexpr (KnownRegArgsCpuCall<0x80045F14u>(&func_80045F14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80045F14_415A = func_80045F14_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80045F14_415A);
        r4 = static_cast<uint32_t>(regargs_result_80045F14_415A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045F14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80046A3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_80046A40:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80046A48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80046A64;
    }
}

loc_80046A4C:
{
    r3 = r31;
    ctx->lr = 0x80046A54u;
    if constexpr (KnownRegArgsCpuCall<0x80046074u>(&func_80046074)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80046074_47A5 = func_80046074_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80046074_47A5);
        r4 = static_cast<uint32_t>(regargs_result_80046074_47A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80046074u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
    r30 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80046A60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046A68;
    }
}

loc_80046A64:
{
    r30 = 0;
}

loc_80046A68:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80046A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80046B10;
    }
}

loc_80046A74:
{
    r3 = r31;
    ctx->lr = 0x80046A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80046220u>(&func_80046220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80046220_5023 = func_80046220_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80046220_5023);
        r4 = static_cast<uint32_t>(regargs_result_80046220_5023 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80046220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r31 + 372));
}

loc_80046A84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046AC4;
    }
}

loc_80046A88:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 348));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 356));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 360));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32600));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046AAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80046AC4;
    }
}

loc_80046AB4:
{
    r30 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 308), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 296), static_cast<uint8_t>(r0));
}

loc_80046AC4:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80046AD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80046B04;
    }
}

loc_80046AD4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80046ADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80046B04;
    }
}

loc_80046AE0:
{
    r3 = MemoryInline::FlatRead8((r31 + 374));
}

loc_80046AE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(200))) {
        goto loc_80046AF8;
    }
}

loc_80046AEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 316));
    MemoryInline::FlatWriteRamFloat32((r31 + 332), f0.d);
    goto loc_80046B18;
}

loc_80046AF8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 374), static_cast<uint8_t>(r0));
    goto loc_80046B18;
}

loc_80046B04:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 374), static_cast<uint8_t>(r0));
    goto loc_80046B18;
}

loc_80046B10:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 374), static_cast<uint8_t>(r0));
}

loc_80046B18:
{
    r3 = r31;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x80046B24u;
    if constexpr (KnownRegArgsCpuCall<0x800462ECu>(&func_800462EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800462EC_5DD8 = func_800462EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800462EC_5DD8);
        r4 = static_cast<uint32_t>(regargs_result_800462EC_5DD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800462ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -17932), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80046B34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046B40;
    }
}

loc_80046B38:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17932), r0);
}

loc_80046B40:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32644), 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32640));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046B4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80046B5C;
    }
}

loc_80046B50:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32644));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046B58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046B64;
    }
}

loc_80046B5C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17932), r0);
}

loc_80046B64:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32640));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046B70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80046B80;
    }
}

loc_80046B74:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32644));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046B7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046B88;
    }
}

loc_80046B80:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17932), r0);
}

loc_80046B88:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32640));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80046B98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80046BA0;
    }
}

loc_80046B9C:
{
    goto loc_80046BB4;
}

loc_80046BA0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32644));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80046BA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046BB0;
    }
}

loc_80046BAC:
{
    goto loc_80046BB4;
}

loc_80046BB0:
{
    f2.d = f1.d;
}

loc_80046BB4:
{
    MemoryInline::FlatWriteFloat32((r13 + -17908), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32640));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80046BC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80046BC8;
    }
}

loc_80046BC4:
{
    goto loc_80046BDC;
}

loc_80046BC8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32644));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80046BD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046BD8;
    }
}

loc_80046BD4:
{
    goto loc_80046BDC;
}

loc_80046BD8:
{
    f1.d = f0.d;
}

loc_80046BDC:
{
    MemoryInline::FlatWriteFloat32((r13 + -17904), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
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

extern "C" void func_800468A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800468A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF80001FF fpr_write=0xF80001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800468A0 func_800468A0 preserves=true fpr_mask=0x00000000
