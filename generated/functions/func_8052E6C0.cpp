#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052DC20(CpuContext* ctx);
extern "C" uint64_t func_8052DC20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052E6C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8052E6C0u);
    goto loc_8052E6C0;

loc_8052E6C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    f30.d = f1.d;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    r31 = r6;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    MemoryInline::FlatWriteFloat32(r3, f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 48), f31.d);
}

loc_8052E71C:
{
    f1.d = f30.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    r4 = r29;
    r5 = r30;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    r6 = r31;
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r3 = (r1 + 16);
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
    ctx->lr = 0x8052E748u;
    if constexpr (KnownRegArgsCpuCall<0x8052DC20u>(&func_8052DC20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8052DC20_D87 = func_8052DC20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052DC20_D87);
        r4 = static_cast<uint32_t>(regargs_result_8052DC20_D87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DC20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r30 = (r30 + r0);
    r31 = (r31 - r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E760:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052E768;
    }
}

loc_8052E764:
{
    goto loc_8052E76C;
}

loc_8052E768:
{
    f1.d = f0.d;
}

loc_8052E76C:
{
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E77C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052E784;
    }
}

loc_8052E780:
{
    goto loc_8052E788;
}

loc_8052E784:
{
    f1.d = f0.d;
}

loc_8052E788:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E798:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E7A0;
    }
}

loc_8052E79C:
{
    goto loc_8052E7A4;
}

loc_8052E7A0:
{
    f1.d = f0.d;
}

loc_8052E7A4:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E7B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E7BC;
    }
}

loc_8052E7B8:
{
    goto loc_8052E7C0;
}

loc_8052E7BC:
{
    f1.d = f0.d;
}

loc_8052E7C0:
{
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8052E7CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052E85C;
    }
}

loc_8052E7D0:
{
    f1.d = f30.d;
    r4 = r29;
    r3 = (r1 + 16);
    r7 = (r1 + 8);
    r5 = (r13 + -18792);
    r6 = 1;
    ctx->lr = 0x8052E7ECu;
    if constexpr (KnownRegArgsCpuCall<0x8052DC20u>(&func_8052DC20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8052DC20_1D64 = func_8052DC20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052DC20_1D64);
        r4 = static_cast<uint32_t>(regargs_result_8052DC20_1D64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DC20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E7F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052E800;
    }
}

loc_8052E7FC:
{
    goto loc_8052E804;
}

loc_8052E800:
{
    f1.d = f0.d;
}

loc_8052E804:
{
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E814:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052E81C;
    }
}

loc_8052E818:
{
    goto loc_8052E820;
}

loc_8052E81C:
{
    f1.d = f0.d;
}

loc_8052E820:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E838;
    }
}

loc_8052E834:
{
    goto loc_8052E83C;
}

loc_8052E838:
{
    f1.d = f0.d;
}

loc_8052E83C:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052E84C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E854;
    }
}

loc_8052E850:
{
    goto loc_8052E858;
}

loc_8052E854:
{
    f1.d = f0.d;
}

loc_8052E858:
{
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
}

loc_8052E85C:
{
}

loc_8052E860:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(0))) {
        goto loc_8052E71C;
    }
}

loc_8052E864:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052E6C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052E6C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052E6C0 func_8052E6C0 preserves=true fpr_mask=0x00000000
