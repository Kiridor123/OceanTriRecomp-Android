#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8031AD94(CpuContext* ctx);
extern "C" uint64_t func_8031AD94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B3A8(CpuContext* ctx);
extern "C" uint32_t func_8031B3A8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033AE10(CpuContext* ctx);
extern "C" uint64_t func_8033AE10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8031B400_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8031B400;

loc_8031B400:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 416));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 0;
    r30 = r27;
    r31 = 0;
}

loc_8031B43C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    // inline leaf 0x8031B334 (11 guest instruction(s))
}

loc_inl1_0x8031B334:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_inl1_0x8031B33C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8))) {
        goto loc_inl1_0x8031B34C;
    }
}

loc_inl1_0x8031B340:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_inl1_cont_8031B334;
}

loc_inl1_0x8031B34C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 14754));
}

loc_inl1_cont_8031B334:
{
    // end of inlined leaf 0x8031B334
    r3 = (r3 & 65535);
}

loc_8031B44C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_8031B484;
    }
}

loc_8031B450:
{
    r4 = 0;
    ctx->lr = 0x8031B458u;
    if constexpr (KnownRegArgsCpuCall<0x8033AE10u>(&func_8033AE10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033AE10_BD3 = func_8033AE10_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AE10_BD3);
        r4 = static_cast<uint32_t>(regargs_result_8033AE10_BD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033AE10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031B45C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031B484;
    }
}

loc_8031B460:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite16((r30 + 528), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r4 = MemoryInline::FlatRead32((r27 + 404));
    r5 = MemoryInline::FlatRead32((r27 + 408));
    ctx->lr = 0x8031B478u;
    if constexpr (KnownRegArgsCpuCall<0x8031AD94u>(&func_8031AD94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031AD94_1089 = func_8031AD94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031AD94_1089);
        r4 = static_cast<uint32_t>(regargs_result_8031AD94_1089 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AD94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r30 + 530), static_cast<uint16_t>(r0));
    goto loc_8031B48C;
}

loc_8031B484:
{
    MemoryInline::FlatWrite16((r30 + 528), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 530), static_cast<uint16_t>(r31));
}

loc_8031B48C:
{
    r30 = (r30 + 4);
    r28 = (r28 + 1);
    r29 = (r29 + 1);
}

loc_8031B49C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(8))) {
        goto loc_8031B43C;
    }
}

loc_8031B4A0:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x8031B3A8u>(&func_8031B3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031B3A8_15D1 = func_8031B3A8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8031B3A8_15D1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031B3A8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031B400(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031B400_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031B400 func_8031B400 preserves=true fpr_mask=0x00000000
