#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C03F4_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_800C05AC_loc_0 = 0;
    uint32_t addr_psqx_800C05B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800C03F4;

loc_800C03F4:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r30 = r3;
    r31 = r5;
    f30.d = f1.d;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C0448:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0460;
    }
}

loc_800C044C:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C0458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0460;
    }
}

loc_800C045C:
{
    r10 = 0;
}

loc_800C0460:
{
}

loc_800C0464:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C047C;
    }
}

loc_800C0468:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C0474:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C047C;
    }
}

loc_800C0478:
{
    r9 = 0;
}

loc_800C047C:
{
}

loc_800C0480:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C0494;
    }
}

loc_800C0484:
{
    r0 = (r11 + 1073741824);
}

loc_800C048C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0494;
    }
}

loc_800C0490:
{
    r8 = 0;
}

loc_800C0494:
{
}

loc_800C0498:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C04B0;
    }
}

loc_800C049C:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C04A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C04B0;
    }
}

loc_800C04AC:
{
    r7 = 0;
}

loc_800C04B0:
{
}

loc_800C04B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C04CC;
    }
}

loc_800C04B8:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C04C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C04CC;
    }
}

loc_800C04C8:
{
    r6 = 0;
}

loc_800C04CC:
{
}

loc_800C04D0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C04E8;
    }
}

loc_800C04D4:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C04E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C04E8;
    }
}

loc_800C04E4:
{
    r4 = 0;
}

loc_800C04E8:
{
}

loc_800C04EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C0510;
    }
}

loc_800C04F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20360);
    r4 = 177;
    r5 = 0x80590000u;
    r5 = (r5 + 20308);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0510u;
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

loc_800C0510:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5518u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl1_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 200));
}

loc_inl1_0x800AB428:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl1_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f31.d = f1.d;
    r3 = (r1 + 24);
    r4 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    ctx->lr = 0x800C0540u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30944));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = (-(f0.d));
    f0.d = PpcFmulsInline(f1.d, f30.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f5.d = f2.d;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30940));
    f7.d = f2.d;
    f8.d = f2.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    r0 = 88;
    addr_psqx_800C05AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C05AC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_800C05B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C05B8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C03F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C03F4_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFE fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C03F4 func_800C03F4 preserves=true fpr_mask=0x00000000
