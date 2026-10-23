#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80131098(CpuContext* ctx);
extern "C" uint64_t func_80131098_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801D6720(CpuContext* ctx);
extern "C" uint64_t func_801D6720_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801D67BC(CpuContext* ctx);
extern "C" uint64_t func_801D67BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801D683C(CpuContext* ctx);
extern "C" uint64_t func_801D683C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_801D690C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_801D690C;

loc_801D690C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r31 & 255);
}

loc_801D6938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D6970;
    }
}

loc_801D693C:
{
}

loc_801D6940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801D6A8C;
    }
}

loc_801D6944:
{
}

loc_801D6948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801D6AAC;
    }
}

loc_801D694C:
{
}

loc_801D6950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801D6AB4;
    }
}

loc_801D6954:
{
}

loc_801D6958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801D6AD4;
    }
}

loc_801D695C:
{
}

loc_801D6960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801D6AF4;
    }
}

loc_801D6964:
{
}

loc_801D6968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801D6C7C;
    }
}

loc_801D696C:
{
    goto loc_801D6C98;
}

loc_801D6970:
{
    r3 = MemoryInline::FlatRead8((r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_801D6980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801D6A84;
    }
}

loc_801D6984:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801D698C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801D69A4;
    }
}

loc_801D6990:
{
}

loc_801D6994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801D69DC;
    }
}

loc_801D6998:
{
}

loc_801D699C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801D6A14;
    }
}

loc_801D69A0:
{
    goto loc_801D6A84;
}

loc_801D69A4:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17936));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18324));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17932));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x801D69C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17928));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801D69CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D6A84;
    }
}

loc_801D69D4:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D69DC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17924));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18308));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17920));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x801D69FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17928));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801D6A04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D6A84;
    }
}

loc_801D6A0C:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6A14:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17916));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17912));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x801D6A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17928));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801D6A3C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D6A4C;
    }
}

loc_801D6A44:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6A4C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17908));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17904));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17900));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x801D6A6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17928));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801D6A74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D6A84;
    }
}

loc_801D6A7C:
{
    r3 = 1;
    goto loc_801D6C9C;
}

loc_801D6A84:
{
    r3 = 255;
    goto loc_801D6C9C;
}

loc_801D6A8C:
{
    r3 = r30;
    r4 = 28;
    r5 = 1;
    ctx->lr = 0x801D6A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80131098u>(&func_80131098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80131098_27CE = func_80131098_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80131098_27CE);
        r4 = static_cast<uint32_t>(regargs_result_80131098_27CE >> 32);
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
        InvokeDirectCpu<0x80131098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_801D6C9C;
}

loc_801D6AAC:
{
    r3 = MemoryInline::FlatRead8((r30 + 816));
    goto loc_801D6C9C;
}

loc_801D6AB4:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801D6AC8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801D6C98;
    }
}

loc_801D6ACC:
{
    r3 = 1;
    goto loc_801D6C9C;
}

loc_801D6AD4:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801D6AE8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801D6C98;
    }
}

loc_801D6AEC:
{
    r3 = 1;
    goto loc_801D6C9C;
}

loc_801D6AF4:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_801D6AFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801D6B18;
    }
}

loc_801D6B00:
{
    r3 = r30;
    r4 = 17;
    r5 = 3;
    r6 = (r30 + 392);
    ctx->lr = 0x801D6B14u;
    if constexpr (KnownRegArgsCpuCall<0x801D683Cu>(&func_801D683C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801D683C_3226 = func_801D683C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801D683C_3226);
        r4 = static_cast<uint32_t>(regargs_result_801D683C_3226 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801D683Cu>(ctx);
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
    goto loc_801D6B2C;
}

loc_801D6B18:
{
    r3 = r30;
    r4 = 12;
    r5 = 3;
    r6 = (r30 + 392);
    ctx->lr = 0x801D6B2Cu;
    if constexpr (KnownRegArgsCpuCall<0x801D683Cu>(&func_801D683C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801D683C_37E7 = func_801D683C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801D683C_37E7);
        r4 = static_cast<uint32_t>(regargs_result_801D683C_37E7 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801D683Cu>(ctx);
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
}

loc_801D6B2C:
{
    r0 = (r3 & 255);
}

loc_801D6B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D6B4C;
    }
}

loc_801D6B38:
{
}

loc_801D6B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801D6B90;
    }
}

