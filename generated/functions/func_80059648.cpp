#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041390(CpuContext* ctx);
extern "C" uint64_t func_80041390_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80041854(CpuContext* ctx);
extern "C" uint64_t func_80041854_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800419A8(CpuContext* ctx);
extern "C" uint64_t func_800419A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800527C4(CpuContext* ctx);
extern "C" uint64_t func_800527C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005A3D0(CpuContext* ctx);
extern "C" uint64_t func_8005A3D0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8005B2DC(CpuContext* ctx);
extern "C" uint64_t func_8005B2DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CE618(CpuContext* ctx);
extern "C" uint64_t func_800CE618_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFC54(CpuContext* ctx);
extern "C" uint64_t func_800CFC54_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CFD84(CpuContext* ctx);
extern "C" uint32_t func_800CFD84_ra1c0_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D0150(CpuContext* ctx);
extern "C" uint64_t func_800D0150_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BEE08(CpuContext* ctx);
extern "C" uint64_t func_803BEE08_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80440078(CpuContext* ctx);
extern "C" uint32_t func_80440078_ra0_0_8_0(CpuContext*);
extern "C" void func_804400D0(CpuContext* ctx);
extern "C" uint64_t func_804400D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80440188(CpuContext* ctx);
extern "C" uint64_t func_80440188_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8044036C(CpuContext* ctx);
extern "C" uint64_t func_8044036C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80440790(CpuContext* ctx);
extern "C" uint64_t func_80440790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80440ACC(CpuContext* ctx);
extern "C" uint64_t func_80440ACC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804410E4(CpuContext* ctx);
extern "C" uint64_t func_804410E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804413BC(CpuContext* ctx);
extern "C" uint64_t func_804413BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80441460(CpuContext* ctx);
extern "C" uint64_t func_80441460_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80441668(CpuContext* ctx);
extern "C" uint64_t func_80441668_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80441828(CpuContext* ctx);
extern "C" uint64_t func_80441828_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804421D0(CpuContext* ctx);
extern "C" uint64_t func_804421D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8044233C(CpuContext* ctx);
extern "C" uint64_t func_8044233C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804425C4(CpuContext* ctx);
extern "C" uint64_t func_804425C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80442664(CpuContext* ctx);
extern "C" uint64_t func_80442664_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804427FC(CpuContext* ctx);
extern "C" uint64_t func_804427FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804428CC(CpuContext* ctx);
extern "C" uint64_t func_804428CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80442B64(CpuContext* ctx);
extern "C" uint32_t func_80442B64_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804D3070(CpuContext* ctx);
extern "C" uint64_t func_804D3070_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E9010(CpuContext* ctx);
extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E91A0(CpuContext* ctx);
extern "C" uint64_t func_804E91A0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80440078_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80440078_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80059648_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80059648;

loc_80059648:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80059674:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8005A3B0;
    }
}

loc_80059678:
{
    r4 = 0x80590000u;
    r4 = (r4 + -17876);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80059690u:
        goto loc_80059690;
        break;
    case 0x8005971Cu:
        goto loc_8005971C;
        break;
    case 0x80059748u:
        goto loc_80059748;
        break;
    case 0x800597F0u:
        goto loc_800597F0;
        break;
    case 0x800598E0u:
        goto loc_800598E0;
        break;
    case 0x800599A4u:
        goto loc_800599A4;
        break;
    case 0x8005A348u:
        goto loc_8005A348;
        break;
    case 0x8005A370u:
        goto loc_8005A370;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80059690:
{
    ctx->lr = 0x80059694u;
    if constexpr (KnownRegArgsCpuCall<0x800CE618u>(&func_800CE618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_800CE618_29DA = func_800CE618_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_800CE618_29DA);
        r4 = static_cast<uint32_t>(regargs_result_800CE618_29DA >> 32);
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800CE618u>(ctx);
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
    r3 = 0x800D0000u;
    r3 = (r3 + -6396);
    r4 = 15;
    ctx->lr = 0x800596A4u;
    if constexpr (KnownRegArgsCpuCall<0x80041854u>(&func_80041854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80041854_2E7E = func_80041854_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80041854_2E7E);
        r4 = static_cast<uint32_t>(regargs_result_80041854_2E7E >> 32);
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80041854u>(ctx);
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
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x80046F18 (12 guest instruction(s))
}

loc_inl0_0x80046F18:
{
}

loc_inl0_0x80046F1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80046F34;
    }
}

loc_inl0_0x80046F20:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80046F18;
}

