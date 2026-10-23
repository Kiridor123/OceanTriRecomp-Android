#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214608(CpuContext* ctx);
extern "C" uint64_t func_80214608_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802146B8;

loc_802146B8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    r31 = MemoryInline::FlatRead16((r1 + 58));
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_1 = MemoryInline::ResolveRangeHost((r23 + 2), 0, 26u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r23 + 6), static_cast<uint16_t>(r24));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r23 + 8), static_cast<uint8_t>(r25));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r23 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r23 + 12), r27);
    }
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 14u, (r23 + 16), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r23 + 2), r28);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r23 + 4), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 18u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 18u, (r23 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_1, 22u, (r23 + 24), r30);
    }
    r0 = (r25 & 255);
}

loc_80214730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8021473C;
    }
}

loc_80214734:
{
    r3 = r23;
    ctx->lr = 0x8021473Cu;
    if constexpr (KnownRegArgsCpuCall<0x80214608u>(&func_80214608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80214608_E36 = func_80214608_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80214608_E36);
        r4 = static_cast<uint32_t>(regargs_result_80214608_E36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80214608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8021473C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
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

extern "C" void func_802146B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802146B8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802146B8 func_802146B8 preserves=true fpr_mask=0x00000000
