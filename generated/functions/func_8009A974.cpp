#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009A974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_10 = 0;
    uint32_t r30_psq_tmp_11 = 0;
    uint32_t r30_psq_tmp_12 = 0;
    uint32_t r30_psq_tmp_13 = 0;
    uint32_t r30_psq_tmp_14 = 0;
    uint32_t r30_psq_tmp_15 = 0;
    uint32_t r30_psq_tmp_16 = 0;
    uint32_t r30_psq_tmp_17 = 0;
    uint32_t r30_psq_tmp_18 = 0;
    uint32_t r30_psq_tmp_19 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_20 = 0;
    uint32_t r30_psq_tmp_21 = 0;
    uint32_t r30_psq_tmp_22 = 0;
    uint32_t r30_psq_tmp_23 = 0;
    uint32_t r30_psq_tmp_24 = 0;
    uint32_t r30_psq_tmp_25 = 0;
    uint32_t r30_psq_tmp_26 = 0;
    uint32_t r30_psq_tmp_27 = 0;
    uint32_t r30_psq_tmp_28 = 0;
    uint32_t r30_psq_tmp_29 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_30 = 0;
    uint32_t r30_psq_tmp_31 = 0;
    uint32_t r30_psq_tmp_32 = 0;
    uint32_t r30_psq_tmp_33 = 0;
    uint32_t r30_psq_tmp_34 = 0;
    uint32_t r30_psq_tmp_35 = 0;
    uint32_t r30_psq_tmp_36 = 0;
    uint32_t r30_psq_tmp_37 = 0;
    uint32_t r30_psq_tmp_38 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r30_psq_tmp_8 = 0;
    uint32_t r30_psq_tmp_9 = 0;
    uint32_t r31_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8009A974u);
    goto loc_8009A974;

loc_8009A974:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = 0;
}

loc_8009A998:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009A9AC;
    }
}

loc_8009A99C:
{
    r0 = (r3 & 3);
}

loc_8009A9A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009A9AC;
    }
}

loc_8009A9A8:
{
    r4 = 1;
}

loc_8009A9AC:
{
}

loc_8009A9B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009A9D0;
    }
}

loc_8009A9B4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8224);
    r4 = 94;
    r5 = 0x80590000u;
    r5 = (r5 + 8236);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009A9D0u;
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

loc_8009A9D0:
{
    r0 = (r31 & 31);
}

loc_8009A9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009A9F8;
    }
}

loc_8009A9DC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8224);
    r4 = 95;
    r5 = 0x80590000u;
    r5 = (r5 + 8340);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009A9F8u;
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

loc_8009A9F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31568));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
}

loc_8009AA04:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8009AAC4;
    }
}

loc_8009AA08:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8009AA10:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009AAA8;
    }
}

loc_8009AA18:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_5 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_6 = (r30 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_6, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_7 = (r30 + 48);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_8 = (r30 + 56);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_8, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_9 = (r30 + 64);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_9, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_10 = (r30 + 72);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_10, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_11 = (r30 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_11, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_12 = (r30 + 88);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_12, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_13 = (r30 + 96);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_13, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_14 = (r30 + 104);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_14, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_15 = (r30 + 112);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_15, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_16 = (r30 + 120);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_16, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_17 = (r30 + 128);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_17, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_18 = (r30 + 136);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_18, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_19 = (r30 + 144);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_19, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_20 = (r30 + 152);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_20, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_21 = (r30 + 160);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_21, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_22 = (r30 + 168);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_22, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_23 = (r30 + 176);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_23, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_24 = (r30 + 184);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_24, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_25 = (r30 + 192);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_25, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_26 = (r30 + 200);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_26, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_27 = (r30 + 208);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_27, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_28 = (r30 + 216);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_28, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_29 = (r30 + 224);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_29, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_30 = (r30 + 232);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_30, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_31 = (r30 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_31, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_32 = (r30 + 248);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_32, PPC_PsFromScalarInline(f0.d));
    r30 = (r30 + 256);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009AA18;
    }
}

loc_8009AAA0:
{
    r31 = (r31 & 7);
}

loc_8009AAA4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8009AAC4;
    }
}

loc_8009AAA8:
{
    ctr = r31;
}

loc_8009AAAC:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_35 = (r30 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_35, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_36 = (r30 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_36, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_37 = (r30 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_37, PPC_PsFromScalarInline(f0.d));
    r30 = (r30 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009AAAC;
    }
}

loc_8009AAC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009A974 func_8009A974 preserves=true fpr_mask=0x00000000
