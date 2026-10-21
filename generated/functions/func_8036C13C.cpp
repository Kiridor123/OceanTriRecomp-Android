#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA450(CpuContext* ctx);
extern "C" uint32_t func_802AA450_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DE4E4(CpuContext* ctx);
extern "C" uint32_t func_802DE4E4_ra10_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8036C13C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8036C13Cu);
    goto loc_8036C13C;

loc_8036C13C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r29 = r4;
    r31 = (r3 + 36);
    r30 = 0;
    r26 = 1;
    r27 = 0;
    goto loc_8036C21C;
}

loc_8036C16C:
{
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r26));
    r3 = 42;
    r4 = (r30 & 65535);
    // inline leaf 0x8029F844 (10 guest instruction(s))
    r5 = 0x806B0000u;
    r5 = (r5 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    r0 = (r4 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x8029F844
    MemoryInline::FlatWrite32((r31 + 8), r3);
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl2_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl2_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl2_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802DE508:
{
    r3 = 1;
    goto loc_inl2_cont_802DE4E4;
}

loc_inl2_return:
{
}

loc_inl2_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r25 = (r25_rot_2 & 1);
    r24 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_8036C1A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10))) {
        goto loc_8036C1AC;
    }
}

loc_8036C1A4:
{
}

loc_8036C1A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_8036C1D4;
    }
}

loc_8036C1AC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8036C1B4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_8036C1CC;
    }
}

loc_8036C1B8:
{
    if constexpr (KnownRegArgsCpuCall<0x802DE4E4u>(&func_802DE4E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_802DE4E4_103D = func_802DE4E4_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_802DE4E4_103D;
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DE4E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8036C1C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8036C1CC;
    }
}

loc_8036C1C4:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r26));
    goto loc_8036C1EC;
}

loc_8036C1CC:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r27));
    goto loc_8036C1EC;
}

loc_8036C1D4:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r27));
    r25 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8036C1E4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_8036C1EC;
    }
}

loc_8036C1E8:
{
    r24 = 1;
}

loc_8036C1EC:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r5 = r25;
    r6 = r24;
    if constexpr (KnownRegArgsCpuCall<0x802AA450u>(&func_802AA450)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802AA450_161F = func_802AA450_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802AA450_161F;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802AA450u>(ctx);
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r30 = (r30 + 1);
    r31 = (r31 + 24);
}

loc_8036C21C:
{
    r0 = MemoryInline::FlatRead8((r28 + 22));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8036C228:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_8036C16C;
    }
}

loc_8036C22C:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8036C13C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8036C13C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8036C13C func_8036C13C preserves=true fpr_mask=0x00000000
