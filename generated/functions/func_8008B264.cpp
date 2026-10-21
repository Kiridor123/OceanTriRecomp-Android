#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082F7C(CpuContext* ctx);
extern "C" uint64_t func_80082F7C_ra0_2_18_0(CpuContext*, double);
extern "C" void func_8008B6C8(CpuContext* ctx);
extern "C" uint64_t func_8008B6C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008B764(CpuContext* ctx);
extern "C" uint32_t func_8008B764_ra0_2_8_0(CpuContext*, double);
extern "C" void func_8008B780(CpuContext* ctx);
extern "C" uint64_t func_8008B780_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008B7F8(CpuContext* ctx);
extern "C" uint32_t func_8008B7F8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008B834(CpuContext* ctx);
extern "C" uint64_t func_8008B834_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8008B764_statefree(uint32_t, uint32_t, PPC_FPR, uint32_t, uint32_t);
extern "C" uint64_t func_8008B7F8_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8008B764_statefree_v0(uint32_t, PPC_FPR, uint32_t, uint32_t);

extern "C" void func_8008B264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8008B64C_loc_0 = 0;
    uint32_t addr_psqx_8008B658_loc_0 = 0;
    uint32_t addr_psqx_8008B664_loc_0 = 0;
    uint32_t addr_psqx_8008B670_loc_0 = 0;
    uint32_t addr_psqx_8008B67C_loc_0 = 0;
    uint32_t addr_psqx_8008B688_loc_0 = 0;
    uint32_t addr_psqx_8008B694_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];
    [[maybe_unused]] uint32_t mkw_gqr6 = ctx->gqr[6];
    [[maybe_unused]] uint32_t mkw_gqr7 = ctx->gqr[7];

    MKW_GUEST_ENTER(0x8008B264u);
    goto loc_8008B264;

loc_8008B264:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r31 = r3;
    f25.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008B2DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B2F4;
    }
}

loc_8008B2E0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008B2EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B2F4;
    }
}

loc_8008B2F0:
{
    r10 = 0;
}

loc_8008B2F4:
{
}

loc_8008B2F8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008B310;
    }
}

loc_8008B2FC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008B308:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B310;
    }
}

loc_8008B30C:
{
    r9 = 0;
}

loc_8008B310:
{
}

loc_8008B314:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008B328;
    }
}

loc_8008B318:
{
    r0 = (r11 + 1073741824);
}

loc_8008B320:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B328;
    }
}

loc_8008B324:
{
    r8 = 0;
}

loc_8008B328:
{
}

loc_8008B32C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008B344;
    }
}

loc_8008B330:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008B33C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B344;
    }
}

loc_8008B340:
{
    r7 = 0;
}

loc_8008B344:
{
}

loc_8008B348:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008B360;
    }
}

loc_8008B34C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008B358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B360;
    }
}

loc_8008B35C:
{
    r6 = 0;
}

loc_8008B360:
{
}

loc_8008B364:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008B37C;
    }
}

loc_8008B368:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008B374:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008B37C;
    }
}

loc_8008B378:
{
    r5 = 0;
}

loc_8008B37C:
{
}

loc_8008B380:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008B3A4;
    }
}

loc_8008B384:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 252;
    r5 = 0x80590000u;
    r5 = (r5 + 2120);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008B3A4u;
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
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr6 = ctx->gqr[6];
    mkw_gqr7 = ctx->gqr[7];
}

loc_8008B3A4:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8008B3B0u;
    if constexpr (KnownRegArgsCpuCall<0x8008B834u>(&func_8008B834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B834_215A = func_8008B834_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B834_215A);
        r4 = static_cast<uint32_t>(regargs_result_8008B834_215A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 20);
    ctx->lr = 0x8008B3C0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008B7F8u) && KnownTranslatedCpuCall<0x8008B7F8u>::kAvailable && !KnownTranslatedCpuCall<0x8008B7F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008B7F8u>()) {
        const auto state_free_result_8008B7F8_2538 = func_8008B7F8_statefree(r1, r3, r4, 0x8008B3C0u);
        r1 = static_cast<uint32_t>(state_free_result_8008B7F8_2538);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008B7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead16(r31);
    r4 = (r4 + -1);
    ctx->lr = 0x8008B3D0u;
    if constexpr (KnownRegArgsCpuCall<0x8008B834u>(&func_8008B834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B834_2CCD = func_8008B834_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B834_2CCD);
        r4 = static_cast<uint32_t>(regargs_result_8008B834_2CCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->lr = 0x8008B3E0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008B7F8u) && KnownTranslatedCpuCall<0x8008B7F8u>::kAvailable && !KnownTranslatedCpuCall<0x8008B7F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008B7F8u>()) {
        const auto state_free_result_8008B7F8_30AB = func_8008B7F8_statefree(r1, r3, r4, 0x8008B3E0u);
        r1 = static_cast<uint32_t>(state_free_result_8008B7F8_30AB);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008B7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 36);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl0_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl0_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    SetCRFloatResident(cr, 0, f25.d, PPC_PsToScalarInline(f1.d));
}

loc_8008B3EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B404;
    }
}

