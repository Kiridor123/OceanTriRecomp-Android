#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005002C(CpuContext* ctx);
extern "C" uint64_t func_8005002C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800FA3DC(CpuContext* ctx);
extern "C" uint32_t func_800FA3DC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80345718(CpuContext* ctx);
extern "C" uint64_t func_80345718_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80345AD0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80345C34_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80345AD0;

loc_80345AD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    f31.d = f1.d;
    r31 = 0;
    r30 = 0;
    r3 = (r1 + 32);
    ctx->lr = 0x80345B0Cu;
    if constexpr (KnownRegArgsCpuCall<0x800FA3DCu>(&func_800FA3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA3DC_9D5 = func_800FA3DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA3DC_9D5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA3DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r4 = (r28 & 255);
}

loc_80345B24:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80345B4C;
    }
}

loc_80345B28:
{
    r3 = r27;
    ctx->lr = 0x80345B30u;
    if constexpr (KnownRegArgsCpuCall<0x80345718u>(&func_80345718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80345718_DC1 = func_80345718_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80345718_DC1);
        r4 = static_cast<uint32_t>(regargs_result_80345718_DC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80345718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
}

loc_80345B38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80345B4C;
    }
}

loc_80345B3C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80345B44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80345B4C;
    }
}

loc_80345B48:
{
    r30 = 1;
}

loc_80345B4C:
{
}

loc_80345B50:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80345C04;
    }
}

loc_80345B54:
{
}

loc_80345B58:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80345B9C;
    }
}

loc_80345B5C:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    r4 = r29;
    ctx->lr = 0x80345B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80345B8C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80345C2C;
    }
}

loc_80345B94:
{
    r3 = 1;
    goto loc_80345C30;
}

loc_80345B9C:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 24));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    r5 = (r1 + 32);
    ctx->lr = 0x80345BDCu;
    if constexpr (KnownRegArgsCpuCall<0x8005002Cu>(&func_8005002C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_8005002C_1D98 = func_8005002C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8005002C_1D98);
        r4 = static_cast<uint32_t>(regargs_result_8005002C_1D98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x8005002Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    }
    r3 = (r1 + 32);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8028F5BCu>(ctx);
    r3 = r29;
    r4 = (r1 + 32);
    ctx->lr = 0x80345BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80290820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_80345BF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80345C2C;
    }
}

loc_80345BFC:
{
    r3 = 1;
    goto loc_80345C30;
}

loc_80345C04:
{
    r3 = (r27 + 36);
    r4 = r29;
    ctx->lr = 0x80345C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r27 + 48));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80345C1C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80345C2C;
    }
}

loc_80345C24:
{
    r3 = 1;
    goto loc_80345C30;
}

loc_80345C2C:
{
    r3 = 0;
}

loc_80345C30:
{
    r0 = 120;
    addr_psqx_80345C34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80345C34_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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

extern "C" void func_80345AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80345AD0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80345AD0 func_80345AD0 preserves=true fpr_mask=0x00000000