loc_inl0_0x80046F34:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 32), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80046F18:
{
    // end of inlined leaf 0x80046F18
    r0 = 1;
    r3 = 0x80660000u;
    r29 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r29 + 43), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r29 + 49), static_cast<uint8_t>(r0));
    ctx->lr = 0x800596DCu;
    if constexpr (KnownRegArgsCpuCall<0x8005B2DCu>(&func_8005B2DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005B2DC_37C4 = func_8005B2DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005B2DC_37C4);
        r4 = static_cast<uint32_t>(regargs_result_8005B2DC_37C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8005B2DCu>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->lr = 0x800596E0u;
    if constexpr (KnownRegArgsCpuCall<0x80041390u>(&func_80041390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80041390_417D = func_80041390_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80041390_417D);
        r4 = static_cast<uint32_t>(regargs_result_80041390_417D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80041390u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0x90F50000u;
    r3 = (r3 + -28672);
    r4 = 5;
    ctx->lr = 0x800596F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800D0174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 0x90000000u;
    r3 = (r28 + 4096);
    r4 = 255;
    ctx->lr = 0x80059700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800D0174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r29 + 2244));
    ctr = r12;
    ctx->lr = 0x8005970Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r28 + 5728);
    r4 = 253;
    ctx->lr = 0x80059718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800D0174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8005A3B0;
}

loc_8005971C:
{
    r3 = 16;
    // inline leaf 0x800CEF00 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam16((r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 30), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800CEF00
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 16), static_cast<uint16_t>(r0));
    goto loc_8005A3B0;
}

loc_80059748:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32248));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32224));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32236));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32240));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80059788:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80059790;
    }
}

loc_8005978C:
{
    f1.d = f2.d;
}

loc_80059790:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80059798:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800597A0;
    }
}

loc_8005979C:
{
    f1.d = f0.d;
}

loc_800597A0:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    r3 = (r13 + -32016);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = 0x80060000u;
    r3 = (r3 + -27212);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_64FD = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_64FD);
        r4 = static_cast<uint32_t>(regargs_result_80049240_64FD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800597DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A3B0;
    }
}

loc_800597E0:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_8005A3B0;
}

loc_800597F0:
{
    r3 = 0x80060000u;
    r3 = (r3 + -27212);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_6C3C = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_6C3C);
        r4 = static_cast<uint32_t>(regargs_result_80049240_6C3C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8005980C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(30))) {
        goto loc_80059890;
    }
}

loc_80059810:
{
    r3 = 0x80660000u;
    r30 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r30 + 206));
    r28 = (r0 & 16368);
    r31 = 0;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80043BAC_7276 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_7276;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80059834:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80059840;
    }
}

loc_80059838:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r31 = (r0 & 65532);
}

loc_80059840:
{
}

loc_80059844:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80059854;
    }
}

loc_80059848:
{
    r0 = (r31 & 65535);
}

loc_80059850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005986C;
    }
}

loc_80059854:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_8005A3B0;
}

loc_8005986C:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80059874:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(600))) {
        goto loc_80059890;
    }
}

loc_80059878:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_8005A3B0;
}

loc_80059890:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800598A4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(600))) {
        goto loc_8005A3B0;
    }
}

loc_800598A8:
{
    r3 = 458162176;
    r0 = (r3 + -32331);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 150);
    r0 = (r4 - r0);
}

loc_800598CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A3B0;
    }
}

loc_800598D0:
{
    r0 = MemoryInline::FlatRead16((r29 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    goto loc_8005A3B0;
}

loc_800598E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32248));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32224));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32236));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32240));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80059920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80059928;
    }
}

loc_80059924:
{
    f1.d = f2.d;
}

loc_80059928:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80059930:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80059938;
    }
}

