#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80400024(CpuContext* ctx);
extern "C" uint64_t func_80400024_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804001FC(CpuContext* ctx);
extern "C" uint32_t func_804001FC_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804002E0(CpuContext* ctx);
extern "C" uint64_t func_804002E0_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804004A8(CpuContext* ctx);
extern "C" uint64_t func_804004A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804006C0(CpuContext* ctx);
extern "C" uint64_t func_804006C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400C14(CpuContext* ctx);
extern "C" uint64_t func_80400C14_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804127C0(CpuContext* ctx);
extern "C" uint64_t func_804127C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804167B4(CpuContext* ctx);
extern "C" uint64_t func_804167B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803FF6D4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803FF6D4;

loc_803FF6D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r5 = MemoryInline::FlatRead8((r3 + 24885));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(50));
}

loc_803FF6F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFA08;
    }
}

loc_803FF6F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF744;
    }
}

loc_803FF6FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(30));
}

loc_803FF700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF8E8;
    }
}

loc_803FF704:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF72C;
    }
}

loc_803FF708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_803FF70C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF7F4;
    }
}

loc_803FF710:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF720;
    }
}

loc_803FF714:
{
}

loc_803FF718:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(5))) {
        goto loc_803FF78C;
    }
}

loc_803FF71C:
{
    goto loc_803FFB60;
}

loc_803FF720:
{
}

loc_803FF724:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(20))) {
        goto loc_803FF8C0;
    }
}

loc_803FF728:
{
    goto loc_803FFB60;
}

loc_803FF72C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(40));
}

loc_803FF730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF944;
    }
}

loc_803FF734:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFB60;
    }
}

loc_803FF738:
{
}

loc_803FF73C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(35))) {
        goto loc_803FF8F8;
    }
}

loc_803FF740:
{
    goto loc_803FFB60;
}

loc_803FF744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(110));
}

loc_803FF748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFB08;
    }
}

loc_803FF74C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF774;
    }
}

loc_803FF750:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(70));
}

loc_803FF754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFAB8;
    }
}

loc_803FF758:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF768;
    }
}

loc_803FF75C:
{
}

loc_803FF760:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(60))) {
        goto loc_803FFA2C;
    }
}

loc_803FF764:
{
    goto loc_803FFB60;
}

loc_803FF768:
{
}

loc_803FF76C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(100))) {
        goto loc_803FFAE8;
    }
}

loc_803FF770:
{
    goto loc_803FFB60;
}

loc_803FF774:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(210));
}

loc_803FF778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFB3C;
    }
}

loc_803FF77C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFB60;
    }
}

loc_803FF780:
{
}

loc_803FF784:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(200))) {
        goto loc_803FFB2C;
    }
}

loc_803FF788:
{
    goto loc_803FFB60;
}

loc_803FF78C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -30379));
}

loc_803FF798:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803FF7E8;
    }
}

loc_803FF79C:
{
    r0 = MemoryInline::FlatRead8((r4 + -32068));
}

loc_803FF7A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FF7B4;
    }
}

loc_803FF7A8:
{
    r0 = (r5 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF7F4;
}

loc_803FF7B4:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r1 + 8);
    // inline leaf 0x80414B14 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1674));
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80414B14
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803FF7C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803FF7D8;
    }
}

loc_803FF7CC:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FF7D8:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF7F4;
}

loc_803FF7E8:
{
    r0 = (r5 + 1);
    r3 = (0 - r0);
    goto loc_803FFB64;
}

loc_803FF7F4:
{
    r30 = 0;
    r6 = 0;
    r5 = (r31 + 65536);
    r7 = MemoryInline::FlatRead32((r5 + -29764));
    ctr = r7;
}

loc_803FF80C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_803FF830;
    }
}

loc_803FF810:
{
    r4 = MemoryInline::FlatRead32((r5 + -29860));
    r3 = MemoryInline::FlatRead32((r5 + -29760));
    r3_addr_2 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_803FF820:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803FF830;
    }
}

loc_803FF824:
{
    r6 = (r6 + 92);
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FF810;
    }
}

loc_803FF830:
{
}

loc_803FF834:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r7))) {
        goto loc_803FF844;
    }
}

loc_803FF838:
{
    r0 = MemoryInline::FlatRead8((r31 + 24885));
    r3 = (0 - r0);
    goto loc_803FFB64;
}

