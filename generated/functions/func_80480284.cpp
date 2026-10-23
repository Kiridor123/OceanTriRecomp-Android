#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80480284_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80480284;

loc_80480284:
{
    r31 = 5890;
}

loc_804803F0:
{
}

loc_804803F4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(5904))) {
        goto loc_80480420;
    }
}

loc_804803F8:
{
    r3 = 24;
    ctx->lr = 0x80480400u;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80477E60_4FB = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_4FB);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_4FB >> 32);
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

loc_80480404:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80480420;
    }
}

loc_80480408:
{
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam32((r3 + 8), r30);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    ctx->lr = 0x80480420u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B6F0_A1E = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_A1E);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_A1E >> 32);
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

loc_80480420:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80480284(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80480284_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xD00020FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80480284 func_80480284 preserves=true fpr_mask=0x00000000
