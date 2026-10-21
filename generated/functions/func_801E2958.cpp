#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800515D8(CpuContext* ctx);
extern "C" uint64_t func_800515D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AC8(CpuContext* ctx);
extern "C" uint64_t func_80139AC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AE0(CpuContext* ctx);
extern "C" uint64_t func_80139AE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E2958_ra38_18_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x801E2958u);
    goto loc_801E2958;

loc_801E2958:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r27 = r4;
    r28 = r6;
    r3 = r28;
    // inline leaf 0x80139530 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // end of inlined leaf 0x80139530
    r31 = r3;
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r29 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_801E29A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2A00;
    }
}

loc_801E29AC:
{
    r0 = MemoryInline::FlatRead8((r29 + 1056));
}

loc_801E29B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801E2A00;
    }
}

loc_801E29B8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r25 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r25 + 12));
}

loc_801E29C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801E29F0;
    }
}

loc_801E29CC:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x800E0AF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // end of inlined leaf 0x800E0AF0
    r4 = r3;
    r3 = r27;
    r0 = MemoryInline::FlatRead32((r25 + 12));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->lr = 0x801E29F0u;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AC8_E09 = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_E09);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_E09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E29F0:
{
    r3 = r28;
    r4 = (r31 + 1);
    // inline leaf 0x80139524 (3 guest instruction(s))
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80139524
    goto loc_801E2AE8;
}

loc_801E2A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_801E2A08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2AE8;
    }
}

loc_801E2A0C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r25 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r25 + 12));
}

loc_801E2A1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801E2A44;
    }
}

loc_801E2A20:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x800E0AF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // end of inlined leaf 0x800E0AF0
    r4 = r3;
    r3 = r27;
    r0 = MemoryInline::FlatRead32((r25 + 12));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->lr = 0x801E2A44u;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AC8_1528 = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_1528);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_1528 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E2A44:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_801E2A4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2ADC;
    }
}

loc_801E2A50:
{
    r0 = MemoryInline::FlatRead8((r29 + 1056));
}

loc_801E2A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E2A68;
    }
}

loc_801E2A5C:
{
}

loc_801E2A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801E2A70;
    }
}

loc_801E2A64:
{
    goto loc_801E2A78;
}

loc_801E2A68:
{
    r4 = 4;
    goto loc_801E2A7C;
}

loc_801E2A70:
{
    r4 = 2;
    goto loc_801E2A7C;
}

loc_801E2A78:
{
    r4 = -1;
}

loc_801E2A7C:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_801E2A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2A9C;
    }
}

loc_801E2A8C:
{
    r3 = r28;
    r4 = (r31 + 1);
    // inline leaf 0x80139524 (3 guest instruction(s))
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80139524
    goto loc_801E2AE8;
}

loc_801E2A9C:
{
}

loc_801E2AA0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r4))) {
        goto loc_801E2ADC;
    }
}

loc_801E2AA4:
{
    r3 = r27;
    r4 = (r1 + 56);
    ctx->lr = 0x801E2AB0u;
    if constexpr (KnownRegArgsCpuCall<0x80139AE0u>(&func_80139AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AE0_1D36 = func_80139AE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80139AE0_1D36);
        r4 = static_cast<uint32_t>(regargs_result_80139AE0_1D36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80139AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 80));
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050130u>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->lr = 0x801E2AD0u;
    if constexpr (KnownRegArgsCpuCall<0x800515D8u>(&func_800515D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800515D8_217B = func_800515D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800515D8_217B);
        r4 = static_cast<uint32_t>(regargs_result_800515D8_217B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800515D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r27;
    r4 = (r1 + 56);
    ctx->lr = 0x801E2ADCu;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AC8_2458 = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_2458);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_2458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E2ADC:
{
    r3 = r28;
    r4 = (r31 + 1);
    // inline leaf 0x80139524 (3 guest instruction(s))
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80139524
}

loc_801E2AE8:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E2958(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E2958_ra38_18_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E2958 func_801E2958 preserves=true fpr_mask=0x00000000
