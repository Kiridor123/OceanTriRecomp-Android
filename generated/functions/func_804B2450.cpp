#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDA30(CpuContext* ctx);
extern "C" uint64_t func_804BDA30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804B2450_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804B2450;

loc_804B2450:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804B245C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804B257C;
    }
}

loc_804B2474:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 264), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 264));
}

loc_804B247C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804B24A4;
    }
}

loc_804B2480:
{
}

loc_804B2484:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804B24B8;
    }
}

loc_804B2488:
{
}

loc_804B248C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804B24DC;
    }
}

loc_804B2490:
{
}

loc_804B2494:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_804B2534;
    }
}

loc_804B2498:
{
}

loc_804B249C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804B256C;
    }
}

loc_804B24A0:
{
    goto loc_804B257C;
}

loc_804B24A4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_804B257C;
    }
}

loc_804B24A8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = 28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804B257C;
}

loc_804B24B8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_804B257C;
    }
}

loc_804B24BC:
{
    r0 = (r4 + 63);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r4 = (r0 & -32);
    r0 = (r4 + 95);
    r4 = (r0 & -32);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_804B257C;
}

loc_804B24DC:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_804B257C;
    }
}

loc_804B24E0:
{
    r0 = (r4 + 95);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = (r0 & -32);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 272));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 276));
    r0 = MemoryInline::FlatRead8((r5 + 73));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 280));
    r0 = MemoryInline::FlatRead8((r5 + 70));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 284));
    r0 = MemoryInline::FlatRead8((r5 + 71));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 288));
    r0 = MemoryInline::FlatRead8((r5 + 72));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_804B257C;
}

loc_804B2534:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_804B257C;
    }
}

loc_804B2538:
{
    r0 = (r4 + 63);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = (r0 & -32);
    r0 = (r5 + 95);
    r6 = (r0 & -32);
    r5 = MemoryInline::FlatRead32(r6);
    r0 = (r6 + 35);
    MemoryInline::FlatWrite32(r3, r5);
    r5 = (r0 & -32);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 272));
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_804B257C;
}

loc_804B256C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_804B257C;
    }
}

loc_804B2570:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804B257C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -15464), r0);
    r12 = MemoryInline::FlatRead32((r31 + 256));
}

loc_804B258C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804B25A0;
    }
}

loc_804B2590:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 260));
    ctr = r12;
    ctx->lr = 0x804B25A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804B25A0:
{
}

loc_804B25A4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804B25B4;
    }
}

loc_804B25A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -15452));
    r4 = r31;
    ctx->lr = 0x804B25B4u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804BDA30_1A34 = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_1A34);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_1A34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_804B25B4:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B2450(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B2450_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B2450 func_804B2450 preserves=true fpr_mask=0x00000000
