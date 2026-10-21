#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_803BB0F4_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_803BB230_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x803BB0F4u);
    goto loc_803BB0F4;

loc_803BB0F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
}

loc_803BB120:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803BB12C;
    }
}

loc_803BB124:
{
    r3 = 0;
    goto loc_803BB22C;
}

loc_803BB12C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16840));
    r31 = MemoryInline::FlatRead32((r3 + 28));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r30 = (r3 + -1);
    r0 = (r30 * 548);
    r31 = (r31 + r0);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -5316));
    goto loc_803BB220;
}

loc_803BB14C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803BB154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB218;
    }
}

loc_803BB158:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r27 & 255);
}

loc_803BB164:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803BB218;
    }
}

loc_803BB168:
{
    r0 = MemoryInline::FlatRead16((r31 + 508));
}

loc_803BB170:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803BB218;
    }
}

loc_803BB174:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BB180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803BB190;
    }
}

loc_803BB184:
{
    r0 = MemoryInline::FlatRead32((r31 + 440));
}

loc_803BB18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB218;
    }
}

loc_803BB190:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_803BB1A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803BB218;
    }
}

loc_803BB1B0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_803BB1B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803BB218;
    }
}

loc_803BB1BC:
{
    r3 = r28;
    r4 = (r31 + 464);
    ctx->lr = 0x803BB1C8u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_11B4 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_11B4);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_11B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r31 + 496));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803BB1D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803BB218;
    }
}

loc_803BB1D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 492));
}

loc_803BB1E0:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_803BB218;
    }
}

loc_803BB1E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 516));
}

loc_803BB1EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BB1F8;
    }
}

loc_803BB1F0:
{
    r3 = 0;
    goto loc_803BB22C;
}

loc_803BB1F8:
{
}

loc_803BB1FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_803BB210;
    }
}

loc_803BB200:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 516), static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_803BB22C;
}

loc_803BB210:
{
    r3 = 1;
    goto loc_803BB22C;
}

loc_803BB218:
{
    r30 = (r30 + -1);
    r31 = (r31 + -548);
}

loc_803BB220:
{
}

loc_803BB224:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_803BB14C;
    }
}

loc_803BB228:
{
    r3 = 0;
}

loc_803BB22C:
{
    r0 = 40;
    addr_psqx_803BB230_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BB230_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BB0F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BB0F4_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BB0F4 func_803BB0F4 preserves=true fpr_mask=0x00000000
