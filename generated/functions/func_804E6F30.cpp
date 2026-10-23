#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D6130(CpuContext* ctx);
extern "C" uint64_t func_804D6130_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DF710(CpuContext* ctx);
extern "C" uint64_t func_804DF710_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E9460(CpuContext* ctx);
extern "C" uint32_t func_804E9460_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EA160(CpuContext* ctx);
extern "C" uint32_t func_804EA160_ra608_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EA200(CpuContext* ctx);
extern "C" uint64_t func_804EA200_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EA240(CpuContext* ctx);
extern "C" uint64_t func_804EA240_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EA2A0(CpuContext* ctx);
extern "C" uint64_t func_804EA2A0_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EA310(CpuContext* ctx);
extern "C" uint64_t func_804EA310_ra400_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804EA380(CpuContext* ctx);
extern "C" uint64_t func_804EA380_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EB270(CpuContext* ctx);
extern "C" uint64_t func_804EB270_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB290(CpuContext* ctx);
extern "C" void func_804EB290_ra600_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB310(CpuContext* ctx);
extern "C" void func_804EB310_ra600_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB3B0(CpuContext* ctx);
extern "C" uint64_t func_804EB3B0_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804E6F30_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804E6F30;

loc_804E6F30:
{
    guest_range_1 = MemoryHw::ResolveRangeHost((r1 + -752), 0, 760u, false, true);
    MemoryHw::WriteResolved32(guest_range_1, 0u, (r1 + -752), r1);
    r1 = (r1 + -752);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_1, 756u, (r1 + 756), r0);
    r11 = (r1 + 752);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r5 = -872415232;
    r30 = 0x80760000u;
    r3 = MemoryHw::FlatRead16((r5 + 8240));
    r28 = r4;
    r30 = (r30 + -10800);
    r6 = 0;
    r0 = (r3 & 32768);
}

loc_804E6F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E6F70;
    }
}

loc_804E6F64:
{
    r0 = (r3 & 32767);
    MemoryHw::FlatWrite16((r5 + 8240), static_cast<uint16_t>(r0));
    r6 = (r6 | 1);
}

loc_804E6F70:
{
    r4 = -872415232;
    r3 = MemoryHw::FlatRead16((r4 + 8244));
    r0 = (r3 & 32768);
}

loc_804E6F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E6F8C;
    }
}

loc_804E6F80:
{
    r0 = (r3 & 32767);
    MemoryHw::FlatWrite16((r4 + 8244), static_cast<uint16_t>(r0));
    r6 = (r6 | 2);
}

loc_804E6F8C:
{
    r4 = -872415232;
    r3 = MemoryHw::FlatRead16((r4 + 8248));
    r0 = (r3 & 32768);
}

loc_804E6F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E6FA8;
    }
}

loc_804E6F9C:
{
    r0 = (r3 & 32767);
    MemoryHw::FlatWrite16((r4 + 8248), static_cast<uint16_t>(r0));
    r6 = (r6 | 4);
}

loc_804E6FA8:
{
    r4 = -872415232;
    r3 = MemoryHw::FlatRead16((r4 + 8252));
    r0 = (r3 & 32768);
}

loc_804E6FB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E6FC4;
    }
}

loc_804E6FB8:
{
    r0 = (r3 & 32767);
    MemoryHw::FlatWrite16((r4 + 8252), static_cast<uint16_t>(r0));
    r6 = (r6 | 8);
}

loc_804E6FC4:
{
    r0 = (r6 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804E6FC8:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 8252));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E6FDC;
    }
}

loc_804E6FD4:
{
    r0 = (r6 & 8);
}

loc_804E6FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7058;
    }
}

loc_804E6FDC:
{
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl1_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl1_cont_804CD870;
}

loc_inl1_return:
{
}

loc_inl1_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 16);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl2_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl2_0x804CD668;
    }
}

loc_inl2_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl2_cont_804CD630;
}

loc_inl2_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl2_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r0 = MemoryHw::FlatRead32((r13 + -14368));
}

loc_804E6FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7044;
    }
}

