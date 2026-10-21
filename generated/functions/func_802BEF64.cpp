#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BEFE8(CpuContext* ctx);
extern "C" uint32_t func_802BEFE8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF018(CpuContext* ctx);
extern "C" uint32_t func_802BF018_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF0A8(CpuContext* ctx);
extern "C" uint32_t func_802BF0A8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF110(CpuContext* ctx);
extern "C" uint32_t func_802BF110_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF19C(CpuContext* ctx);
extern "C" uint32_t func_802BF19C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF1E4(CpuContext* ctx);
extern "C" uint32_t func_802BF1E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BF23C(CpuContext* ctx);
extern "C" uint32_t func_802BF23C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802BF0A8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF19C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF1E4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF23C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF0A8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF19C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF1E4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_802BEF64_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802BEF64u);
    goto loc_802BEF64;

loc_802BEF64:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    ctx->lr = 0x802BEF84u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BF23Cu) && KnownTranslatedCpuCall<0x802BF23Cu>::kAvailable && !KnownTranslatedCpuCall<0x802BF23Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BF23Cu>()) {
        const auto state_free_result_802BF23C_8FF = func_802BF23C_statefree(r1, r3, 0x802BEF84u);
        r1 = static_cast<uint32_t>(state_free_result_802BF23C_8FF);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF23Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 328);
    ctx->lr = 0x802BEF8Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BF1E4u) && KnownTranslatedCpuCall<0x802BF1E4u>::kAvailable && !KnownTranslatedCpuCall<0x802BF1E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BF1E4u>()) {
        const auto state_free_result_802BF1E4_BA6 = func_802BF1E4_statefree_v0(r1, r3, r31, 0x802BEF8Cu);
        r1 = static_cast<uint32_t>(state_free_result_802BF1E4_BA6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF1E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 496);
    ctx->lr = 0x802BEF94u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BF19Cu) && KnownTranslatedCpuCall<0x802BF19Cu>::kAvailable && !KnownTranslatedCpuCall<0x802BF19Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BF19Cu>()) {
        const auto state_free_result_802BF19C_E55 = func_802BF19C_statefree_v0(r1, r3, r31, 0x802BEF94u);
        r1 = static_cast<uint32_t>(state_free_result_802BF19C_E55);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF19Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 580);
    ctx->lr = 0x802BEF9Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BF110u>(&func_802BF110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF110_1088 = func_802BF110_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF110_1088;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 840);
    ctx->lr = 0x802BEFA4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BF0A8u) && KnownTranslatedCpuCall<0x802BF0A8u>::kAvailable && !KnownTranslatedCpuCall<0x802BF0A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BF0A8u>()) {
        const auto state_free_result_802BF0A8_133C = func_802BF0A8_statefree_v0(r1, r3, r31, 0x802BEFA4u);
        r1 = static_cast<uint32_t>(state_free_result_802BF0A8_133C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF0A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 1020);
    ctx->lr = 0x802BEFACu;
    if constexpr (KnownRegArgsCpuCall<0x802BF018u>(&func_802BF018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF018_1572 = func_802BF018_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF018_1572;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r29 + 1192);
    r31 = (r29 + 1252);
}

loc_802BEFB4:
{
    r3 = r30;
    ctx->lr = 0x802BEFBCu;
    if constexpr (KnownRegArgsCpuCall<0x802BEFE8u>(&func_802BEFE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BEFE8_17E5 = func_802BEFE8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BEFE8_17E5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BEFE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 20);
}

loc_802BEFC4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802BEFB4;
    }
}

loc_802BEFC8:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802BEF64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802BEF64_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BEF64 func_802BEF64 preserves=true fpr_mask=0x00000000
