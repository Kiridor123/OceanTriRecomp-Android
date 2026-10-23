#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045A8C8(CpuContext* ctx);
extern "C" uint64_t func_8045A8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045BAA0(CpuContext* ctx);
extern "C" uint64_t func_8045BAA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80462D6C(CpuContext* ctx);
extern "C" uint32_t func_80462D6C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804641BC(CpuContext* ctx);
extern "C" uint32_t func_804641BC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80462E94_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_17 = 0;
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

    goto loc_80462E94;

loc_80462E94:
{
    MemoryInline::FlatWriteRam32((r1 + -592), r1);
    r1 = (r1 + -592);
    r0 = ctx->lr;
    r5 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r1 + 596), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 584), f31.d);
    f31.d = f1.d;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead32((r5 + -2880));
}

loc_80462ED0:
{
    r30 = MemoryInline::FlatRead8(r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_80462EE0;
    }
}

loc_80462ED8:
{
    r3 = 0;
    goto loc_80463600;
}

loc_80462EE0:
{
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    ctx->lr = 0x80462EFCu;
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
        const auto regargs_result_8045A8C8_17DF = func_8045A8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A8C8_17DF);
        r4 = static_cast<uint32_t>(regargs_result_8045A8C8_17DF >> 32);
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
    goto loc_80462F24;
}

loc_80462F0C:
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

loc_80462F24:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80462F2C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80462F3C;
    }
}

loc_80462F30:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80462F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80462F0C;
    }
}

loc_80462F3C:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
}

loc_80462F44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80462F5C;
    }
}

loc_80462F48:
{
}

loc_80462F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_80462F68;
    }
}

loc_80462F50:
{
}

loc_80462F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_80463050;
    }
}

loc_80462F58:
{
    goto loc_80463138;
}

loc_80462F5C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80463138;
}

loc_80462F68:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4216));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80462F70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80462FE0;
    }
}

loc_80462F74:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -10);
}

loc_80462F80:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80462F8C;
    }
}

loc_80462F84:
{
    r0 = 0;
    goto loc_80462FA8;
}

loc_80462F8C:
{
    r3 = 0x80610000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 512);
}

loc_80462FA8:
{
}

loc_80462FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462FC8;
    }
}

loc_80462FB0:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 36);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_294D = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_294D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463048;
}

loc_80462FC8:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 46);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_2C81 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_2C81;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463048;
}

loc_80462FE0:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -8);
}

loc_80462FEC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80462FF8;
    }
}

loc_80462FF0:
{
    r0 = 0;
    goto loc_80463014;
}

loc_80462FF8:
{
    r3 = 0x80610000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 131070);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 512);
}

loc_80463014:
{
}

loc_80463018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80463034;
    }
}

loc_8046301C:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 56);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_32DA = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_32DA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463048;
}

loc_80463034:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 64);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_360E = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_360E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80463048:
{
    r3 = r31;
    goto loc_80463600;
}

loc_80463050:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804630C8;
    }
}

loc_8046305C:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -10);
}

loc_80463068:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80463074;
    }
}

loc_8046306C:
{
    r0 = 0;
    goto loc_80463090;
}

loc_80463074:
{
    r3 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 & 512);
}

loc_80463090:
{
}

loc_80463094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804630B0;
    }
}

loc_80463098:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 72);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_3D73 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_3D73;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463130;
}

loc_804630B0:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 82);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_40A7 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_40A7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463130;
}

loc_804630C8:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -8);
}

loc_804630D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_804630E0;
    }
}

loc_804630D8:
{
    r0 = 0;
    goto loc_804630FC;
}

loc_804630E0:
{
    r3 = 0x80610000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 131070);
    r3 = (r3 + -2448);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 512);
}

loc_804630FC:
{
}

loc_80463100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046311C;
    }
}

loc_80463104:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 92);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_4700 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_4700;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80463130;
}

loc_8046311C:
{
    r4 = 0x80610000u;
    r3 = r31;
    r4 = (r4 + -632);
    r4 = (r4 + 100);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_4A35 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_4A35;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80463130:
{
    r3 = r31;
    goto loc_80463600;
}

loc_80463138:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r31 = (r1 + 567);
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r1 + 567), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
}

loc_80463164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(103))) {
        goto loc_80463194;
    }
}

loc_80463168:
{
}

loc_8046316C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(71))) {
        goto loc_80463194;
    }
}

loc_80463170:
{
}

loc_80463174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(101))) {
        goto loc_8046324C;
    }
}

loc_80463178:
{
}

loc_8046317C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(69))) {
        goto loc_8046324C;
    }
}

loc_80463180:
{
}