loc_804E6FF8:
{
    r5 = -872415232;
    r0 = MemoryHw::FlatRead16((r5 + 8236));
    r4 = (r0 & 2047);
    // nop
}

loc_804E7008:
{
    r3 = MemoryHw::FlatRead16((r5 + 8238));
    r6 = r4;
    r0 = MemoryHw::FlatRead16((r5 + 8236));
    r3 = (r3 & 2047);
    r4 = (r0 & 2047);
}

loc_804E7020:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r4))) {
        goto loc_804E7008;
    }
}

loc_804E7024:
{
    r5 = (r1 + 10);
    r6 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804E9460u>(&func_804E9460)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804E9460_2757 = func_804E9460_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804E9460_2757;
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804E9460u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    r12 = MemoryHw::FlatRead32((r13 + -14368));
    r3 = MemoryHw::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryHw::FlatRead16((r1 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctr = r12;
    ctx->lr = 0x804E7044u;
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

loc_804E7044:
{
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl3_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl3_cont_804CD870;
}

loc_inl3_return:
{
}

loc_inl3_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r28;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl4_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl4_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl4_0x804CD668;
    }
}

loc_inl4_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl4_cont_804CD630;
}

loc_inl4_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl4_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    goto loc_804E7724;
}

loc_804E7058:
{
    r4 = MemoryHw::FlatRead32((r13 + -14236));
    r3 = (r1 + 16);
    r0 = (r4 + 1);
    MemoryHw::FlatWrite32((r13 + -14236), r0);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl5_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl5_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl5_cont_804CD870;
}

loc_inl5_return:
{
}

loc_inl5_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 16);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl6_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl6_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl6_0x804CD668;
    }
}

loc_inl6_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl6_cont_804CD630;
}

loc_inl6_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl6_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r12 = MemoryHw::FlatRead32((r13 + -14280));
}

loc_804E707C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804E708C;
    }
}

loc_804E7080:
{
    r3 = MemoryHw::FlatRead32((r13 + -14236));
    ctr = r12;
    ctx->lr = 0x804E708Cu;
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

loc_804E708C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14400));
}

loc_804E7094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E70EC;
    }
}

loc_804E7098:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 8236));
    r4 = (r0 & 2047);
    // nop
}

loc_804E70A8:
{
    r0 = MemoryHw::FlatRead16((r3 + 8238));
    r5 = r4;
    r0 = MemoryHw::FlatRead16((r3 + 8236));
    r4 = (r0 & 2047);
}

loc_804E70BC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_804E70A8;
    }
}

loc_804E70C0:
{
}

loc_804E70C4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_804E70EC;
    }
}

loc_804E70C8:
{
    r3 = MemoryHw::FlatRead32((r13 + -14292));
    r0 = MemoryHw::FlatRead16((r3 + 24));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r0 = (r3 + 1);
}

loc_804E70DC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_804E70EC;
    }
}

loc_804E70E0:
{
    r3 = MemoryHw::FlatRead32((r13 + -14404));
    r0 = (r3 + 1);
    MemoryHw::FlatWrite32((r13 + -14404), r0);
}

loc_804E70EC:
{
    r0 = MemoryHw::FlatRead32((r13 + -14240));
}

loc_804E70F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7228;
    }
}

loc_804E70F8:
{
    r0 = MemoryHw::FlatRead32((r13 + -14344));
}

loc_804E7100:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804E7160;
    }
}

loc_804E7104:
{
    r4 = -872415232;
    r0 = MemoryHw::FlatRead16((r4 + 8236));
    r7 = (r0 & 2047);
}

loc_804E7110:
{
    r3 = MemoryHw::FlatRead16((r4 + 8238));
    r6 = r7;
    r0 = MemoryHw::FlatRead16((r4 + 8236));
    r5 = (r3 & 2047);
    r7 = (r0 & 2047);
}

loc_804E7128:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_804E7110;
    }
}