loc_80059934:
{
    f1.d = f0.d;
}

loc_80059938:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    r3 = (r13 + -32016);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = 0x80060000u;
    r3 = (r3 + -27212);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_865A = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_865A);
        r4 = static_cast<uint32_t>(regargs_result_80049240_865A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80059974:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_8005A3B0;
    }
}

loc_80059978:
{
    r28 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 49), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 2648), static_cast<uint8_t>(r28));
    ctx->lr = 0x80059990u;
    if constexpr (KnownRegArgsCpuCall<0x800CFC54u>(&func_800CFC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800CFC54_8DEF = func_800CFC54_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CFC54_8DEF);
        r4 = static_cast<uint32_t>(regargs_result_800CFC54_8DEF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x800CFC54u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r28));
    goto loc_8005A3B0;
}

loc_800599A4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -18480);
    r30 = MemoryInline::FlatRead16((r4 + 708));
    r4 = MemoryInline::FlatRead32((r13 + -17744));
    r0 = (r4 + 410);
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite32((r13 + -17744), r0);
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_800599C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8005A304;
    }
}

loc_800599CC:
{
    r4 = 0x80590000u;
    r4 = (r4 + -17908);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800599E4u:
        goto loc_800599E4;
        break;
    case 0x80059A10u:
        goto loc_80059A10;
        break;
    case 0x80059AE8u:
        goto loc_80059AE8;
        break;
    case 0x80059B7Cu:
        goto loc_80059B7C;
        break;
    case 0x80059EBCu:
        goto loc_80059EBC;
        break;
    case 0x8005A100u:
        goto loc_8005A100;
        break;
    case 0x8005A218u:
        goto loc_8005A218;
        break;
    case 0x8005A2ECu:
        goto loc_8005A2EC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800599E4:
{
    r30 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r30));
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    ctx->lr = 0x80059A00u;
    if constexpr (KnownRegArgsCpuCall<0x804413BCu>(&func_804413BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804413BC_A0E5 = func_804413BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804413BC_A0E5);
        r4 = static_cast<uint32_t>(regargs_result_804413BC_A0E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804413BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r28));
    goto loc_8005A304;
}

loc_80059A10:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    MemoryInline::FlatWrite32((r13 + -17744), r28);
    ctx->lr = 0x80059A20u;
    if constexpr (KnownRegArgsCpuCall<0x80441460u>(&func_80441460)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80441460_A781 = func_80441460_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80441460_A781);
        r4 = static_cast<uint32_t>(regargs_result_80441460_A781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80441460u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059A28:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059A64;
    }
}

loc_80059A2C:
{
}

loc_80059A30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059ABC;
    }
}

loc_80059A34:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r28));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2135), static_cast<uint8_t>(r28));
    ctx->lr = 0x80059A60u;
    if constexpr (KnownRegArgsCpuCall<0x804421D0u>(&func_804421D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804421D0_B2FB = func_804421D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804421D0_B2FB);
        r4 = static_cast<uint32_t>(regargs_result_804421D0_B2FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804421D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80059ABC;
}

loc_80059A64:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
    MemoryInline::FlatWrite32((r13 + -17752), r3);
}

loc_80059A7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-4))) {
        goto loc_80059A90;
    }
}

loc_80059A80:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r28));
    goto loc_80059ABC;
}

loc_80059A90:
{
    r4 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r4));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r13 + -17744), r4);
    goto loc_80059AE8;
}

loc_80059ABC:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x80059AC8u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_BD00 = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_BD00);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_BD00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = -200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_C469 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_C469);
        r4 = static_cast<uint32_t>(regargs_result_80049240_C469 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A304;
}

loc_80059AE8:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80059AF0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80059AFC;
    }
}

loc_80059AF4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80059AFC:
{
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
    MemoryInline::FlatWrite32((r13 + -17752), r3);
}

loc_80059B08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-4))) {
        goto loc_80059B14;
    }
}

loc_80059B0C:
{
}

loc_80059B10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-15))) {
        goto loc_80059B4C;
    }
}

loc_80059B14:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r30 & 16);
}

loc_80059B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005A304;
    }
}

