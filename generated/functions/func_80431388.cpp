#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80452FD8(CpuContext* ctx);
extern "C" uint64_t func_80452FD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80453120(CpuContext* ctx);
extern "C" uint32_t func_80453120_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80453224(CpuContext* ctx);
extern "C" uint64_t func_80453224_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80431388_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80431388u);
    goto loc_80431388;

loc_80431388:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r31 = MemoryInline::FlatRead32((r4 + 172));
    r0 = (r3 & 255);
}

loc_804313AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804313BC;
    }
}

loc_804313B0:
{
}

loc_804313B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043147C;
    }
}

loc_804313B8:
{
    goto loc_804314A8;
}

loc_804313BC:
{
    r6 = 0;
    r4 = -1;
    r0 = 2;
    ctr = r0;
}

loc_804313CC:
{
    r5 = (r31 + r6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 4757), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 4757), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 4758), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 4759), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 4760), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4761), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 4762), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r5 + 4763), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r5 + 4764), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r5 = (r31 + r6);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 4757), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 4757), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 4758), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 4759), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 4760), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 4761), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 4762), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 4763), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 4764), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r5 = (r31 + r6);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 4757), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r5 + 4757), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 4758), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 4759), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 4760), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 4761), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 4762), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 4763), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 4764), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r5 = (r31 + r6);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 4757), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r5 + 4757), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r5 + 4758), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 4759), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r5 + 4760), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r5 + 4761), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r5 + 4762), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r5 + 4763), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r5 + 4764), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804313CC;
    }
}

loc_80431470:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4824), r0);
    goto loc_804314A8;
}

loc_8043147C:
{
    r0 = -1;
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 4828), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r31 + 4828), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r31 + 4829), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r31 + 4830), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r31 + 4831), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r31 + 4832), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r31 + 4833), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r31 + 4834), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r31 + 4835), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r31 + 4840), r0);
}

loc_804314A8:
{
    r0 = (r3 & 255);
}

loc_804314B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804314C8;
    }
}

loc_804314B4:
{
}

loc_804314B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804314E0;
    }
}

loc_804314BC:
{
}

loc_804314C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043150C;
    }
}

loc_804314C4:
{
    goto loc_80431528;
}

loc_804314C8:
{
    r3 = (r31 + 4757);
    r4 = MemoryInline::FlatRead8((r31 + 3));
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x80452FD8u>(&func_80452FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80452FD8_1C77 = func_80452FD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80452FD8_1C77);
        r4 = static_cast<uint32_t>(regargs_result_80452FD8_1C77 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80452FD8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r31 + 4824), r3);
    goto loc_80431528;
}

loc_804314E0:
{
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r6 = r3;
    r3 = (r31 + 4757);
    r4 = MemoryInline::FlatRead16((r6 + 15844));
    r5 = (r6 + 14784);
    r6 = (r6 + 15040);
    r7 = 41;
    r8 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80453120u>(&func_80453120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80453120_227F = func_80453120_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80453120_227F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80453120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r31 + 4824), r3);
    goto loc_80431528;
}

loc_8043150C:
{
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = r3;
    r3 = (r31 + 4828);
    r4 = MemoryInline::FlatRead16((r4 + 15844));
    r5 = 8;
    if constexpr (KnownRegArgsCpuCall<0x80453224u>(&func_80453224)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80453224_2769 = func_80453224_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80453224_2769);
        r4 = static_cast<uint32_t>(regargs_result_80453224_2769 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80453224u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r31 + 4840), r3);
}

loc_80431528:
{
    r3 = MemoryInline::FlatRead32((r31 + 4824));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80431388(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80431388_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80431388 func_80431388 preserves=true fpr_mask=0x00000000
