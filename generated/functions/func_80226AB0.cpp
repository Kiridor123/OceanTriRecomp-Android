#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80045394(CpuContext* ctx);
extern "C" void func_80045394_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80226A70(CpuContext* ctx);
extern "C" uint32_t func_80226A70_ra30_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80045394_statefree(uint32_t, uint32_t, PPC_FPR);

extern "C" uint64_t func_80226AB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80226AB0;

loc_80226AB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = (r6 & 255);
}

loc_80226AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80226AE0;
    }
}

loc_80226AD4:
{
}

loc_80226AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80226AF8;
    }
}

loc_80226ADC:
{
    goto loc_80226B2C;
}

loc_80226AE0:
{
    r3 = r4;
    r4 = r5;
    r5 = r0;
    // inline leaf 0x80226A70 (16 guest instruction(s))
}

loc_inl0_0x80226A70:
{
    r0 = (r5 & 255);
}

loc_inl0_0x80226A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80226A88;
    }
}

loc_inl0_0x80226A7C:
{
}

loc_inl0_0x80226A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl0_0x80226A9C;
    }
}

loc_inl0_0x80226A84:
{
    goto loc_inl0_0x80226AA8;
}

loc_inl0_0x80226A88:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18456);
    r3 = (r0 + r4);
    goto loc_inl0_cont_80226A70;
}

loc_inl0_0x80226A9C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -18192);
    goto loc_inl0_cont_80226A70;
}

loc_inl0_0x80226AA8:
{
    r3 = 0;
}

loc_inl0_cont_80226A70:
{
    // end of inlined leaf 0x80226A70
    r31 = r3;
    goto loc_80226B14;
}

loc_80226AF8:
{
    r3 = r4;
    r4 = r5;
    r5 = r0;
    if constexpr (KnownRegArgsCpuCall<0x80226A70u>(&func_80226A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_80226A70_A37 = func_80226A70_ra30_0_10_0(ctx, r4, r5);
        r4 = regargs_result_80226A70_A37;
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80226A70u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_80226B14:
{
    r3 = (r30 + 12);
    r4 = r31;
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    r3 = (r30 + 24);
    r4 = (r31 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80045394u) && KnownTranslatedCpuCall<0x80045394u>::kAvailable && !KnownTranslatedCpuCall<0x80045394u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80045394u>()) {
        const auto state_free_result_80045394_F0B = func_80045394_statefree(r3, r4, f0);
        f0.raw = static_cast<uint64_t>(state_free_result_80045394_F0B);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80045394u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
}

loc_80226B2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80226AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80226AB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226AB0 func_80226AB0 preserves=true fpr_mask=0x00000000
