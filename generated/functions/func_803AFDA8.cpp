#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AA6E0(CpuContext* ctx);
extern "C" uint64_t func_803AA6E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AFDA8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803AFDA8u);
    goto loc_803AFDA8;

loc_803AFDA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead16((r31 + 884));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 139), static_cast<uint8_t>(r6));
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 88), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r4 = 1954676736;
    r4 = (r4 + 10603);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 12);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 89), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 143), static_cast<uint8_t>(r5));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 142), static_cast<uint8_t>(r0));
    r0 = (r6 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AFE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803AFE34;
    }
}

loc_803AFE18:
{
    r3 = 0;
    ctx->lr = 0x803AFE20u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B421C_950 = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_950;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B421Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803AFE28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803AFE34;
    }
}

loc_803AFE2C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 142), static_cast<uint8_t>(r0));
}

loc_803AFE34:
{
    r0 = 40;
    MemoryInline::FlatWrite8((r30 + 1504), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 1668), r0);
    MemoryInline::FlatWrite32((r30 + 1672), r0);
}

loc_803AFE4C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803AFE64;
    }
}

loc_803AFE50:
{
    r3 = (r30 + 1506);
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x803AFE60u;
    if constexpr (KnownRegArgsCpuCall<0x803AA6E0u>(&func_803AA6E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AA6E0_E3A = func_803AA6E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AA6E0_E3A);
        r4 = static_cast<uint32_t>(regargs_result_803AA6E0_E3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803AA6E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803AFE98;
}

loc_803AFE64:
{
    r4 = MemoryInline::FlatRead16((r31 + 882));
}

loc_803AFE6C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AFE8C;
    }
}

loc_803AFE70:
{
    r3 = (r30 + 1506);
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    r5 = 0;
    ctx->lr = 0x803AFE88u;
    if constexpr (KnownRegArgsCpuCall<0x803AA6E0u>(&func_803AA6E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AA6E0_1250 = func_803AA6E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AA6E0_1250);
        r4 = static_cast<uint32_t>(regargs_result_803AA6E0_1250 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803AA6E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803AFE98;
}

loc_803AFE8C:
{
    r3 = (r30 + 1506);
    r5 = MemoryInline::FlatRead8((r30 + 139));
    ctx->lr = 0x803AFE98u;
    if constexpr (KnownRegArgsCpuCall<0x803AA6E0u>(&func_803AA6E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AA6E0_1599 = func_803AA6E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AA6E0_1599);
        r4 = static_cast<uint32_t>(regargs_result_803AA6E0_1599 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803AA6E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AFE98:
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

extern "C" void func_803AFDA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AFDA8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AFDA8 func_803AFDA8 preserves=true fpr_mask=0x00000000
