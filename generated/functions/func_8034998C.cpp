#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EA88(CpuContext* ctx);
extern "C" uint32_t func_8004EA88_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8029F68C(CpuContext* ctx);
extern "C" uint64_t func_8029F68C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8034998C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8034998C;

loc_8034998C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r30 = r3;
    r31 = r4;
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r26 = (r4 * r0);
    ctx->lr = 0x803499B8u;
    if constexpr (KnownRegArgsCpuCall<0x8004EA88u>(&func_8004EA88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004EA88_871 = func_8004EA88_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004EA88_871;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8004EA88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r27 = (r3 + r0);
    r25 = 0;
    r29 = 1;
    r28 = 0;
    goto loc_80349AD4;
}

loc_803499D0:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r0 = (r0 - r25);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 12), r28);
    r0 = MemoryInline::FlatRead32(r27);
    r0 = (r0 & 255);
}

loc_80349A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349AB4;
    }
}

loc_80349A04:
{
}

loc_80349A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80349A38;
    }
}

loc_80349A0C:
{
}

loc_80349A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80349A4C;
    }
}

loc_80349A14:
{
}

loc_80349A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80349A60;
    }
}

loc_80349A1C:
{
}

loc_80349A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80349A74;
    }
}

loc_80349A24:
{
}

loc_80349A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80349A88;
    }
}

loc_80349A2C:
{
}

loc_80349A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80349AA0;
    }
}

loc_80349A34:
{
    goto loc_80349AC4;
}

loc_80349A38:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 8));
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl1_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F6A8;
    }
}

loc_inl1_0x8029F6A4:
{
    r3 = 0;
}

loc_inl1_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_inl1_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80349AC4;
}

loc_80349A4C:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 8));
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl2_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F6A8;
    }
}

loc_inl2_0x8029F6A4:
{
    r3 = 0;
}

loc_inl2_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
}

loc_inl2_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80349AC4;
}

loc_80349A60:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 6));
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl3_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F6A8;
    }
}

loc_inl3_0x8029F6A4:
{
    r3 = 0;
}

loc_inl3_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl3_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80349AC4;
}

loc_80349A74:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 6));
    if constexpr (KnownRegArgsCpuCall<0x8029F68Cu>(&func_8029F68C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F68C_1D26 = func_8029F68C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F68C_1D26);
        r4 = static_cast<uint32_t>(regargs_result_8029F68C_1D26 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F68Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80349AC4;
}

loc_80349A88:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = 68;
    ctx->lr = 0x80349A94u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_2070 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_2070;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80349AC4;
}

loc_80349AA0:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead16((r27 + 10));
    if constexpr (KnownRegArgsCpuCall<0x8029F68Cu>(&func_8029F68C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F68C_2389 = func_8029F68C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F68C_2389);
        r4 = static_cast<uint32_t>(regargs_result_8029F68C_2389 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F68Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80349AC4;
}

loc_80349AB4:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r28));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8029F68Cu>(&func_8029F68C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F68C_26B6 = func_8029F68C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F68C_26B6);
        r4 = static_cast<uint32_t>(regargs_result_8029F68C_26B6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F68Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_80349AC4:
{
    r31 = (r31 + 24);
    r26 = (r26 + 1);
    r25 = (r25 + 1);
    r27 = (r27 + 16);
}

loc_80349AD4:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_80349ADC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_803499D0;
    }
}

loc_80349AE0:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034998C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034998C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034998C func_8034998C preserves=true fpr_mask=0x00000000
