#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805052A8(CpuContext* ctx);
extern "C" uint64_t func_805052A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80505930_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x80505930u);
    goto loc_80505930;

loc_80505930:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    r31 = (r5 + r0);
    r30 = r4;
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteFloat32(r4, f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f31.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f31.d);
}

loc_80505980:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    r3 = r29;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
    ctx->lr = 0x805059A0u;
    if constexpr (KnownRegArgsCpuCall<0x805052A8u>(&func_805052A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_805052A8_B61 = func_805052A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805052A8_B61);
        r4 = static_cast<uint32_t>(regargs_result_805052A8_B61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805052A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r31 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805059BC:
{
    r6 = (static_cast<int32_t>(r0) >> 1);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805059C8;
    }
}

loc_805059C4:
{
    goto loc_805059CC;
}

loc_805059C8:
{
    f1.d = f0.d;
}

loc_805059CC:
{
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805059DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805059E4;
    }
}

loc_805059E0:
{
    goto loc_805059E8;
}

loc_805059E4:
{
    f1.d = f0.d;
}

loc_805059E8:
{
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805059F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80505A00;
    }
}

loc_805059FC:
{
    goto loc_80505A04;
}

loc_80505A00:
{
    f1.d = f0.d;
}

loc_80505A04:
{
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80505A14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80505A1C;
    }
}

loc_80505A18:
{
    goto loc_80505A20;
}

loc_80505A1C:
{
    f1.d = f0.d;
}

loc_80505A20:
{
}

loc_80505A24:
{
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(0))) {
        goto loc_80505980;
    }
}

loc_80505A2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80505930(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80505930_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x000FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80505930 func_80505930 preserves=true fpr_mask=0x00000000
