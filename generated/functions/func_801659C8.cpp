#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801262DC(CpuContext* ctx);
extern "C" uint64_t func_801262DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B09FC(CpuContext* ctx);
extern "C" uint64_t func_802B09FC_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801659C8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_80165C00_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x801659C8u);
    goto loc_801659C8;

loc_801659C8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r0 = (r4 & 255);
}

loc_801659F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80165A1C;
    }
}

loc_801659F8:
{
}

loc_801659FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80165A48;
    }
}

loc_80165A00:
{
}

loc_80165A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80165A60;
    }
}

loc_80165A08:
{
}

loc_80165A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80165B74;
    }
}

loc_80165A10:
{
}

loc_80165A14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80165BD8;
    }
}

loc_80165A18:
{
    goto loc_80165BF0;
}

loc_80165A1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80165A24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80165A40;
    }
}

loc_80165A28:
{
    // inline leaf 0x80132214 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2221));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80132214
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    r3 = (r3 + 1);
    goto loc_80165BFC;
}

loc_80165A40:
{
    r3 = 0;
    goto loc_80165BFC;
}

loc_80165A48:
{
    // inline leaf 0x8015D96C (11 guest instruction(s))
}

loc_inl1_0x8015D96C:
{
    r3 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r3 & 1);
}

loc_inl1_0x8015D978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8015D988;
    }
}

loc_inl1_0x8015D97C:
{
    r0 = (r3 & 2);
}

loc_inl1_0x8015D984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8015D990;
    }
}

loc_inl1_0x8015D988:
{
    r3 = 1;
    goto loc_inl1_cont_8015D96C;
}

loc_inl1_0x8015D990:
{
    r3 = 0;
}

loc_inl1_cont_8015D96C:
{
    // end of inlined leaf 0x8015D96C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r3 = (r0 & 255);
    goto loc_80165BFC;
}

loc_80165A60:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80165A70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80165B6C;
    }
}

loc_80165A74:
{
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_80165A7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80165B6C;
    }
}

loc_80165A80:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
}

loc_80165A8C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r29 + 481));
    r0 = (r0 & 15);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = (r30 + 7);
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x80165AB4u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801262DC_180D = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_180D);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_180D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80165AB8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80165AD4;
    }
}

loc_80165ABC:
{
    r3 = (r29 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x80165AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r31 = (r30 & 255);
    goto loc_80165AF0;
}

loc_80165AD4:
{
    r3 = (r29 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x80165AE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_80165AE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80165AF0;
    }
}

loc_80165AE8:
{
    f31.d = f1.d;
    r31 = (r30 & 255);
}

loc_80165AF0:
{
    r30 = (r30 + 1);
}

loc_80165AF8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_80165A8C;
    }
}

loc_80165AFC:
{
}

loc_80165B00:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80165B18;
    }
}

loc_80165B04:
{
}

loc_80165B08:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80165B34;
    }
}

loc_80165B0C:
{
}

loc_80165B10:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80165B50;
    }
}

loc_80165B14:
{
    goto loc_80165BF8;
}

loc_80165B18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26048));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80165B20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80165B2C;
    }
}

loc_80165B24:
{
    r3 = 0;
    goto loc_80165BFC;
}

loc_80165B2C:
{
    r3 = 254;
    goto loc_80165BFC;
}

loc_80165B34:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26044));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80165B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80165B48;
    }
}

loc_80165B40:
{
    r3 = 1;
    goto loc_80165BFC;
}

loc_80165B48:
{
    r3 = 254;
    goto loc_80165BFC;
}

loc_80165B50:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26040));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80165B58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80165B64;
    }
}

loc_80165B5C:
{
    r3 = 2;
    goto loc_80165BFC;
}

loc_80165B64:
{
    r3 = 254;
    goto loc_80165BFC;
}

loc_80165B6C:
{
    r3 = 255;
    goto loc_80165BFC;
}

loc_80165B74:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl4_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl4_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802B06E4:
{
    r3 = r0;
    goto loc_inl4_cont_802B06CC;
}

loc_inl4_return:
{
}

loc_inl4_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80165B84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80165BF8;
    }
}

loc_80165B88:
{
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_80165B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80165BA0;
    }
}

loc_80165B94:
{
}

loc_80165B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80165BBC;
    }
}

loc_80165B9C:
{
    goto loc_80165BF8;
}

loc_80165BA0:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802B09FCu>(&func_802B09FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802B09FC_2BEF = func_802B09FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B09FC_2BEF);
        r4 = static_cast<uint32_t>(regargs_result_802B09FC_2BEF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B09FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r3 = (r3 + 1);
    goto loc_80165BFC;
}

loc_80165BBC:
{
    r3 = 4;
    if constexpr (KnownRegArgsCpuCall<0x802B09FCu>(&func_802B09FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802B09FC_2FC8 = func_802B09FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B09FC_2FC8);
        r4 = static_cast<uint32_t>(regargs_result_802B09FC_2FC8 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B09FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r3 = (r3 + 1);
    goto loc_80165BFC;
}

loc_80165BD8:
{
    r0 = MemoryInline::FlatRead16((r3 + 810));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 1;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    goto loc_80165BFC;
}

loc_80165BF0:
{
    r3 = 0;
    goto loc_80165BFC;
}

loc_80165BF8:
{
    r3 = 0;
}

loc_80165BFC:
{
    r0 = 56;
    addr_psqx_80165C00_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80165C00_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801659C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801659C8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801659C8 func_801659C8 preserves=true fpr_mask=0x00000000