loc_804E712C:
{
    r6 = MemoryHw::FlatRead32((r13 + -14292));
    r4 = (r5 + -1);
    r3 = (r7 + -1);
    r0 = MemoryHw::FlatRead16((r6 + 26));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = MemoryHw::FlatRead16((r6 + 24));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 + r0);
    r0 = (r3 ^ r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_804E715C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7210;
    }
}

loc_804E7160:
{
    r26 = (r30 + 0);
    r31 = -1;
    r27 = -872415232;
    goto loc_804E71D4;
}

loc_804E7170:
{
    r0 = MemoryHw::FlatRead32((r13 + -14336));
    r3 = MemoryHw::FlatRead32((r13 + -14332));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
}

loc_804E7180:
{
    r0 = (r3 & r31);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_804E718C;
    }
}

loc_804E7188:
{
    goto loc_804E7194;
}

loc_804E718C:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r3 + 32);
}

loc_804E7194:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r5 = (63 - r4);
    r3 = (r27 + r0);
    r26_addr_2 = (r26 + r0);
    r0 = MemoryHw::FlatRead16(r26_addr_2);
    MemoryHw::FlatWrite16((r3 + 8192), static_cast<uint16_t>(r0));
    r4 = 1;
    r3 = 0;
    // inline leaf 0x80457900 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80457900
    r0 = MemoryHw::FlatRead32((r13 + -14336));
    r5 = ~(r3 | r3);
    r3 = MemoryHw::FlatRead32((r13 + -14332));
    r4 = ~(r4 | r4);
    r0 = (r0 & r5);
    r3 = (r3 & r4);
    MemoryHw::FlatWrite32((r13 + -14332), r3);
    MemoryHw::FlatWrite32((r13 + -14336), r0);
}

loc_804E71D4:
{
    r0 = MemoryHw::FlatRead32((r13 + -14336));
    r3 = MemoryHw::FlatRead32((r13 + -14332));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7170;
    }
}

loc_804E71E4:
{
    r3 = (r30 + 240);
    r0 = MemoryHw::FlatRead32((r13 + -14300));
    r4 = MemoryHw::FlatRead32((r3 + 84));
    r5 = 0;
    r3 = MemoryHw::FlatRead32((r3 + 40));
    r6 = 1;
    MemoryHw::FlatWrite32((r13 + -14344), r5);
    MemoryHw::FlatWrite32((r13 + -14292), r4);
    MemoryHw::FlatWrite32((r13 + -14296), r3);
    MemoryHw::FlatWrite32((r13 + -14304), r0);
    goto loc_804E7214;
}

loc_804E7210:
{
    r6 = 0;
}

loc_804E7214:
{
}

loc_804E7218:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804E7228;
    }
}

loc_804E721C:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14240), r0);
    ctx->lr = 0x804E7228u;
    if constexpr (KnownRegArgsCpuCall<0x804DF710u>(&func_804DF710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF710_5AC6 = func_804DF710_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF710_5AC6);
        r4 = static_cast<uint32_t>(regargs_result_804DF710_5AC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804DF710u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
}

loc_804E7228:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = -872415232;
    r0 = MemoryHw::FlatRead16((r4 + 8302));
    r26 = (r0 & 3);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl9_0x804D1330:
{
}

loc_inl9_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x804D1344;
    }
}

loc_inl9_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl9_0x804D1348;
}

loc_inl9_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl9_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
}

loc_inl9_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryHw::FlatRead32((r13 + -19632));
    r26 = (r26 & 1);
}

loc_804E7248:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_804E7254;
    }
}

loc_804E724C:
{
    r3 = r26;
    ctx->lr = 0x804E7254u;
    if constexpr (KnownRegArgsCpuCall<0x804EA160u>(&func_804EA160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA160_6945 = func_804EA160_ra608_0_8_0(ctx, r3, r9, r10);
        r3 = regargs_result_804EA160_6945;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804E7254:
{
    MemoryHw::FlatWrite32((r13 + -19632), r26);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = MemoryHw::FlatRead32((r13 + -14296));
}

loc_804E7264:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_804E7294;
    }
}

loc_804E7268:
{
    r4 = 0x80630000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r4 + -16528);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryHw::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804E7280u:
        goto loc_804E7280;
        break;
    case 0x804E7288u:
        goto loc_804E7288;
        break;
    case 0x804E7290u:
        goto loc_804E7290;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804E7280:
{
    r29 = 0;
    goto loc_804E7294;
}

loc_804E7288:
{
    r29 = 1;
    goto loc_804E7294;
}

loc_804E7290:
{
    r29 = r5;
}

loc_804E7294:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl11_0x804D1330:
{
}

loc_inl11_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl11_0x804D1344;
    }
}

