#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_80464948_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80464948;

loc_80464948:
{
    MemoryAlias::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 84), r0);
    r0 = 1072693248;
    MemoryAlias::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryAlias::FlatRead32((r1 + 8));
    r30 = (r31 & 2147483647);
}

loc_80464988:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_804649C8;
    }
}

loc_8046498C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    r3 = (r30 + -1072693248);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804649B4;
    }
}

loc_8046499C:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4072));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -4064));
    f2.d = (f2.d * f1.d);
    f0.d = (f0.d * f1.d);
    f1.d = (f2.d + f0.d);
    goto loc_80464BB0;
}

loc_804649B4:
{
    r3 = 0x80790000u;
    r0 = 33;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 25016));
    goto loc_80464BB0;
}

loc_804649C8:
{
    r0 = 1071644672;
}

loc_804649D0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_80464A84;
    }
}

loc_804649D4:
{
    r0 = 1044381696;
}

loc_804649DC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_804649F8;
    }
}

loc_804649E0:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4056));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -4048));
    f2.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804649F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804649FC;
    }
}

loc_804649F4:
{
    goto loc_80464BB0;
}

loc_804649F8:
{
    f31.d = (f1.d * f1.d);
}

loc_804649FC:
{
    guest_range_1 = MemoryAlias::ResolveRangeHost((r2 + -4048), 0, 88u, true, false);
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -4000));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -3968));
    f4.d = (f2.d * f31.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -4008));
    f8.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -4016));
    f2.d = (f0.d * f31.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 72u, (r2 + -3976));
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -4024));
    f4.d = (f3.d + f4.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -3984));
    f0.d = (f0.d + f2.d);
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -3992));
    f9.d = (f31.d * f4.d);
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -4032));
    f5.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -4040));
    f4.d = (f31.d * f0.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -4048));
    f8.d = (f8.d + f9.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f31.d * f8.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f7.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f31.d * f4.d);
    f2.d = (f31.d * f2.d);
    f3.d = (f6.d + f3.d);
    f2.d = (f0.d + f2.d);
    f0.d = (f31.d * f3.d);
    f0.d = (f5.d + f0.d);
    f0.d = (f31.d * f0.d);
    f0.d = (f0.d / f2.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d + f0.d);
    goto loc_80464BB0;
}

loc_80464A84:
{
    f1.d = std::fabs(f1.d);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r2 + -4048), 0, 96u, true, false);
    f11.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -4048));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -3960));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -4000));
    f3.d = (f11.d - f1.d);
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -3968));
    f9.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -4008));
    f8.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -4016));
    f31.d = (f2.d * f3.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -3976));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -3984));
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -4024));
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -4032));
    f10.d = (f0.d * f31.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -3992));
    f4.d = (f1.d * f31.d);
    f5.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -4040));
    f9.d = (f9.d + f10.d);
    f1.d = f31.d;
    f3.d = (f3.d + f4.d);
    f4.d = (f31.d * f9.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f31.d * f4.d);
    f2.d = (f31.d * f2.d);
    f3.d = (f7.d + f3.d);
    f0.d = (f0.d + f2.d);
    f2.d = (f31.d * f3.d);
    f0.d = (f31.d * f0.d);
    f2.d = (f6.d + f2.d);
    f29.d = (f11.d + f0.d);
    f0.d = (f31.d * f2.d);
    f0.d = (f5.d + f0.d);
    f30.d = (f31.d * f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_1D96 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_1D96);
        r4 = static_cast<uint32_t>(regargs_result_80468848_1D96 >> 32);
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
    r3 = 1072627712;
    r0 = (r3 + 13107);
}

loc_80464B20:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80464B4C;
    }
}

loc_80464B24:
{
    f4.d = (f30.d / f29.d);
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -3952));
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4064));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -4072));
    f4.d = (f1.d * f4.d);
    f1.d = (f1.d + f4.d);
    f1.d = (f3.d * f1.d);
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80464BA0;
}

loc_80464B4C:
{
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f1.d);
    r0 = 0;
    f5.d = MemoryAlias::FlatReadFloat64((r2 + -3952));
    f8.d = (f30.d / f29.d);
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -4064));
    f7.d = MemoryAlias::FlatReadFloat64((r1 + 16));
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -3944));
    f4.d = (f5.d * f1.d);
    f0.d = (f7.d * f7.d);
    f6.d = (f1.d + f7.d);
    f4.d = (f4.d * f8.d);
    f1.d = (f31.d - f0.d);
    f0.d = (f5.d * f7.d);
    f1.d = (f1.d / f6.d);
    f1.d = (f5.d * f1.d);
    f1.d = (f3.d - f1.d);
    f3.d = (f2.d - f0.d);
    f0.d = (f4.d - f1.d);
    f0.d = (f0.d - f3.d);
    f1.d = (f2.d - f0.d);
}

loc_80464BA0:
{
}

loc_80464BA4:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_80464BAC;
    }
}

loc_80464BA8:
{
    goto loc_80464BB0;
}

loc_80464BAC:
{
    f1.d = (-(f1.d));
}

loc_80464BB0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f30.d = MemoryAlias::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f29.d = MemoryAlias::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[11] = f11;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80464948(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80464948_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80464948 func_80464948 preserves=true fpr_mask=0x00000000
