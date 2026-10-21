#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_804BA2E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804BA2E0u);
    goto loc_804BA2E0;

loc_804BA2E0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -2300), 0, 76u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 52u, (r2 + -2248));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BA2FC:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 84u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 76u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 60u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 44u, (r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 28u, (r1 + 48), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 12u, (r1 + 32), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BA358;
    }
}

loc_804BA338:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2300));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_804BA36C;
}

loc_804BA358:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2300));
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -2240));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f26.d);
}

loc_804BA36C:
{
    r31 = 1127219200;
    stackword5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 68u, (r2 + -2232));
    f29.d = PpcFmulsInline(f1.d, f1.d);
    stackword6 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r30 = r3;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -2280));
    r29 = 0;
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2300));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r2 + -2236));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_804BA3A0:
{
    r0 = (r29 + 1);
    stackword7 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f29.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_1888 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_1888);
        r4 = static_cast<uint32_t>(regargs_result_80468848_1888 >> 32);
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_1CDD = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1CDD;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r29 = (r29 + 1);
    r0 = (r3 & 4095);
}

loc_804BA3E8:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(10))) {
        goto loc_804BA3A0;
    }
}

loc_804BA3F4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r1 + 132));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 92u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 76u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 60u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 12u, (r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC00001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BA2E0 func_804BA2E0 preserves=true fpr_mask=0x00000000