loc_80463184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(102))) {
        goto loc_804633B4;
    }
}

loc_80463188:
{
}

loc_8046318C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(70))) {
        goto loc_804633B4;
    }
}

loc_80463190:
{
    goto loc_804635D0;
}

loc_80463194:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_804631A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_804631AC;
    }
}

loc_804631A4:
{
    r3 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80462D6Cu>(&func_80462D6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80462D6C_5441 = func_80462D6C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80462D6C_5441;
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
        InvokeDirectCpu<0x80462D6Cu>(ctx);
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

loc_804631AC:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804631B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(-4))) {
        goto loc_804631C4;
    }
}

loc_804631B8:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804631C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_80463210;
    }
}

loc_804631C4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_804631CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804631E0;
    }
}

loc_804631D0:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_804631EC;
}

loc_804631E0:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_804631EC:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
}

loc_804631F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(103))) {
        goto loc_80463204;
    }
}

loc_804631F8:
{
    r0 = 101;
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    goto loc_8046324C;
}

loc_80463204:
{
    r0 = 69;
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    goto loc_8046324C;
}

loc_80463210:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80463218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046322C;
    }
}

loc_8046321C:
{
    r0 = (r4 + 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_804633B4;
}

loc_8046322C:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r3 = (r4 + 1);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804633B4;
    }
}

loc_80463240:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_804633B4;
}

loc_8046324C:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r3 + 1);
}

loc_8046325C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_80463268;
    }
}

loc_80463260:
{
    r3 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80462D6Cu>(&func_80462D6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80462D6C_623B = func_80462D6C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80462D6C_623B;
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
        InvokeDirectCpu<0x80462D6Cu>(ctx);
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

loc_80463268:
{
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = 43;
}

loc_80463274:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80463280;
    }
}

loc_80463278:
{
    r6 = (0 - r6);
    r8 = 45;
}

loc_80463280:
{
    r3 = 1717960704;
    r7 = 0;
    r5 = (r3 + 26215);
    goto loc_804632C4;
}

loc_80463290:
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

loc_804632C4:
{
}

loc_804632C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80463290;
    }
}

loc_804632CC:
{
}

loc_804632D0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_80463290;
    }
}

loc_804632D4:
{
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r8));
    r0 = (r1 + 56);
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r31_stbu_ea_1 = (r31 + -2);
    MemoryInline::FlatWrite8(r31_stbu_ea_1, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_1;
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r31);
    r0 = (r0 + r3);
}

loc_804632F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_80463300;
    }
}

loc_804632F8:
{
    r3 = 0;
    goto loc_80463600;
}

loc_80463300:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + 1);
}

loc_8046330C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8046332C;
    }
}

loc_80463310:
{
    r3 = (r3 + 2);
    r0 = 48;
    r3 = (r3 - r4);
    goto loc_80463324;
}

loc_80463320:
{
    r31_stbu_ea_3 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_3, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_3;
}

loc_80463324:
{
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
}

loc_80463328:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80463320;
    }
}

loc_8046332C:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r1 + 17);
    r4 = (r4 + r3);
    goto loc_80463344;
}

loc_8046333C:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r31_stbu_ea_6 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_6, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_6;
}

loc_80463344:
{
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
}

loc_80463348:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046333C;
    }
}

loc_8046334C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80463354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80463364;
    }
}

loc_80463358:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80463360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80463368;
    }
}

loc_80463364:
{
    r31_stbu_ea_7 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_7, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_7;
}

loc_80463368:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r31_stbu_ea_9 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_9, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_9;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80463388;
    }
}

loc_8046337C:
{
    r0 = 45;
    r31_stbu_ea_10 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_10, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_10;
    goto loc_804635D0;
}

loc_80463388:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80463390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804633A0;
    }
}

loc_80463394:
{
    r0 = 43;
    r31_stbu_ea_11 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_11, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_11;
    goto loc_804635D0;
}

loc_804633A0:
{
}

loc_804633A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804635D0;
    }
}

loc_804633A8:
{
    r0 = 32;
    r31_stbu_ea_12 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_12, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_12;
    goto loc_804635D0;
}

loc_804633B4:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r4 - r5);
    r8 = (r3 + -1);
}

loc_804633C4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_804633CC;
    }
}

loc_804633C8:
{
    r8 = 0;
}

loc_804633CC:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804633D4:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r0))) {
        goto loc_80463400;
    }
}

