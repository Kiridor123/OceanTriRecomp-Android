#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A294(CpuContext* ctx);
extern "C" uint64_t func_8026A294_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8026A2A0(CpuContext* ctx);
extern "C" uint32_t func_8026A2A0_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_8026A2A0_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" void func_8026A2A0_statefree_v0(uint32_t, uint32_t, PPC_FPR);

extern "C" uint64_t func_80279F20_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8027A044_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80279F20;

loc_80279F20:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1615));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80279F4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80279F70;
    }
}

loc_80279F50:
{
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14880));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        func_8026A2A0_statefree_v0(r3, r4, f1);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        const auto state_free_result_8026A2A0_1074 = func_8026A2A0_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_8026A2A0_1074[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026A2A0_1074[1]);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8027A040;
}

loc_80279F70:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1614), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80279FBC;
    }
}

loc_80279F98:
{
    r0 = (r4 & 65535);
}

loc_80279FA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1409))) {
        goto loc_80279FB4;
    }
}

loc_80279FA4:
{
    r31 = 1408;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1614), static_cast<uint8_t>(r0));
    goto loc_80279FE4;
}

loc_80279FB4:
{
    r31 = r4;
    goto loc_80279FE4;
}

loc_80279FBC:
{
    r0 = (r5 & 65535);
}

loc_80279FC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1410))) {
        goto loc_80279FD8;
    }
}

loc_80279FC8:
{
    r31 = 1408;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1614), static_cast<uint8_t>(r0));
    goto loc_80279FDC;
}

loc_80279FD8:
{
    r31 = r5;
}

loc_80279FDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14796));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_80279FE4:
{
    r3 = r30;
    // inline leaf 0x8026A3B0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // end of inlined leaf 0x8026A3B0
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14816));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r7 = fctiwzword0;
    r3 = r30;
    r4 = 1;
    r5 = (r31 & 65535);
    r6 = 0;
    ctx->lr = 0x8027A014u;
    if constexpr (KnownRegArgsCpuCall<0x8026A294u>(&func_8026A294)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8026A294_1ED1 = func_8026A294_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A294_1ED1);
        r4 = static_cast<uint32_t>(regargs_result_8026A294_1ED1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A294u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14792));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r3 = r30;
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14880));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        func_8026A2A0_statefree_v0(r3, r4, f1);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        const auto state_free_result_8026A2A0_2CF2 = func_8026A2A0_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_8026A2A0_2CF2[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026A2A0_2CF2[1]);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027A040:
{
    r0 = 40;
    addr_psqx_8027A044_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027A044_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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

extern "C" void func_80279F20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80279F20_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000038FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FF9 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80279F20 func_80279F20 preserves=true fpr_mask=0x00000000