loc_inl11_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl11_0x804D1348;
}

loc_inl11_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl11_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl11_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryHw::FlatRead32((r13 + -19628));
}

loc_804E72A0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_804E736C;
    }
}

loc_804E72A4:
{
}

loc_804E72A8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(5))) {
        goto loc_804E72B8;
    }
}

loc_804E72AC:
{
    r3 = 1;
    ctx->lr = 0x804E72B4u;
    if constexpr (KnownRegArgsCpuCall<0x804EA200u>(&func_804EA200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA200_7B50 = func_804EA200_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA200_7B50);
        r4 = static_cast<uint32_t>(regargs_result_804EA200_7B50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E72C0;
}

loc_804E72B8:
{
    r3 = 0;
    ctx->lr = 0x804E72C0u;
    if constexpr (KnownRegArgsCpuCall<0x804EA200u>(&func_804EA200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA200_81AB = func_804EA200_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA200_81AB);
        r4 = static_cast<uint32_t>(regargs_result_804EA200_81AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804E72C0:
{
}

loc_804E72C4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_804E7314;
    }
}

loc_804E72C8:
{
    r0 = MemoryHw::FlatRead32((r13 + -14256));
}

loc_804E72D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E72E0;
    }
}

loc_804E72D4:
{
}

loc_804E72D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E72EC;
    }
}

loc_804E72DC:
{
    goto loc_804E72FC;
}

loc_804E72E0:
{
    r0 = 30000;
    MemoryHw::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7304;
}

loc_804E72EC:
{
    r3 = 65536;
    r0 = (r3 + -20536);
    MemoryHw::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7304;
}

loc_804E72FC:
{
    r0 = 15000;
    MemoryHw::FlatWrite32((r13 + -14388), r0);
}

loc_804E7304:
{
    r3 = 65536;
    r0 = (r3 + 24464);
    MemoryHw::FlatWrite32((r13 + -14384), r0);
    goto loc_804E7360;
}

loc_804E7314:
{
    r0 = MemoryHw::FlatRead32((r13 + -14256));
}

loc_804E731C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E732C;
    }
}

loc_804E7320:
{
}

loc_804E7324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E733C;
    }
}

loc_804E7328:
{
    goto loc_804E734C;
}

loc_804E732C:
{
    r3 = 65536;
    r0 = (r3 + -29536);
    MemoryHw::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7354;
}

loc_804E733C:
{
    r3 = 65536;
    r0 = (r3 + -11536);
    MemoryHw::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7354;
}

loc_804E734C:
{
    r0 = 18000;
    MemoryHw::FlatWrite32((r13 + -14388), r0);
}

loc_804E7354:
{
    r3 = 131072;
    r0 = (r3 + -23072);
    MemoryHw::FlatWrite32((r13 + -14384), r0);
}

loc_804E7360:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14380), r0);
    MemoryHw::FlatWrite32((r13 + -14376), r0);
}

loc_804E736C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14244));
    MemoryHw::FlatWrite32((r13 + -19628), r29);
}

loc_804E7378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7450;
    }
}

loc_804E737C:
{
    r29 = 1;
    goto loc_804E743C;
}

loc_804E7384:
{
    r0 = MemoryHw::FlatRead32((r13 + -14224));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    r26 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(16));
}

loc_804E7398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7414;
    }
}

loc_804E739C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73D0;
    }
}

loc_804E73A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_804E73A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7404;
    }
}

loc_804E73A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73C4;
    }
}

loc_804E73AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_804E73B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E73FC;
    }
}

loc_804E73B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E7430;
    }
}

