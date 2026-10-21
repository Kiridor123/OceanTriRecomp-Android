#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C820(CpuContext* ctx);
extern "C" uint64_t func_8004C820_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004D960(CpuContext* ctx);
extern "C" uint32_t func_8004D960_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004DC90(CpuContext* ctx);
extern "C" uint32_t func_8004DC90_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004C744_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8004C744u);
    goto loc_8004C744;

loc_8004C744:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r4 = (r4 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004C820u>(&func_8004C820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C820_53C = func_8004C820_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004C820_53C);
        r4 = static_cast<uint32_t>(regargs_result_8004C820_53C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004C820u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004C770:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004C800;
    }
}

loc_8004C774:
{
    r0 = (r30 & 65535);
    r0 = (r0 * 12);
    r3 = (r29 + r0);
    r3 = (r3 + 3584);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
}

loc_8004C794:
{
    r3 = r29;
    r4 = (r30 & 65535);
    r5 = (r31 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8004D960u>(&func_8004D960)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D960_98E = func_8004D960_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004D960_98E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D960u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8004C7A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004C7B8;
    }
}

loc_8004C7AC:
{
    r3 = r29;
    r4 = (r31 & 255);
    // inline leaf 0x8004D82C (17 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 42);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 13184), 0, 19u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 13184), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 13186), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 13188), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 13196), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 13198), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 13190), r0);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 13192), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 13194), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 13200), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r4 + 13202), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004D82C
}

loc_8004C7B8:
{
    r31 = (r31 + 1);
}

loc_8004C7C0:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(20))) {
        goto loc_8004C794;
    }
}

loc_8004C7C4:
{
    r31 = 0;
}

loc_8004C7C8:
{
    r3 = r29;
    r4 = (r30 & 65535);
    r5 = (r31 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8004DC90u>(&func_8004DC90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC90_13D4 = func_8004DC90_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004DC90_13D4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DC90u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8004C7DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004C7EC;
    }
}

loc_8004C7E0:
{
    r3 = r29;
    r4 = (r31 & 255);
    // inline leaf 0x8004DBA4 (11 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 30);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 14024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14026), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14028), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 14030), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004DBA4
}

loc_8004C7EC:
{
    r31 = (r31 + 1);
}

loc_8004C7F4:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(20))) {
        goto loc_8004C7C8;
    }
}

loc_8004C7F8:
{
    r3 = 1;
    goto loc_8004C804;
}

loc_8004C800:
{
    r3 = 0;
}

loc_8004C804:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004C744(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004C744_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004C744 func_8004C744 preserves=true fpr_mask=0x00000000
