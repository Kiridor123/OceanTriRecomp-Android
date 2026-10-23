#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802740A0(CpuContext* ctx);
extern "C" uint32_t func_802740A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8029F7A0(CpuContext* ctx);
extern "C" uint64_t func_8029F7A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802740A0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802740A0_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8027532C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_8027532C;

loc_8027532C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 & 65535);
    r4 = 1;
    ctx->lr = 0x8027534Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_4E2 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_4E2);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_4E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80275350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027535C;
    }
}

loc_80275354:
{
    r3 = 0;
    goto loc_802753E4;
}

loc_8027535C:
{
    r3 = (r31 & 65535);
    r4 = 2;
    ctx->lr = 0x80275368u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_8A3 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_8A3);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_8A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8027536C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80275378;
    }
}

loc_80275370:
{
    r3 = 0;
    goto loc_802753E4;
}

loc_80275378:
{
    r3 = (r31 & 65535);
    r4 = 16;
    ctx->lr = 0x80275384u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_C65 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_C65);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_C65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80275388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80275394;
    }
}

loc_8027538C:
{
    r3 = 0;
    goto loc_802753E4;
}

loc_80275394:
{
    r3 = (r31 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802740A0u) && KnownTranslatedCpuCall<0x802740A0u>::kAvailable && !KnownTranslatedCpuCall<0x802740A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802740A0u>()) {
        const auto state_free_result_802740A0_1078 = func_802740A0_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802740A0_1078);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802740A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_802753A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802753B0;
    }
}

loc_802753A8:
{
    r3 = 0;
    goto loc_802753E4;
}

loc_802753B0:
{
    r3 = (r31 & 65535);
    r0 = (r3 + -438);
}

loc_802753BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802753D8;
    }
}

loc_802753C0:
{
}

loc_802753C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(43))) {
        goto loc_802753D8;
    }
}

loc_802753C8:
{
}

loc_802753CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(53))) {
        goto loc_802753D8;
    }
}

loc_802753D0:
{
}

loc_802753D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(223))) {
        goto loc_802753E0;
    }
}

loc_802753D8:
{
    r3 = 0;
    goto loc_802753E4;
}

loc_802753E0:
{
    r3 = 1;
}

loc_802753E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027532C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027532C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027532C func_8027532C preserves=true fpr_mask=0x00000000
