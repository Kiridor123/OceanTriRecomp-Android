#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9354(CpuContext* ctx);
extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804450EC(CpuContext* ctx);
extern "C" uint64_t func_804450EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80443E70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80443E70u);
    goto loc_80443E70;

loc_80443E70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 0x806E0000u;
    r4 = (r4 + 31016);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80443E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_80443EB0;
    }
}

loc_80443E9C:
{
}

loc_80443EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_80443EC4;
    }
}

loc_80443EA4:
{
}

loc_80443EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_80443F00;
    }
}

loc_80443EAC:
{
    goto loc_80443F18;
}

loc_80443EB0:
{
    r3 = r4;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x80443EC0u;
    if constexpr (KnownRegArgsCpuCall<0x804450ECu>(&func_804450EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804450EC_729 = func_804450EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804450EC_729);
        r4 = static_cast<uint32_t>(regargs_result_804450EC_729 >> 32);
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
        InvokeDirectCpu<0x804450ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_80443F18;
}

loc_80443EC4:
{
    r3 = (r3 + 420);
    r4 = 0;
    r5 = 16;
    r6 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802A9354_AE4 = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_AE4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802A9354u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 812u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 811u, (r31 + 812), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 567u, (r31 + 568), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 429u, (r31 + 430), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 430u, (r31 + 431), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r31 + 28), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 569u, (r31 + 570), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 2), static_cast<uint8_t>(r0));
    goto loc_80443F18;
}

loc_80443F00:
{
    r3 = r4;
    r4 = 1;
    r5 = 0x806C0000u;
    r5 = (r5 + 6576);
    r5 = (r5 + 11736);
    ctx->lr = 0x80443F18u;
    if constexpr (KnownRegArgsCpuCall<0x804450ECu>(&func_804450EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804450EC_1179 = func_804450EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804450EC_1179);
        r4 = static_cast<uint32_t>(regargs_result_804450EC_1179 >> 32);
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
        InvokeDirectCpu<0x804450ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80443F18:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80443E70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80443E70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80443E70 func_80443E70 preserves=true fpr_mask=0x00000000
