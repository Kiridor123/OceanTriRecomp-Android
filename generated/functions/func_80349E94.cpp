#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8034C7E8(CpuContext* ctx);
extern "C" uint64_t func_8034C7E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80349E94_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80349E94u);
    goto loc_80349E94;

loc_80349E94:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r3;
    r30 = (r3 + 108);
    r28 = MemoryInline::FlatRead8((r3 + 757));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r4 + 749));
    r4 = MemoryInline::FlatRead8((r3 + 422));
    r0 = MemoryInline::FlatRead8((r3 + 424));
    r0 = (r4 * r0);
    r29 = (r5 + r0);
    r27 = 0;
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r24 = 1;
    r25 = 0;
    goto loc_80349FCC;
}

loc_80349EE4:
{
    r0 = MemoryInline::FlatRead8((r26 + 423));
    r0 = (r0 - r27);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r30 + 12), r25);
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x80349F14u;
    if constexpr (KnownRegArgsCpuCall<0x8034C7E8u>(&func_8034C7E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8034C7E8_CAC = func_8034C7E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C7E8_CAC);
        r4 = static_cast<uint32_t>(regargs_result_8034C7E8_CAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8034C7E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80349F18:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80349FA8;
    }
}

loc_80349F1C:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r24));
}

loc_80349F24:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80349F44;
    }
}

loc_80349F28:
{
}

loc_80349F2C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_80349F58;
    }
}

loc_80349F30:
{
}

loc_80349F34:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_80349F6C;
    }
}

loc_80349F38:
{
}

loc_80349F3C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_80349F80;
    }
}

loc_80349F40:
{
    goto loc_80349F94;
}

loc_80349F44:
{
    r3 = 69;
    ctx->lr = 0x80349F4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_12DD = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_12DD;
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
    r3_addr_5 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80349FBC;
}

loc_80349F58:
{
    r3 = 70;
    ctx->lr = 0x80349F60u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_15AE = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_15AE;
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
    r3_addr_4 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80349FBC;
}

loc_80349F6C:
{
    r3 = 71;
    ctx->lr = 0x80349F74u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_187F = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_187F;
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
    r3_addr_3 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80349FBC;
}

loc_80349F80:
{
    r3 = 72;
    ctx->lr = 0x80349F88u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1B50 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1B50;
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
    r3_addr_2 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80349FBC;
}

loc_80349F94:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r25));
    r3 = 0;
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl1_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80349FBC;
}

loc_80349FA8:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r25));
    r3 = 68;
    ctx->lr = 0x80349FB4u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_21A8 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_21A8;
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
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80349FBC:
{
    r30 = (r30 + 24);
    r31 = (r31 + 4);
    r29 = (r29 + 1);
    r27 = (r27 + 1);
}

loc_80349FCC:
{
    r0 = MemoryInline::FlatRead8((r26 + 425));
}

loc_80349FD4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80349EE4;
    }
}

loc_80349FD8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80349E94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80349E94_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203A gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80349E94 func_80349E94 preserves=true fpr_mask=0x00000000
