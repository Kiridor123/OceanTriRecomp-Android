#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2960(CpuContext* ctx);
extern "C" uint64_t func_800B2960_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B2C1C(CpuContext* ctx);
extern "C" uint64_t func_800B2C1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FE20(CpuContext* ctx);
extern "C" uint64_t func_8045FE20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B36D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B36D4;

loc_800B36D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B3714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B372C;
    }
}

loc_800B3718:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B3724:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B372C;
    }
}

loc_800B3728:
{
    r10 = 0;
}

loc_800B372C:
{
}

loc_800B3730:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B3748;
    }
}

loc_800B3734:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B3740:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3748;
    }
}

loc_800B3744:
{
    r9 = 0;
}

loc_800B3748:
{
}

loc_800B374C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B3760;
    }
}

loc_800B3750:
{
    r0 = (r11 + 1073741824);
}

loc_800B3758:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3760;
    }
}

loc_800B375C:
{
    r8 = 0;
}

loc_800B3760:
{
}

loc_800B3764:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B377C;
    }
}

loc_800B3768:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B3774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B377C;
    }
}

loc_800B3778:
{
    r7 = 0;
}

loc_800B377C:
{
}

loc_800B3780:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B3798;
    }
}

loc_800B3784:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B3790:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3798;
    }
}

loc_800B3794:
{
    r6 = 0;
}

loc_800B3798:
{
}

loc_800B379C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B37B4;
    }
}

loc_800B37A0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B37AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B37B4;
    }
}

loc_800B37B0:
{
    r5 = 0;
}

loc_800B37B4:
{
}

loc_800B37B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B37DC;
    }
}

loc_800B37BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 392;
    r5 = 0x80590000u;
    r5 = (r5 + 16084);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B37DCu;
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

loc_800B37DC:
{
    r3 = r31;
    r4 = (r13 + -31544);
    r5 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8045FE20u>(&func_8045FE20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FE20_13A0 = func_8045FE20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FE20_13A0);
        r4 = static_cast<uint32_t>(regargs_result_8045FE20_13A0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FE20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_800B37F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B3810;
    }
}

loc_800B37F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 400;
    r5 = 0x80590000u;
    r5 = (r5 + 16136);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B3810u;
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

loc_800B3810:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_800B381C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(254))) {
        goto loc_800B3830;
    }
}

loc_800B3820:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_800B3828:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_800B3830;
    }
}

loc_800B382C:
{
    r3 = 1;
}

loc_800B3830:
{
}

loc_800B3834:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B3854;
    }
}

loc_800B3838:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 401;
    r5 = 0x80590000u;
    r5 = (r5 + 16200);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B3854u;
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

loc_800B3854:
{
    // inline leaf 0x800B391C (2 guest instruction(s))
    r3 = 11;
    // end of inlined leaf 0x800B391C
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_800B3864:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800B3884;
    }
}

loc_800B3868:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 402;
    r5 = 0x80590000u;
    r5 = (r5 + 16280);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B3884u;
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

loc_800B3884:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r31 = (r31 + r0);
    r3 = r31;
    r4 = (r13 + -31544);
    r5 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8045FE20u>(&func_8045FE20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FE20_232F = func_8045FE20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FE20_232F);
        r4 = static_cast<uint32_t>(regargs_result_8045FE20_232F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FE20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_800B38A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B38C0;
    }
}

loc_800B38A4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 410;
    r5 = 0x80590000u;
    r5 = (r5 + 16332);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B38C0u;
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

loc_800B38C0:
{
    r31 = (r31 + 8);
    r3 = (r31 + 4);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r4 = r31;
    // inline leaf 0x805020E4 (28 guest instruction(s))
}

loc_inl1_0x805020E4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x805020EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8050211C;
    }
}

loc_inl1_0x805020F0:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_805020E4;
}

loc_inl1_0x8050211C:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_1 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_1, r5);
    r6 = r6_addr_1;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_805020E4:
{
    // end of inlined leaf 0x805020E4
    r3 = r31;
    ctx->lr = 0x800B38E8u;
    if constexpr (KnownRegArgsCpuCall<0x800B2C1Cu>(&func_800B2C1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2C1C_30FF = func_800B2C1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2C1C_30FF);
        r4 = static_cast<uint32_t>(regargs_result_800B2C1C_30FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2C1Cu>(ctx);
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
        cr = ctx->cr;
    }
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = r31;
    ctx->lr = 0x800B3900u;
    if constexpr (KnownRegArgsCpuCall<0x800B2960u>(&func_800B2960)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2960_37B3 = func_800B2960_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2960_37B3);
        r4 = static_cast<uint32_t>(regargs_result_800B2960_37B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2960u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B36D4 func_800B36D4 preserves=true fpr_mask=0x00000000
