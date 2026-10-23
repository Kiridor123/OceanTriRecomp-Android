#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D76A4(CpuContext* ctx);
extern "C" uint64_t func_802D76A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802D4084_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D4084;

loc_802D4084:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = MemoryInline::FlatRead32((r3 + 1052));
    r31 = MemoryInline::FlatRead8((r4 + 16));
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_48A = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_48A);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_48A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D40A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D40B4;
    }
}

loc_802D40AC:
{
    r0 = (r31 + 20);
    r31 = (r0 & 255);
}

loc_802D40B4:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CEF20_805 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_805;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_802D40E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r31))) {
        goto loc_802D40F0;
    }
}

loc_802D40E8:
{
    r3 = 1;
    goto loc_802D40F4;
}

loc_802D40F0:
{
    r3 = 0;
}

loc_802D40F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_802D4084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D4084_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000004B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D4084 func_802D4084 preserves=true fpr_mask=0x00000000
