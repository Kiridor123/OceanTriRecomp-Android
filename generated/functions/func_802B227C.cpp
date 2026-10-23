#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF72C(CpuContext* ctx);
extern "C" uint64_t func_800CF72C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802913C0(CpuContext* ctx);
extern "C" uint64_t func_802913C0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80291530(CpuContext* ctx);
extern "C" uint64_t func_80291530_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802B227C_rad0_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[7] = arg_r7;

    goto loc_802B227C;

loc_802B227C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r0 = MemoryInline::FlatRead32(r6);
    r31 = (r0 & 255);
    r3 = r30;
    r4 = 0;
    // inline leaf 0x800CF72C (15 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & 255);
    r0 = (r6 & 16711680);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r4 | r0);
    r0 = (r6 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & -16777216);
    r0 = (r6 & 65280);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r4 | r0);
    r0 = (r5 | r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x800CF72C
    r4 = r31;
    ctx->lr = 0x802B22B0u;
    if constexpr (KnownRegArgsCpuCall<0x80291530u>(&func_80291530)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80291530_9C5 = func_80291530_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80291530_9C5);
        r4 = static_cast<uint32_t>(regargs_result_80291530_9C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80291530u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CF72Cu>(&func_800CF72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_800CF72C_E1B = func_800CF72C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CF72C_E1B);
        r4 = static_cast<uint32_t>(regargs_result_800CF72C_E1B >> 32);
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
        InvokeDirectCpu<0x800CF72Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r31;
    ctx->lr = 0x802B22C4u;
    if constexpr (KnownRegArgsCpuCall<0x802913C0u>(&func_802913C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802913C0_117D = func_802913C0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802913C0_117D);
        r4 = static_cast<uint32_t>(regargs_result_802913C0_117D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802913C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B227C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B227C_rad0_6_18_0(ctx, ctx->gpr[4], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001D6 gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B227C func_802B227C preserves=true fpr_mask=0x00000000
