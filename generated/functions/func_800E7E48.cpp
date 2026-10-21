#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7EF8(CpuContext* ctx);
extern "C" uint64_t func_800E7EF8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E7F00(CpuContext* ctx);
extern "C" uint64_t func_800E7F00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E7F34(CpuContext* ctx);
extern "C" uint32_t func_800E7F34_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E9444(CpuContext* ctx);
extern "C" uint64_t func_800E9444_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800E7F34_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_800E7E48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E7E48u);
    goto loc_800E7E48;

loc_800E7E48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r29 = (r0 + r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r27;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r0 = MemoryInline::FlatRead32(r28);
    r4 = (r0 + r28);
    // inline leaf 0x800E7F20 (5 guest instruction(s))
}

loc_inl2_0x800E7F20:
{
}

loc_inl2_0x800E7F24:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_inl2_cont_800E7F20:
{
    // end of inlined leaf 0x800E7F20
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r27;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r4 = r31;
    // inline leaf 0x800E7F08 (6 guest instruction(s))
}

loc_inl4_0x800E7F08:
{
    r3 = (r3 + 8);
}

loc_inl4_0x800E7F10:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_inl4_cont_800E7F08:
{
    // end of inlined leaf 0x800E7F08
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7F34u) && KnownTranslatedCpuCall<0x800E7F34u>::kAvailable && !KnownTranslatedCpuCall<0x800E7F34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7F34u>()) {
        const auto state_free_result_800E7F34_CF9 = func_800E7F34_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_800E7F34_CF9[0]);
        r3 = static_cast<uint32_t>(state_free_result_800E7F34_CF9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800E7F34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800E7F00u>(&func_800E7F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E7F00_FDE = func_800E7F00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E7F00_FDE);
        r4 = static_cast<uint32_t>(regargs_result_800E7F00_FDE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E7F00u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7F34u) && KnownTranslatedCpuCall<0x800E7F34u>::kAvailable && !KnownTranslatedCpuCall<0x800E7F34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7F34u>()) {
        const auto state_free_result_800E7F34_138C = func_800E7F34_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_800E7F34_138C[0]);
        r3 = static_cast<uint32_t>(state_free_result_800E7F34_138C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800E7F34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800E7EF8u>(&func_800E7EF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E7EF8_1674 = func_800E7EF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E7EF8_1674);
        r4 = static_cast<uint32_t>(regargs_result_800E7EF8_1674 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E7EF8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7F34u) && KnownTranslatedCpuCall<0x800E7F34u>::kAvailable && !KnownTranslatedCpuCall<0x800E7F34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7F34u>()) {
        const auto state_free_result_800E7F34_1A25 = func_800E7F34_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_800E7F34_1A25[0]);
        r3 = static_cast<uint32_t>(state_free_result_800E7F34_1A25[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800E7F34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    ctx->lr = 0x800E7EE0u;
    if constexpr (KnownRegArgsCpuCall<0x800E9444u>(&func_800E9444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_800E9444_1D36 = func_800E9444_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E9444_1D36);
        r4 = static_cast<uint32_t>(regargs_result_800E9444_1D36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800E9444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E7E48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E7E48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7E48 func_800E7E48 preserves=true fpr_mask=0x00000000