loc_80059B30:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r3));
    r0 = 7;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    goto loc_8005A304;
}

loc_80059B4C:
{
    ctx->lr = 0x80059B50u;
    if constexpr (KnownRegArgsCpuCall<0x80442B64u>(&func_80442B64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80442B64_CF25 = func_80442B64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80442B64_CF25;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80442B64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r3 + -16);
}

loc_80059B64:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8005A304;
    }
}

loc_80059B68:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r30 & 16);
}

loc_80059B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A2EC;
    }
}

loc_80059B78:
{
    goto loc_8005A304;
}

loc_80059B7C:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80059B84:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_80059E30;
    }
}

loc_80059B88:
{
    r4 = 0x80590000u;
    r4 = (r4 + -17952);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80059BA0u:
        goto loc_80059BA0;
        break;
    case 0x80059BC4u:
        goto loc_80059BC4;
        break;
    case 0x80059C00u:
        goto loc_80059C00;
        break;
    case 0x80059C24u:
        goto loc_80059C24;
        break;
    case 0x80059C78u:
        goto loc_80059C78;
        break;
    case 0x80059CA8u:
        goto loc_80059CA8;
        break;
    case 0x80059D14u:
        goto loc_80059D14;
        break;
    case 0x80059D38u:
        goto loc_80059D38;
        break;
    case 0x80059D7Cu:
        goto loc_80059D7C;
        break;
    case 0x80059DA0u:
        goto loc_80059DA0;
        break;
    case 0x80059E00u:
        goto loc_80059E00;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80059BA0:
{
    ctx->lr = 0x80059BA4u;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80440078u) && KnownTranslatedCpuCall<0x80440078u>::kAvailable && !KnownTranslatedCpuCall<0x80440078u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80440078u>()) {
        const auto state_free_result_80440078_DC25 = func_80440078_statefree_v0(r1, r31, 0x80059BA4u);
        r1 = static_cast<uint32_t>(state_free_result_80440078_DC25[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80440078_DC25[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80440078u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059BC4:
{
    ctx->lr = 0x80059BC8u;
    if constexpr (KnownRegArgsCpuCall<0x804400D0u>(&func_804400D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804400D0_E420 = func_804400D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804400D0_E420);
        r4 = static_cast<uint32_t>(regargs_result_804400D0_E420 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804400D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059BD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059BEC;
    }
}

loc_80059BD4:
{
}

loc_80059BD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059E30;
    }
}

loc_80059BDC:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059BEC:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    goto loc_80059A90;
}

loc_80059C00:
{
    ctx->lr = 0x80059C04u;
    if constexpr (KnownRegArgsCpuCall<0x80440188u>(&func_80440188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440188_EF4A = func_80440188_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440188_EF4A);
        r4 = static_cast<uint32_t>(regargs_result_80440188_EF4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059C24:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    ctx->lr = 0x80059C30u;
    if constexpr (KnownRegArgsCpuCall<0x8044036Cu>(&func_8044036C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044036C_F5EC = func_8044036C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044036C_F5EC);
        r4 = static_cast<uint32_t>(regargs_result_8044036C_F5EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8044036Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059C38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059C68;
    }
}

loc_80059C3C:
{
}

loc_80059C40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059E30;
    }
}

loc_80059C44:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2134), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -17747), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059C68:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    goto loc_80059A90;
}

loc_80059C78:
{
    r3 = MemoryInline::FlatRead8((r13 + -17747));
    r4 = -2;
    r5 = 0;
    ctx->lr = 0x80059C88u;
    if constexpr (KnownRegArgsCpuCall<0x80440790u>(&func_80440790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440790_10228 = func_80440790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440790_10228);
        r4 = static_cast<uint32_t>(regargs_result_80440790_10228 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059CA8:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    r3 = 1;
    ctx->lr = 0x80059CB8u;
    if constexpr (KnownRegArgsCpuCall<0x80440ACCu>(&func_80440ACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440ACC_108DA = func_80440ACC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80440ACC_108DA);
        r4 = static_cast<uint32_t>(regargs_result_80440ACC_108DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80440ACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059CC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059D04;
    }
}

loc_80059CC4:
{
}

loc_80059CC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059E30;
    }
}

loc_80059CCC:
{
    r3 = MemoryInline::FlatRead8((r13 + -17747));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -17747), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_80059CE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80059CF4;
    }
}