loc_804633D8:
{
    r0 = (r8 - r0);
    r3 = (r1 + 12);
    r4 = (r4 - r0);
    if constexpr (KnownRegArgsCpuCall<0x80462D6Cu>(&func_80462D6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80462D6C_7D4A = func_80462D6C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80462D6C_7D4A;
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
        InvokeDirectCpu<0x80462D6Cu>(ctx);
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

loc_804633F8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80463400;
    }
}

loc_804633FC:
{
    r8 = 0;
}

loc_80463400:
{
    r7 = (r5 + 1);
}

loc_80463404:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8046340C;
    }
}

loc_80463408:
{
    r7 = 0;
}

loc_8046340C:
{
    r0 = (r7 + r8);
}

loc_80463414:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_80463420;
    }
}

loc_80463418:
{
    r3 = 0;
    goto loc_80463600;
}

loc_80463420:
{
    r6 = (r1 + 17);
    r5 = 0;
    r6 = (r6 + r4);
    r3 = 48;
    goto loc_8046343C;
}

loc_80463434:
{
    r31_stbu_ea_14 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_14, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_14;
    r5 = (r5 + 1);
}

loc_8046343C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r8);
}

loc_80463448:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80463434;
    }
}

loc_8046344C:
{
    r3 = 0;
    goto loc_80463460;
}

loc_80463454:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + 1);
    r31_stbu_ea_16 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_16, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_16;
}

loc_80463460:
{
}

loc_80463464:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_80463474;
    }
}

loc_80463468:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80463470:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80463454;
    }
}

loc_80463474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r8));
}

loc_80463478:
{
    r3 = (r8 - r3);
    r4 = 48;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804634C8;
    }
}

loc_80463484:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
}

loc_80463488:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804634BC;
    }
}

loc_80463490:
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
        goto loc_80463490;
    }
}

loc_804634B4:
{
    r3 = (r3 & 7);
}

loc_804634B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804634C8;
    }
}

loc_804634BC:
{
    ctr = r3;
}

loc_804634C0:
{
    r31_stbu_ea_21 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_21, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_21;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804634C0;
    }
}

loc_804634C8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_804634D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804634E0;
    }
}

loc_804634D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_804634DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804634E4;
    }
}

loc_804634E0:
{
    r31_stbu_ea_23 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_23, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_23;
}

loc_804634E4:
{
}

loc_804634E8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80463588;
    }
}

loc_804634EC:
{
    r4 = 0;
    r3 = 48;
    goto loc_80463500;
}

loc_804634F8:
{
    r31_stbu_ea_26 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_26, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_26;
    r4 = (r4 + 1);
}

loc_80463500:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r7 - r0);
}

loc_8046350C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804634F8;
    }
}

loc_80463510:
{
}

loc_80463514:
{
    r3 = (r7 - r4);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_80463590;
    }
}

loc_8046351C:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
}

loc_80463520:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80463574;
    }
}

loc_80463528:
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
        goto loc_80463528;
    }
}

loc_8046356C:
{
    r3 = (r3 & 7);
}

loc_80463570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80463590;
    }
}

loc_80463574:
{
    ctr = r3;
}

loc_80463578:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r31_stbu_ea_31 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_31, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_31;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80463578;
    }
}

loc_80463584:
{
    goto loc_80463590;
}

loc_80463588:
{
    r0 = 48;
    r31_stbu_ea_32 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_32, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_32;
}

loc_80463590:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804635A8;
    }
}

loc_8046359C:
{
    r0 = 45;
    r31_stbu_ea_34 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_34, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_34;
    goto loc_804635D0;
}

loc_804635A8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_804635B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804635C0;
    }
}

loc_804635B4:
{
    r0 = 43;
    r31_stbu_ea_35 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_35, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_35;
    goto loc_804635D0;
}

loc_804635C0:
{
}

loc_804635C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804635D0;
    }
}

loc_804635C8:
{
    r0 = 32;
    r31_stbu_ea_36 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_36, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_36;
}

loc_804635D0:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_A4BF = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_A4BF);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_A4BF >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = r31;
    r4 = (r28 - r0);
    r28 = (r4 + -2);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_A846 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_A846);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_A846 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r5 = r3;
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x804635FCu;
    if constexpr (KnownRegArgsCpuCall<0x8045BAA0u>(&func_8045BAA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045BAA0_ABEC = func_8045BAA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045BAA0_ABEC);
        r4 = static_cast<uint32_t>(regargs_result_8045BAA0_ABEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045BAA0u>(ctx);
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
    r3 = r28;
}

loc_80463600:
{
    r0 = MemoryInline::FlatRead32((r1 + 596));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 584));
    ctx->lr = r0;
    r1 = (r1 + 592);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80462E94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80462E94_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80462E94 func_80462E94 preserves=true fpr_mask=0x00000000
