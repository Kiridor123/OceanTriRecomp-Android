#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80480440_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80480440;

loc_80480440:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    // inline leaf 0x804794F0 (1 guest instruction(s))
    // end of inlined leaf 0x804794F0
    r3 = 23;
    r4 = (r2 + -2544);
    // inline leaf 0x8047B6DC (5 guest instruction(s))
    r5 = 0x80740000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r5 = (r5 + -18792);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWriteRam32(r5_addr_0, r4);
    // end of inlined leaf 0x8047B6DC
    // inline leaf 0x80479500 (1 guest instruction(s))
    // end of inlined leaf 0x80479500
    r3 = 52;
    ctx->lr = 0x8048047Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80477E60_751 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_751);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_751 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
}

loc_80480480:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804804AC;
    }
}

loc_80480488:
{
    r4 = 0;
    r5 = 52;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 5900;
    r3 = r31;
    MemoryInline::FlatWriteRam16(r31, static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r31 + 48), r30);
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r29));
    ctx->lr = 0x804804ACu;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B6F0_CF9 = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_CF9);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_CF9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
}

loc_804804AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80480440(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80480440_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80480440 func_80480440 preserves=true fpr_mask=0x00000000
