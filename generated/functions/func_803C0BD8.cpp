#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021DA44(CpuContext* ctx);
extern "C" uint64_t func_8021DA44_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BEE9C(CpuContext* ctx);
extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C0BD8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803C0BD8u);
    goto loc_803C0BD8;

loc_803C0BD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 170), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 164), static_cast<uint16_t>(r0));
    r3 = (r3 + 147);
    r4 = 255;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x803C0C14u;
    if constexpr (KnownRegArgsCpuCall<0x8021DA44u>(&func_8021DA44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021DA44_637 = func_8021DA44_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8021DA44_637);
        r4 = static_cast<uint32_t>(regargs_result_8021DA44_637 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021DA44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0x806B0000u;
    r30 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803BEE9Cu>(&func_803BEE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEE9C_A0C = func_803BEE9C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BEE9C_A0C;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BEE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite16((r31 + 166), static_cast<uint16_t>(r0));
    r29 = 0;
    goto loc_803C0C84;
}

loc_803C0C3C:
{
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r3 = (r29 & 255);
    r0 = (r30 + r5);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 308));
}

loc_803C0C54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803C0C80;
    }
}

loc_803C0C58:
{
    r0 = (r5 + r29);
    r5 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r31 + 164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite8((r4 + 147), static_cast<uint8_t>(r5));
    r4 = 3;
    // inline leaf 0x8021D8D0 (6 guest instruction(s))
    r5 = 0x806B0000u;
    r5 = (r5 + -12984);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8021D8D0
    r3 = MemoryInline::FlatRead16((r31 + 164));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 164), static_cast<uint16_t>(r0));
}

loc_803C0C80:
{
    r29 = (r29 + 1);
}

loc_803C0C84:
{
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803C0C90:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_803C0C3C;
    }
}

loc_803C0C94:
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

extern "C" void func_803C0BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C0BD8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C0BD8 func_803C0BD8 preserves=true fpr_mask=0x00000000