loc_801D6B40:
{
}

loc_801D6B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801D6BD4;
    }
}

loc_801D6B48:
{
    goto loc_801D6C18;
}

loc_801D6B4C:
{
    r3 = 0;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6B58u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_3F3B = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_3F3B);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_3F3B >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6B5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6B88;
    }
}

loc_801D6B60:
{
    r3 = 1;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6B6Cu;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_44FA = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_44FA);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_44FA >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6B70:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6B88;
    }
}

loc_801D6B74:
{
    r3 = 2;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6B80u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_4AB9 = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_4AB9);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_4AB9 >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6B84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D6C18;
    }
}

loc_801D6B88:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6B90:
{
    r3 = 0;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_50B4 = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_50B4);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_50B4 >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6BA0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6BCC;
    }
}

loc_801D6BA4:
{
    r3 = 1;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6BB0u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_5673 = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_5673);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_5673 >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6BB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6BCC;
    }
}

loc_801D6BB8:
{
    r3 = 2;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6BC4u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_5C32 = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_5C32);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_5C32 >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6BC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D6C18;
    }
}

loc_801D6BCC:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6BD4:
{
    r3 = 0;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6BE0u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_622D = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_622D);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_622D >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6BE4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6C10;
    }
}

loc_801D6BE8:
{
    r3 = 1;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6BF4u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_67EC = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_67EC);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_67EC >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6BF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801D6C10;
    }
}

loc_801D6BFC:
{
    r3 = 2;
    r4 = (r30 + 876);
    ctx->lr = 0x801D6C08u;
    if constexpr (KnownRegArgsCpuCall<0x801D6720u>(&func_801D6720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801D6720_6DAB = func_801D6720_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801D6720_6DAB);
        r4 = static_cast<uint32_t>(regargs_result_801D6720_6DAB >> 32);
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
        InvokeDirectCpu<0x801D6720u>(ctx);
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
}

loc_801D6C0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D6C18;
    }
}

loc_801D6C10:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6C18:
{
    r3 = r30;
    ctx->lr = 0x801D6C20u;
    if constexpr (KnownRegArgsCpuCall<0x801D67BCu>(&func_801D67BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801D67BC_7376 = func_801D67BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801D67BC_7376);
        r4 = static_cast<uint32_t>(regargs_result_801D67BC_7376 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x801D67BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_801D6C24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D6C30;
    }
}

loc_801D6C28:
{
    r3 = 0;
    goto loc_801D6C9C;
}

loc_801D6C30:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_801D6C38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801D6C5C;
    }
}

loc_801D6C3C:
{
    r3 = r30;
    r4 = 9;
    r5 = 3;
    r6 = (r30 + 876);
    ctx->lr = 0x801D6C50u;
    if constexpr (KnownRegArgsCpuCall<0x801D683Cu>(&func_801D683C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801D683C_7986 = func_801D683C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801D683C_7986);
        r4 = static_cast<uint32_t>(regargs_result_801D683C_7986 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801D683Cu>(ctx);
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
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    goto loc_801D6C9C;
}

loc_801D6C5C:
{
    r3 = r30;
    r4 = 6;
    r5 = 3;
    r6 = (r30 + 876);
    ctx->lr = 0x801D6C70u;
    if constexpr (KnownRegArgsCpuCall<0x801D683Cu>(&func_801D683C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801D683C_7F70 = func_801D683C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801D683C_7F70);
        r4 = static_cast<uint32_t>(regargs_result_801D683C_7F70 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801D683Cu>(ctx);
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
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    goto loc_801D6C9C;
}

loc_801D6C7C:
{
    r3 = r30;
    ctx->lr = 0x801D6C84u;
    if constexpr (KnownRegArgsCpuCall<0x801D67BCu>(&func_801D67BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801D67BC_84D8 = func_801D67BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801D67BC_84D8);
        r4 = static_cast<uint32_t>(regargs_result_801D67BC_84D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x801D67BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_801D6C9C;
}

loc_801D6C98:
{
    r3 = 0;
}

loc_801D6C9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801D690C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801D690C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D690C func_801D690C preserves=true fpr_mask=0x00000000
