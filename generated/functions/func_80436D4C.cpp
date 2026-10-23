#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80436E5C(CpuContext* ctx);
extern "C" uint64_t func_80436E5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80436D4C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80436D4C;

loc_80436D4C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r4 = 0;
    r5 = 328;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r30));
    r3 = (r30 & 255);
    r0 = (r3 + -1);
}

loc_80436DA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80436DC0;
    }
}

loc_80436DAC:
{
}

loc_80436DB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80436DC8;
    }
}

loc_80436DB4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
    goto loc_80436DC8;
}

loc_80436DC0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
}

loc_80436DC8:
{
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r28 + 96), r29);
    r0 = (r31 & 255);
}

loc_80436DD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80436DE8;
    }
}

loc_80436DDC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 3), static_cast<uint8_t>(r0));
    goto loc_80436DF0;
}

loc_80436DE8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 3), static_cast<uint8_t>(r0));
}

loc_80436DF0:
{
    r6 = MemoryInline::FlatRead8((r28 + 2));
    r3 = (r28 + 12);
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 3));
    r0 = (r0 * r6);
    r5 = (r0 & 65535);
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl0_0x802A9354:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl0_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl0_0x802A93B8;
    }
}

loc_inl0_0x802A93B4:
{
    goto loc_inl0_0x802A93BC;
}

loc_inl0_0x802A93B8:
{
    r5 = r7;
}

loc_inl0_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl0_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r0 = MemoryInline::FlatRead8((r28 + 324));
}

loc_80436E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80436E2C;
    }
}

loc_80436E18:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_80436E20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80436E2C;
    }
}

loc_80436E24:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 15), static_cast<uint8_t>(r0));
}

loc_80436E2C:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r28 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x80436E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80436E5Cu>(&func_80436E5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80436E5C_1500 = func_80436E5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80436E5C_1500);
        r4 = static_cast<uint32_t>(regargs_result_80436E5C_1500 >> 32);
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
        InvokeDirectCpu<0x80436E5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80436D4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80436D4C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80436D4C func_80436D4C preserves=true fpr_mask=0x00000000
