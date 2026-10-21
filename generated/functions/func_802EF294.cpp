#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A96F4(CpuContext* ctx);
extern "C" uint32_t func_803A96F4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802EF294_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802EF294u);
    goto loc_802EF294;

loc_802EF294:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + 1136);
    r3 = MemoryInline::FlatRead16((r31 + 92));
    r3 = MH3_TickLoad(r3, 2150560428);
}

loc_802EF2B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EF390;
    }
}

loc_802EF2B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r31 + 92), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_802EF2C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802EF2D8;
    }
}

loc_802EF2CC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 90), static_cast<uint8_t>(r0));
    goto loc_802EF390;
}

loc_802EF2D8:
{
    r5 = (r31 + 94);
    r6 = 0;
    r3 = 0;
    goto loc_802EF314;
}

loc_802EF2E8:
{
    r4 = MemoryInline::FlatRead8((r5 + 4));
}

loc_802EF2F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802EF30C;
    }
}

loc_802EF2F4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_802EF304:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_802EF30C;
    }
}

loc_802EF308:
{
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
}

loc_802EF30C:
{
    r6 = (r6 + 1);
    r5 = (r5 + 6);
}

loc_802EF314:
{
    r0 = MemoryInline::FlatRead8((r31 + 90));
}

loc_802EF31C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802EF2E8;
    }
}

loc_802EF320:
{
    r3 = MemoryInline::FlatRead8((r31 + 91));
}

loc_802EF328:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EF348;
    }
}

loc_802EF32C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 91), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802EF33C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_802EF348;
    }
}

loc_802EF340:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 91), static_cast<uint8_t>(r0));
}

loc_802EF348:
{
    ctx->lr = 0x802EF34Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_C5F = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_C5F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802EF350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EF374;
    }
}

loc_802EF354:
{
    // inline leaf 0x803B8E80 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead32((r3 + 1240));
    // end of inlined leaf 0x803B8E80
    r0 = MemoryInline::FlatRead32((r31 + 112));
}

loc_802EF360:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_802EF390;
    }
}

loc_802EF364:
{
    MemoryInline::FlatWriteRam32((r31 + 112), r3);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 91), static_cast<uint8_t>(r0));
    goto loc_802EF390;
}

loc_802EF374:
{
    ctx->lr = 0x802EF378u;
    if constexpr (KnownRegArgsCpuCall<0x803A96F4u>(&func_803A96F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A96F4_119A = func_803A96F4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A96F4_119A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A96F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r31 + 112));
}

loc_802EF380:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_802EF390;
    }
}

loc_802EF384:
{
    MemoryInline::FlatWriteRam32((r31 + 112), r3);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 91), static_cast<uint8_t>(r0));
}

loc_802EF390:
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

extern "C" void func_802EF294(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EF294_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802EF294 func_802EF294 preserves=true fpr_mask=0x00000000
