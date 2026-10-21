#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045A8C8(CpuContext* ctx);
extern "C" uint64_t func_8045A8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045CFD0(CpuContext* ctx);
extern "C" uint32_t func_8045CFD0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045D0F8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_stbu_ea_0 = 0;
    uint32_t r31_stbu_ea_1 = 0;
    uint32_t r31_stbu_ea_10 = 0;
    uint32_t r31_stbu_ea_11 = 0;
    uint32_t r31_stbu_ea_12 = 0;
    uint32_t r31_stbu_ea_13 = 0;
    uint32_t r31_stbu_ea_14 = 0;
    uint32_t r31_stbu_ea_15 = 0;
    uint32_t r31_stbu_ea_16 = 0;
    uint32_t r31_stbu_ea_17 = 0;
    uint32_t r31_stbu_ea_18 = 0;
    uint32_t r31_stbu_ea_19 = 0;
    uint32_t r31_stbu_ea_2 = 0;
    uint32_t r31_stbu_ea_20 = 0;
    uint32_t r31_stbu_ea_21 = 0;
    uint32_t r31_stbu_ea_22 = 0;
    uint32_t r31_stbu_ea_23 = 0;
    uint32_t r31_stbu_ea_24 = 0;
    uint32_t r31_stbu_ea_25 = 0;
    uint32_t r31_stbu_ea_26 = 0;
    uint32_t r31_stbu_ea_27 = 0;
    uint32_t r31_stbu_ea_28 = 0;
    uint32_t r31_stbu_ea_29 = 0;
    uint32_t r31_stbu_ea_3 = 0;
    uint32_t r31_stbu_ea_30 = 0;
    uint32_t r31_stbu_ea_31 = 0;
    uint32_t r31_stbu_ea_32 = 0;
    uint32_t r31_stbu_ea_33 = 0;
    uint32_t r31_stbu_ea_34 = 0;
    uint32_t r31_stbu_ea_35 = 0;
    uint32_t r31_stbu_ea_36 = 0;
    uint32_t r31_stbu_ea_37 = 0;
    uint32_t r31_stbu_ea_38 = 0;
    uint32_t r31_stbu_ea_4 = 0;
    uint32_t r31_stbu_ea_5 = 0;
    uint32_t r31_stbu_ea_6 = 0;
    uint32_t r31_stbu_ea_7 = 0;
    uint32_t r31_stbu_ea_8 = 0;
    uint32_t r31_stbu_ea_9 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r3_addic_src_4 = 0;
    uint32_t r3_addic_src_5 = 0;
    uint32_t r3_addic_src_6 = 0;
    uint32_t r3_addic_src_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8045D0F8u);
    goto loc_8045D0F8;

loc_8045D0F8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f31.d);
    f31.d = f1.d;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead32((r5 + -2880));
}

loc_8045D134:
{
    r30 = MemoryInline::FlatRead8(r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8045D144;
    }
}

loc_8045D13C:
{
    r3 = 0;
    goto loc_8045D870;
}

loc_8045D144:
{
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    ctx->lr = 0x8045D160u;
    if constexpr (KnownRegArgsCpuCall<0x8045A8C8u>(&func_8045A8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045A8C8_15D9 = func_8045A8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A8C8_15D9);
        r4 = static_cast<uint32_t>(regargs_result_8045A8C8_15D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
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
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045A8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r5 = (r1 + 17);
    r5 = (r5 + r0);
    goto loc_8045D188;
}

loc_8045D170:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_8045D188:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8045D190:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8045D1A0;
    }
}

loc_8045D194:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8045D19C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045D170;
    }
}

loc_8045D1A0:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
}

loc_8045D1A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045D1C0;
    }
}

loc_8045D1AC:
{
}

loc_8045D1B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8045D1CC;
    }
}

loc_8045D1B4:
{
}

loc_8045D1B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_8045D2D0;
    }
}

loc_8045D1BC:
{
    goto loc_8045D3D8;
}

loc_8045D1C0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_8045D3D8;
}

loc_8045D1CC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4264));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8045D1D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045D250;
    }
}

loc_8045D1D8:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -5);
    r3 = 1;
}

loc_8045D1E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045D1F0;
    }
}

loc_8045D1EC:
{
    r3 = 0;
}

loc_8045D1F0:
{
}

loc_8045D1F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D200;
    }
}

