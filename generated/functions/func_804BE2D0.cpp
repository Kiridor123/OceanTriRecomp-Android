#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BE2D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804BE2D0u);
    goto loc_804BE2D0;

loc_804BE2D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1240));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1244));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_93E = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_93E);
        r4 = static_cast<uint32_t>(regargs_result_80468848_93E >> 32);
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
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_804BE318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BE440;
    }
}

loc_804BE31C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2184));
    SetCRFloatResident(cr, 0, f8.d, f2.d);
}

loc_804BE324:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BE330;
    }
}

loc_804BE32C:
{
    goto loc_804BE440;
}

loc_804BE330:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1240));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1244));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f8.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f8.d));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_804BE348:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BE350;
    }
}

loc_804BE34C:
{
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
}

loc_804BE350:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 216));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 212));
    f4.d = PpcFmulsInline(f0.d, f10.d);
    f7.d = MemoryInline::FlatReadFloat32((r13 + -32636));
    f5.d = PpcFmulsInline(f6.d, f9.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1260));
    f2.d = PpcFmulsInline(f0.d, f9.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1264));
    f0.d = PpcFmulsInline(f6.d, f10.d);
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f8.d = PpcFmulsInline(f8.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_169E = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_169E);
        r4 = static_cast<uint32_t>(regargs_result_80468848_169E >> 32);
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
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804BE3B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BE440;
    }
}

loc_804BE3BC:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 1268));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1272));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1344));
    MemoryInline::FlatWriteFloat32((r31 + 1260), f7.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1264), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32632));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1268), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32632));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = PpcFmulsInline(f4.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1272), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BE418:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BE438;
    }
}

loc_804BE420:
{
    r3 = MemoryInline::FlatRead16((r31 + 1276));
}

loc_804BE428:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BE440;
    }
}

loc_804BE42C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1276), static_cast<uint16_t>(r0));
    goto loc_804BE440;
}

loc_804BE438:
{
    r0 = MemoryInline::FlatRead16((r13 + -32628));
    MemoryInline::FlatWrite16((r31 + 1276), static_cast<uint16_t>(r0));
}

loc_804BE440:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BE2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BE2D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC00007FF fpr_write=0xC00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BE2D0 func_804BE2D0 preserves=true fpr_mask=0x00000000
