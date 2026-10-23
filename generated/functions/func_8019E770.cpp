#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019E6D4(CpuContext* ctx);
extern "C" uint32_t func_8019E6D4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8019E770_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8019E770;

loc_8019E770:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
}

loc_8019E788:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019E794;
    }
}

loc_8019E78C:
{
    r3 = 255;
    goto loc_8019E890;
}

loc_8019E794:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_8019E79C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25))) {
        goto loc_8019E7A8;
    }
}

loc_8019E7A0:
{
    r3 = 255;
    goto loc_8019E890;
}

loc_8019E7A8:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8019E7B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8019E88C;
    }
}

loc_8019E7BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_8019E7C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8019E88C;
    }
}

loc_8019E7C8:
{
    r3 = 0;
    ctx->lr = 0x8019E7D0u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B510C_A65 = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_A65;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8019E7D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8019E88C;
    }
}

loc_8019E7D8:
{
    r3 = r31;
    r4 = 3;
    r5 = 0;
    r6 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_DB1 = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_DB1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019E7F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E7FC;
    }
}

loc_8019E7F4:
{
    r3 = 0;
    goto loc_8019E890;
}

loc_8019E7FC:
{
    r3 = r31;
    r4 = 3;
    r5 = 4;
    r6 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_110D = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_110D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019E814:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E820;
    }
}

loc_8019E818:
{
    r3 = 1;
    goto loc_8019E890;
}

loc_8019E820:
{
    r3 = r31;
    r4 = 3;
    r5 = 20;
    r6 = 59;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_146C = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_146C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019E838:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E844;
    }
}

loc_8019E83C:
{
    r3 = 3;
    goto loc_8019E890;
}

loc_8019E844:
{
    r3 = r31;
    r4 = 3;
    r5 = 60;
    r6 = 70;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_17CB = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_17CB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019E85C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E868;
    }
}

loc_8019E860:
{
    r3 = 4;
    goto loc_8019E890;
}

loc_8019E868:
{
    r3 = r31;
    r4 = 3;
    r5 = 71;
    r6 = 91;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_1B2A = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_1B2A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019E880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E88C;
    }
}

loc_8019E884:
{
    r3 = 2;
    goto loc_8019E890;
}

loc_8019E88C:
{
    r3 = 255;
}

loc_8019E890:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019E770(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019E770_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019E770 func_8019E770 preserves=true fpr_mask=0x00000000
