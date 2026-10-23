#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800767C8(CpuContext* ctx);
extern "C" uint64_t func_800767C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800767F8(CpuContext* ctx);
extern "C" uint64_t func_800767F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078570(CpuContext* ctx);
extern "C" uint32_t func_80078570_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80095ECC(CpuContext* ctx);
extern "C" uint64_t func_80095ECC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2948(CpuContext* ctx);
extern "C" uint64_t func_800E2948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2FA4(CpuContext* ctx);
extern "C" uint64_t func_800E2FA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803BE20C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_803BE33C_loc_0 = 0;
    uint32_t addr_psqx_803BE348_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803BE20C;

loc_803BE20C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r28 = r3;
    f30.d = f1.d;
    r3 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x803BE24Cu;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767F8_C5C = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_C5C);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_C5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r29 = (r28 + 56);
    r3 = r29;
    ctx->lr = 0x803BE258u;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800E2948_FF6 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_FF6);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_FF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    mkw_gqr0 = ctx->gqr[0];
    r30 = r3;
    r28 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -5280));
    r31 = 1127219200;
    goto loc_803BE330;
}

loc_803BE26C:
{
    r3 = (r29 + 276);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x803BE284u;
    if constexpr (KnownRegArgsCpuCall<0x800767C8u>(&func_800767C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800767C8_15B7 = func_800767C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767C8_15B7);
        r4 = static_cast<uint32_t>(regargs_result_800767C8_15B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800767C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->lr = 0x803BE294u;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_19F6 = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_19F6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    r4 = (r1 + 28);
    r5 = (r1 + 9);
    r6 = (r1 + 20);
    r7 = (r1 + 24);
    r8 = (r1 + 8);
    ctx->lr = 0x803BE2B0u;
    if constexpr (KnownRegArgsCpuCall<0x80095ECCu>(&func_80095ECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80095ECC_1D16 = func_80095ECC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095ECC_1D16);
        r4 = static_cast<uint32_t>(regargs_result_80095ECC_1D16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80095ECCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    mkw_gqr0 = ctx->gqr[0];
    r6 = MemoryInline::FlatRead8((r1 + 9));
}

loc_803BE2B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803BE2C8;
    }
}

loc_803BE2BC:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803BE2C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803BE32C;
    }
}

loc_803BE2C8:
{
    r3 = r29;
    r4 = r28;
    r5 = MemoryInline::FlatRead32((r1 + 28));
    stackword8 = r6;
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    stackword9 = r31;
    MemoryInline::FlatWriteRam32((r1 + 40), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r6 = fctiwzword0;
    r6 = (r6 & 255);
    r7 = MemoryInline::FlatRead32((r1 + 20));
    r8 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    stackword11 = r31;
    MemoryInline::FlatWriteRam32((r1 + 56), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r9 = fctiwzword1;
    r9 = (r9 & 255);
    ctx->lr = 0x803BE32Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E2FA4u>(&func_800E2FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_800E2FA4_2828 = func_800E2FA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2FA4_2828);
        r4 = static_cast<uint32_t>(regargs_result_800E2FA4_2828 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800E2FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803BE32C:
{
    r28 = (r28 + 1);
}

loc_803BE330:
{
}

loc_803BE334:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r30))) {
        goto loc_803BE26C;
    }
}

loc_803BE338:
{
    r0 = 120;
    addr_psqx_803BE33C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BE33C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_803BE348_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BE348_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BE20C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BE20C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE20C func_803BE20C preserves=true fpr_mask=0x00000000
