#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E72D0(CpuContext* ctx);
extern "C" uint64_t func_800E72D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800EDBB4(CpuContext* ctx);
extern "C" uint32_t func_800EDBB4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800E70DC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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

    MKW_GUEST_ENTER(0x800E70DCu);
    goto loc_800E70DC;

loc_800E70DC:
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
    r28 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800E7104u;
    if constexpr (KnownRegArgsCpuCall<0x800EDBB4u>(&func_800EDBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800EDBB4_79F = func_800EDBB4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800EDBB4_79F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800EDBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->lr = 0x800E7114u;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_A44 = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_A44);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_A44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800E7118:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E7124;
    }
}

loc_800E711C:
{
    r3 = 1;
    goto loc_800E72B0;
}

loc_800E7124:
{
    r30 = 0;
    r29 = 0;
    r0 = MemoryInline::FlatRead16((r27 + 6));
    r6 = (r0 & 1);
    r5 = MemoryInline::FlatRead8((r27 + 10));
    r0 = MemoryInline::FlatRead8((r27 + 11));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
}

loc_800E7144:
{
    r0 = 255;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800E7150;
    }
}

loc_800E714C:
{
    r0 = r28;
}

loc_800E7150:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r28 = (r5 | r0);
    goto loc_800E71D8;
}

loc_800E7168:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
}

loc_800E7170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E71CC;
    }
}

loc_800E7174:
{
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_800E717C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800E71CC;
    }
}

loc_800E7180:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_800E7188:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_800E71CC;
    }
}

loc_800E718C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 + 65536);
}

loc_800E71A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800E71B4;
    }
}

loc_800E71A4:
{
}

loc_800E71A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E71B4;
    }
}

loc_800E71AC:
{
    r3 = 0;
    goto loc_800E72B0;
}

loc_800E71B4:
{
    r29 = (r29 + 1);
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = MemoryInline::FlatRead8((r31 + 24));
}

loc_800E71C4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800E71CC;
    }
}

loc_800E71C8:
{
    r30 = (r30 + 1);
}

loc_800E71CC:
{
    r3 = r31;
    // inline leaf 0x800E72C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x800E72C8
    r31 = r3;
}

loc_800E71D8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->lr = 0x800E71E4u;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_1774 = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_1774);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_1774 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800E71E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E7168;
    }
}

loc_800E71EC:
{
    r3 = MemoryInline::FlatRead8((r27 + 28));
}

loc_800E71F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_800E7200;
    }
}

loc_800E71F8:
{
}

loc_800E71FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r29))) {
        goto loc_800E7208;
    }
}

loc_800E7200:
{
    r3 = 1;
    goto loc_800E72B0;
}

loc_800E7208:
{
}

loc_800E720C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800E7218;
    }
}

loc_800E7210:
{
    r3 = 0;
    goto loc_800E72B0;
}

loc_800E7218:
{
    r0 = (r3 + -1);
    r30 = (r29 - r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800E7228u;
    if constexpr (KnownRegArgsCpuCall<0x800EDBB4u>(&func_800EDBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800EDBB4_1D85 = func_800EDBB4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800EDBB4_1D85;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800EDBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = r3;
    goto loc_800E7298;
}

loc_800E7230:
{
    r0 = MemoryInline::FlatRead8((r29 + 25));
}

loc_800E7238:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E728C;
    }
}

loc_800E723C:
{
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_800E7244:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800E728C;
    }
}

loc_800E7248:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_800E7250:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_800E728C;
    }
}

loc_800E7254:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = MemoryInline::FlatRead8((r29 + 24));
}

loc_800E7260:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800E728C;
    }
}

loc_800E7264:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = r26;
    // inline leaf 0x800E98AC (3 guest instruction(s))
    r0 = 5;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800E98AC
    r30 = (r30 + -1);
}

loc_800E7280:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_800E728C;
    }
}

loc_800E7284:
{
    r3 = 1;
    goto loc_800E72B0;
}

loc_800E728C:
{
    r3 = r29;
    // inline leaf 0x800E72C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x800E72C8
    r29 = r3;
}

loc_800E7298:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r29;
    ctx->lr = 0x800E72A4u;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_2633 = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_2633);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_2633 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800E72A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E7230;
    }
}

loc_800E72AC:
{
    r3 = 0;
}

loc_800E72B0:
{
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

extern "C" void func_800E70DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E70DC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E70DC func_800E70DC preserves=true fpr_mask=0x00000000
