#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803595CC(CpuContext* ctx);
extern "C" uint64_t func_803595CC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C0A24_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803C0A24;

loc_803C0A24:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    r3 = (r3 + 172);
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
    r27 = 0;
    r3 = 0x805F0000u;
    r30 = (r3 + 10416);
    r29 = r31;
}

loc_803C0A60:
{
    r26 = 0;
    r28 = MemoryInline::FlatRead32(r30);
}

loc_803C0A68:
{
    r3 = MemoryInline::FlatRead16(r28);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C0A74u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_908 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_908);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_908 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C0A78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803C0A8C;
    }
}

loc_803C0A7C:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16((r29 + 172), static_cast<uint16_t>(r0));
    r29 = (r29 + 2);
    r25 = (r25 + 1);
}

loc_803C0A8C:
{
    r28 = (r28 + 2);
    r26 = (r26 + 1);
}

loc_803C0A98:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(6))) {
        goto loc_803C0A68;
    }
}

loc_803C0A9C:
{
    r30 = (r30 + 4);
    r27 = (r27 + 1);
}

loc_803C0AA8:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_803C0A60;
    }
}

loc_803C0AAC:
{
    r3 = 0x80790000u;
    r28 = (r3 + 23080);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r30 = (r31 + r0);
    goto loc_803C0AE4;
}

loc_803C0AC4:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C0ACCu;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_10B2 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_10B2);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_10B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C0AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803C0AE0;
    }
}

loc_803C0AD4:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16((r30 + 172), static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
}

loc_803C0AE0:
{
    r28 = (r28 + 2);
}

loc_803C0AE4:
{
    r3 = MemoryInline::FlatRead16(r28);
}

loc_803C0AEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803C0AC4;
    }
}

loc_803C0AF0:
{
    r3 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
    r0 = 451;
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = 462;
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = 5096;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 24), r3);
    }
    r0 = 30;
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = (r31 + 172);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 32), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x803C0B40u;
    if constexpr (KnownRegArgsCpuCall<0x803595CCu>(&func_803595CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_803595CC_1B4F = func_803595CC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803595CC_1B4F);
        r4 = static_cast<uint32_t>(regargs_result_803595CC_1B4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x803595CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r11 = (r1 + 80);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C0A24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C0A24_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C0A24 func_803C0A24 preserves=true fpr_mask=0x00000000
