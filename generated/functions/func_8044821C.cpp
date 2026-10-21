#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802745E8(CpuContext* ctx);
extern "C" uint32_t func_802745E8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8044821C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8044821Cu);
    goto loc_8044821C;

loc_8044821C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    // inline leaf 0x804271A4 (5 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -15516), r0);
    // end of inlined leaf 0x804271A4
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 11u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3u, (r31 + 4));
}

loc_8044823C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80448248;
    }
}

loc_80448240:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
    MemoryInline::FlatWrite8((r13 + -16594), static_cast<uint8_t>(r0));
}

loc_80448248:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3u, (r31 + 4));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80448254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804482C0;
    }
}

loc_80448258:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
}

loc_80448260:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(224))) {
        goto loc_80448290;
    }
}

loc_80448264:
{
}

loc_80448268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(228))) {
        goto loc_80448290;
    }
}

loc_8044826C:
{
}

loc_80448270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(225))) {
        goto loc_804482A0;
    }
}

loc_80448274:
{
}

loc_80448278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(229))) {
        goto loc_804482A0;
    }
}

loc_8044827C:
{
}

loc_80448280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(226))) {
        goto loc_804482B0;
    }
}

loc_80448284:
{
}

loc_80448288:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(230))) {
        goto loc_804482B0;
    }
}

loc_8044828C:
{
    goto loc_80448328;
}

loc_80448290:
{
    r3 = MemoryInline::FlatRead8((r13 + -16492));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -16492), static_cast<uint8_t>(r0));
    goto loc_80448328;
}

loc_804482A0:
{
    r3 = MemoryInline::FlatRead8((r13 + -16491));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -16491), static_cast<uint8_t>(r0));
    goto loc_80448328;
}

loc_804482B0:
{
    r3 = MemoryInline::FlatRead8((r13 + -16490));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -16490), static_cast<uint8_t>(r0));
    goto loc_80448328;
}

loc_804482C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80448328;
    }
}

loc_804482C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
}

loc_804482CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(224))) {
        goto loc_804482FC;
    }
}

loc_804482D0:
{
}

loc_804482D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(228))) {
        goto loc_804482FC;
    }
}

loc_804482D8:
{
}

loc_804482DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(225))) {
        goto loc_8044830C;
    }
}

loc_804482E0:
{
}

loc_804482E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(229))) {
        goto loc_8044830C;
    }
}

loc_804482E8:
{
}

loc_804482EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(226))) {
        goto loc_8044831C;
    }
}

loc_804482F0:
{
}

loc_804482F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(230))) {
        goto loc_8044831C;
    }
}

loc_804482F8:
{
    goto loc_80448328;
}

loc_804482FC:
{
    r3 = MemoryInline::FlatRead8((r13 + -16492));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r13 + -16492), static_cast<uint8_t>(r0));
    goto loc_80448328;
}

loc_8044830C:
{
    r3 = MemoryInline::FlatRead8((r13 + -16491));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r13 + -16491), static_cast<uint8_t>(r0));
    goto loc_80448328;
}

loc_8044831C:
{
    r3 = MemoryInline::FlatRead8((r13 + -16490));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r13 + -16490), static_cast<uint8_t>(r0));
}

loc_80448328:
{
    r0 = MemoryInline::FlatRead32((r13 + -16572));
}

loc_80448330:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044863C;
    }
}

loc_80448334:
{
    r0 = MemoryInline::FlatRead32((r13 + -16516));
}

loc_8044833C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804483B4;
    }
}

loc_80448340:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2240));
}

loc_80448350:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044836C;
    }
}

loc_80448354:
{
    r0 = 0;
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    goto loc_8044863C;
}

loc_8044836C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3u, (r31 + 4));
}

loc_80448374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8044863C;
    }
}

loc_80448378:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
    r3 = 0x806F0000u;
    r4 = (r3 + -28800);
    MemoryInline::FlatWriteRam8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 7u, (r31 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r4 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 9));
    r0 = (r3 & 1);
}

loc_804483A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044863C;
    }
}

loc_804483A4:
{
    r0 = (r3 | 2);
    r0 = (r0 & 254);
    MemoryInline::FlatWriteRam8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_8044863C;
}

