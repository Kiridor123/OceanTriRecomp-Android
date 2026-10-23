#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274B84(CpuContext* ctx);
extern "C" uint64_t func_80274B84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80274E30(CpuContext* ctx);
extern "C" uint64_t func_80274E30_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802799A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802799A0;

loc_802799A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = r5;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_802799C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802799D4;
    }
}

loc_802799CC:
{
    r3 = 255;
    goto loc_80279BD0;
}

loc_802799D4:
{
    r26 = 0;
    r27 = (r28 + 632);
    r31 = (r1 + 8);
}

loc_802799E0:
{
    r3 = r31;
    r4 = r27;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r27 = (r27 + 4);
    r31 = (r31 + 4);
    r26 = (r26 + 1);
}

loc_802799FC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(24))) {
        goto loc_802799E0;
    }
}

loc_80279A00:
{
    r26 = 0;
}

loc_80279A04:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (r4 + 24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r1 + 8);
    r3 = (r3 + r0);
    r0 = (r4 + 26);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r28 + r0);
    r4 = (r4 + 632);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r26 = (r26 + 1);
}

loc_80279A34:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(9))) {
        goto loc_80279A04;
    }
}

loc_80279A38:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 128);
}

loc_80279A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80279A54;
    }
}

loc_80279A48:
{
    r3 = (r29 & 127);
    r0 = (r3 + 24);
    r29 = (r0 & 65535);
}

loc_80279A54:
{
    r0 = (r29 & 65535);
}

loc_80279A5C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(33))) {
        goto loc_80279A64;
    }
}

loc_80279A60:
{
    r29 = 0;
}

loc_80279A64:
{
    r0 = (r30 & 255);
}

loc_80279A6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80279A7C;
    }
}

loc_80279A70:
{
}

loc_80279A74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80279AAC;
    }
}

loc_80279A78:
{
    goto loc_80279AC4;
}

loc_80279A7C:
{
    r3 = (r29 & 65535);
    r4 = (r3 + 1);
    r3 = 1041235968;
    r0 = (r3 + -31775);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 33);
    r0 = (r4 - r0);
    r29 = (r0 & 65535);
    goto loc_80279AC4;
}

loc_80279AAC:
{
    r3 = (r29 & 65535);
}

loc_80279AB4:
{
    r29 = 32;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80279AC4;
    }
}

loc_80279ABC:
{
    r0 = (r3 + -1);
    r29 = (r0 & 65535);
}

loc_80279AC4:
{
    r31 = 0;
    r27 = (r30 & 255);
    r30 = 1041235968;
}

loc_80279AD0:
{
    r0 = (r29 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r26 = (r1 + 8);
    r26 = (r26 + r0);
    r3 = MemoryInline::FlatRead16(r26);
}

loc_80279AE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80279B58;
    }
}

loc_80279AEC:
{
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80279AF4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80279B58;
    }
}

loc_80279AF8:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl4_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl4_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl4_0x8029F758;
    }
}

loc_inl4_0x8029F754:
{
    r3 = 0;
}

loc_inl4_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl4_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 8);
}

loc_80279B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80279B58;
    }
}

loc_80279B0C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80279B14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80279B58;
    }
}

loc_80279B18:
{
    r3 = MemoryInline::FlatRead16(r26);
    if constexpr (KnownRegArgsCpuCall<0x80274B84u>(&func_80274B84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274B84_1E00 = func_80274B84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274B84_1E00);
        r4 = static_cast<uint32_t>(regargs_result_80274B84_1E00 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274B84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r28;
    r4 = (r0 & 255);
    ctx->lr = 0x80279B30u;
    if constexpr (KnownRegArgsCpuCall<0x80274E30u>(&func_80274E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80274E30_2104 = func_80274E30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274E30_2104);
        r4 = static_cast<uint32_t>(regargs_result_80274E30_2104 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80274E30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80279B34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279B58;
    }
}

loc_80279B38:
{
    r0 = (r29 & 65535);
}

loc_80279B40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(24))) {
        goto loc_80279B50;
    }
}

loc_80279B44:
{
    r0 = (r29 + -24);
    r0 = (r0 | 128);
    r29 = (r0 & 65535);
}

loc_80279B50:
{
    r3 = r29;
    goto loc_80279BD0;
}

loc_80279B58:
{
}

loc_80279B5C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80279B7C;
    }
}

loc_80279B60:
{
}

loc_80279B64:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(2))) {
        goto loc_80279B7C;
    }
}

loc_80279B68:
{
}

loc_80279B6C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_80279BA8;
    }
}

loc_80279B70:
{
}

loc_80279B74:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(3))) {
        goto loc_80279BA8;
    }
}

loc_80279B78:
{
    goto loc_80279BC0;
}

loc_80279B7C:
{
    r3 = (r29 & 65535);
    r4 = (r3 + 1);
    r0 = (r30 + -31775);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 33);
    r0 = (r4 - r0);
    r29 = (r0 & 65535);
    goto loc_80279BC0;
}

loc_80279BA8:
{
    r3 = (r29 & 65535);
}

loc_80279BB0:
{
    r29 = 32;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80279BC0;
    }
}

loc_80279BB8:
{
    r0 = (r3 + -1);
    r29 = (r0 & 65535);
}

loc_80279BC0:
{
    r31 = (r31 + 1);
}

loc_80279BC8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(33))) {
        goto loc_80279AD0;
    }
}

loc_80279BCC:
{
    r3 = 255;
}

loc_80279BD0:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802799A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802799A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802799A0 func_802799A0 preserves=true fpr_mask=0x00000000
