#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027532C(CpuContext* ctx);
extern "C" uint64_t func_8027532C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029F7A0(CpuContext* ctx);
extern "C" uint64_t func_8029F7A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B8EA4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803B8EA4u);
    goto loc_803B8EA4;

loc_803B8EA4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = 0;
    r30 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r30));
    r29 = 0;
    r31 = 1;
}

loc_803B8ED4:
{
    r3 = MemoryInline::FlatRead16(r26);
}

loc_803B8EDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8F54;
    }
}

loc_803B8EE0:
{
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B8EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B8F54;
    }
}

loc_803B8EEC:
{
    r4 = 1;
    ctx->lr = 0x803B8EF4u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_82D = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_82D);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_82D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B8EF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8F14;
    }
}

loc_803B8EFC:
{
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 10);
    r28 = (r28 + r0);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r30));
    goto loc_803B8F54;
}

loc_803B8F14:
{
    r3 = MemoryInline::FlatRead16(r26);
    r4 = 2;
    ctx->lr = 0x803B8F20u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_CE9 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_CE9);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_CE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B8F24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8F38;
    }
}

loc_803B8F28:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r31));
    goto loc_803B8F54;
}

loc_803B8F38:
{
    r3 = MemoryInline::FlatRead16(r26);
    r4 = 1;
    ctx->lr = 0x803B8F44u;
    if constexpr (KnownRegArgsCpuCall<0x8027532Cu>(&func_8027532C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027532C_114B = func_8027532C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027532C_114B);
        r4 = static_cast<uint32_t>(regargs_result_8027532C_114B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027532Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B8F48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B8F54;
    }
}

loc_803B8F4C:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r30));
}

loc_803B8F54:
{
    r29 = (r29 + 1);
    r26 = (r26 + 4);
}

loc_803B8F60:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(35))) {
        goto loc_803B8ED4;
    }
}

loc_803B8F64:
{
    r3 = r28;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B8EA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B8EA4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B8EA4 func_803B8EA4 preserves=true fpr_mask=0x00000000