loc_804E73B8:
{
}

loc_804E73BC:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(1))) {
        goto loc_804E73F4;
    }
}

loc_804E73C0:
{
    goto loc_804E7430;
}

loc_804E73C4:
{
}

loc_804E73C8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(8))) {
        goto loc_804E740C;
    }
}

loc_804E73CC:
{
    goto loc_804E7430;
}

loc_804E73D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(64));
}

loc_804E73D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7424;
    }
}

loc_804E73D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73E8;
    }
}

loc_804E73DC:
{
}

loc_804E73E0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(32))) {
        goto loc_804E741C;
    }
}

loc_804E73E4:
{
    goto loc_804E7430;
}

loc_804E73E8:
{
}

loc_804E73EC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(128))) {
        goto loc_804E742C;
    }
}

loc_804E73F0:
{
    goto loc_804E7430;
}

loc_804E73F4:
{
    ctx->lr = 0x804E73F8u;
    if constexpr (KnownRegArgsCpuCall<0x804EA240u>(&func_804EA240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA240_99D1 = func_804EA240_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA240_99D1);
        r4 = static_cast<uint32_t>(regargs_result_804EA240_99D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E73FC:
{
    ctx->lr = 0x804E7400u;
    if constexpr (KnownRegArgsCpuCall<0x804EA2A0u>(&func_804EA2A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA2A0_A01B = func_804EA2A0_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA2A0_A01B);
        r4 = static_cast<uint32_t>(regargs_result_804EA2A0_A01B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7404:
{
    ctx->lr = 0x804E7408u;
    if constexpr (KnownRegArgsCpuCall<0x804EA310u>(&func_804EA310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA310_A680 = func_804EA310_ra400_0_18_0(ctx, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA310_A680);
        r4 = static_cast<uint32_t>(regargs_result_804EA310_A680 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E740C:
{
    ctx->lr = 0x804E7410u;
    if constexpr (KnownRegArgsCpuCall<0x804EA380u>(&func_804EA380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA380_AD1D = func_804EA380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EA380_AD1D);
        r4 = static_cast<uint32_t>(regargs_result_804EA380_AD1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7414:
{
    ctx->lr = 0x804E7418u;
    if constexpr (KnownRegArgsCpuCall<0x804EB270u>(&func_804EB270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EB270_B417 = func_804EB270_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB270_B417);
        r4 = static_cast<uint32_t>(regargs_result_804EB270_B417 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E741C:
{
    ctx->lr = 0x804E7420u;
    if constexpr (KnownRegArgsCpuCall<0x804EB290u>(&func_804EB290)) {
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
        func_804EB290_ra600_0_0_0(ctx, r9, r10);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB290u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7424:
{
    ctx->lr = 0x804E7428u;
    if constexpr (KnownRegArgsCpuCall<0x804EB310u>(&func_804EB310)) {
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
        func_804EB310_ra600_0_0_0(ctx, r9, r10);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E742C:
{
    ctx->lr = 0x804E7430u;
    if constexpr (KnownRegArgsCpuCall<0x804EB3B0u>(&func_804EB3B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EB3B0_C65F = func_804EB3B0_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB3B0_C65F);
        r4 = static_cast<uint32_t>(regargs_result_804EB3B0_C65F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB3B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804E7430:
{
    r0 = MemoryHw::FlatRead32((r13 + -14224));
    r0 = (r0 & ~r26);
    MemoryHw::FlatWrite32((r13 + -14224), r0);
}

loc_804E743C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14224));
}

loc_804E7444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7384;
    }
}

loc_804E7448:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14244), r0);
}

loc_804E7450:
{
    r0 = MemoryHw::FlatRead32((r13 + -14284));
}

loc_804E7458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7474;
    }
}

loc_804E745C:
{
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl12_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl12_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl12_cont_804CD870;
}

loc_inl12_return:
{
}

loc_inl12_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r12 = MemoryHw::FlatRead32((r13 + -14284));
    r3 = MemoryHw::FlatRead32((r13 + -14236));
    ctr = r12;
    ctx->lr = 0x804E7474u;
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

loc_804E7474:
{
    r3 = (r13 + -14272);
    ctx->lr = 0x804E747Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D51A0_D76A = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_D76A);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_D76A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        InvokeDirectCpu<0x804D51A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl13_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl13_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl13_cont_804CD870;
}

loc_inl13_return:
{
}

loc_inl13_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r28;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl14_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl14_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl14_0x804CD668;
    }
}

loc_inl14_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl14_cont_804CD630;
}

loc_inl14_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl14_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r0 = MemoryHw::FlatRead32((r13 + -14396));
}

loc_804E7494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E74BC;
    }
}

loc_804E7498:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x804E74A8u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_EA8C = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_EA8C);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_EA8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
}

loc_804E74AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E74BC;
    }
}

loc_804E74B0:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14396), r0);
    MemoryHw::FlatWrite32((r13 + -14380), r0);
}

