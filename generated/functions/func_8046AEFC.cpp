#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046AEFC_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8046AEFCu);
    goto loc_8046AEFC;

loc_8046AEFC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r27 = r3;
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r13 + -16328));
}

loc_8046AF1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046AF28;
    }
}

loc_8046AF20:
{
    r30 = r29;
    goto loc_8046AF2C;
}

loc_8046AF28:
{
    r30 = (r1 + 8);
}

loc_8046AF2C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r28 = 8;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r31 = 0;
    r0 = (r0 - r4);
}

loc_8046AF44:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_8046AF50;
    }
}

loc_8046AF48:
{
    r31 = 770;
    r28 = r0;
}

loc_8046AF50:
{
    r4 = (r27 + r4);
    r3 = r30;
    r5 = r28;
    r4 = (r4 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80469048_767 = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_767;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    r0 = MemoryInline::FlatRead32((r13 + -16328));
}

loc_8046AF78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046AFC4;
    }
}

loc_8046AF7C:
{
}

loc_8046AF80:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8046AFC4;
    }
}

loc_8046AF84:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 7));
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r29 + 7), static_cast<uint8_t>(r0));
}

loc_8046AFC4:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046AEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046AEFC_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FDB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046AEFC func_8046AEFC preserves=true fpr_mask=0x00000000
