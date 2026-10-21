#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804CD3C0_ra30_1fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
    uint32_t r4_psq_tmp_18 = 0;
    uint32_t r4_psq_tmp_19 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_20 = 0;
    uint32_t r4_psq_tmp_21 = 0;
    uint32_t r4_psq_tmp_22 = 0;
    uint32_t r4_psq_tmp_23 = 0;
    uint32_t r4_psq_tmp_24 = 0;
    uint32_t r4_psq_tmp_25 = 0;
    uint32_t r4_psq_tmp_26 = 0;
    uint32_t r4_psq_tmp_27 = 0;
    uint32_t r4_psq_tmp_28 = 0;
    uint32_t r4_psq_tmp_29 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_30 = 0;
    uint32_t r4_psq_tmp_31 = 0;
    uint32_t r4_psq_tmp_32 = 0;
    uint32_t r4_psq_tmp_33 = 0;
    uint32_t r4_psq_tmp_34 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r4 = arg_r4;
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

    MKW_GUEST_ENTER(0x804CD3C0u);
    goto loc_804CD3C0;

loc_804CD3C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 144), 0, 276u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 274u, (r4 + 418));
    r5 = (r5 & 1);
}

loc_804CD3C8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804CD4E0;
    }
}

loc_804CD3CC:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 256u, (r4 + 400));
    PPC_Mtfsf(255, f0.d);
    r5 = ctx->hid2;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & 1);
}

loc_804CD3DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804CD460;
    }
}

loc_804CD3E0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 456);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 464);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 472);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 480);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 488);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 496);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 504);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 512);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 520);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 528);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 536);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_12 = (r4 + 544);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_13 = (r4 + 552);
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_13));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_14 = (r4 + 560);
    PpcSetPairedFprInline(f13, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_14));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_15 = (r4 + 568);
    PpcSetPairedFprInline(f14, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_15));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_16 = (r4 + 576);
    PpcSetPairedFprInline(f15, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_16));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_17 = (r4 + 584);
    PpcSetPairedFprInline(f16, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_17));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_18 = (r4 + 592);
    PpcSetPairedFprInline(f17, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_18));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_19 = (r4 + 600);
    PpcSetPairedFprInline(f18, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_19));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_20 = (r4 + 608);
    PpcSetPairedFprInline(f19, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_20));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_21 = (r4 + 616);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_21));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_22 = (r4 + 624);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_22));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_23 = (r4 + 632);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_23));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_24 = (r4 + 640);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_25 = (r4 + 648);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_25));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_26 = (r4 + 656);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_27 = (r4 + 664);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_27));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_28 = (r4 + 672);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_29 = (r4 + 680);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_30 = (r4 + 688);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_31 = (r4 + 696);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_31));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_32 = (r4 + 704);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_32));
}

loc_804CD460:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r4 + 144));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r4 + 152));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r4 + 160));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r4 + 168));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r4 + 176));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r4 + 184));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r4 + 192));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r4 + 200));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r4 + 208));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r4 + 216));
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r4 + 224));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r4 + 232));
    f12.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r4 + 240));
    f13.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r4 + 248));
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r4 + 256));
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 120u, (r4 + 264));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 128u, (r4 + 272));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 136u, (r4 + 280));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 144u, (r4 + 288));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 152u, (r4 + 296));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 160u, (r4 + 304));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 168u, (r4 + 312));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 176u, (r4 + 320));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r4 + 328));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 192u, (r4 + 336));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 200u, (r4 + 344));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 208u, (r4 + 352));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 216u, (r4 + 360));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 224u, (r4 + 368));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 232u, (r4 + 376));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 240u, (r4 + 384));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 248u, (r4 + 392));
}

loc_804CD4E0:
{
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return f1.d;
}

}

extern "C" void func_804CD3C0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804CD3C0_ra30_1fe_0_2(ctx, ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD3C0 func_804CD3C0 preserves=false fpr_mask=0xFFFFC000
