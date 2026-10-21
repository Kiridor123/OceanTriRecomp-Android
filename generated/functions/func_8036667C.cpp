#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051510(CpuContext* ctx);
extern "C" uint64_t func_80051510_ra18_40_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8036667C_ra18_58_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f3, double arg_f4, double arg_f6)
{
    uint32_t addr_psqx_80366830_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8036667Cu);
    goto loc_8036667C;

loc_8036667C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -9056), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    r3 = r31;
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    r4 = (r30 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r0 = MemoryInline::FlatRead8((r30 + 1411));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803666D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80366738;
    }
}

loc_803666D8:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -9040));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -9044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -9048));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -9036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80366794;
}

loc_80366738:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -9032));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -9044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -9048));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -9036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80366794:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800509F4u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_803667AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803667C8;
    }
}

loc_803667B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9028));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9024));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -9020));
    goto loc_803667DC;
}

loc_803667C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9016));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9024));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -9012));
}

loc_803667DC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r30 + 88));
    ctx->lr = 0x803667E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f6 = ctx->fpr[6];
    r3 = r31;
    r4 = (r30 + 60);
    ctx->lr = 0x803667F4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = (r1 + 24);
    ctx->lr = 0x8036682Cu;
    if constexpr (KnownRegArgsCpuCall<0x80051510u>(&func_80051510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80051510_2153 = func_80051510_ra18_40_18_0(ctx, r3, r4, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80051510_2153);
        r4 = static_cast<uint32_t>(regargs_result_80051510_2153 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x80051510u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
    }
    r0 = 120;
    addr_psqx_80366830_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366830_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8036667C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8036667C_ra18_58_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFE fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8036667C func_8036667C preserves=true fpr_mask=0x00000000
