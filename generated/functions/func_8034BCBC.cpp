#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8034BCBC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8034BCBC;

loc_8034BCBC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r31 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r26 = 0;
    r25 = 0;
    r24 = r28;
    r3 = 73;
    ctx->lr = 0x8034BCF4u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_A96 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_A96;
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
    r27 = r3;
}

loc_8034BCFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034BD18;
    }
}

loc_8034BD00:
{
}

loc_8034BD04:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8034BD10;
    }
}

loc_8034BD08:
{
    r0 = -1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8034BD10:
{
    r3 = 0;
    goto loc_8034BF40;
}

loc_8034BD18:
{
    r0 = (r31 & 255);
}

loc_8034BD20:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8034BD38;
    }
}

loc_8034BD24:
{
}

loc_8034BD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8034BD50;
    }
}

loc_8034BD2C:
{
}

loc_8034BD30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8034BD90;
    }
}

loc_8034BD34:
{
    goto loc_8034BDB8;
}

loc_8034BD38:
{
}

loc_8034BD3C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8034BD48;
    }
}

loc_8034BD40:
{
    r0 = 4;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8034BD48:
{
    r3 = 0;
    goto loc_8034BF40;
}

loc_8034BD50:
{
    r3 = 74;
    ctx->lr = 0x8034BD58u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_11DD = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_11DD;
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
    r31 = r3;
    r0 = (r28 & 255);
}

loc_8034BD64:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(12))) {
        goto loc_8034BDD0;
    }
}

loc_8034BD68:
{
}

loc_8034BD6C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(26))) {
        goto loc_8034BDD0;
    }
}

loc_8034BD70:
{
    r24 = (r28 + -12);
    r3 = 75;
    ctx->lr = 0x8034BD7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1587 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1587;
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
    r26 = r3;
    r3 = 76;
    ctx->lr = 0x8034BD88u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_17D7 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_17D7;
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
    r25 = r3;
    goto loc_8034BDD0;
}

loc_8034BD90:
{
    r3 = 77;
    ctx->lr = 0x8034BD98u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1A56 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1A56;
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
    r31 = r3;
    r3 = 78;
    ctx->lr = 0x8034BDA4u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1CA6 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1CA6;
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
    r26 = r3;
    r3 = 79;
    ctx->lr = 0x8034BDB0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1EF6 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1EF6;
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
    r25 = r3;
    goto loc_8034BDD0;
}

loc_8034BDB8:
{
}

loc_8034BDBC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8034BDC8;
    }
}

loc_8034BDC0:
{
    r0 = -1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8034BDC8:
{
    r3 = 0;
    goto loc_8034BF40;
}

loc_8034BDD0:
{
    r3 = 7;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl1_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl1_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl1_0x803BECF4;
    }
}

loc_inl1_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (r0 ^ 1);
    goto loc_inl1_cont_803BECD4;
}

loc_inl1_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl1_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8034BDE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034BDF8;
    }
}

loc_8034BDE4:
{
}

loc_8034BDE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8034BE0C;
    }
}

loc_8034BDEC:
{
}

loc_8034BDF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8034BE90;
    }
}

loc_8034BDF4:
{
    goto loc_8034BF14;
}

loc_8034BDF8:
{
    r0 = (r28 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r31_addr_5 = (r31 + r0);
    r25 = MemoryInline::FlatRead32(r31_addr_5);
    r0 = 1;
    goto loc_8034BF1C;
}

loc_8034BE0C:
{
}

loc_8034BE10:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8034BE28;
    }
}

loc_8034BE14:
{
    r0 = (r28 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r31_addr_3 = (r31 + r0);
    r25 = MemoryInline::FlatRead32(r31_addr_3);
    r0 = 1;
    goto loc_8034BF1C;
}

loc_8034BE28:
{
    r0 = (r24 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r26_addr_1 = (r26 + r0);
    r25 = MemoryInline::FlatRead32(r26_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r25_addr_3 = (r25 + r0);
    r26 = MemoryInline::FlatRead32(r25_addr_3);
    r3 = r26;
    r4 = MemoryInline::FlatRead32(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8034BE50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034BE68;
    }
}

loc_8034BE54:
{
    r0 = (r28 & 255);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r31_addr_4 = (r31 + r0);
    r25 = MemoryInline::FlatRead32(r31_addr_4);
    r0 = 1;
    goto loc_8034BF1C;
}

loc_8034BE68:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r27 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8034BE78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034BE88;
    }
}

loc_8034BE7C:
{
    r25 = 0;
    r0 = 0;
    goto loc_8034BF1C;
}

loc_8034BE88:
{
    r0 = 2;
    goto loc_8034BF1C;
}

loc_8034BE90:
{
}

loc_8034BE94:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8034BEAC;
    }
}

loc_8034BE98:
{
    r0 = (r28 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31_addr_1 = (r31 + r0);
    r25 = MemoryInline::FlatRead32(r31_addr_1);
    r0 = 1;
    goto loc_8034BF1C;
}

loc_8034BEAC:
{
    r0 = (r24 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r25_addr_1 = (r25 + r0);
    r25 = MemoryInline::FlatRead32(r25_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r25_addr_2 = (r25 + r0);
    r26 = MemoryInline::FlatRead32(r25_addr_2);
    r3 = r26;
    r4 = MemoryInline::FlatRead32(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8034BED4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034BEEC;
    }
}

loc_8034BED8:
{
    r0 = (r28 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r31_addr_2 = (r31 + r0);
    r25 = MemoryInline::FlatRead32(r31_addr_2);
    r0 = 1;
    goto loc_8034BF1C;
}

loc_8034BEEC:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r27 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8034BEFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034BF0C;
    }
}

loc_8034BF00:
{
    r25 = 0;
    r0 = 0;
    goto loc_8034BF1C;
}

loc_8034BF0C:
{
    r0 = 3;
    goto loc_8034BF1C;
}

loc_8034BF14:
{
    r25 = 0;
    r0 = -1;
}

loc_8034BF1C:
{
}

loc_8034BF20:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8034BF28;
    }
}

loc_8034BF24:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8034BF28:
{
    r3 = 0;
}

loc_8034BF30:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8034BF40;
    }
}

loc_8034BF34:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r25_addr_5 = (r25 + r0);
    r3 = MemoryInline::FlatRead32(r25_addr_5);
}

loc_8034BF40:
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

extern "C" void func_8034BCBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034BCBC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034BCBC func_8034BCBC preserves=true fpr_mask=0x00000000
