#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F35A0(CpuContext* ctx);
extern "C" uint32_t func_801F35A0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801F3E50_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F3E50;

loc_801F3E50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r5));
    r0 = (r5 & 255);
}

loc_801F3E84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F3EA0;
    }
}

loc_801F3E88:
{
    r3 = 19001;
    ctx->lr = 0x801F3E90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_801F3E94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F3EA0;
    }
}

loc_801F3E98:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
}

loc_801F3EA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 14778));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 34u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 2), static_cast<uint8_t>(r0));
    r3 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 4), r3);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 6), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r30 + 8), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r30 + 14), static_cast<uint16_t>(r3));
    r0 = 1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r30 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r30 + 18), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r30 + 20), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r30 + 35), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r30 + 3));
}

loc_801F3EDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F3EF8;
    }
}

loc_801F3EE0:
{
}

loc_801F3EE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F3F10;
    }
}

loc_801F3EE8:
{
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    goto loc_801F3F24;
}

loc_801F3EF8:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -28888);
    r4 = (r30 + 10);
    r5 = (r30 + 12);
    if constexpr (KnownRegArgsCpuCall<0x801F35A0u>(&func_801F35A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F35A0_F4A = func_801F35A0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801F35A0_F4A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801F35A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    goto loc_801F3F24;
}

loc_801F3F10:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -28840);
    r4 = (r30 + 10);
    r5 = (r30 + 12);
    if constexpr (KnownRegArgsCpuCall<0x801F35A0u>(&func_801F35A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F35A0_11F3 = func_801F35A0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801F35A0_11F3;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801F35A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801F3F24:
{
    MemoryInline::FlatWrite32((r30 + 40), r31);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F3E50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F3E50_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F3E50 func_801F3E50 preserves=true fpr_mask=0x00000000
