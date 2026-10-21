#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80454458_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80454458u);
    goto loc_80454458;

loc_80454458:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r23 = r6;
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl2_0x8041A5E4:
{
}

loc_inl2_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8041A5FC;
    }
}

loc_inl2_0x8041A5EC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl2_cont_8041A5E4;
}

loc_inl2_0x8041A5FC:
{
    r3 = 0;
}

loc_inl2_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r28 = MemoryInline::FlatRead32((r3 + -3668));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    MemoryInline::FlatWrite16(r23, static_cast<uint16_t>(r0));
    r0 = (r28 + -1);
}

loc_804544A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r25))) {
        goto loc_804544AC;
    }
}

loc_804544A4:
{
    r3 = 0;
    goto loc_80454574;
}

loc_804544AC:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl4_0x8041A5E4:
{
}

loc_inl4_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8041A5FC;
    }
}

loc_inl4_0x8041A5EC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl4_cont_8041A5E4;
}

loc_inl4_0x8041A5FC:
{
    r3 = 0;
}

loc_inl4_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r29 = (r3 + 65536);
    r29 = (r29 + -3664);
    r0 = (r25 * 9488);
    r29 = (r29 + r0);
    r27 = 0;
    r30 = r25;
    r31 = (r25 + r26);
    r23 = 1;
    goto loc_80454568;
}

loc_804544DC:
{
}

loc_804544E0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r28))) {
        goto loc_80454570;
    }
}

loc_804544E4:
{
    r0 = (r30 - r25);
}

loc_804544EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r26))) {
        goto loc_80454570;
    }
}

loc_804544F0:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r23));
    r3 = (r24 + 1);
    r4 = (r29 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_1094 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1094;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r24 + 33);
    r4 = (r29 + 96);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_1337 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1337;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r24 + 65);
    r4 = (r29 + 160);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_15DB = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_15DB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r29 + 224));
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 84), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r24 + 84), r0);
    r0 = MemoryInline::FlatRead32((r29 + 236));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r24 + 88), r0);
    r0 = MemoryInline::FlatRead32((r29 + 232));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r24 + 92), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r24 + 96), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 252));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r24 + 100), r0);
    r0 = MemoryInline::FlatRead32((r29 + 260));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r24 + 104), r0);
    r0 = MemoryInline::FlatRead32((r29 + 268));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r24 + 108), r0);
    r0 = MemoryInline::FlatRead32((r29 + 276));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r24 + 112), r0);
    r24 = (r24 + 116);
    r29 = (r29 + 9488);
    r27 = (r27 + 1);
    r30 = (r30 + 1);
}

loc_80454568:
{
}

loc_8045456C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r31))) {
        goto loc_804544DC;
    }
}

loc_80454570:
{
    r3 = r27;
}

loc_80454574:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
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

extern "C" void func_80454458(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80454458_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80454458 func_80454458 preserves=true fpr_mask=0x00000000
