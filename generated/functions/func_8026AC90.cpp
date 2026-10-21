#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A77C(CpuContext* ctx);
extern "C" void func_8026A77C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026FECC(CpuContext* ctx);
extern "C" uint32_t func_8026FECC_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FEFC(CpuContext* ctx);
extern "C" uint32_t func_8026FEFC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BED2C(CpuContext* ctx);
extern "C" uint64_t func_803BED2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8026FEFC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8026FEFC_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8026AC90_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8026AC90u);
    goto loc_8026AC90;

loc_8026AC90:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r30 = 0;
    r4 = 9;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r3 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r3 & 2048);
}

loc_8026ACC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ACE0;
    }
}

loc_8026ACCC:
{
    r3 = r31;
    r4 = 5;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r30 = 1;
    goto loc_8026ACFC;
}

loc_8026ACE0:
{
    r0 = (r3 & 1024);
}

loc_8026ACE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ACFC;
    }
}

loc_8026ACEC:
{
    r3 = r31;
    r4 = 7;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r30 = 1;
}

loc_8026ACFC:
{
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & 2048);
}

loc_8026AD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026AD20;
    }
}

loc_8026AD0C:
{
    r3 = r31;
    r4 = 6;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r30 = 1;
    goto loc_8026AD3C;
}

loc_8026AD20:
{
    r0 = (r3 & 1024);
}

loc_8026AD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026AD3C;
    }
}

loc_8026AD2C:
{
    r3 = r31;
    r4 = 8;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r30 = 1;
}

loc_8026AD3C:
{
}

loc_8026AD40:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8026AD50;
    }
}

loc_8026AD44:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8026AD4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8026ADC0;
    }
}

loc_8026AD50:
{
    r3 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r3 & 8192);
}

loc_8026AD5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026AD70;
    }
}

loc_8026AD60:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026AD88;
}

loc_8026AD70:
{
    r0 = (r3 & 4096);
}

loc_8026AD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026AD88;
    }
}

loc_8026AD7C:
{
    r3 = r31;
    r4 = 3;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026AD88:
{
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & 8192);
}

loc_8026AD94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ADA8;
    }
}

loc_8026AD98:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026ADC0;
}

loc_8026ADA8:
{
    r0 = (r3 & 4096);
}

loc_8026ADB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ADC0;
    }
}

loc_8026ADB4:
{
    r3 = r31;
    r4 = 4;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026ADC0:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = 10;
    r5 = 1;
    ctx->lr = 0x8026ADD0u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BED2C_1AAD = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_1AAD);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_1AAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8026ADD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026AE4C;
    }
}

loc_8026ADD8:
{
    r0 = MemoryInline::FlatRead8((r29 + 112));
}

loc_8026ADE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026AE4C;
    }
}

loc_8026ADE4:
{
    r3 = r31;
    r4 = 1;
    r5 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026FECCu>(&func_8026FECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FECC_1F22 = func_8026FECC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8026FECC_1F22;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FECCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_8026ADF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026AE4C;
    }
}

loc_8026ADFC:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8026AE04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8026AE4C;
    }
}

loc_8026AE08:
{
    r3 = r31;
    r4 = 448;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026FEFCu) && KnownTranslatedCpuCall<0x8026FEFCu>::kAvailable && !KnownTranslatedCpuCall<0x8026FEFCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026FEFCu>()) {
        const auto state_free_result_8026FEFC_2357 = func_8026FEFC_statefree_v0(r3, r4, xer);
        r0 = static_cast<uint32_t>(state_free_result_8026FEFC_2357[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026FEFC_2357[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FEFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026AE18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026AE4C;
    }
}

loc_8026AE1C:
{
    r3 = r31;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A77Cu>(&func_8026A77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8026A77C_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A77Cu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A77Cu>(&func_8026A77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8026A77C_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A77Cu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A77Cu>(&func_8026A77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8026A77C_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A77Cu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A77Cu>(&func_8026A77C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_8026A77C_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A77Cu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8026AE4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026AC90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026AC90_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026AC90 func_8026AC90 preserves=true fpr_mask=0x00000000