loc_80059CE4:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059CF4:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059D04:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    goto loc_80059A90;
}

loc_80059D14:
{
    ctx->lr = 0x80059D18u;
    if constexpr (KnownRegArgsCpuCall<0x80441668u>(&func_80441668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80441668_115EE = func_80441668_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80441668_115EE);
        r4 = static_cast<uint32_t>(regargs_result_80441668_115EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80441668u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059D38:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    ctx->lr = 0x80059D44u;
    if constexpr (KnownRegArgsCpuCall<0x80441828u>(&func_80441828)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80441828_11C93 = func_80441828_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80441828_11C93);
        r4 = static_cast<uint32_t>(regargs_result_80441828_11C93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80441828u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059D4C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059D6C;
    }
}

loc_80059D50:
{
}

loc_80059D54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059E30;
    }
}

loc_80059D58:
{
    MemoryInline::FlatWrite8((r13 + -17747), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059D6C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    goto loc_80059A90;
}

loc_80059D7C:
{
    // inline leaf 0x80440F98 (9 guest instruction(s))
    r0 = 0;
    r3 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r3 + -30960), r0);
    r3 = (r3 + -30960);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 1;
    // end of inlined leaf 0x80440F98
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_80059E30;
}

loc_80059DA0:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r28);
    ctx->lr = 0x80059DACu;
    if constexpr (KnownRegArgsCpuCall<0x804410E4u>(&func_804410E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804410E4_12B29 = func_804410E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804410E4_12B29);
        r4 = static_cast<uint32_t>(regargs_result_804410E4_12B29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804410E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059DB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059DF0;
    }
}

loc_80059DB8:
{
}

loc_80059DBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80059E30;
    }
}

loc_80059DC0:
{
    r3 = 0x80660000u;
    r4 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2149), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 2135), static_cast<uint8_t>(r0));
    r0 = 60;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 2149), static_cast<uint8_t>(r28));
    goto loc_80059E30;
}

loc_80059DF0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    goto loc_80059A90;
}

loc_80059E00:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80059E08:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80059E18;
    }
}

loc_80059E0C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    goto loc_80059E30;
}

loc_80059E18:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2134), static_cast<uint8_t>(r0));
}

loc_80059E30:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
}

loc_80059E38:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(1))) {
        goto loc_80059E68;
    }
}

loc_80059E3C:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x80059E48u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_13B49 = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_13B49);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_13B49 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = -200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_142B5 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_142B5);
        r4 = static_cast<uint32_t>(regargs_result_80049240_142B5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A304;
}

loc_80059E68:
{
    r0 = (r3 + 254);
    r3 = (r0 & 255);
    r0 = 7;
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r3 + r0_ca_1);
    r3 = (r3 - r0);
    r3 = (r3 + 6);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead8((r13 + -17748));
}

loc_80059E98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A304;
    }
}

loc_80059E9C:
{
    r4 = 0;
    ctx->lr = 0x80059EA4u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_14A6B = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_14A6B);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_14A6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 2;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_15196 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_15196);
        r4 = static_cast<uint32_t>(regargs_result_80049240_15196 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A304;
}

loc_80059EBC:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r31);
    MemoryInline::FlatWrite32((r13 + -17744), r31);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80059ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80059EF0;
    }
}

loc_80059ED4:
{
}

loc_80059ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80059F88;
    }
}

loc_80059EDC:
{
}

loc_80059EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80059FE0;
    }
}

loc_80059EE4:
{
}

loc_80059EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8005A078;
    }
}

loc_80059EEC:
{
    goto loc_8005A0CC;
}

loc_80059EF0:
{
    ctx->lr = 0x80059EF4u;
    if constexpr (KnownRegArgsCpuCall<0x8044233Cu>(&func_8044233C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044233C_159D9 = func_8044233C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044233C_159D9);
        r4 = static_cast<uint32_t>(regargs_result_8044233C_159D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8044233Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059EFC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059F3C;
    }
}

loc_80059F00:
{
}

loc_80059F04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A0CC;
    }
}

