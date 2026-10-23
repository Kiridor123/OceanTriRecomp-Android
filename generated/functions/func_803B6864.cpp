#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B61B4(CpuContext* ctx);
extern "C" uint64_t func_803B61B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B6864_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B6864;

loc_803B6864:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x803B687Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_4C6 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_4C6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B6880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B688C;
    }
}

loc_803B6884:
{
    r3 = -1;
    goto loc_803B6940;
}

loc_803B688C:
{
    r3 = 0x806C0000u;
    r6 = (r3 + 31960);
    r0 = (r31 * 96);
    r3 = (r6 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 148));
}

loc_803B68A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803B693C;
    }
}

loc_803B68A8:
{
    r0 = (r4 & 512);
}

loc_803B68B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B68E8;
    }
}

loc_803B68B4:
{
    r5 = MemoryInline::FlatRead16((r3 + 154));
}

loc_803B68BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803B68E8;
    }
}

loc_803B68C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 152));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r6 + r0);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 26627));
}

loc_803B68D8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_803B68E0;
    }
}

loc_803B68DC:
{
    r0 = 1;
}

loc_803B68E0:
{
    r3 = (1 - r0);
    goto loc_803B6940;
}

loc_803B68E8:
{
    r0 = (r4 & 4096);
}

loc_803B68F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B6900;
    }
}

loc_803B68F4:
{
    r0 = (r4 & 8192);
}

loc_803B68FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B691C;
    }
}

loc_803B6900:
{
    r0 = (r4 & 32);
}

loc_803B6908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B6914;
    }
}

loc_803B690C:
{
    r3 = 0;
    goto loc_803B6940;
}

loc_803B6914:
{
    r3 = 1;
    goto loc_803B6940;
}

loc_803B691C:
{
    r0 = (r4 & 2);
}

loc_803B6924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B6934;
    }
}

loc_803B6928:
{
    r3 = (r31 & 65535);
    ctx->lr = 0x803B6930u;
    if constexpr (KnownRegArgsCpuCall<0x803B61B4u>(&func_803B61B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803B61B4_FE8 = func_803B61B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B61B4_FE8);
        r4 = static_cast<uint32_t>(regargs_result_803B61B4_FE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803B61B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_803B6940;
}

loc_803B6934:
{
    r3 = MemoryInline::FlatRead16((r3 + 154));
    goto loc_803B6940;
}

loc_803B693C:
{
    r3 = -1;
}

loc_803B6940:
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

extern "C" void func_803B6864(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B6864_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B6864 func_803B6864 preserves=true fpr_mask=0x00000000
