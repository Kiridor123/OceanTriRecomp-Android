#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD4F0_ra20_1fe_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_13 = 0;
    uint32_t r5_psq_tmp_14 = 0;
    uint32_t r5_psq_tmp_15 = 0;
    uint32_t r5_psq_tmp_16 = 0;
    uint32_t r5_psq_tmp_17 = 0;
    uint32_t r5_psq_tmp_18 = 0;
    uint32_t r5_psq_tmp_19 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_20 = 0;
    uint32_t r5_psq_tmp_21 = 0;
    uint32_t r5_psq_tmp_22 = 0;
    uint32_t r5_psq_tmp_23 = 0;
    uint32_t r5_psq_tmp_24 = 0;
    uint32_t r5_psq_tmp_25 = 0;
    uint32_t r5_psq_tmp_26 = 0;
    uint32_t r5_psq_tmp_27 = 0;
    uint32_t r5_psq_tmp_28 = 0;
    uint32_t r5_psq_tmp_29 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_30 = 0;
    uint32_t r5_psq_tmp_31 = 0;
    uint32_t r5_psq_tmp_32 = 0;
    uint32_t r5_psq_tmp_33 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804CD4F0;

loc_804CD4F0:
{
    r3 = MemoryInline::FlatRead16((r5 + 418));
    r3 = (r3 | 1);
    MemoryInline::FlatWrite16((r5 + 418), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteFloat64((r5 + 144), f0.d);
    MemoryInline::FlatWriteFloat64((r5 + 152), f1.d);
    MemoryInline::FlatWriteFloat64((r5 + 160), f2.d);
    MemoryInline::FlatWriteFloat64((r5 + 168), f3.d);
    MemoryInline::FlatWriteFloat64((r5 + 176), f4.d);
    MemoryInline::FlatWriteFloat64((r5 + 184), f5.d);
    MemoryInline::FlatWriteFloat64((r5 + 192), f6.d);
    MemoryInline::FlatWriteFloat64((r5 + 200), f7.d);
    MemoryInline::FlatWriteFloat64((r5 + 208), f8.d);
    MemoryInline::FlatWriteFloat64((r5 + 216), f9.d);
    MemoryInline::FlatWriteFloat64((r5 + 224), f10.d);
    MemoryInline::FlatWriteFloat64((r5 + 232), f11.d);
    MemoryInline::FlatWriteFloat64((r5 + 240), f12.d);
    MemoryInline::FlatWriteFloat64((r5 + 248), f13.d);
    MemoryInline::FlatWriteFloat64((r5 + 256), f14.d);
    MemoryInline::FlatWriteFloat64((r5 + 264), f15.d);
    MemoryInline::FlatWriteFloat64((r5 + 272), f16.d);
    MemoryInline::FlatWriteFloat64((r5 + 280), f17.d);
    MemoryInline::FlatWriteFloat64((r5 + 288), f18.d);
    MemoryInline::FlatWriteFloat64((r5 + 296), f19.d);
    MemoryInline::FlatWriteFloat64((r5 + 304), f20.d);
    MemoryInline::FlatWriteFloat64((r5 + 312), f21.d);
    MemoryInline::FlatWriteFloat64((r5 + 320), f22.d);
    MemoryInline::FlatWriteFloat64((r5 + 328), f23.d);
    MemoryInline::FlatWriteFloat64((r5 + 336), f24.d);
    MemoryInline::FlatWriteFloat64((r5 + 344), f25.d);
    MemoryInline::FlatWriteFloat64((r5 + 352), f26.d);
    MemoryInline::FlatWriteFloat64((r5 + 360), f27.d);
    MemoryInline::FlatWriteFloat64((r5 + 368), f28.d);
    MemoryInline::FlatWriteFloat64((r5 + 376), f29.d);
    MemoryInline::FlatWriteFloat64((r5 + 384), f30.d);
    MemoryInline::FlatWriteFloat64((r5 + 392), f31.d);
    f0.d = PPC_Mffs();
    MemoryInline::FlatWriteFloat64((r5 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 144));
    r3 = ctx->hid2;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 1);
}

loc_804CD590:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CD614;
    }
}

loc_804CD594:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 456);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 464);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, PPC_PsFromScalarInline(f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 472);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, PPC_PsFromScalarInline(f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 480);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, PPC_PsFromScalarInline(f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 488);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5, PPC_PsFromScalarInline(f4.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 496);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6, PPC_PsFromScalarInline(f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 504);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7, PPC_PsFromScalarInline(f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 512);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8, PPC_PsFromScalarInline(f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 520);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, PPC_PsFromScalarInline(f8.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_10 = (r5 + 528);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_10, PPC_PsFromScalarInline(f9.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_11 = (r5 + 536);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11, PPC_PsFromScalarInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_12 = (r5 + 544);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_12, PPC_PsFromScalarInline(f11.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_13 = (r5 + 552);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_13, PPC_PsFromScalarInline(f12.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_14 = (r5 + 560);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_14, PPC_PsFromScalarInline(f13.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_15 = (r5 + 568);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_15, PPC_PsFromScalarInline(f14.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_16 = (r5 + 576);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_17 = (r5 + 584);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_17, PPC_PsFromScalarInline(f16.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_18 = (r5 + 592);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_18, PPC_PsFromScalarInline(f17.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_19 = (r5 + 600);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_19, PPC_PsFromScalarInline(f18.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_20 = (r5 + 608);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_20, PPC_PsFromScalarInline(f19.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_21 = (r5 + 616);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_21, PPC_PsFromScalarInline(f20.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_22 = (r5 + 624);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_22, PPC_PsFromScalarInline(f21.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_23 = (r5 + 632);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_23, PPC_PsFromScalarInline(f22.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_24 = (r5 + 640);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_24, PPC_PsFromScalarInline(f23.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_25 = (r5 + 648);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_25, PPC_PsFromScalarInline(f24.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_26 = (r5 + 656);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_26, PPC_PsFromScalarInline(f25.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_27 = (r5 + 664);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_27, PPC_PsFromScalarInline(f26.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_28 = (r5 + 672);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_28, PPC_PsFromScalarInline(f27.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_29 = (r5 + 680);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_29, PPC_PsFromScalarInline(f28.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_30 = (r5 + 688);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_30, PPC_PsFromScalarInline(f29.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_31 = (r5 + 696);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_31, PPC_PsFromScalarInline(f30.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_32 = (r5 + 704);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_32, PPC_PsFromScalarInline(f31.d));
}

loc_804CD614:
{
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_804CD4F0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804CD4F0_ra20_1fe_0_0(ctx, ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00000020 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD4F0 func_804CD4F0 preserves=true fpr_mask=0x00000000