loc_8008B3F4:
{
    r3 = (r1 + 36);
    r4 = r31;
    ctx->lr = 0x8008B400u;
    if constexpr (KnownRegArgsCpuCall<0x8008B780u>(&func_8008B780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8008B780_3AE8 = func_8008B780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B780_3AE8);
        r4 = static_cast<uint32_t>(regargs_result_8008B780_3AE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8008B780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    goto loc_8008B648;
}

loc_8008B404:
{
    r3 = (r1 + 32);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl1_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl1_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f25.d);
}

loc_8008B410:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B428;
    }
}

loc_8008B418:
{
    r3 = (r1 + 32);
    r4 = r31;
    ctx->lr = 0x8008B424u;
    if constexpr (KnownRegArgsCpuCall<0x8008B780u>(&func_8008B780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8008B780_41C3 = func_8008B780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B780_41C3);
        r4 = static_cast<uint32_t>(regargs_result_8008B780_41C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8008B780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    goto loc_8008B648;
}

loc_8008B428:
{
    r3 = (r1 + 36);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl2_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl2_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    f31.d = static_cast<double>(PpcForceSingleValueInline(f25.d - PPC_PsToScalarInline(f1.d)));
    r3 = MemoryInline::FlatRead16(r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050248u>(ctx);
    f1 = ctx->fpr[1];
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8008B44Cu;
    if constexpr (KnownRegArgsCpuCall<0x80082F7Cu>(&func_80082F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082F7C_4880 = func_80082F7C_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80082F7C_4880);
        r4 = static_cast<uint32_t>(regargs_result_80082F7C_4880 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80082F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r30 = r3;
    r4 = MemoryInline::FlatRead16(r31);
    r7 = (r4 + -1);
    r0 = (r3 & 65535);
}

loc_8008B460:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r7))) {
        goto loc_8008B4B0;
    }
}

loc_8008B464:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 282;
    r5 = 0x80590000u;
    r5 = (r5 + 2172);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31688));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r6 = 1127219200;
    stackword7 = r6;
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = (f0.d - f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31680));
    r0 = (r7 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    stackword9 = r6;
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f2.d = (f0.d - f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008B4B0u;
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
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr6 = ctx->gqr[6];
    mkw_gqr7 = ctx->gqr[7];
}

loc_8008B4B0:
{
    r3 = r31;
    r4 = (r30 & 65535);
    ctx->lr = 0x8008B4BCu;
    if constexpr (KnownRegArgsCpuCall<0x8008B834u>(&func_8008B834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B834_5222 = func_8008B834_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B834_5222);
        r4 = static_cast<uint32_t>(regargs_result_8008B834_5222 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 12);
    ctx->lr = 0x8008B4CCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008B7F8u) && KnownTranslatedCpuCall<0x8008B7F8u>::kAvailable && !KnownTranslatedCpuCall<0x8008B7F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008B7F8u>()) {
        const auto state_free_result_8008B7F8_5600 = func_8008B7F8_statefree(r1, r3, r4, 0x8008B4CCu);
        r1 = static_cast<uint32_t>(state_free_result_8008B7F8_5600);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008B7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_8008B764_5CD5 = func_8008B764_statefree_v0(r1, f1, 0x8008B4D4u, ctx->gqr[6]);
        r1 = static_cast<uint32_t>(state_free_result_8008B764_5CD5[0]);
        r3 = static_cast<uint32_t>(state_free_result_8008B764_5CD5[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008B764u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r30 = r3;
    r3 = (r1 + 28);
    // inline leaf 0x8008B758 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16(r3);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x8008B758
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_8008B4EC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_8008B514;
    }
}

loc_8008B4F0:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008B748 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -6);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008B748
    r3 = (r1 + 28);
    // inline leaf 0x8008B758 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16(r3);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x8008B758
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8008B50C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_8008B4F0;
    }
}

loc_8008B510:
{
    goto loc_8008B540;
}

loc_8008B514:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008B738 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 6);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008B738
    r3 = (r1 + 28);
    // inline leaf 0x8008B758 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16(r3);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x8008B758
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8008B530:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_8008B514;
    }
}

loc_8008B534:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008B748 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -6);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008B748
}

loc_8008B540:
{
    r3 = (r1 + 28);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl9_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl9_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl9_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    SetCRFloatResident(cr, 0, f25.d, PPC_PsToScalarInline(f1.d));
}

loc_8008B54C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B560;
    }
}

