#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007BD10(CpuContext* ctx);
extern "C" uint64_t func_8007BD10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009560C(CpuContext* ctx);
extern "C" uint64_t func_8009560C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2EE4(CpuContext* ctx);
extern "C" uint32_t func_800E2EE4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800E2EE4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E2E60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E2E60;

loc_800E2E60:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = r4;
    r31 = r5;
    r4 = MemoryInline::FlatRead32((r3 + 280));
}

loc_800E2E80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800E2ED0;
    }
}

loc_800E2E84:
{
    r3 = (r1 + 16);
    r5 = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8007BF10u>(ctx);
    r3 = (r1 + 16);
    // inline leaf 0x800E29F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800E29F8
}

loc_800E2E9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2ED0;
    }
}

loc_800E2EA0:
{
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x800E2EACu;
    if constexpr (KnownRegArgsCpuCall<0x8007BD10u>(&func_8007BD10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007BD10_8E7 = func_8007BD10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007BD10_8E7);
        r4 = static_cast<uint32_t>(regargs_result_8007BD10_8E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BD10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x800E2EBCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E2EE4u) && KnownTranslatedCpuCall<0x800E2EE4u>::kAvailable && !KnownTranslatedCpuCall<0x800E2EE4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E2EE4u>()) {
        const auto state_free_result_800E2EE4_CDD = func_800E2EE4_statefree(r1, r3, r4, 0x800E2EBCu);
        r0 = static_cast<uint32_t>(state_free_result_800E2EE4_CDD[0]);
        r1 = static_cast<uint32_t>(state_free_result_800E2EE4_CDD[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E2EE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 12);
    r4 = (r31 & 255);
    ctx->lr = 0x800E2EC8u;
    if constexpr (KnownRegArgsCpuCall<0x8009560Cu>(&func_8009560C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009560C_FE8 = func_8009560C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009560C_FE8);
        r4 = static_cast<uint32_t>(regargs_result_8009560C_FE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009560Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 12);
    // inline leaf 0x8007E4F8 (1 guest instruction(s))
    // end of inlined leaf 0x8007E4F8
}

loc_800E2ED0:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E2E60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E2E60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E2E60 func_800E2E60 preserves=true fpr_mask=0x00000000