loc_804E74BC:
{
    r0 = 10;
    r3 = (r30 + 328);
    ctr = r0;
}

loc_804E74C8:
{
    r0 = MemoryHw::FlatRead32(r3);
}

loc_804E74D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E74E0;
    }
}

loc_804E74D4:
{
    r0 = 0;
    MemoryHw::FlatWriteRam32((r30 + 328), r0);
    goto loc_804E74E8;
}

loc_804E74E0:
{
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E74C8;
    }
}

loc_804E74E8:
{
    r0 = MemoryHw::FlatRead32((r13 + -14260));
}

loc_804E74F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E74F4:
{
    r0 = MemoryHw::FlatRead32((r13 + -14264));
}

loc_804E74FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E7500:
{
    r0 = MemoryHw::FlatRead32((r30 + 328));
}

loc_804E7508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E750C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14248));
}

loc_804E7514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E7534;
    }
}

loc_804E7518:
{
    r3 = MemoryHw::FlatRead32((r13 + -14380));
    r0 = -1;
}

loc_804E7524:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804E7534;
    }
}

loc_804E7528:
{
    r3 = MemoryHw::FlatRead32((r13 + -14380));
    r0 = (r3 + 1);
    MemoryHw::FlatWrite32((r13 + -14380), r0);
}

loc_804E7534:
{
    r0 = MemoryHw::FlatRead32((r13 + -14252));
}

loc_804E753C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E75A0;
    }
}

loc_804E7540:
{
    r3 = MemoryHw::FlatRead32((r13 + -14376));
    r0 = -1;
}

loc_804E754C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804E75A0;
    }
}

loc_804E7550:
{
    r3 = MemoryHw::FlatRead32((r13 + -14376));
    r0 = (r3 + 1);
    MemoryHw::FlatWrite32((r13 + -14376), r0);
    goto loc_804E75A0;
}

loc_804E7560:
{
    r3 = MemoryHw::FlatRead32((r13 + -14380));
    r0 = MemoryHw::FlatRead32((r13 + -14392));
}

loc_804E756C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E7578;
    }
}

loc_804E7570:
{
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14312), r0);
}

loc_804E7578:
{
    r3 = MemoryHw::FlatRead32((r13 + -14376));
    r0 = MemoryHw::FlatRead32((r13 + -14384));
}

loc_804E7584:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E758C;
    }
}

loc_804E7588:
{
    // inline leaf 0x804AB6B0 (1 guest instruction(s))
    // end of inlined leaf 0x804AB6B0
}

loc_804E758C:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14380), r0);
    MemoryHw::FlatWrite32((r13 + -14376), r0);
    r0 = MemoryHw::FlatRead32((r13 + -14388));
    MemoryHw::FlatWrite32((r13 + -14392), r0);
}

loc_804E75A0:
{
    r3 = MemoryHw::FlatRead32((r13 + -19624));
    r0 = MemoryHw::FlatRead32((r13 + -14248));
}

loc_804E75AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_804E75E4;
    }
}

loc_804E75B0:
{
    r0 = MemoryHw::FlatRead32((r13 + -14248));
}

loc_804E75B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E75D4;
    }
}

