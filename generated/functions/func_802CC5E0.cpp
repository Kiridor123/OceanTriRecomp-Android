#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802CB9C8(CpuContext* ctx);
extern "C" uint64_t func_802CB9C8_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802CC594(CpuContext* ctx);
extern "C" uint32_t func_802CC594_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802CC5E0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_802CC7C8_loc_0 = 0;
    uint32_t addr_psqx_802CC7D4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802CC5E0u);
    goto loc_802CC5E0;

loc_802CC5E0:
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
    r31 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 369));
}

loc_802CC624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802CC630;
    }
}

loc_802CC628:
{
    r3 = 0;
    goto loc_802CC7C4;
}

loc_802CC630:
{
    r0 = MemoryInline::FlatRead8((r31 + 886));
}

loc_802CC638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC644;
    }
}

loc_802CC63C:
{
    r3 = 1;
    goto loc_802CC7C4;
}

loc_802CC644:
{
    r3 = MemoryInline::FlatRead8((r31 + 1056));
    r0 = (r3 + -4);
}

loc_802CC650:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802CC65C;
    }
}

loc_802CC654:
{
}

loc_802CC658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802CC660;
    }
}

loc_802CC65C:
{
    r29 = 1;
}

loc_802CC660:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 887), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 17;
    r5 = (r1 + 8);
    ctx->lr = 0x802CC678u;
    if constexpr (KnownRegArgsCpuCall<0x802CB9C8u>(&func_802CB9C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802CB9C8_10AE = func_802CB9C8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802CB9C8_10AE);
        r4 = static_cast<uint32_t>(regargs_result_802CB9C8_10AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CB9C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802CC680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC68C;
    }
}

loc_802CC684:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 887), static_cast<uint8_t>(r0));
}

loc_802CC68C:
{
    r0 = (r3 & 255);
}

loc_802CC694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC6A0;
    }
}

loc_802CC698:
{
}

loc_802CC69C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802CC6C4;
    }
}

loc_802CC6A0:
{
    r3 = r31;
    r4 = 5;
    r5 = (r1 + 8);
    ctx->lr = 0x802CC6B0u;
    if constexpr (KnownRegArgsCpuCall<0x802CB9C8u>(&func_802CB9C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802CB9C8_1857 = func_802CB9C8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802CB9C8_1857);
        r4 = static_cast<uint32_t>(regargs_result_802CB9C8_1857 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CB9C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802CC6B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CC6C4;
    }
}

loc_802CC6BC:
{
    r3 = 0;
    goto loc_802CC7C4;
}

loc_802CC6C4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (r0 * 2840);
    r30 = (r30 + r0);
    r3 = (r31 + 376);
    r4 = (r30 + 392);
    ctx->lr = 0x802CC6DCu;
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
    f30.d = f1.d;
    r3 = r31;
    ctx->lr = 0x802CC6E8u;
    if constexpr (KnownRegArgsCpuCall<0x802CC594u>(&func_802CC594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802CC594_20D0 = func_802CC594_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802CC594_20D0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CC594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r31;
    ctx->lr = 0x802CC6F4u;
    if constexpr (KnownRegArgsCpuCall<0x802CC594u>(&func_802CC594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802CC594_24AA = func_802CC594_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802CC594_24AA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CC594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = PpcFmulsInline(f1.d, f31.d);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_802CC6FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802CC710;
    }
}

loc_802CC704:
{
    r0 = MemoryInline::FlatRead16((r31 + 906));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CC70C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802CC738;
    }
}

loc_802CC710:
{
    r0 = MemoryInline::FlatRead8((r31 + 910));
}

loc_802CC718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CC738;
    }
}

loc_802CC71C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    r0 = 300;
    MemoryInline::FlatWrite16((r31 + 906), static_cast<uint16_t>(r0));
    goto loc_802CC7B8;
}

loc_802CC738:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13096));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_802CC740:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802CC780;
    }
}

loc_802CC748:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 910));
}

loc_802CC758:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802CC768;
    }
}

loc_802CC75C:
{
    r0 = MemoryInline::FlatRead8((r31 + 887));
}

loc_802CC764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CC774;
    }
}

loc_802CC768:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CC7B8;
}

loc_802CC774:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CC7B8;
}

loc_802CC780:
{
    r0 = MemoryInline::FlatRead8((r31 + 887));
}

loc_802CC788:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CC7A0;
    }
}

loc_802CC78C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CC7B8;
}

loc_802CC7A0:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    r3 = 0;
    goto loc_802CC7C4;
}

loc_802CC7B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    r3 = 1;
}

loc_802CC7C4:
{
    r0 = 88;
    addr_psqx_802CC7C8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802CC7C8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_802CC7D4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802CC7D4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CC5E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CC5E0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802CC5E0 func_802CC5E0 preserves=true fpr_mask=0x00000000
