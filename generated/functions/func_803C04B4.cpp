#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803595CC(CpuContext* ctx);
extern "C" uint64_t func_803595CC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A50D4(CpuContext* ctx);
extern "C" uint64_t func_803A50D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BEE9C(CpuContext* ctx);
extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C04B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803C04B4u);
    goto loc_803C04B4;

loc_803C04B4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r29 = r4;
    r0 = MemoryInline::FlatRead16((r3 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 137));
    r3 = (r13 + -22368);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803BEE9Cu>(&func_803BEE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEE9C_89E = func_803BEE9C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BEE9C_89E;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BEE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    r3 = (r28 + 172);
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    r30 = 0;
    r24 = 0;
    r25 = r28;
    r3 = 0x806B0000u;
    r26 = (r3 + -12348);
    r27 = 0;
    goto loc_803C055C;
}

loc_803C0520:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = (r26 + r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 308));
}

loc_803C0538:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_803C054C;
    }
}

loc_803C053C:
{
    if constexpr (KnownRegArgsCpuCall<0x803A50D4u>(&func_803A50D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A50D4_D8B = func_803A50D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A50D4_D8B);
        r4 = static_cast<uint32_t>(regargs_result_803A50D4_D8B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803A50D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite16((r25 + 172), static_cast<uint16_t>(r3));
    r30 = (r30 + 1);
    goto loc_803C0550;
}

loc_803C054C:
{
    MemoryInline::FlatWrite16((r25 + 172), static_cast<uint16_t>(r27));
}

loc_803C0550:
{
    r25 = (r25 + 2);
    r31 = (r31 + 1);
    r24 = (r24 + 1);
}

loc_803C055C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803C0568:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803C0520;
    }
}

loc_803C056C:
{
    r0 = (r30 & 255);
}

loc_803C0574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C05A4;
    }
}

loc_803C0578:
{
    r3 = (r28 + 172);
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r28 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 137));
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 143), static_cast<uint8_t>(r4));
}

loc_803C05A4:
{
    r3 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 12), r3);
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 18), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 22), static_cast<uint16_t>(r0));
    r0 = 462;
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = 5096;
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 28), r3);
    }
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 24), static_cast<uint16_t>(r31));
    r0 = (r28 + 172);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 32), r0);
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r1 + 36), static_cast<uint8_t>(r0));
    r0 = (r29 & 255);
}

loc_803C05EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C05FC;
    }
}

loc_803C05F0:
{
    r0 = (r30 & 255);
}

loc_803C05F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C0608;
    }
}

loc_803C05FC:
{
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x803C0608u;
    if constexpr (KnownRegArgsCpuCall<0x803595CCu>(&func_803595CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_803595CC_1BF2 = func_803595CC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803595CC_1BF2);
        r4 = static_cast<uint32_t>(regargs_result_803595CC_1BF2 >> 32);
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
}

loc_803C0608:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C04B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C04B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C04B4 func_803C04B4 preserves=true fpr_mask=0x00000000
