#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050739C(CpuContext* ctx);
extern "C" uint64_t func_8050739C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80507450_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80507450;

loc_80507450:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r3 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -13984));
    r4 = r6;
    goto loc_80507490;
}

loc_8050747C:
{
}

loc_80507480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_80507488;
    }
}

loc_80507484:
{
    goto loc_80507524;
}

loc_80507488:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_80507490:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80507498:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8050747C;
    }
}

loc_8050749C:
{
    r4 = r6;
    r3 = 0;
    goto loc_805074BC;
}

loc_805074A8:
{
}

loc_805074AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_805074B4;
    }
}

loc_805074B0:
{
    goto loc_80507524;
}

loc_805074B4:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_805074BC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805074C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805074A8;
    }
}

loc_805074C8:
{
    r4 = r6;
    r3 = 0;
    goto loc_805074E8;
}

loc_805074D4:
{
}

loc_805074D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_805074E0;
    }
}

loc_805074DC:
{
    goto loc_80507524;
}

loc_805074E0:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_805074E8:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805074F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805074D4;
    }
}

loc_805074F4:
{
    r3 = 0;
    goto loc_80507510;
}

loc_805074FC:
{
}

loc_80507500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(63))) {
        goto loc_80507508;
    }
}

loc_80507504:
{
    goto loc_80507524;
}

loc_80507508:
{
    r3 = (r3 + 1);
    r6 = (r6 + 4);
}

loc_80507510:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_80507518:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805074FC;
    }
}

loc_8050751C:
{
    r3 = 63;
    if constexpr (KnownRegArgsCpuCall<0x8050739Cu>(&func_8050739C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8050739C_E95 = func_8050739C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8050739C_E95);
        r4 = static_cast<uint32_t>(regargs_result_8050739C_E95 >> 32);
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
        InvokeDirectCpu<0x8050739Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80507524:
{
    r0 = (r3 & 65535);
    r5 = MemoryInline::FlatRead32((r13 + -13984));
}

loc_80507530:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(288))) {
        goto loc_8050753C;
    }
}

loc_80507534:
{
    r0 = 1;
    goto loc_8050754C;
}

loc_8050753C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 131070);
    r0 = (r4 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_1);
}

loc_8050754C:
{
}

loc_80507550:
{
    r8 = 24;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8050755C;
    }
}

loc_80507558:
{
    r8 = 12;
}

loc_8050755C:
{
    r4 = MemoryInline::FlatRead32((r13 + -13980));
    r7 = 0;
    r0 = (r3 & 65535);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r5 = (r5_rot_0 & -268435456);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 65504);
    r6 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 - r4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 4), static_cast<uint8_t>(r7));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_0 & -1);
    r3 = (r3 + r4);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 5), static_cast<uint8_t>(r8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_1 & 65504);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r8));
    r4 = MemoryInline::FlatRead16((r6 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 8), r7);
    r4 = MemoryInline::FlatRead16((r6 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 12), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r6 + 32));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r31 + 14), r4);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r31 + 16), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r31 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80507450(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80507450_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80507450 func_80507450 preserves=true fpr_mask=0x00000000
