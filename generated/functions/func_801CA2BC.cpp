#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801262DC(CpuContext* ctx);
extern "C" uint64_t func_801262DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801CA1D4(CpuContext* ctx);
extern "C" uint64_t func_801CA1D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801CA2BC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x801CA2BCu);
    goto loc_801CA2BC;

loc_801CA2BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 56), f31.d);
    r11 = (r1 + 56);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r29 + 482));
}

loc_801CA2E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801CA2F8;
    }
}

loc_801CA2EC:
{
    r0 = MemoryInline::FlatRead8((r29 + 483));
}

loc_801CA2F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801CA300;
    }
}

loc_801CA2F8:
{
    r3 = 255;
    goto loc_801CA454;
}

loc_801CA300:
{
    r31 = 0;
    r4 = 0;
    r0 = 5;
    ctr = r0;
}

loc_801CA310:
{
    r0 = (r4 & 255);
    r0 = (r0 * 20);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 580));
}

loc_801CA324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA38C;
    }
}

loc_801CA328:
{
    r0 = (r0 & 2048);
}

loc_801CA330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA348;
    }
}

loc_801CA334:
{
    r0 = MemoryInline::FlatRead8((r3 + 582));
}

loc_801CA33C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA348;
    }
}

loc_801CA340:
{
    r31 = r0;
    goto loc_801CA38C;
}

loc_801CA348:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 20);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 580));
}

loc_801CA360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA38C;
    }
}

loc_801CA364:
{
    r0 = (r0 & 2048);
}

loc_801CA36C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA384;
    }
}

loc_801CA370:
{
    r0 = MemoryInline::FlatRead8((r3 + 582));
}

loc_801CA378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA384;
    }
}

loc_801CA37C:
{
    r31 = r0;
    goto loc_801CA38C;
}

loc_801CA384:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CA310;
    }
}

loc_801CA38C:
{
    r4 = (r31 & 255);
}

loc_801CA394:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801CA3A0;
    }
}

loc_801CA398:
{
    r3 = 255;
    goto loc_801CA454;
}

loc_801CA3A0:
{
    r3 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x801CA3ACu;
    if constexpr (KnownRegArgsCpuCall<0x801CA1D4u>(&func_801CA1D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801CA1D4_112D = func_801CA1D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801CA1D4_112D);
        r4 = static_cast<uint32_t>(regargs_result_801CA1D4_112D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801CA1D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r28 = (r3 & 255);
}

loc_801CA3B4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801CA3C0;
    }
}

loc_801CA3B8:
{
    r3 = 255;
    goto loc_801CA454;
}

loc_801CA3C0:
{
    r30 = 255;
    r27 = 0;
    goto loc_801CA424;
}

loc_801CA3CC:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r29 + 481));
    r0 = (r0 & 15);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & -256);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r27 & 255);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    r0 = (r5 | r0);
    r4 = (r0 & 65535);
    r5 = (r1 + 12);
    ctx->lr = 0x801CA3F8u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801262DC_1755 = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_1755);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_1755 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r29 + 876);
    r4 = (r1 + 12);
    ctx->lr = 0x801CA404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r0 = (r27 & 255);
}

loc_801CA40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA418;
    }
}

loc_801CA410:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_801CA414:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CA420;
    }
}

loc_801CA418:
{
    f31.d = f1.d;
    r30 = r27;
}

loc_801CA420:
{
    r27 = (r27 + 1);
}

loc_801CA424:
{
    r0 = (r27 & 255);
}

loc_801CA42C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r28))) {
        goto loc_801CA3CC;
    }
}

loc_801CA430:
{
    r0 = (r30 & 255);
}

loc_801CA438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801CA450;
    }
}

loc_801CA43C:
{
    r0 = (r31 + -1);
    r0 = (r0 * 10);
    r0 = (r0 & 255);
    r0 = (r30 + r0);
    r30 = (r0 & 255);
}

loc_801CA450:
{
    r3 = r30;
}

loc_801CA454:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r11 = (r1 + 56);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801CA2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801CA2BC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CA2BC func_801CA2BC preserves=true fpr_mask=0x00000000
