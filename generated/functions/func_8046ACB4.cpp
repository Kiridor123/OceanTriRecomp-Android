#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046ACB4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046ACB4;

loc_8046ACB4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -16328));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_8046ACDC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046ACEC;
    }
}

loc_8046ACE4:
{
    r4 = (r1 + 8);
    goto loc_8046AD30;
}

loc_8046ACEC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r1 + 15));
    r4 = (r1 + 16);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 14));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r1 + 13));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r1 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r1 + 11));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 10));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r1 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 16), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 17), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 18), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 19), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 23), static_cast<uint8_t>(r0));
}

loc_8046AD30:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r30 = 8;
    r29 = 0;
    r0 = (2176 - r5);
}

loc_8046AD44:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_8046AD50;
    }
}

loc_8046AD48:
{
    r29 = 769;
    r30 = r0;
}

loc_8046AD50:
{
}

loc_8046AD54:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8046AD68;
    }
}

loc_8046AD58:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8046AD78;
}

loc_8046AD68:
{
    r3 = (r3 + r5);
    r5 = r30;
    r3 = (r3 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80469048_FAF = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_FAF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    }
}

loc_8046AD78:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = r29;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046ACB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046ACB4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046ACB4 func_8046ACB4 preserves=true fpr_mask=0x00000000
