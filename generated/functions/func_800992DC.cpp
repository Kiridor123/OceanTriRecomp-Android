#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800992DC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_800993A8_loc_0 = 0;
    uint32_t addr_psqx_800993B4_loc_0 = 0;
    uint32_t addr_psqx_800993C0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800992DCu);
    goto loc_800992DC;

loc_800992DC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r31 = r3;
    f29.d = f1.d;
    f30.d = f2.d;
    f31.d = f3.d;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_8009931C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8009933C;
    }
}

loc_80099320:
{
    r3 = 0x80590000u;
    r3 = (r3 + 7552);
    r4 = 259;
    r5 = 0x80590000u;
    r5 = (r5 + 7608);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009933Cu;
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

loc_8009933C:
{
    r3 = r31;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80099348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800993A4;
    }
}

loc_8009934C:
{
    r3 = r31;
    // inline leaf 0x8005AB48 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8005AB48
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31572));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80099360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80099384;
    }
}

loc_80099364:
{
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80099368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80099384;
    }
}

loc_8009936C:
{
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80099370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80099384;
    }
}

loc_80099374:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80099390;
}

loc_80099384:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80099390:
{
    r3 = r31;
    // inline leaf 0x80099198 (17 guest instruction(s))
}

loc_inl3_0x80099198:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 2);
}

loc_inl3_0x800991A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x800991CC;
    }
}

loc_inl3_0x800991A8:
{
    r0 = (r4 & 4);
}

loc_inl3_0x800991B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x800991CC;
    }
}

loc_inl3_0x800991B4:
{
    r0 = (r4 & 8);
}

loc_inl3_0x800991BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x800991CC;
    }
}

loc_inl3_0x800991C0:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_inl3_cont_80099198;
}

loc_inl3_0x800991CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_inl3_cont_80099198:
{
    // end of inlined leaf 0x80099198
    MemoryInline::FlatWriteFloat32((r31 + 44), f29.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f31.d);
}

loc_800993A4:
{
    r0 = 56;
    addr_psqx_800993A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800993A8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_800993B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800993B4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_800993C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800993C0_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800992DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800992DC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE0000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800992DC func_800992DC preserves=true fpr_mask=0x00000000
