#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CA580_ra8_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804CA580;

loc_804CA580:
{
    r3 = ctx->msr;
    r3 = (r3 | 8192);
    ctx->msr = r3;
    r3 = ctx->hid2;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 1);
}

loc_804CA594:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CA620;
    }
}

loc_804CA598:
{
    r3 = 0x80790000u;
    r3 = (r3 + 30624);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f1, f0.d);
    PpcSetPairedFprInline(f2, f0.d);
    PpcSetPairedFprInline(f3, f0.d);
    PpcSetPairedFprInline(f4, f0.d);
    PpcSetPairedFprInline(f5, f0.d);
    PpcSetPairedFprInline(f6, f0.d);
    PpcSetPairedFprInline(f7, f0.d);
    PpcSetPairedFprInline(f8, f0.d);
    PpcSetPairedFprInline(f9, f0.d);
    PpcSetPairedFprInline(f10, f0.d);
    PpcSetPairedFprInline(f11, f0.d);
    PpcSetPairedFprInline(f12, f0.d);
    PpcSetPairedFprInline(f13, f0.d);
    PpcSetPairedFprInline(f14, f0.d);
    PpcSetPairedFprInline(f15, f0.d);
    PpcSetPairedFprInline(f16, f0.d);
    PpcSetPairedFprInline(f17, f0.d);
    PpcSetPairedFprInline(f18, f0.d);
    PpcSetPairedFprInline(f19, f0.d);
    PpcSetPairedFprInline(f20, f0.d);
    PpcSetPairedFprInline(f21, f0.d);
    PpcSetPairedFprInline(f22, f0.d);
    PpcSetPairedFprInline(f23, f0.d);
    PpcSetPairedFprInline(f24, f0.d);
    PpcSetPairedFprInline(f25, f0.d);
    PpcSetPairedFprInline(f26, f0.d);
    PpcSetPairedFprInline(f27, f0.d);
    PpcSetPairedFprInline(f28, f0.d);
    PpcSetPairedFprInline(f29, f0.d);
    PpcSetPairedFprInline(f30, f0.d);
    PpcSetPairedFprInline(f31, f0.d);
}

loc_804CA620:
{
    f0.d = MemoryInline::FlatReadFloat64((r13 + -15160));
    f1.d = f0.d;
    f2.d = f0.d;
    f3.d = f0.d;
    f4.d = f0.d;
    f5.d = f0.d;
    f6.d = f0.d;
    f7.d = f0.d;
    f8.d = f0.d;
    f9.d = f0.d;
    f10.d = f0.d;
    f11.d = f0.d;
    f12.d = f0.d;
    f13.d = f0.d;
    f14.d = f0.d;
    f15.d = f0.d;
    f16.d = f0.d;
    f17.d = f0.d;
    f18.d = f0.d;
    f19.d = f0.d;
    f20.d = f0.d;
    f21.d = f0.d;
    f22.d = f0.d;
    f23.d = f0.d;
    f24.d = f0.d;
    f25.d = f0.d;
    f26.d = f0.d;
    f27.d = f0.d;
    f28.d = f0.d;
    f29.d = f0.d;
    f30.d = f0.d;
    f31.d = f0.d;
    PPC_Mtfsf(255, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    return r3;
}

}

extern "C" void func_804CA580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CA580_ra8_1fe_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CA580 func_804CA580 preserves=false fpr_mask=0xFFFFC000
