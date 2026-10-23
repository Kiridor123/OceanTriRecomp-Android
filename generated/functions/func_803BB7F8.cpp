#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);

extern "C" uint64_t func_803BB7F8_ra38_32_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f4, double arg_f5)
{
    uint32_t addr_psqx_803BB964_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803BB7F8;

loc_803BB7F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803BB820:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_803BB948;
    }
}

loc_803BB824:
{
    r4 = MemoryInline::FlatRead32((r3 + 420));
    r4 = MH3_TickLoad(r4, 2151397412);
    r0 = (r4 + -1024);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 420), r0);
    r4 = MemoryInline::FlatRead32((r3 + 432));
    r0 = MemoryInline::FlatRead16((r3 + 436));
    r0 = MH3_TickLoad(r0, 2151397432);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 432), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5268));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
}

loc_803BB85C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16384))) {
        goto loc_803BB86C;
    }
}

loc_803BB860:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 453), static_cast<uint8_t>(r0));
    goto loc_803BB960;
}

loc_803BB86C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 453), static_cast<uint8_t>(r0));
    r3 = (r3 + 332);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r29 = r3;
    r26 = 0;
    r3 = 0x80600000u;
    r28 = (r3 + -30064);
    r3 = 0x80600000u;
    r27 = (r3 + -30048);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -5264));
    r30 = 1127219200;
    goto loc_803BB93C;
}

loc_803BB8A0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead8((r31 + 454));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword9 = r30;
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80052364_1172 = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_1172;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r31 + 56);
    r4 = r26;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x803BB930u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    mkw_gqr0 = ctx->gqr[0];
    r28 = (r28 + 4);
    r27 = (r27 + 12);
    r26 = (r26 + 1);
}

loc_803BB93C:
{
}

loc_803BB940:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r29))) {
        goto loc_803BB8A0;
    }
}

loc_803BB944:
{
    goto loc_803BB960;
}

loc_803BB948:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 453), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5268));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
}

loc_803BB960:
{
    r0 = 88;
    addr_psqx_803BB964_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BB964_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BB7F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BB7F8_ra38_32_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BB7F8 func_803BB7F8 preserves=true fpr_mask=0x00000000
