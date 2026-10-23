#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013A8E8(CpuContext* ctx);
extern "C" uint32_t func_8013A8E8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013A9B8(CpuContext* ctx);
extern "C" uint64_t func_8013A9B8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013AA80_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8013AA80;

loc_8013AA80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 2207));
}

loc_8013AAA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8013AACC;
    }
}

loc_8013AAA8:
{
    r4 = 9;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl0_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl0_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8013A8FC;
    }
}

loc_inl0_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl0_cont_8013A8E8;
}

loc_inl0_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013AAB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AACC;
    }
}

loc_8013AAB8:
{
    r3 = r30;
    r4 = 9;
    r5 = 0;
    ctx->lr = 0x8013AAC8u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_B52 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_B52);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_B52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013AB04;
}

loc_8013AACC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8013A8E8u>(&func_8013A8E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013A8E8_E6C = func_8013A8E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8013A8E8_E6C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013A8E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8013AADC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AAF4;
    }
}

loc_8013AAE0:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8013AAF0u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_1145 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_1145);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_1145 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8013AB04;
}

loc_8013AAF4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2396), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 2397), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 2392), r0);
}

loc_8013AB04:
{
    r3 = r30;
    r4 = (r31 & 255);
    ctx->lr = 0x8013AB10u;
    if constexpr (KnownRegArgsCpuCall<0x8013A9B8u>(&func_8013A9B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013A9B8_156C = func_8013A9B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013A9B8_156C);
        r4 = static_cast<uint32_t>(regargs_result_8013A9B8_156C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013A9B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013AA80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013AA80_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013AA80 func_8013AA80 preserves=true fpr_mask=0x00000000
