#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046AE0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046AE0C;

loc_8046AE0C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r29 = r3;
    r27 = r4;
    r30 = r5;
    r31 = 0;
    r26 = 0;
    goto loc_8046AED4;
}

loc_8046AE34:
{
    r0 = MemoryInline::FlatRead32((r13 + -16328));
    r3 = MemoryInline::FlatRead32(r27);
}

loc_8046AE40:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046AE50;
    }
}

loc_8046AE48:
{
    r4 = (r1 + 12);
    goto loc_8046AE74;
}

loc_8046AE50:
{
    r6 = MemoryInline::FlatRead8((r1 + 15));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead8((r1 + 13));
    r0 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8046AE74:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r28 = 4;
    r26 = 0;
    r0 = (2176 - r3);
}

loc_8046AE88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_8046AE94;
    }
}

loc_8046AE8C:
{
    r26 = 769;
    r28 = r0;
}

loc_8046AE94:
{
}

loc_8046AE98:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_8046AEAC;
    }
}

loc_8046AE9C:
{
    r3 = (r29 + r3);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8046AEBC;
}

loc_8046AEAC:
{
    r3 = (r29 + r3);
    r5 = r28;
    r3 = (r3 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469048_BCB = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_BCB;
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
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8046AEBC:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r27 = (r27 + 4);
    r31 = (r31 + 1);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_8046AED4:
{
}

loc_8046AED8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8046AEE4;
    }
}

loc_8046AEDC:
{
}

loc_8046AEE0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r30))) {
        goto loc_8046AE34;
    }
}

loc_8046AEE4:
{
    r3 = r26;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046AE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046AE0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046AE0C func_8046AE0C preserves=true fpr_mask=0x00000000
