#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802694D8(CpuContext* ctx);
extern "C" uint64_t func_802694D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EC0C(CpuContext* ctx);
extern "C" uint64_t func_8027EC0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8043B244_ra68_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_8043B244;

loc_8043B244:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r4 = MemoryInline::FlatRead8((r29 + 24));
    r0 = (r4 * 2848);
    r30 = (r3 + r0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r3 = 0x806D0000u;
    r0 = (r3 + 32616);
    r31 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r29 + 25));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r31 + 68);
    ctx->lr = 0x8043B298u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_A90 = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_A90);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_A90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_DDF = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_DDF);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_DDF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = (r31 + 92);
    ctx->lr = 0x8043B2B4u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_10EF = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_10EF);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_10EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_1441 = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_1441);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_1441 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = (r31 + 80);
    ctx->lr = 0x8043B2D0u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_1754 = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_1754);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_1754 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_1AA6 = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_1AA6);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_1AA6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = (r31 + 104);
    ctx->lr = 0x8043B2ECu;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_1DBA = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_1DBA);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_1DBA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_210C = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_210C);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_210C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = (r31 + 56);
    ctx->lr = 0x8043B308u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_241F = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_241F);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_241F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_2771 = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_2771);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_2771 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043B244(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043B244_ra68_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020EA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043B244 func_8043B244 preserves=true fpr_mask=0x00000000
