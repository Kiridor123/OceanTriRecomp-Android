#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801260A8(CpuContext* ctx);
extern "C" uint32_t func_801260A8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4F2C(CpuContext* ctx);
extern "C" uint32_t func_803B4F2C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B5094(CpuContext* ctx);
extern "C" uint32_t func_803B5094_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80132004(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80132004;

loc_80132004:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    ctx->lr = 0x80132024u;
    if constexpr (KnownRegArgsCpuCall<0x801260A8u>(&func_801260A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801260A8_5A7 = func_801260A8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801260A8_5A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x801260A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r31 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r30 + 1956), r0);
    r3 = 0;
    ctx->lr = 0x80132060u;
    if constexpr (KnownRegArgsCpuCall<0x803B4F2Cu>(&func_803B4F2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B4F2C_AF4 = func_803B4F2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4F2C_AF4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B4F2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80132064:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80132078;
    }
}

loc_80132068:
{
    r3 = 0;
    ctx->lr = 0x80132070u;
    if constexpr (KnownRegArgsCpuCall<0x803B5094u>(&func_803B5094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B5094_DFD = func_803B5094_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5094_DFD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B5094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80132074:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801320B0;
    }
}

loc_80132078:
{
    r0 = MemoryInline::FlatRead32((r30 + 1956));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28100));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r30 + 1956), r0);
}

loc_801320B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80132004 func_80132004 preserves=true fpr_mask=0x00000000
