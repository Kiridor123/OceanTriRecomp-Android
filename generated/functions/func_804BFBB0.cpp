#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BFBB0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_804BFBB0;

loc_804BFBB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r8 = 1127219200;
    r5 = (r5 ^ -2147483648);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r0 = (r4 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r4 = (r6 ^ -2147483648);
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r0 = (r7 ^ -2147483648);
    stackword3 = r8;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r8);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    stackword4 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r4);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f28.d);
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    r31 = r3;
    stackword6 = r8;
    stackword7 = r5;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r5);
    }
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword7));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_1290 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_1290);
        r4 = static_cast<uint32_t>(regargs_result_80468848_1290 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f29.d);
}

loc_804BFC4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BFC64;
    }
}

loc_804BFC54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    goto loc_804BFCA4;
}

loc_804BFC64:
{
    SetCRFloatResident(cr, 0, f2.d, f28.d);
}

loc_804BFC68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BFC84;
    }
}

loc_804BFC70:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f2.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    goto loc_804BFCA4;
}

loc_804BFC84:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
}

loc_804BFCA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BFBB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BFBB0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003EFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0000006 fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BFBB0 func_804BFBB0 preserves=true fpr_mask=0x00000000
