#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F180(CpuContext* ctx);
extern "C" uint32_t func_8027F180_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027F430_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8027F430u);
    goto loc_8027F430;

loc_8027F430:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8027F448u;
    if constexpr (KnownRegArgsCpuCall<0x8027F180u>(&func_8027F180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8027F180_55E = func_8027F180_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F180_55E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r8 = 0;
    r7 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8027F458:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8027F518;
    }
}

loc_8027F45C:
{
    r5 = (r3 + -8);
}

loc_8027F464:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8027F4F0;
    }
}

loc_8027F468:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8027F484;
    }
}

loc_8027F470:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8027F47C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8027F484;
    }
}

loc_8027F480:
{
    r6 = 1;
}

loc_8027F484:
{
}

loc_8027F488:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8027F4F0;
    }
}

loc_8027F48C:
{
    r4 = r31;
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8027F4A0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8027F4F0;
    }
}

loc_8027F4A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 6), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 6));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 10));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 12));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 14));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 16));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 18));
    r8 = (r8 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 20));
    r8 = (r8 + r0);
    r4 = (r4 + 16);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027F4A4;
    }
}

loc_8027F4F0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r31 + r0);
    r0 = (r3 - r7);
    ctr = r0;
}

loc_8027F504:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r3))) {
        goto loc_8027F518;
    }
}

loc_8027F508:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 + r0);
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027F508;
    }
}

loc_8027F518:
{
    r0 = (r8 & 65535);
}

loc_8027F520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027F598;
    }
}

loc_8027F524:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8027F52C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027F56C;
    }
}

loc_8027F530:
{
}

loc_8027F534:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(2))) {
        goto loc_8027F56C;
    }
}

loc_8027F538:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
}

loc_8027F540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027F554;
    }
}

loc_8027F544:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    goto loc_8027F56C;
}

loc_8027F554:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
}

loc_8027F55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027F56C;
    }
}

loc_8027F560:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8027F56C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
}

loc_8027F574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027F598;
    }
}

loc_8027F578:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
}

loc_8027F580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027F598;
    }
}

loc_8027F584:
{
}

loc_8027F588:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(3))) {
        goto loc_8027F598;
    }
}

loc_8027F58C:
{
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8027F598:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027F430(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027F430_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027F430 func_8027F430 preserves=true fpr_mask=0x00000000
