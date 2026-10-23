#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80452854(CpuContext* ctx);
extern "C" uint64_t func_80452854_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804528B4(CpuContext* ctx);
extern "C" uint64_t func_804528B4_ra0_0_18_0(CpuContext*);
extern "C" void func_804528E0(CpuContext* ctx);
extern "C" uint64_t func_804528E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8042F3D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8042F3D4;

loc_8042F3D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r31 = r4;
    r26 = 0;
    r28 = r30;
    r27 = (r3 + 36);
    r29 = 0;
}

loc_8042F400:
{
    MemoryInline::FlatWrite16((r28 + 20), static_cast<uint16_t>(r29));
    r3 = r27;
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r28 + 2);
    r27 = (r27 + 48);
    r26 = (r26 + 1);
}

loc_8042F424:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_8042F400;
    }
}

loc_8042F428:
{
    r3 = 8;
    ctx->lr = 0x8042F430u;
    if constexpr (KnownRegArgsCpuCall<0x80452854u>(&func_80452854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80452854_97F = func_80452854_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80452854_97F);
        r4 = static_cast<uint32_t>(regargs_result_80452854_97F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80452854u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    ctx->lr = 0x8042F43Cu;
    if constexpr (KnownRegArgsCpuCall<0x804528B4u>(&func_804528B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804528B4_CCE = func_804528B4_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804528B4_CCE);
        r4 = static_cast<uint32_t>(regargs_result_804528B4_CCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804528B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
    r3 = (r30 + 36);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r5 = 8;
    r6 = 0;
    ctx->lr = 0x8042F45Cu;
    if constexpr (KnownRegArgsCpuCall<0x804528E0u>(&func_804528E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_804528E0_112A = func_804528E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804528E0_112A);
        r4 = static_cast<uint32_t>(regargs_result_804528E0_112A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804528E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8042F46C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8042F488;
    }
}

loc_8042F470:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r0 = MemoryInline::FlatRead16((r30 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    goto loc_8042F490;
}

loc_8042F488:
{
    r0 = 8;
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
}

loc_8042F490:
{
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8042F49C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8042F4AC;
    }
}

loc_8042F4A0:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
}

loc_8042F4AC:
{
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r31));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042F3D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042F3D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021BB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042F3D4 func_8042F3D4 preserves=true fpr_mask=0x00000000