loc_804483B4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3u, (r31 + 4));
}

loc_804483BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804485CC;
    }
}

loc_804483C0:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 7u, (r31 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r3 = MemoryInline::FlatRead8((r3 + 12));
}

loc_804483E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804483F8;
    }
}

loc_804483EC:
{
}

loc_804483F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_8044843C;
    }
}

loc_804483F4:
{
    goto loc_80448468;
}

loc_804483F8:
{
    r0 = (r0 & 47);
}

loc_804483FC:
{
}

loc_80448400:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8044843C;
    }
}

loc_80448404:
{
    r0 = (r4 + 198);
    r0 = (r0 & 255);
}

loc_80448410:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_8044843C;
    }
}

loc_80448414:
{
    r0 = (r4 + -58);
    r0 = (r0 & 255);
    r3 = 0x80610000u;
    r3 = (r3 + -5584);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    ctx->lr = 0x80448434u;
    if constexpr (KnownRegArgsCpuCall<0x802745E8u>(&func_802745E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_802745E8_239E = func_802745E8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802745E8_239E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802745E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = 55;
    ctx->lr = 0x8044843Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_26A7 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_26A7);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_26A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8044843C:
{
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8044844C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80448468;
    }
}

loc_80448450:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80448458:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(43))) {
        goto loc_80448468;
    }
}

loc_8044845C:
{
    r0 = 43;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_80448468:
{
    r4 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r4 + 12));
}

loc_80448474:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80448480;
    }
}

loc_80448478:
{
}

loc_8044847C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8044857C;
    }
}

loc_80448480:
{
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r0 & 47);
}

loc_80448490:
{
}

loc_80448494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804484C0;
    }
}

loc_80448498:
{
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_804484A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(58))) {
        goto loc_804484C0;
    }
}

loc_804484A8:
{
}

loc_804484AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(69))) {
        goto loc_804484C0;
    }
}

loc_804484B0:
{
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
}

loc_804484C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_804484CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044857C;
    }
}

loc_804484D0:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -79);
}

loc_804484DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8044856C;
    }
}

loc_804484E0:
{
}

loc_804484E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(61))) {
        goto loc_804484FC;
    }
}

loc_804484E8:
{
}

loc_804484EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(88))) {
        goto loc_80448574;
    }
}

loc_804484F0:
{
}

loc_804484F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(40))) {
        goto loc_80448574;
    }
}

loc_804484F8:
{
    goto loc_8044857C;
}

loc_804484FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16556));
}

loc_80448504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80448554;
    }
}

loc_80448508:
{
    r3 = MemoryInline::FlatRead32((r13 + -16588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8044851Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x8044852Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x8044853Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80448540:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044855C;
    }
}

loc_80448544:
{
    r0 = 61;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_8044855C;
}

loc_80448554:
{
    r0 = 61;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_8044855C:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    goto loc_8044857C;
}

loc_8044856C:
{
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    goto loc_8044857C;
}

loc_80448574:
{
    r0 = 40;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_8044857C:
{
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8044858C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_804485A4;
    }
}

loc_80448590:
{
    r0 = 42;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite8((r13 + -16595), static_cast<uint8_t>(r0));
}

loc_804485A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_804485B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(41))) {
        goto loc_8044863C;
    }
}

loc_804485B4:
{
    r0 = 41;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    goto loc_8044863C;
}

loc_804485CC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
    r3 = 0x806F0000u;
    r3 = (r3 + -28800);
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 7u, (r31 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16556));
    r0 = (r3 + -1);
}

loc_804485F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8044863C;
    }
}

loc_804485F8:
{
    r4 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r4 + 5));
}

loc_80448604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044863C;
    }
}

loc_80448608:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80448610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_8044863C;
    }
}

loc_80448614:
{
    r3 = MemoryInline::FlatRead8((r13 + -16595));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r13 + -16595), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_80448628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8044863C;
    }
}

loc_8044862C:
{
    r0 = 42;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite8((r13 + -16595), static_cast<uint8_t>(r0));
}

loc_8044863C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8044821C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044821C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8044821C func_8044821C preserves=true fpr_mask=0x00000000
