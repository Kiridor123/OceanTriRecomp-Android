#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DA76C(CpuContext* ctx);
extern "C" uint32_t func_802DA76C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DA774(CpuContext* ctx);
extern "C" uint32_t func_802DA774_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802DA76C_statefree(uint32_t);

extern "C" uint64_t func_802DAAB8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802DAAB8u);
    goto loc_802DAAB8;

loc_802DAAB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    // inline leaf 0x802DA96C (2 guest instruction(s))
    r3 = (r3 + 16);
    // end of inlined leaf 0x802DA96C
    r31 = r3;
    r3 = r30;
    // inline leaf 0x802DA7B8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x802DA7B8
    r0 = (r3 & 255);
}

loc_802DAAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DAB10;
    }
}

loc_802DAAF4:
{
}

loc_802DAAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DABE0;
    }
}

loc_802DAAFC:
{
}

loc_802DAB00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802DAC0C;
    }
}

loc_802DAB04:
{
}

loc_802DAB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802DAC30;
    }
}

loc_802DAB0C:
{
    goto loc_802DAC50;
}

loc_802DAB10:
{
    r3 = r30;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23824);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32(r31, r0);
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80040424
}

loc_802DAB38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DAB60;
    }
}

loc_802DAB3C:
{
    r3 = r30;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23836);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_802DAB80;
}

loc_802DAB60:
{
    r3 = r30;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23848);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_802DAB80:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl6_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl6_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CEF40;
    }
}

loc_inl6_0x800CEF3C:
{
    r0 = 1;
}

loc_inl6_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl6_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r28 = (r3 & 65535);
    r3 = r30;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r29 = (r13 + -26624);
    r29_addr_1 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_1);
    r0 = (r28 * r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r28 = (r28_rot_1 & 65535);
    r3 = r30;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r29_addr_2 = (r29 + r0);
    r3 = MemoryInline::FlatRead16(r29_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r3 = r30;
    // inline leaf 0x802DA7A8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA7A8
    goto loc_802DAC50;
}

loc_802DABE0:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x802DA774 (8 guest instruction(s))
}

loc_inl10_0x802DA774:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl10_0x802DA77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x802DA78C;
    }
}

loc_inl10_0x802DA780:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_inl10_0x802DA78C:
{
    r3 = MemoryInline::FlatRead8((r3 + 7));
}

loc_inl10_cont_802DA774:
{
    // end of inlined leaf 0x802DA774
    r0 = (r3 & 255);
}

loc_802DABF4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(30))) {
        goto loc_802DAC50;
    }
}

loc_802DABF8:
{
    r3 = r30;
    // inline leaf 0x802DA7A8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA7A8
    r0 = 90;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_802DAC50;
}

loc_802DAC0C:
{
    r3 = MemoryInline::FlatRead16((r31 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DAC20:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802DAC50;
    }
}

loc_802DAC24:
{
    r3 = r30;
    // inline leaf 0x802DA7A8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA7A8
    goto loc_802DAC50;
}

loc_802DAC30:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802DA76Cu) && KnownTranslatedCpuCall<0x802DA76Cu>::kAvailable && !KnownTranslatedCpuCall<0x802DA76Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802DA76Cu>()) {
        const auto state_free_result_802DA76C_24E1 = func_802DA76C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_802DA76C_24E1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802DA76Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
    }
    r0 = (r3 & 255);
}

loc_802DAC40:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(40))) {
        goto loc_802DAC50;
    }
}

loc_802DAC44:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802DA774u>(&func_802DA774)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA774_283E = func_802DA774_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802DA774_283E;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DA774u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_802DAC50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DAAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DAAB8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DAAB8 func_802DAAB8 preserves=true fpr_mask=0x00000000
