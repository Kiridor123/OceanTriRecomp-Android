#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80229508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_802296D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80229508;

loc_80229508:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r30 = r4;
    r31 = r6;
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r0);
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 20);
    // inline leaf 0x80051754 (1 guest instruction(s))
    // end of inlined leaf 0x80051754
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    // inline leaf 0x80139530 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // end of inlined leaf 0x80139530
}

loc_80229568:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80229590;
    }
}

loc_8022956C:
{
}

loc_80229570:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_802295B0;
    }
}

loc_80229574:
{
}

loc_80229578:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(3))) {
        goto loc_802295E8;
    }
}

loc_8022957C:
{
}

loc_80229580:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12))) {
        goto loc_80229620;
    }
}

loc_80229584:
{
}

loc_80229588:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(13))) {
        goto loc_80229658;
    }
}

loc_8022958C:
{
    goto loc_802296D4;
}

loc_80229590:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = r30;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008F1ACu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802296D4;
}

loc_802295B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 178));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15560));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15572));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15568));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15532));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8022968C;
}

loc_802295E8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 178));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15560));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15572));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15568));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15532));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8022968C;
}

loc_80229620:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 178));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15560));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15572));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15568));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15532));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8022968C;
}

loc_80229658:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 178));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15560));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15572));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15568));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15656));
    f31.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8022968C:
{
    r3 = r30;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E6FCu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15568));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15572));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r0 = fctiwzword0;
    r3 = (r0 & 65535);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = r30;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008F440u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_802296D4:
{
    r0 = 152;
    addr_psqx_802296D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802296D8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80229508 func_80229508 preserves=true fpr_mask=0x00000000