loc_8045D1F8:
{
    r0 = 0;
    goto loc_8045D21C;
}

loc_8045D200:
{
    r3 = 0x80610000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 512);
}

loc_8045D21C:
{
}

loc_8045D220:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D238;
    }
}

loc_8045D224:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_2775 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2775;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D2C8;
}

loc_8045D238:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 5);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_2C52 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2C52;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D2C8;
}

loc_8045D250:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -4);
    r3 = 1;
}

loc_8045D260:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045D268;
    }
}

loc_8045D264:
{
    r3 = 0;
}

loc_8045D268:
{
}

loc_8045D26C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D278;
    }
}

loc_8045D270:
{
    r0 = 0;
    goto loc_8045D294;
}

loc_8045D278:
{
    r3 = 0x80610000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 512);
}

loc_8045D294:
{
}

loc_8045D298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D2B4;
    }
}

loc_8045D29C:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_34D7 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_34D7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D2C8;
}

loc_8045D2B4:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 14);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_39B5 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_39B5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045D2C8:
{
    r3 = r31;
    goto loc_8045D870;
}

loc_8045D2D0:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D358;
    }
}

loc_8045D2DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -5);
    r3 = 1;
}

loc_8045D2EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045D2F4;
    }
}

loc_8045D2F0:
{
    r3 = 0;
}

loc_8045D2F4:
{
}

loc_8045D2F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D304;
    }
}

loc_8045D2FC:
{
    r0 = 0;
    goto loc_8045D320;
}

loc_8045D304:
{
    r3 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 & 512);
}

loc_8045D320:
{
}

loc_8045D324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D340;
    }
}

loc_8045D328:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 18);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_4337 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4337;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D3D0;
}

loc_8045D340:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 23);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_4815 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4815;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D3D0;
}

loc_8045D358:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -4);
    r3 = 1;
}

loc_8045D368:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045D370;
    }
}

loc_8045D36C:
{
    r3 = 0;
}

loc_8045D370:
{
}

loc_8045D374:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D380;
    }
}

loc_8045D378:
{
    r0 = 0;
    goto loc_8045D39C;
}

loc_8045D380:
{
    r3 = 0x80610000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 512);
}

loc_8045D39C:
{
}

loc_8045D3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D3BC;
    }
}

loc_8045D3A4:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 28);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_509A = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_509A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045D3D0;
}

loc_8045D3BC:
{
    r4 = 0x80570000u;
    r3 = r31;
    r4 = (r4 + 13040);
    r4 = (r4 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_5578 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_5578;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045D3D0:
{
    r3 = r31;
    goto loc_8045D870;
}

loc_8045D3D8:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r31 = (r28 + -1);
    r3 = (r3 + -1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r4 + r3);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r28 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_8045D404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(103))) {
        goto loc_8045D434;
    }
}

loc_8045D408:
{
}

loc_8045D40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(71))) {
        goto loc_8045D434;
    }
}

loc_8045D410:
{
}

loc_8045D414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(101))) {
        goto loc_8045D4EC;
    }
}

loc_8045D418:
{
}

loc_8045D41C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(69))) {
        goto loc_8045D4EC;
    }
}

loc_8045D420:
{
}

loc_8045D424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(102))) {
        goto loc_8045D650;
    }
}

loc_8045D428:
{
}

loc_8045D42C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(70))) {
        goto loc_8045D650;
    }
}

loc_8045D430:
{
    goto loc_8045D86C;
}

loc_8045D434:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8045D440:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_8045D44C;
    }
}

loc_8045D444:
{
    r3 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x8045CFD0u>(&func_8045CFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045CFD0_605D = func_8045CFD0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045CFD0_605D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045CFD0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045D44C:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8045D454:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(-4))) {
        goto loc_8045D464;
    }
}

loc_8045D458:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8045D460:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_8045D4B0;
    }
}

loc_8045D464:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8045D46C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D480;
    }
}

loc_8045D470:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_8045D48C;
}

loc_8045D480:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_8045D48C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_8045D494:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(103))) {
        goto loc_8045D4A4;
    }
}

loc_8045D498:
{
    r0 = 101;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_8045D4EC;
}

loc_8045D4A4:
{
    r0 = 69;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_8045D4EC;
}

loc_8045D4B0:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8045D4B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D4CC;
    }
}