loc_80059F08:
{
    r28 = 1;
    MemoryInline::FlatWrite8((r13 + -17748), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    ctx->lr = 0x80059F28u;
    if constexpr (KnownRegArgsCpuCall<0x804427FCu>(&func_804427FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804427FC_164CF = func_804427FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804427FC_164CF);
        r4 = static_cast<uint32_t>(regargs_result_804427FC_164CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804427FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2134), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r28));
    goto loc_8005A0CC;
}

loc_80059F3C:
{
    r3 = 0x80660000u;
    r28 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r28 + 2149), static_cast<uint8_t>(r31));
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
}

loc_80059F50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-4))) {
        goto loc_80059F78;
    }
}

loc_80059F54:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    ctx->lr = 0x80059F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80440188u>(&func_80440188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440188_16D5A = func_80440188_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440188_16D5A);
        r4 = static_cast<uint32_t>(regargs_result_80440188_16D5A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8((r28 + 2149), static_cast<uint8_t>(r0));
    goto loc_8005A0CC;
}

loc_80059F78:
{
    MemoryInline::FlatWriteRam8((r28 + 2149), static_cast<uint8_t>(r31));
    r0 = 1;
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    goto loc_80059A90;
}

loc_80059F88:
{
    ctx->lr = 0x80059F8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8044036Cu>(&func_8044036C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8044036C_173D3 = func_8044036C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8044036C_173D3);
        r4 = static_cast<uint32_t>(regargs_result_8044036C_173D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8044036Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059F94:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059FD0;
    }
}

loc_80059F98:
{
}

loc_80059F9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A0CC;
    }
}

loc_80059FA0:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2134), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    ctx->lr = 0x80059FCCu;
    if constexpr (KnownRegArgsCpuCall<0x804427FCu>(&func_804427FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804427FC_17F40 = func_804427FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804427FC_17F40);
        r4 = static_cast<uint32_t>(regargs_result_804427FC_17F40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804427FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8005A0CC;
}

loc_80059FD0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r31));
    goto loc_80059A90;
}

loc_80059FE0:
{
    ctx->lr = 0x80059FE4u;
    if constexpr (KnownRegArgsCpuCall<0x804428CCu>(&func_804428CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804428CC_1853D = func_804428CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804428CC_1853D);
        r4 = static_cast<uint32_t>(regargs_result_804428CC_1853D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804428CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_80059FEC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8005A020;
    }
}

loc_80059FF0:
{
}

loc_80059FF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A0CC;
    }
}

loc_80059FF8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r31));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_8005A0CC;
}

loc_8005A020:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r31));
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
}

loc_8005A034:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-4))) {
        goto loc_8005A040;
    }
}

loc_8005A038:
{
}

loc_8005A03C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-15))) {
        goto loc_8005A06C;
    }
}

loc_8005A040:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    ctx->lr = 0x8005A058u;
    if constexpr (KnownRegArgsCpuCall<0x80441668u>(&func_80441668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80441668_19406 = func_80441668_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80441668_19406);
        r4 = static_cast<uint32_t>(regargs_result_80441668_19406 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80441668u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    goto loc_8005A0CC;
}

loc_8005A06C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    goto loc_80059A90;
}

loc_8005A078:
{
    ctx->lr = 0x8005A07Cu;
    if constexpr (KnownRegArgsCpuCall<0x80441828u>(&func_80441828)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80441828_19A63 = func_80441828_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80441828_19A63);
        r4 = static_cast<uint32_t>(regargs_result_80441828_19A63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80441828u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_8005A084:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8005A0BC;
    }
}

loc_8005A088:
{
}

loc_8005A08C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A0CC;
    }
}

loc_8005A090:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r31));
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_8005A0CC;
}

loc_8005A0BC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r31));
    goto loc_80059A90;
}

loc_8005A0CC:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x8005A0D8u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_1A72F = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_1A72F);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_1A72F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = -200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_1AEDA = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_1AEDA);
        r4 = static_cast<uint32_t>(regargs_result_80049240_1AEDA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A304;
}

