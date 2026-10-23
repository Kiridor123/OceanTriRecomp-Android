#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009B4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8009B694_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009B4AC;

loc_8009B4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009B4F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B50C;
    }
}

loc_8009B4F8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009B504:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B50C;
    }
}

loc_8009B508:
{
    r10 = 0;
}

loc_8009B50C:
{
}

loc_8009B510:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009B528;
    }
}

loc_8009B514:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009B520:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B528;
    }
}

loc_8009B524:
{
    r9 = 0;
}

loc_8009B528:
{
}

loc_8009B52C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009B540;
    }
}

loc_8009B530:
{
    r0 = (r11 + 1073741824);
}

loc_8009B538:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B540;
    }
}

loc_8009B53C:
{
    r8 = 0;
}

loc_8009B540:
{
}

loc_8009B544:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009B55C;
    }
}

loc_8009B548:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009B554:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B55C;
    }
}

loc_8009B558:
{
    r7 = 0;
}

loc_8009B55C:
{
}

loc_8009B560:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009B578;
    }
}

loc_8009B564:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009B570:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B578;
    }
}

loc_8009B574:
{
    r6 = 0;
}

loc_8009B578:
{
}

loc_8009B57C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009B594;
    }
}

loc_8009B580:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009B58C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B594;
    }
}

loc_8009B590:
{
    r5 = 0;
}

loc_8009B594:
{
}

loc_8009B598:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009B5BC;
    }
}

loc_8009B59C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 430;
    r5 = 0x80590000u;
    r5 = (r5 + 8540);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009B5BCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009B5BC:
{
    r3 = r31;
    ctx->lr = 0x8009B5C4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31520));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31516));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009B5D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009B5F8;
    }
}

loc_8009B5DC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 431;
    r5 = 0x80590000u;
    r5 = (r5 + 8592);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009B5F8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009B5F8:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = f31.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31520));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31508));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009B614:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009B624;
    }
}

loc_8009B618:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    f3.d = f1.d;
    goto loc_8009B644;
}

loc_8009B624:
{
    f0.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f2.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
}

loc_8009B644:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r30, f4.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f0.d);
    f0.d = PpcFmulsInline(f31.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 12), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 16), f3.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 20), f0.d);
    f0.d = (-(f4.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 28), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 32), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 44), f2.d);
    r0 = 24;
    addr_psqx_8009B694_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B694_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000017 fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009B4AC func_8009B4AC preserves=true fpr_mask=0x00000000