loc_8045D4BC:
{
    r0 = (r4 + 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_8045D650;
}

loc_8045D4CC:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r3 = (r4 + 1);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8045D650;
    }
}

loc_8045D4E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_8045D650;
}

loc_8045D4EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r3 + 1);
}

loc_8045D4FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_8045D508;
    }
}

loc_8045D500:
{
    r3 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x8045CFD0u>(&func_8045CFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045CFD0_6DA2 = func_8045CFD0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045CFD0_6DA2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045CFD0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045D508:
{
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = 43;
}

loc_8045D514:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_8045D520;
    }
}

loc_8045D518:
{
    r6 = (0 - r6);
    r8 = 45;
}

loc_8045D520:
{
    r3 = 1717960704;
    r7 = 0;
    r5 = (r3 + 26215);
    goto loc_8045D564;
}

loc_8045D530:
{
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (r7 + 1);
    r3 = (static_cast<int32_t>(r0) >> 2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3 = (r3 + r4);
    r4 = (r3 * 10);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r4 = (r6 - r4);
    r6 = (r0 + r3);
    r0 = (r4 + 48);
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r0));
    r31 = (r31 + -1);
}

loc_8045D564:
{
}

loc_8045D568:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045D530;
    }
}

loc_8045D56C:
{
}

loc_8045D570:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_8045D530;
    }
}

loc_8045D574:
{
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31_stbu_ea_1 = (r31 + -2);
    MemoryInline::FlatWrite8(r31_stbu_ea_1, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_1;
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r28 - r31);
    r0 = (r3 + r0);
}

loc_8045D590:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8045D59C;
    }
}

loc_8045D594:
{
    r3 = 0;
    goto loc_8045D870;
}

loc_8045D59C:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + 1);
}

loc_8045D5A8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8045D5C8;
    }
}

loc_8045D5AC:
{
    r3 = (r3 + 2);
    r0 = 48;
    r3 = (r3 - r4);
    goto loc_8045D5C0;
}

loc_8045D5BC:
{
    r31_stbu_ea_3 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_3, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_3;
}

loc_8045D5C0:
{
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
}

loc_8045D5C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045D5BC;
    }
}

loc_8045D5C8:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r1 + 17);
    r4 = (r4 + r3);
    goto loc_8045D5E0;
}

loc_8045D5D8:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r31_stbu_ea_6 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_6, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_6;
}

loc_8045D5E0:
{
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
}

loc_8045D5E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045D5D8;
    }
}

loc_8045D5E8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8045D5F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045D600;
    }
}

loc_8045D5F4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8045D5FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D604;
    }
}

loc_8045D600:
{
    r31_stbu_ea_7 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_7, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_7;
}

loc_8045D604:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r31_stbu_ea_9 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_9, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_9;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D624;
    }
}

loc_8045D618:
{
    r0 = 45;
    r31_stbu_ea_10 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_10, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_10;
    goto loc_8045D86C;
}

loc_8045D624:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_8045D62C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045D63C;
    }
}

loc_8045D630:
{
    r0 = 43;
    r31_stbu_ea_11 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_11, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_11;
    goto loc_8045D86C;
}

loc_8045D63C:
{
}

loc_8045D640:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045D86C;
    }
}

loc_8045D644:
{
    r0 = 32;
    r31_stbu_ea_12 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_12, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_12;
    goto loc_8045D86C;
}

loc_8045D650:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r4 - r5);
    r8 = (r3 + -1);
}

loc_8045D660:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8045D668;
    }
}

loc_8045D664:
{
    r8 = 0;
}

loc_8045D668:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8045D670:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r0))) {
        goto loc_8045D69C;
    }
}

loc_8045D674:
{
    r0 = (r8 - r0);
    r3 = (r1 + 12);
    r4 = (r4 - r0);
    if constexpr (KnownRegArgsCpuCall<0x8045CFD0u>(&func_8045CFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045CFD0_8747 = func_8045CFD0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045CFD0_8747;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045CFD0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r4 - r5);
    r8 = (r3 + -1);
}

loc_8045D694:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8045D69C;
    }
}

loc_8045D698:
{
    r8 = 0;
}

loc_8045D69C:
{
    r7 = (r5 + 1);
}

loc_8045D6A0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8045D6A8;
    }
}

loc_8045D6A4:
{
    r7 = 0;
}

