#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA450(CpuContext* ctx);
extern "C" uint32_t func_802AA450_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80436FA8(CpuContext* ctx);
extern "C" uint64_t func_80436FA8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80436E5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    MKW_GUEST_ENTER(0x80436E5Cu);
    goto loc_80436E5C;

loc_80436E5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r29 = r4;
    r30 = 0;
    r31 = (r3 + 24);
    r26 = -1;
    r27 = 0;
}

loc_80436E88:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80436E90:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_80436F6C;
    }
}

loc_80436E94:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r3 = r28;
    ctx->lr = 0x80436EA4u;
    if constexpr (KnownRegArgsCpuCall<0x80436FA8u>(&func_80436FA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80436FA8_A9F = func_80436FA8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80436FA8_A9F);
        r4 = static_cast<uint32_t>(regargs_result_80436FA8_A9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80436FA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r3));
    r3 = 52;
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
    r25 = 0;
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80436EC4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10))) {
        goto loc_80436ED8;
    }
}

loc_80436EC8:
{
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
}

loc_80436ED0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80436ED8;
    }
}

loc_80436ED4:
{
    r25 = 1;
}

loc_80436ED8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_80436EE0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_80436F1C;
    }
}

loc_80436EE4:
{
}

loc_80436EE8:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_80436EF8;
    }
}

loc_80436EEC:
{
    r4 = 1;
    r6 = 0;
    goto loc_80436F24;
}

loc_80436EF8:
{
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl3_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl3_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl3_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802DE508:
{
    r3 = 1;
    goto loc_inl3_cont_802DE4E4;
}

loc_inl3_return:
{
}

loc_inl3_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_80436F00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80436F10;
    }
}

loc_80436F04:
{
    r4 = 0;
    r6 = 1;
    goto loc_80436F24;
}

loc_80436F10:
{
    r4 = 0;
    r6 = 0;
    goto loc_80436F24;
}

loc_80436F1C:
{
    r4 = 0;
    r6 = 0;
}

loc_80436F24:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (0 - r25);
    r0 = (r0 | r25);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    if constexpr (KnownRegArgsCpuCall<0x802AA450u>(&func_802AA450)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802AA450_1C60 = func_802AA450_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802AA450_1C60;
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
    goto loc_80436F80;
}

loc_80436F6C:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite32((r31 + 8), r27);
    MemoryInline::FlatWrite32((r31 + 12), r27);
}

loc_80436F80:
{
    r31 = (r31 + 24);
    r30 = (r30 + 1);
}

loc_80436F8C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_80436E88;
    }
}

loc_80436F90:
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

extern "C" void func_80436E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80436E5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80436E5C func_80436E5C preserves=true fpr_mask=0x00000000
