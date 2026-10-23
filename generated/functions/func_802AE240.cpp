#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80067A38(CpuContext* ctx);
extern "C" uint64_t func_80067A38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80067AC0(CpuContext* ctx);
extern "C" uint64_t func_80067AC0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80067B48(CpuContext* ctx);
extern "C" uint64_t func_80067B48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80082CE4(CpuContext* ctx);
extern "C" uint64_t func_80082CE4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AE2B4(CpuContext* ctx);
extern "C" uint32_t func_802AE2B4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802AE2B4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802AE240_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_802AE240;

loc_802AE240:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = 0;
    ctx->lr = 0x802AE260u;
    if constexpr (KnownRegArgsCpuCall<0x80082CE4u>(&func_80082CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082CE4_6D3 = func_80082CE4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80082CE4_6D3);
        r4 = static_cast<uint32_t>(regargs_result_80082CE4_6D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80082CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    ctx->lr = 0x802AE270u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AE2B4u) && KnownTranslatedCpuCall<0x802AE2B4u>::kAvailable && !KnownTranslatedCpuCall<0x802AE2B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AE2B4u>()) {
        const auto state_free_result_802AE2B4_ACB = func_802AE2B4_statefree(r1, r3, r4, 0x802AE270u);
        r0 = static_cast<uint32_t>(state_free_result_802AE2B4_ACB[0]);
        r1 = static_cast<uint32_t>(state_free_result_802AE2B4_ACB[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802AE2B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x802AE27Cu;
    if constexpr (KnownRegArgsCpuCall<0x80067B48u>(&func_80067B48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80067B48_E71 = func_80067B48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80067B48_E71);
        r4 = static_cast<uint32_t>(regargs_result_80067B48_E71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80067B48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    ctx->lr = 0x802AE28Cu;
    if constexpr (KnownRegArgsCpuCall<0x80067AC0u>(&func_80067AC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80067AC0_1213 = func_80067AC0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80067AC0_1213);
        r4 = static_cast<uint32_t>(regargs_result_80067AC0_1213 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80067AC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x802AE2A0u;
    if constexpr (KnownRegArgsCpuCall<0x80067A38u>(&func_80067A38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80067A38_1603 = func_80067A38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80067A38_1603);
        r4 = static_cast<uint32_t>(regargs_result_80067A38_1603 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80067A38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AE240(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AE240_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000202A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xC0000000 fpr_write=0xC0000006 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AE240 func_802AE240 preserves=true fpr_mask=0x00000000