loc_803FF844:
{
    r0 = 2;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -29812), r0);
    r3 = r31;
    // inline leaf 0x803FE544 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 25948));
    // end of inlined leaf 0x803FE544
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + -29816), r3);
    r3 = r31;
    // inline leaf 0x803FE54C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 25952));
    // end of inlined leaf 0x803FE54C
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + -29808), r3);
    r3 = r31;
    // inline leaf 0x803FE554 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 25956));
    // end of inlined leaf 0x803FE554
    r5 = (r31 + 65536);
    MemoryInline::FlatWrite32((r5 + -29804), r3);
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = r30;
    r5 = (r5 + -29860);
    ctx->lr = 0x803FF89Cu;
    if constexpr (KnownRegArgsCpuCall<0x804004A8u>(&func_804004A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804004A8_28CE = func_804004A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804004A8_28CE);
        r4 = static_cast<uint32_t>(regargs_result_804004A8_28CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x804004A8u>(ctx);
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
    r3 = r31;
    r4 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -29764));
    r4 = (r0 * 92);
    // inline leaf 0x803FDCD0 (13 guest instruction(s))
}

loc_inl5_0x803FDCD0:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -29732));
}

loc_inl5_0x803FDCDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_inl5_0x803FDCE4;
    }
}

loc_inl5_0x803FDCE0:
{
    r4 = r0;
}

loc_inl5_0x803FDCE4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -29732));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + -29732), r0);
    r0 = MemoryInline::FlatRead32((r3 + -29728));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + -29728), r0);
}

loc_inl5_cont_803FDCD0:
{
    // end of inlined leaf 0x803FDCD0
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -29760), r0);
    goto loc_803FFB60;
}

loc_803FF8C0:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -30376));
}

loc_803FF8CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803FF8E0;
    }
}

loc_803FF8D0:
{
    r0 = (r5 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF8DCu;
    if constexpr (KnownRegArgsCpuCall<0x80400024u>(&func_80400024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400024_36A8 = func_80400024_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400024_36A8);
        r4 = static_cast<uint32_t>(regargs_result_80400024_36A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80400024u>(ctx);
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
    goto loc_803FFB60;
}

loc_803FF8E0:
{
    r3 = (0 - r5);
    goto loc_803FFB64;
}

loc_803FF8E8:
{
    r0 = (r5 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    // inline leaf 0x804006B0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24887), static_cast<uint8_t>(r0));
    r3 = 0;
    // end of inlined leaf 0x804006B0
    goto loc_803FFB60;
}

loc_803FF8F8:
{
    r4 = 80;
    ctx->lr = 0x803FF900u;
    if constexpr (KnownRegArgsCpuCall<0x804006C0u>(&func_804006C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804006C0_4166 = func_804006C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804006C0_4166);
        r4 = static_cast<uint32_t>(regargs_result_804006C0_4166 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x804006C0u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_803FF904:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803FF930;
    }
}

loc_803FF908:
{
    r0 = MemoryInline::FlatRead32((r31 + 26120));
}

loc_803FF910:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803FF924;
    }
}

loc_803FF914:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FF924:
{
    r0 = MemoryInline::FlatRead8((r31 + 24885));
    r3 = (0 - r0);
    goto loc_803FFB64;
}

loc_803FF930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFB60;
    }
}

loc_803FF934:
{
    r0 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r0 + r3);
    r3 = (0 - r0);
    goto loc_803FFB64;
}

loc_803FF944:
{
    r7 = -1;
    r8 = -1;
    r9 = -1;
    r0 = -1;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32700), r0);
    r10 = 0;
    r5 = r31;
    goto loc_803FF9B0;
}

loc_803FF968:
{
    r6 = MemoryInline::FlatRead32((r5 + 27732));
}

loc_803FF970:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_803FF9A8;
    }
}

loc_803FF974:
{
    r0 = MemoryInline::FlatRead32((r5 + 27728));
    r0 = (r6 - r0);
}

loc_803FF980:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_803FF998;
    }
}

loc_803FF984:
{
    r9 = r8;
    MemoryInline::FlatWrite32((r4 + -32700), r7);
    r8 = r0;
    r7 = r10;
    goto loc_803FF9A8;
}

loc_803FF998:
{
}

loc_803FF99C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_803FF9A8;
    }
}

loc_803FF9A0:
{
    r9 = r0;
    MemoryInline::FlatWrite32((r4 + -32700), r10);
}

loc_803FF9A8:
{
    r5 = (r5 + 64);
    r10 = (r10 + 1);
}

loc_803FF9B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 26120));
}

loc_803FF9B8:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_803FF968;
    }
}

loc_803FF9BC:
{
    r4 = (r3 + 65536);
    r5 = MemoryInline::FlatRead32((r4 + -32700));
}

loc_803FF9C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(-1))) {
        goto loc_803FF9DC;
    }
}