loc_804E75BC:
{
    r3 = MemoryHw::FlatRead32((r13 + -14380));
    r0 = MemoryHw::FlatRead32((r13 + -14392));
}

loc_804E75C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E75D4;
    }
}

loc_804E75CC:
{
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14312), r0);
}

loc_804E75D4:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14380), r0);
    r0 = MemoryHw::FlatRead32((r13 + -14388));
    MemoryHw::FlatWrite32((r13 + -14392), r0);
}

loc_804E75E4:
{
    r3 = MemoryHw::FlatRead32((r13 + -14380));
    r0 = MemoryHw::FlatRead32((r13 + -14392));
}

loc_804E75F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804E75FC;
    }
}

loc_804E75F4:
{
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14316), r0);
}

loc_804E75FC:
{
    r0 = MemoryHw::FlatRead32((r13 + -14312));
}

loc_804E7604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E762C;
    }
}

loc_804E7608:
{
    r3 = 0;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x804E7618u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_1081F = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_1081F);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_1081F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
}

loc_804E761C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E762C;
    }
}

loc_804E7620:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14312), r0);
    MemoryHw::FlatWrite32((r13 + -14372), r0);
}

loc_804E762C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14316));
}

loc_804E7634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7660;
    }
}

loc_804E7638:
{
    r3 = 1;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x804E7648u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_1140B = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_1140B);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_1140B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
}

loc_804E764C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E7660;
    }
}

loc_804E7650:
{
    r3 = 0;
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14316), r3);
    MemoryHw::FlatWrite32((r13 + -14372), r0);
}

loc_804E7660:
{
    r3 = MemoryHw::FlatRead32((r13 + -19620));
    r0 = MemoryHw::FlatRead32((r13 + -14252));
}

loc_804E766C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_804E7698;
    }
}

loc_804E7670:
{
    r0 = MemoryHw::FlatRead32((r13 + -14252));
}

loc_804E7678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7690;
    }
}

loc_804E767C:
{
    r3 = MemoryHw::FlatRead32((r13 + -14376));
    r0 = MemoryHw::FlatRead32((r13 + -14384));
}

loc_804E7688:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E7690;
    }
}

loc_804E768C:
{
    // inline leaf 0x804AB6B0 (1 guest instruction(s))
    // end of inlined leaf 0x804AB6B0
}

loc_804E7690:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -14376), r0);
}

loc_804E7698:
{
    r3 = MemoryHw::FlatRead32((r13 + -14376));
    r0 = MemoryHw::FlatRead32((r13 + -14384));
}

loc_804E76A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804E76B8;
    }
}

loc_804E76A8:
{
    r3 = 0x80750000u;
    r4 = 0;
    r3 = (r3 + -29872);
    // inline leaf 0x804AB6A0 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x804AB6A0
}

loc_804E76B8:
{
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14260), r0);
    r3 = (r30 + 328);
    MemoryHw::FlatWrite32((r13 + -14264), r0);
    guest_range_0 = MemoryHw::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryHw::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryHw::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryHw::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryHw::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryHw::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryHw::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    r5 = MemoryHw::FlatRead32((r13 + -14248));
    r4 = MemoryHw::FlatRead32((r13 + -14252));
    r3 = MemoryHw::FlatRead32((r13 + -14388));
    r0 = MemoryHw::FlatRead32((r13 + -14380));
    MemoryHw::FlatWrite32((r13 + -19624), r5);
}

loc_804E7708:
{
    MemoryHw::FlatWrite32((r13 + -19620), r4);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_804E7724;
    }
}

loc_804E7710:
{
    r0 = MemoryHw::FlatRead32((r13 + -14372));
}

loc_804E7718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7724;
    }
}

loc_804E771C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14388));
    MemoryHw::FlatWrite32((r13 + -14392), r0);
}

loc_804E7724:
{
    r11 = (r1 + 752);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryHw::FlatRead32((r1 + 756));
    ctx->lr = r0;
    r1 = (r1 + 752);
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
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E6F30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E6F30_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E6F30 func_804E6F30 preserves=true fpr_mask=0x00000000
