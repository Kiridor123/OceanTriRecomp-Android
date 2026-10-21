#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477B90(CpuContext* ctx);
extern "C" uint64_t func_80477B90_ra90_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80478E10(CpuContext* ctx);
extern "C" uint32_t func_80478E10_ra0_0_8_0(CpuContext*);

extern "C" void func_80478E10_statefree();

extern "C" uint64_t func_804793A0_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x804793A0u);
    goto loc_804793A0;

loc_804793A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 196608;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -29984);
    r30 = 0x80710000u;
    r3 = (r30 + -3456);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x804793D0u;
    if constexpr (KnownRegArgsCpuCall<0x80477B90u>(&func_80477B90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80477B90_5C4 = func_80477B90_ra90_0_18_0(ctx, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_80477B90_5C4);
        r4 = static_cast<uint32_t>(regargs_result_80477B90_5C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80477B90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80478E10u) && KnownTranslatedCpuCall<0x80478E10u>::kAvailable && !KnownTranslatedCpuCall<0x80478E10u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80478E10u>()) {
        func_80478E10_statefree();
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
    r31 = (r30 + -3456);
    r4 = 1;
    r3 = (r31 + 196608);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + -30718), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + -30744), r0);
    MemoryInline::FlatWriteRam32((r3 + -30648), r0);
    MemoryInline::FlatWriteRam16((r3 + -30708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + -3456), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1310 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 | 32768);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D1310
    r0 = MemoryInline::FlatRead8((r30 + -3456));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead8((r30 + -3456));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + -3456), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804793A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804793A0_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001882 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804793A0 func_804793A0 preserves=true fpr_mask=0x00000000
