#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_800E048C_ra18_a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f3)
{
    uint32_t addr_psqx_800E0548_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800E048C;

loc_800E048C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = 0;
    r3 = (r3 + 196608);
    r28 = MemoryInline::FlatRead8((r3 + -28034));
    r29 = (r3 + -27804);
    r30 = 0;
    r3 = 0x80590000u;
    r31 = (r3 + 31224);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30320));
}

loc_800E04CC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_800E04D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0530;
    }
}

loc_800E04D8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_800E04E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r28))) {
        goto loc_800E0530;
    }
}

loc_800E04E4:
{
    r3 = (r29 + 4);
    r4 = r26;
    ctx->lr = 0x800E04F0u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_C80 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_C80);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_C80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E04F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800E0530;
    }
}

loc_800E04FC:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r31_addr_2 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 255);
}

loc_800E0524:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_800E0530;
    }
}

loc_800E0528:
{
    r3_addr_0 = (r3 + r0);
    r27 = MemoryInline::FlatRead8(r3_addr_0);
    goto loc_800E0540;
}

loc_800E0530:
{
    r30 = (r30 + 1);
    r29 = (r29 + 20);
}

loc_800E053C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(32))) {
        goto loc_800E04CC;
    }
}

loc_800E0540:
{
    r3 = r27;
    r0 = 56;
    addr_psqx_800E0548_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E0548_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E048C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E048C_ra18_a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x8000000B fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E048C func_800E048C preserves=true fpr_mask=0x00000000
