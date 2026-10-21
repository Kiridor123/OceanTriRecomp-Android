#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D93C0(CpuContext* ctx);
extern "C" uint64_t func_804D93C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A54C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804A54C0u);
    goto loc_804A54C0;

loc_804A54C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x804A54D0u;
    if constexpr (KnownRegArgsCpuCall<0x804D93C0u>(&func_804D93C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_804D93C0_58A = func_804D93C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D93C0_58A);
        r4 = static_cast<uint32_t>(regargs_result_804D93C0_58A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D93C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r4 = 0x80740000u;
    r0 = 2;
    r4 = (r4 + 15976);
    r3 = 0;
    ctr = r0;
}

loc_804A54E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 60u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r4 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r4 + 9), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r4 + 10), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r4 + 30), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r4 + 32), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r4 + 33), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r4 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r4 + 35), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r4 + 36), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r4 + 37), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r4 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r4 + 39), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r4 + 40), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 42u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r4 + 42), r3);
        MemoryInline::WriteResolved16(guest_range_0, 44u, (r4 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 46u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 46u, (r4 + 46), r3);
        MemoryInline::WriteResolved16(guest_range_0, 48u, (r4 + 48), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 50u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r4 + 50), r3);
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r4 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 54u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r4 + 54), r3);
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r4 + 56), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 58u, (r4 + 58), static_cast<uint16_t>(r3));
    r4 = (r4 + 60);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A54E4;
    }
}

loc_804A5584:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A54C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A54C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A54C0 func_804A54C0 preserves=true fpr_mask=0x00000000
