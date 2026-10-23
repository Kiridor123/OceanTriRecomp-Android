#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086904(CpuContext* ctx);
extern "C" uint64_t func_80086904_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8009ABF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8009ABF0;

loc_8009ABF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r30 = r8;
    r29 = r9;
    r3 = -33292288;
    r3 = (r3 + -1);
    ctx->lr = 0x8009AC2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_78C = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_78C);
        r4 = static_cast<uint32_t>(regargs_result_80086904_78C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r31 = (r31_rot_0 & -2);
    r0 = (r27 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & -131072);
    r3 = (r25 & 65535);
    r3 = (r3 + -1);
    r0 = (r26 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    r0 = (r31 + 48);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & -16777216);
    r3 = (r3 | r0);
    ctx->lr = 0x8009AC60u;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_CDF = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_CDF);
        r4 = static_cast<uint32_t>(regargs_result_80086904_CDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r29 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & -131072);
    r3 = (r28 & 65535);
    r3 = (r3 + -1);
    r0 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    r0 = (r31 + 49);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & -16777216);
    r3 = (r3 | r0);
    ctx->lr = 0x8009AC90u;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_11BD = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_11BD);
        r4 = static_cast<uint32_t>(regargs_result_80086904_11BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009ABF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009ABF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FA gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009ABF0 func_8009ABF0 preserves=true fpr_mask=0x00000000