loc_8008B550:
{
    r3 = (r1 + 28);
    r4 = r31;
    ctx->lr = 0x8008B55Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B780u>(&func_8008B780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8008B780_6F56 = func_8008B780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B780_6F56);
        r4 = static_cast<uint32_t>(regargs_result_8008B780_6F56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8008B780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    goto loc_8008B648;
}

loc_8008B560:
{
    r3 = (r1 + 28);
    r4 = 1;
    ctx->lr = 0x8008B56Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B6C8u>(&func_8008B6C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B6C8_735F = func_8008B6C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B6C8_735F);
        r4 = static_cast<uint32_t>(regargs_result_8008B6C8_735F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B6C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x8008B57Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008B7F8u) && KnownTranslatedCpuCall<0x8008B7F8u>::kAvailable && !KnownTranslatedCpuCall<0x8008B7F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008B7F8u>()) {
        const auto state_free_result_8008B7F8_773B = func_8008B7F8_statefree(r1, r3, r4, 0x8008B57Cu);
        r1 = static_cast<uint32_t>(state_free_result_8008B7F8_773B);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008B7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 28);
    r4 = r31;
    ctx->lr = 0x8008B588u;
    if constexpr (KnownRegArgsCpuCall<0x8008B780u>(&func_8008B780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8008B780_7EDC = func_8008B780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B780_7EDC);
        r4 = static_cast<uint32_t>(regargs_result_8008B780_7EDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8008B780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f31.d = f1.d;
    r3 = (r1 + 28);
    // inline leaf 0x8008B6B4 (5 guest instruction(s))
}

loc_inl10_0x8008B6B4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 4);
}

loc_inl10_0x8008B6C0:
{
    // psq_load w=1 quant=7 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 7u>(ctx, mkw_gqr7, r3));
}

loc_inl10_cont_8008B6B4:
{
    // end of inlined leaf 0x8008B6B4
    f30.d = f1.d;
    r3 = (r1 + 24);
    r4 = r31;
    ctx->lr = 0x8008B5A4u;
    if constexpr (KnownRegArgsCpuCall<0x8008B780u>(&func_8008B780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8008B780_848E = func_8008B780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B780_848E);
        r4 = static_cast<uint32_t>(regargs_result_8008B780_848E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8008B780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f29.d = f1.d;
    r3 = (r1 + 24);
    // inline leaf 0x8008B6B4 (5 guest instruction(s))
}

loc_inl11_0x8008B6B4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 4);
}

loc_inl11_0x8008B6C0:
{
    // psq_load w=1 quant=7 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 7u>(ctx, mkw_gqr7, r3));
}

loc_inl11_cont_8008B6B4:
{
    // end of inlined leaf 0x8008B6B4
    f28.d = f1.d;
    r3 = (r1 + 28);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl12_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl12_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl12_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    f27.d = f1.d;
    r3 = (r1 + 24);
    // inline leaf 0x8008B7E8 (4 guest instruction(s))
}

loc_inl13_0x8008B7E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl13_0x8008B7F0:
{
    // psq_load w=1 quant=6 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 6u>(ctx, mkw_gqr6, r3));
}

loc_inl13_cont_8008B7E8:
{
    // end of inlined leaf 0x8008B7E8
    f26.d = f1.d;
    r0 = 0;
    SetCRFloatResident(cr, 0, f25.d, PPC_PsToScalarInline(f27.d));
}

loc_8008B5D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B5EC;
    }
}

loc_8008B5DC:
{
    SetCRFloatResident(cr, 0, f25.d, PPC_PsToScalarInline(f1.d));
}

loc_8008B5E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B5EC;
    }
}

loc_8008B5E8:
{
    r0 = 1;
}

loc_8008B5EC:
{
}

loc_8008B5F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008B61C;
    }
}

loc_8008B5F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 336;
    r5 = 0x80590000u;
    r5 = (r5 + 2240);
    f1.d = f25.d;
    f2.d = f27.d;
    f3.d = f26.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008B61Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    InvokeDirectCpu<0x80501130u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr6 = ctx->gqr[6];
    mkw_gqr7 = ctx->gqr[7];
}

loc_8008B61C:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d - PPC_PsToScalarInline(f27.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f26.d) - PPC_PsToScalarInline(f27.d)));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f0.d = f1.d;
    f1.d = f31.d;
    f2.d = f30.d;
    f3.d = f29.d;
    f4.d = f28.d;
    f5.d = PpcFmulsInline(f25.d, PPC_PsToScalarInline(f0.d));
    f6.d = f25.d;
    // inline leaf 0x8008AF34 (14 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f0.d = PpcFmulsInline(f5.d, PPC_PsToScalarInline(f4.d));
    f4.d = PPC_Fmadds(f7.d, PPC_PsToScalarInline(f2.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31668));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31664));
    f2.d = PPC_Fmsubs(f2.d, f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PPC_Fmadds(f5.d, f0.d, f1.d);
    f1.d = PPC_Fmadds(f6.d, f4.d, f0.d);
    // end of inlined leaf 0x8008AF34
}

loc_8008B648:
{
    r0 = 168;
    addr_psqx_8008B64C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B64C_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 128u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r1 + 160));
    r0 = 152;
    addr_psqx_8008B658_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B658_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 144));
    r0 = 136;
    addr_psqx_8008B664_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B664_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 128));
    r0 = 120;
    addr_psqx_8008B670_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B670_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 112));
    r0 = 104;
    addr_psqx_8008B67C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B67C_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 96));
    r0 = 88;
    addr_psqx_8008B688_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B688_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 80));
    r0 = 72;
    addr_psqx_8008B694_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008B694_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r1 + 64));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[25] = f25;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xFE0000FF fpr_write=0xFE0000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008B264 func_8008B264 preserves=true fpr_mask=0x00000000