loc_8005A100:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17752), r0);
    MemoryInline::FlatWrite32((r13 + -17744), r0);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8005A114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005A124;
    }
}

loc_8005A118:
{
}

loc_8005A11C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8005A154;
    }
}

loc_8005A120:
{
    goto loc_8005A1E4;
}

loc_8005A124:
{
    r3 = MemoryInline::FlatRead8((r3 + 11));
    r4 = -2;
    r5 = 0;
    ctx->lr = 0x8005A134u;
    if constexpr (KnownRegArgsCpuCall<0x80440790u>(&func_80440790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440790_1B605 = func_80440790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440790_1B605);
        r4 = static_cast<uint32_t>(regargs_result_80440790_1B605 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_8005A1E4;
}

loc_8005A154:
{
    r3 = 1;
    ctx->lr = 0x8005A15Cu;
    if constexpr (KnownRegArgsCpuCall<0x80440ACCu>(&func_80440ACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440ACC_1BC74 = func_80440ACC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80440ACC_1BC74);
        r4 = static_cast<uint32_t>(regargs_result_80440ACC_1BC74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80440ACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_8005A164:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8005A1C4;
    }
}

loc_8005A168:
{
}

loc_8005A16C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A1E4;
    }
}

loc_8005A170:
{
    r3 = MemoryInline::FlatRead8((r29 + 11));
}

loc_8005A178:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(5))) {
        goto loc_8005A198;
    }
}

loc_8005A17C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r4 = -2;
    r5 = 0;
    ctx->lr = 0x8005A194u;
    if constexpr (KnownRegArgsCpuCall<0x80440790u>(&func_80440790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80440790_1C783 = func_80440790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440790_1C783);
        r4 = static_cast<uint32_t>(regargs_result_80440790_1C783 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8005A1E4;
}

loc_8005A198:
{
    r4 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r4));
    goto loc_8005A1E4;
}

loc_8005A1C4:
{
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
}

loc_8005A1CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_8005A170;
    }
}

loc_8005A1D0:
{
}

loc_8005A1D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-4))) {
        goto loc_8005A170;
    }
}

loc_8005A1D8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    goto loc_80059A90;
}

loc_8005A1E4:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x8005A1F0u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_1D164 = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_1D164);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_1D164 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = -200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_1D90F = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_1D90F);
        r4 = static_cast<uint32_t>(regargs_result_80049240_1D90F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A304;
}

loc_8005A218:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8005A220:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005A238;
    }
}

loc_8005A224:
{
}

loc_8005A228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8005A254;
    }
}

loc_8005A22C:
{
}

loc_8005A230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8005A29C;
    }
}

loc_8005A234:
{
    goto loc_8005A2E0;
}

loc_8005A238:
{
    r0 = 7;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8005A244u;
    if constexpr (KnownRegArgsCpuCall<0x804425C4u>(&func_804425C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804425C4_1E04D = func_804425C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804425C4_1E04D);
        r4 = static_cast<uint32_t>(regargs_result_804425C4_1E04D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804425C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_8005A2E0;
}

loc_8005A254:
{
    r0 = 7;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8005A260u;
    if constexpr (KnownRegArgsCpuCall<0x80442664u>(&func_80442664)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80442664_1E667 = func_80442664_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80442664_1E667);
        r4 = static_cast<uint32_t>(regargs_result_80442664_1E667 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80442664u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 + 2);
}

loc_8005A268:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80059A90;
    }
}

loc_8005A26C:
{
}

loc_8005A270:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8005A2E0;
    }
}

loc_8005A274:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2135), static_cast<uint8_t>(r0));
    r0 = 60;
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    goto loc_8005A2E0;
}

loc_8005A29C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8005A2AC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8005A2BC;
    }
}

loc_8005A2B0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    goto loc_8005A2E0;
}

loc_8005A2BC:
{
    ctx->lr = 0x8005A2C0u;
    if constexpr (KnownRegArgsCpuCall<0x804413BCu>(&func_804413BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804413BC_1F386 = func_804413BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804413BC_1F386);
        r4 = static_cast<uint32_t>(regargs_result_804413BC_1F386 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804413BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r3));
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
}

