#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AB680(CpuContext* ctx);
extern "C" uint32_t func_804AB680_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_804AB680_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_804AB680_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_804CC220_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_804CC220;

loc_804CC220:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804CC22C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC290;
    }
}

loc_804CC23C:
{
    r31 = MemoryInline::FlatRead32((r13 + -15120));
}

loc_804CC244:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804CC250;
    }
}

loc_804CC248:
{
    r30 = MemoryInline::FlatRead32((r31 + 20));
    goto loc_804CC288;
}

loc_804CC250:
{
    r30 = 0;
    goto loc_804CC288;
}

loc_804CC258:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804AB680u) && KnownTranslatedCpuCall<0x804AB680u>::kAvailable && !KnownTranslatedCpuCall<0x804AB680u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804AB680u>()) {
        const auto state_free_result_804AB680_79A = func_804AB680_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_804AB680_79A[0]);
        r4 = static_cast<uint32_t>(state_free_result_804AB680_79A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804AB680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
}

loc_804CC264:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804CC270;
    }
}

loc_804CC268:
{
    r3 = r31;
    ctx->lr = 0x804CC270u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_B44 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_B44);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_B44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_804CC270:
{
}

loc_804CC274:
{
    r31 = r30;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804CC284;
    }
}

loc_804CC27C:
{
    r30 = MemoryInline::FlatRead32((r30 + 20));
    goto loc_804CC288;
}

loc_804CC284:
{
    r30 = 0;
}

loc_804CC288:
{
}

loc_804CC28C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804CC258;
    }
}

loc_804CC290:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CC220(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CC220_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CC220 func_804CC220 preserves=true fpr_mask=0x00000000