loc_803FF9CC:
{
    r4 = MemoryInline::FlatRead8((r3 + 24885));
    r0 = (r4 + 20);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FF9DC:
{
    MemoryInline::FlatWrite32((r3 + 26104), r5);
    r4 = MemoryInline::FlatRead8((r3 + 24885));
    r0 = (r4 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r4 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 27712));
    r5 = 1;
    ctx->lr = 0x803FFA04u;
    if constexpr (KnownRegArgsCpuCall<0x80400C14u>(&func_80400C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400C14_5624 = func_80400C14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400C14_5624);
        r4 = static_cast<uint32_t>(regargs_result_80400C14_5624 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80400C14u>(ctx);
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
    goto loc_803FFB60;
}

loc_803FFA08:
{
    r3 = (r3 + 65536);
    r3 = (r3 + -32696);
    r4 = (r31 + 26394);
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 10);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FFA2C:
{
    r7 = -1;
    r8 = -1;
    r9 = 0;
    r4 = r31;
    r0 = MemoryInline::FlatRead32((r3 + 26120));
    ctr = r0;
}

loc_803FFA48:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803FFA7C;
    }
}

loc_803FFA4C:
{
    r6 = MemoryInline::FlatRead32((r4 + 27732));
}

loc_803FFA54:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_803FFA70;
    }
}

loc_803FFA58:
{
    r0 = MemoryInline::FlatRead32((r4 + 27728));
    r0 = (r6 - r0);
}

loc_803FFA64:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_803FFA70;
    }
}

loc_803FFA68:
{
    r8 = r0;
    r7 = r9;
}

loc_803FFA70:
{
    r4 = (r4 + 64);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FFA4C;
    }
}

loc_803FFA7C:
{
}

loc_803FFA80:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_803FFA8C;
    }
}

loc_803FFA84:
{
    r3 = (0 - r5);
    goto loc_803FFB64;
}

loc_803FFA8C:
{
    MemoryInline::FlatWrite32((r3 + 26104), r7);
    r4 = MemoryInline::FlatRead8((r3 + 24885));
    r0 = (r4 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r0 = (r0_rot_2 & -64);
    r4 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 27712));
    r5 = 1;
    ctx->lr = 0x803FFAB4u;
    if constexpr (KnownRegArgsCpuCall<0x80400C14u>(&func_80400C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400C14_66D2 = func_80400C14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400C14_66D2);
        r4 = static_cast<uint32_t>(regargs_result_80400C14_66D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80400C14u>(ctx);
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
    goto loc_803FFB60;
}

loc_803FFAB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 24808));
}

loc_803FFAC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FFAE0;
    }
}

loc_803FFAC4:
{
    r4 = 65536;
    r4 = (r4 + -32767);
    r5 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 26120));
    r8 = (r3 + 27712);
    ctx->lr = 0x803FFAE0u;
    if constexpr (KnownRegArgsCpuCall<0x804127C0u>(&func_804127C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804127C0_7148 = func_804127C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804127C0_7148);
        r4 = static_cast<uint32_t>(regargs_result_804127C0_7148 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x804127C0u>(ctx);
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

loc_803FFAE0:
{
    r3 = 1;
    goto loc_803FFB64;
}

loc_803FFAE8:
{
    r0 = 2;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite8((r4 + -32068), static_cast<uint8_t>(r0));
    r0 = (r5 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r4 = 2;
    ctx->lr = 0x803FFB04u;
    if constexpr (KnownRegArgsCpuCall<0x804002E0u>(&func_804002E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804002E0_7B64 = func_804002E0_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804002E0_7B64);
        r4 = static_cast<uint32_t>(regargs_result_804002E0_7B64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x804002E0u>(ctx);
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
    goto loc_803FFB60;
}

loc_803FFB08:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r31 + 65536);
    r4 = (r4 + -32035);
    r5 = (r31 + 65536);
    r5 = (r5 + -31991);
    ctx->lr = 0x803FFB20u;
    if constexpr (KnownRegArgsCpuCall<0x804167B4u>(&func_804167B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804167B4_84DC = func_804167B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804167B4_84DC);
        r4 = static_cast<uint32_t>(regargs_result_804167B4_84DC >> 32);
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
        InvokeDirectCpu<0x804167B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 200;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FFB2C:
{
    r0 = (r5 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FFB38u;
    if constexpr (KnownRegArgsCpuCall<0x804001FCu>(&func_804001FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804001FC_89DF = func_804001FC_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804001FC_89DF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x804001FCu>(ctx);
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
    goto loc_803FFB60;
}

loc_803FFB3C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -30377));
}

loc_803FFB48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803FFB58;
    }
}

loc_803FFB4C:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFB60;
}

loc_803FFB58:
{
    r3 = (0 - r5);
    goto loc_803FFB64;
}

loc_803FFB60:
{
    r3 = 0;
}

loc_803FFB64:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FF6D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FF6D4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FF6D4 func_803FF6D4 preserves=true fpr_mask=0x00000000