loc_8005A2E0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_8005A304;
}

loc_8005A2EC:
{
    r3 = 1;
    ctx->lr = 0x8005A2F4u;
    if constexpr (KnownRegArgsCpuCall<0x804E91A0u>(&func_804E91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E91A0_1FA7E = func_804E91A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E91A0_1FA7E);
        r4 = static_cast<uint32_t>(regargs_result_804E91A0_1FA7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    }
    ctx->lr = 0x8005A2F8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E9010_1FF8F = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_1FF8F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->lr = 0x8005A2FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804E8050u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8005A300u;
    if constexpr (KnownRegArgsCpuCall<0x804D3070u>(&func_804D3070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804D3070_207A6 = func_804D3070_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D3070_207A6);
        r4 = static_cast<uint32_t>(regargs_result_804D3070_207A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        ctx->gpr[12] = r12;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804D3070u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
    goto loc_8005A3B0;
}

loc_8005A304:
{
    r3 = MemoryInline::FlatRead8((r29 + 9));
}

loc_8005A30C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_8005A31C;
    }
}

loc_8005A310:
{
    r0 = MemoryInline::FlatRead32((r13 + -17752));
}

loc_8005A318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A324;
    }
}

loc_8005A31C:
{
}

loc_8005A320:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(6))) {
        goto loc_8005A3B0;
    }
}

loc_8005A324:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = 0x8005A330u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_2137E = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_2137E);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_2137E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 2;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80049240_21AA9 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_21AA9);
        r4 = static_cast<uint32_t>(regargs_result_80049240_21AA9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8005A3B0;
}

loc_8005A348:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = (r3 + 2322);
    r4 = 0x80660000u;
    r4 = (r4 + -19184);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_8005A3B0;
}

loc_8005A370:
{
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r3 = (r30 + 2322);
    ctx->lr = 0x8005A380u;
    if constexpr (KnownRegArgsCpuCall<0x803BEE08u>(&func_803BEE08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803BEE08_221C9 = func_803BEE08_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803BEE08_221C9);
        r4 = static_cast<uint32_t>(regargs_result_803BEE08_221C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BEE08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 43), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 34), static_cast<uint8_t>(r0));
    ctx->lr = 0x8005A394u;
    if constexpr (KnownRegArgsCpuCall<0x800CFD84u>(&func_800CFD84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800CFD84_229F4 = func_800CFD84_ra1c0_1fe_8_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800CFD84_229F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x800CFD84u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 1;
    // inline leaf 0x80046F18 (12 guest instruction(s))
}

loc_inl8_0x80046F18:
{
}

loc_inl8_0x80046F1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_inl8_0x80046F34;
    }
}

loc_inl8_0x80046F20:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_inl8_cont_80046F18;
}

loc_inl8_0x80046F34:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 32), static_cast<uint8_t>(r0));
}

loc_inl8_cont_80046F18:
{
    // end of inlined leaf 0x80046F18
    ctx->lr = 0x8005A3A0u;
    if constexpr (KnownRegArgsCpuCall<0x800D0150u>(&func_800D0150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800D0150_23608 = func_800D0150_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D0150_23608);
        r4 = static_cast<uint32_t>(regargs_result_800D0150_23608 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x800D0150u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    if constexpr (KnownRegArgsCpuCall<0x800527C4u>(&func_800527C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800527C4_23F3D = func_800527C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800527C4_23F3D);
        r4 = static_cast<uint32_t>(regargs_result_800527C4_23F3D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x800527C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8005A3A8u;
    if constexpr (KnownRegArgsCpuCall<0x800419A8u>(&func_800419A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_800419A8_24362 = func_800419A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800419A8_24362);
        r4 = static_cast<uint32_t>(regargs_result_800419A8_24362 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x800419A8u>(ctx);
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
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r29;
    // inline leaf 0x800418B4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800418B4
}

loc_8005A3B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80059648(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80059648_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80059648 func_80059648 preserves=true fpr_mask=0x00000000
