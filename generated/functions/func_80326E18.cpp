#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80326E18_ra38_1e0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80326F50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80326E18u);
    goto loc_80326E18;

loc_80326E18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 10));
    ctx->lr = 0x80326E44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 1132));
    ctx->lr = 0x80326E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r31 = r3;
}

loc_80326E58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80326F44;
    }
}

loc_80326E5C:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80326E64:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r4))) {
        goto loc_80326E74;
    }
}

loc_80326E68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11004));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326E74:
{
}

loc_80326E78:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80326F38;
    }
}

loc_80326E7C:
{
    r3 = (r30 + 392);
    r4 = (r4 + 392);
    ctx->lr = 0x80326E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r3 = (r30 + 392);
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r4 = (r4 + 392);
    ctx->lr = 0x80326E9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_10DD = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_10DD);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_10DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r30 + 448));
    r0 = (r3 - r0);
    r3 = (r0 & 65535);
}

loc_80326EAC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(32768))) {
        goto loc_80326EB8;
    }
}

loc_80326EB0:
{
    r0 = 65536;
    r3 = (r0 - r3);
}

loc_80326EB8:
{
}

loc_80326EBC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(16384))) {
        goto loc_80326EFC;
    }
}

loc_80326EC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11000));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80326EC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80326ED8;
    }
}

loc_80326ECC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11004));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326ED8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10996));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80326EE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80326EF0;
    }
}

loc_80326EE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11012));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326EF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10992));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11000));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80326F04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80326F14;
    }
}

loc_80326F08:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11004));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326F14:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10996));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80326F1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80326F2C;
    }
}

loc_80326F20:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10988));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326F2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10984));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326F38:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11004));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
    goto loc_80326F4C;
}

loc_80326F44:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11004));
    MemoryInline::FlatWriteFloat32((r30 + 792), f0.d);
}

loc_80326F4C:
{
    r0 = 24;
    addr_psqx_80326F50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80326F50_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80326E18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80326E18_ra38_1e0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80326E18 func_80326E18 preserves=true fpr_mask=0x00000000
