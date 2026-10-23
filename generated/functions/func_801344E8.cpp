#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A68(CpuContext* ctx);
extern "C" uint64_t func_800A8A68_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_801344E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_psqx_80134618_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801344E8;

loc_801344E8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead8((r3 + 1154));
}

loc_80134524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013458C;
    }
}

loc_80134528:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80134530:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80134540;
    }
}

loc_80134534:
{
    // inline leaf 0x8012F958 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 200));
    // end of inlined leaf 0x8012F958
    f31.d = f1.d;
    goto loc_80134554;
}

loc_80134540:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80134554:
{
    r3 = r30;
    // inline leaf 0x8012F948 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    // end of inlined leaf 0x8012F948
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 14));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    ctx->lr = 0x8013457Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A68u>(&func_800A8A68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800A8A68_E51 = func_800A8A68_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800A8A68_E51);
        r4 = static_cast<uint32_t>(regargs_result_800A8A68_E51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800A8A68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    goto loc_80134614;
}

loc_8013458C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80134594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801345AC;
    }
}

loc_80134598:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801345A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801345AC;
    }
}

loc_801345A4:
{
    // inline leaf 0x8012F958 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 200));
    // end of inlined leaf 0x8012F958
    goto loc_801345C4;
}

loc_801345AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_801345C4:
{
    r0 = MemoryInline::FlatRead32(r31);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = r30;
    // inline leaf 0x8012F948 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    // end of inlined leaf 0x8012F948
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    ctx->lr = 0x80134608u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A68u>(&func_800A8A68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800A8A68_1B63 = func_800A8A68_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800A8A68_1B63);
        r4 = static_cast<uint32_t>(regargs_result_800A8A68_1B63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800A8A68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
}

loc_80134614:
{
    r0 = 56;
    addr_psqx_80134618_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80134618_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801344E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801344E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801344E8 func_801344E8 preserves=true fpr_mask=0x00000000