loc_8045D6A8:
{
    r0 = (r7 + r8);
}

loc_8045D6B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8045D6BC;
    }
}

loc_8045D6B4:
{
    r3 = 0;
    goto loc_8045D870;
}

loc_8045D6BC:
{
    r6 = (r1 + 17);
    r5 = 0;
    r6 = (r6 + r4);
    r3 = 48;
    goto loc_8045D6D8;
}

loc_8045D6D0:
{
    r31_stbu_ea_14 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_14, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_14;
    r5 = (r5 + 1);
}

loc_8045D6D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r8);
}

loc_8045D6E4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8045D6D0;
    }
}

loc_8045D6E8:
{
    r3 = 0;
    goto loc_8045D6FC;
}

loc_8045D6F0:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + 1);
    r31_stbu_ea_16 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_16, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_16;
}

loc_8045D6FC:
{
}

loc_8045D700:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_8045D710;
    }
}

loc_8045D704:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8045D70C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8045D6F0;
    }
}

loc_8045D710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r8));
}

loc_8045D714:
{
    r3 = (r8 - r3);
    r4 = 48;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045D764;
    }
}

loc_8045D720:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
}

loc_8045D724:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D758;
    }
}

loc_8045D72C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + -8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + -1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + -2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + -3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + -4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + -5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + -6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + -7), static_cast<uint8_t>(r4));
    r31_stbu_ea_18 = (r31 + -8);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31_stbu_ea_18, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_18;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045D72C;
    }
}

loc_8045D750:
{
    r3 = (r3 & 7);
}

loc_8045D754:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D764;
    }
}

loc_8045D758:
{
    ctr = r3;
}

loc_8045D75C:
{
    r31_stbu_ea_21 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_21, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_21;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045D75C;
    }
}

loc_8045D764:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8045D76C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045D77C;
    }
}

loc_8045D770:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8045D778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D780;
    }
}

loc_8045D77C:
{
    r31_stbu_ea_23 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_23, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_23;
}

loc_8045D780:
{
}

loc_8045D784:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8045D824;
    }
}

loc_8045D788:
{
    r4 = 0;
    r3 = 48;
    goto loc_8045D79C;
}

loc_8045D794:
{
    r31_stbu_ea_26 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_26, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_26;
    r4 = (r4 + 1);
}

loc_8045D79C:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r7 - r0);
}

loc_8045D7A8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8045D794;
    }
}

loc_8045D7AC:
{
}

loc_8045D7B0:
{
    r3 = (r7 - r4);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_8045D82C;
    }
}

loc_8045D7B8:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
}

loc_8045D7BC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D810;
    }
}

loc_8045D7C4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + -8), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r6 + -1));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + -8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r6 + -2));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + -2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r6 + -3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + -3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r6 + -4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + -4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r6 + -5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + -5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r6 + -6));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + -6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r6 + -7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + -7), static_cast<uint8_t>(r0));
    r6 = (r6 + -8);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r6);
    r31_stbu_ea_28 = (r31 + -8);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31_stbu_ea_28, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_28;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045D7C4;
    }
}

loc_8045D808:
{
    r3 = (r3 & 7);
}

loc_8045D80C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045D82C;
    }
}

loc_8045D810:
{
    ctr = r3;
}

loc_8045D814:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r31_stbu_ea_31 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_31, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_31;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045D814;
    }
}

loc_8045D820:
{
    goto loc_8045D82C;
}

loc_8045D824:
{
    r0 = 48;
    r31_stbu_ea_32 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_32, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_32;
}

loc_8045D82C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045D844;
    }
}

loc_8045D838:
{
    r0 = 45;
    r31_stbu_ea_34 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_34, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_34;
    goto loc_8045D86C;
}

loc_8045D844:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_8045D84C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045D85C;
    }
}

loc_8045D850:
{
    r0 = 43;
    r31_stbu_ea_35 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_35, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_35;
    goto loc_8045D86C;
}

loc_8045D85C:
{
}

loc_8045D860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045D86C;
    }
}

loc_8045D864:
{
    r0 = 32;
    r31_stbu_ea_36 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_36, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_36;
}

loc_8045D86C:
{
    r3 = r31;
}

loc_8045D870:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045D0F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045D0F8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045D0F8 func_8045D0F8 preserves=true fpr_mask=0x00000000
