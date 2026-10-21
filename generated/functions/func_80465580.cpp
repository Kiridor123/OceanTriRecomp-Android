#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046463C(CpuContext* ctx);
extern "C" uint64_t func_8046463C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_80465580_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_80465990_loc_0 = 0;
    uint32_t addr_lfdx_80465A38_loc_0 = 0;
    uint32_t addr_lfdx_80465AEC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80465580u);
    goto loc_80465580;

loc_80465580:
{
    MemoryAlias::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 196), r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f2.d);
    r3 = 0x80570000u;
    r3 = (r3 + 14696);
    r5 = MemoryAlias::FlatRead32((r1 + 16));
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f1.d);
    r11 = MemoryAlias::FlatRead32((r1 + 20));
    r7 = (r5 & 2147483647);
    r9 = MemoryAlias::FlatRead32((r1 + 8));
    r0 = (r7 | r11);
    r10 = MemoryAlias::FlatRead32((r1 + 12));
    r6 = (r9 & 2147483647);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804655F4;
    }
}

loc_804655EC:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3672));
    goto loc_80465D54;
}

loc_804655F4:
{
    r0 = 2146435072;
}

loc_804655FC:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80465634;
    }
}

loc_80465600:
{
    r0 = (r6 + -2146435072);
}

loc_80465608:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80465614;
    }
}

loc_8046560C:
{
}

loc_80465610:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80465634;
    }
}

loc_80465614:
{
    r0 = 2146435072;
}

loc_8046561C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_80465634;
    }
}

loc_80465620:
{
    r0 = (r7 + -2146435072);
}

loc_80465628:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8046563C;
    }
}

loc_8046562C:
{
}

loc_80465630:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8046563C;
    }
}

loc_80465634:
{
    f1.d = (f1.d + f2.d);
    goto loc_80465D54;
}

loc_8046563C:
{
}

loc_80465640:
{
    r4 = 0;
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804656BC;
    }
}

loc_80465648:
{
    r0 = 1128267776;
}

loc_80465650:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8046565C;
    }
}

loc_80465654:
{
    r4 = 2;
    goto loc_804656BC;
}

loc_8046565C:
{
    r0 = 1072693248;
}

loc_80465664:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_804656BC;
    }
}

loc_80465668:
{
    r8 = (static_cast<int32_t>(r7) >> 20);
    r0 = (r8 + -1023);
}

loc_80465674:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_80465698;
    }
}

loc_80465678:
{
    r0_subfic_ra_1 = r0;
    r0 = (52 - r0_subfic_ra_1);
    r8 = PPC_Srw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80465688:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(r0))) {
        goto loc_804656BC;
    }
}

loc_8046568C:
{
    r0 = (r8 & 1);
    r4 = (2 - r0);
    goto loc_804656BC;
}

loc_80465698:
{
}

loc_8046569C:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804656BC;
    }
}

loc_804656A0:
{
    r0_subfic_ra_2 = r0;
    r0 = (20 - r0_subfic_ra_2);
    r8 = PPC_Sraw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_804656B0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_804656BC;
    }
}

loc_804656B4:
{
    r0 = (r8 & 1);
    r4 = (2 - r0);
}

loc_804656BC:
{
}

loc_804656C0:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80465770;
    }
}

loc_804656C4:
{
    r0 = (r7 + -2146435072);
}

loc_804656CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80465720;
    }
}

loc_804656D0:
{
    r0 = (r6 + -1072693248);
    r0 = (r0 | r10);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804656E4;
    }
}

loc_804656DC:
{
    f1.d = (f2.d - f2.d);
    goto loc_80465D54;
}

loc_804656E4:
{
    r0 = 1072693248;
}

loc_804656EC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80465708;
    }
}

loc_804656F0:
{
}

loc_804656F4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80465700;
    }
}

loc_804656F8:
{
    f1.d = f2.d;
    goto loc_80465D54;
}

loc_80465700:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_80465708:
{
}

loc_8046570C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80465718;
    }
}

loc_80465710:
{
    f1.d = (-(f2.d));
    goto loc_80465D54;
}

loc_80465718:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_80465720:
{
    r0 = (r7 + -1072693248);
}

loc_80465728:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80465740;
    }
}

loc_8046572C:
{
}

loc_80465730:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80465D54;
    }
}

loc_80465734:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3672));
    f1.d = (f0.d / f1.d);
    goto loc_80465D54;
}

loc_80465740:
{
    r0 = (r5 + -1073741824);
}

loc_80465748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80465754;
    }
}

loc_8046574C:
{
    f1.d = (f1.d * f1.d);
    goto loc_80465D54;
}

loc_80465754:
{
    r0 = (r5 + -1071644672);
}

loc_8046575C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80465770;
    }
}

loc_80465760:
{
}

loc_80465764:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_80465770;
    }
}

loc_80465768:
{
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_2791 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_2791);
        r4 = static_cast<uint32_t>(regargs_result_80468848_2791 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80465D54;
}

loc_80465770:
{
    f0.d = std::fabs(f1.d);
}

loc_80465778:
{
    MemoryAlias::FlatWriteRamFloat64((r1 + 72), f0.d);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804657E4;
    }
}

loc_80465780:
{
    r0 = (r6 + -2146435072);
}

loc_80465788:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804657A0;
    }
}

loc_8046578C:
{
}

loc_80465790:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804657A0;
    }
}

loc_80465794:
{
    r0 = (r6 + -1072693248);
}

loc_8046579C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804657E4;
    }
}

loc_804657A0:
{
}

loc_804657A4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804657B0;
    }
}

loc_804657A8:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3672));
    f0.d = (f1.d / f0.d);
}

loc_804657B0:
{
}

loc_804657B4:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804657DC;
    }
}

loc_804657B8:
{
    r0 = (r6 + -1072693248);
    r0 = (r0 | r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804657D0;
    }
}

loc_804657C4:
{
    f0.d = (f0.d - f0.d);
    f0.d = (f0.d / f0.d);
    goto loc_804657DC;
}

loc_804657D0:
{
}

loc_804657D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_804657DC;
    }
}

loc_804657D8:
{
    f0.d = (-(f0.d));
}

loc_804657DC:
{
    f1.d = f0.d;
    goto loc_80465D54;
}

loc_804657E4:
{
    r8 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r8 + 1);
    r8 = (r0 | r4);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80465808;
    }
}

loc_804657F4:
{
    r3 = 0x80790000u;
    r0 = 33;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 25016));
    goto loc_80465D54;
}

loc_80465808:
{
    r8 = 1105199104;
}

loc_80465810:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r8))) {
        goto loc_8046590C;
    }
}

loc_80465814:
{
    r3 = 1139802112;
}

loc_8046581C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r3))) {
        goto loc_8046585C;
    }
}

loc_80465820:
{
    r0 = 1072693248;
}

loc_80465828:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_80465844;
    }
}

loc_8046582C:
{
}

loc_80465830:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8046583C;
    }
}

loc_80465834:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3656));
    goto loc_80465D54;
}

loc_8046583C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_80465844:
{
}

loc_80465848:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80465854;
    }
}

loc_8046584C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3656));
    goto loc_80465D54;
}

loc_80465854:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_8046585C:
{
    r3 = 1072693248;
    r7 = (r3 + -1);
}

loc_80465868:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_80465884;
    }
}

loc_8046586C:
{
}

loc_80465870:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8046587C;
    }
}

loc_80465874:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3656));
    goto loc_80465D54;
}

loc_8046587C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_80465884:
{
}

loc_80465888:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r3))) {
        goto loc_804658A4;
    }
}

loc_8046588C:
{
}

loc_80465890:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8046589C;
    }
}

loc_80465894:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3656));
    goto loc_80465D54;
}

loc_8046589C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3664));
    goto loc_80465D54;
}

loc_804658A4:
{
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -3672));
    r3 = 0;
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3632));
    f8.d = (f1.d - f3.d);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3616));
    f5.d = MemoryAlias::FlatReadFloat64((r2 + -3640));
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -3624));
    f6.d = (f0.d * f8.d);
    f4.d = MemoryAlias::FlatReadFloat64((r2 + -3648));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3608));
    f7.d = (f8.d * f8.d);
    f5.d = (f5.d - f6.d);
    f6.d = (f3.d * f8.d);
    f5.d = (f8.d * f5.d);
    f1.d = (f1.d * f8.d);
    f3.d = (f4.d - f5.d);
    f3.d = (f7.d * f3.d);
    f0.d = (f0.d * f3.d);
    f1.d = (f1.d - f0.d);
    f0.d = (f6.d + f1.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f0.d);
    MemoryAlias::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 48));
    f0.d = (f0.d - f6.d);
    f0.d = (f1.d - f0.d);
    goto loc_80465B14;
}

loc_8046590C:
{
    r5 = 1048576;
    r11 = 0;
}

loc_80465918:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80465930;
    }
}

loc_8046591C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3600));
    r11 = -53;
    f0.d = (f0.d * f1.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 72), f0.d);
    r6 = MemoryAlias::FlatRead32((r1 + 72));
}

loc_80465930:
{
    r5 = 262144;
    r8 = (r6 & 1048575);
    r5 = (r5 + -26482);
    r6 = (static_cast<int32_t>(r6) >> 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r5));
}

loc_80465944:
{
    r7 = (r8 | 1072693248);
    r5 = (r11 + r6);
    r11 = (r5 + -1023);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8046595C;
    }
}

loc_80465954:
{
    r6 = 0;
    goto loc_80465980;
}

loc_8046595C:
{
    r5 = 786432;
    r5 = (r5 + -18822);
}

loc_80465968:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r5))) {
        goto loc_80465974;
    }
}

loc_8046596C:
{
    r6 = 1;
    goto loc_80465980;
}

loc_80465974:
{
    r7 = (r7 + -1048576);
    r6 = 0;
    r11 = (r11 + 1);
}

loc_80465980:
{
    MemoryAlias::FlatWriteRam32((r1 + 72), r7);
    r9 = (static_cast<int32_t>(r7) >> 1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r10 = (r10_rot_1 & -8);
    r5 = (r3 + 0);
    addr_lfdx_80465990_loc_0 = (r5 + r10);
    f8.d = MemoryAlias::FlatReadFloat64(addr_lfdx_80465990_loc_0);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r8 = (r8_rot_1 & -262144);
    f10.d = MemoryAlias::FlatReadFloat64((r1 + 72));
    r6 = (r11 ^ -2147483648);
    guest_range_1 = MemoryAlias::ResolveRangeHost((r2 + -3672), 0, 272u, true, false);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -3664));
    r5 = 1127219200;
    f3.d = (f10.d + f8.d);
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -3672));
    f26.d = (f10.d - f8.d);
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 120u, (r2 + -3552));
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 104u, (r2 + -3568));
    r9 = (r9 | 536870912);
    f1.d = (f1.d / f3.d);
    r8 = (r8 + 524288);
    r8 = (r9 + r8);
    MemoryAlias::FlatWriteRamFloat64((r1 + 24), f0.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 112u, (r2 + -3560));
    r9 = 0;
    f4.d = (f26.d * f1.d);
    MemoryAlias::FlatWriteRam32((r1 + 24), r8);
    f13.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 96u, (r2 + -3576));
    r7 = (r3 + 32);
    f9.d = MemoryAlias::FlatReadFloat64((r1 + 24));
    MemoryAlias::FlatWriteRamFloat64((r1 + 32), f4.d);
    f5.d = (f4.d * f4.d);
    MemoryAlias::FlatWriteRam32((r1 + 36), r9);
    f30.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 88u, (r2 + -3584));
    f8.d = (f9.d - f8.d);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 32));
    stackword6 = r6;
    MemoryAlias::FlatWriteRam32((r1 + 92), r6);
    f7.d = (f7.d * f5.d);
    stackword7 = r5;
    MemoryAlias::FlatWriteRam32((r1 + 88), r5);
    f31.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -3592));
    f8.d = (f10.d - f8.d);
    f12.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 128u, (r2 + -3544));
    f28.d = (f0.d * f9.d);
    f7.d = (f3.d + f7.d);
    f10.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 144u, (r2 + -3528));
    f27.d = (f0.d * f8.d);
    f9.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 152u, (r2 + -3520));
    f11.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 136u, (r2 + -3536));
    f7.d = (f5.d * f7.d);
    addr_lfdx_80465A38_loc_0 = (r7 + r10);
    f8.d = MemoryAlias::FlatReadFloat64(addr_lfdx_80465A38_loc_0);
    f28.d = (f26.d - f28.d);
    f3.d = (f0.d * f0.d);
    f29.d = (f6.d + f7.d);
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 264u, (r2 + -3408));
    f27.d = (f28.d - f27.d);
    f6.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f28.d = (f5.d * f5.d);
    f29.d = (f5.d * f29.d);
    f27.d = (f1.d * f27.d);
    f13.d = (f13.d + f29.d);
    f1.d = (f12.d + f3.d);
    f29.d = (f5.d * f13.d);
    f13.d = (f0.d + f4.d);
    f30.d = (f30.d + f29.d);
    f13.d = (f27.d * f13.d);
    f30.d = (f5.d * f30.d);
    f5.d = (f6.d - f7.d);
    f6.d = (f31.d + f30.d);
    f26.d = (f28.d * f6.d);
    f26.d = (f26.d + f13.d);
    f1.d = (f1.d + f26.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 24), f1.d);
    MemoryAlias::FlatWriteRam32((r1 + 28), r9);
    f7.d = MemoryAlias::FlatReadFloat64((r1 + 24));
    f6.d = (f7.d - f12.d);
    f1.d = (f27.d * f7.d);
    f3.d = (f6.d - f3.d);
    f6.d = (f0.d * f7.d);
    f0.d = (f26.d - f3.d);
    f0.d = (f0.d * f4.d);
    f4.d = (f1.d + f0.d);
    f3.d = (f6.d + f4.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 64), f3.d);
    MemoryAlias::FlatWriteRam32((r1 + 68), r9);
    f3.d = MemoryAlias::FlatReadFloat64((r1 + 64));
    f0.d = (f3.d - f6.d);
    f1.d = (f10.d * f3.d);
    f0.d = (f4.d - f0.d);
    f3.d = (f11.d * f3.d);
    f0.d = (f9.d * f0.d);
    f0.d = (f1.d + f0.d);
    f4.d = (f8.d + f0.d);
    r3 = (r3 + 16);
    f0.d = (f3.d + f4.d);
    addr_lfdx_80465AEC_loc_0 = (r3 + r10);
    f1.d = MemoryAlias::FlatReadFloat64(addr_lfdx_80465AEC_loc_0);
    f0.d = (f0.d + f1.d);
    f0.d = (f5.d + f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f0.d);
    MemoryAlias::FlatWriteRam32((r1 + 52), r9);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 48));
    f0.d = (f0.d - f5.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f0.d - f3.d);
    f0.d = (f4.d - f0.d);
}

loc_80465B14:
{
    r3 = (r4 + -1);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r2 + -3672), 0, 264u, true, false);
    f31.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3672));
    r0 = (r0 | r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80465B28;
    }
}

loc_80465B24:
{
    f31.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 160u, (r2 + -3512));
}

loc_80465B28:
{
    MemoryAlias::FlatWriteRamFloat64((r1 + 56), f2.d);
    r0 = 0;
    f0.d = (f2.d * f0.d);
    f1.d = MemoryAlias::FlatReadFloat64((r1 + 48));
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
    r0 = 1083179008;
    f3.d = MemoryAlias::FlatReadFloat64((r1 + 56));
    f2.d = (f2.d - f3.d);
    f3.d = (f3.d * f1.d);
    f1.d = (f1.d * f2.d);
    f10.d = (f1.d + f0.d);
    f0.d = (f10.d + f3.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 80), f0.d);
    r6 = MemoryAlias::FlatRead32((r1 + 80));
    r5 = MemoryAlias::FlatRead32((r1 + 84));
}

loc_80465B68:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80465BAC;
    }
}

loc_80465B6C:
{
    r0 = (r6 + -1083179008);
    r0 = (r0 | r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80465B88;
    }
}

loc_80465B78:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 168u, (r2 + -3504));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_80465D54;
}

loc_80465B88:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 176u, (r2 + -3496));
    f0.d = (f0.d - f3.d);
    f1.d = (f1.d + f10.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80465B98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80465C00;
    }
}

loc_80465B9C:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 168u, (r2 + -3504));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_80465D54;
}

loc_80465BAC:
{
    r3 = 1083244544;
    r4 = (r6 & 2147483647);
    r0 = (r3 + -13312);
}

loc_80465BBC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80465C00;
    }
}

loc_80465BC0:
{
    r3 = (r6 + 1064239104);
    r0 = (r3 + 13312);
    r0 = (r0 | r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80465BE0;
    }
}

loc_80465BD0:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 184u, (r2 + -3488));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_80465D54;
}

loc_80465BE0:
{
    f0.d = (f0.d - f3.d);
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_80465BE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80465C00;
    }
}

loc_80465BF0:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 184u, (r2 + -3488));
    f0.d = (f1.d * f31.d);
    f1.d = (f1.d * f0.d);
    goto loc_80465D54;
}

loc_80465C00:
{
    r3 = (r6 & 2147483647);
    r0 = 1071644672;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80465C0C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & 2047);
    r3 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80465C70;
    }
}

loc_80465C18:
{
    r3 = 1048576;
    r0 = (r4 + -1022);
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3664));
    r7 = (r6 + r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = (r7 & 2147483647);
    r3 = (r3 + -1);
    r4 = (static_cast<int32_t>(r0) >> 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80465C40:
{
    r5 = (r4 + -1023);
    r0 = (r7 & 1048575);
    r4 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r3 = (r0 | 1048576);
    r0 = (20 - r5);
    r4 = (r7 & ~r4);
    MemoryAlias::FlatWriteRam32((r1 + 40), r4);
    r3 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80465C68;
    }
}

loc_80465C64:
{
    r3 = (0 - r3);
}

loc_80465C68:
{
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 40));
    f3.d = (f3.d - f0.d);
}

loc_80465C70:
{
    f0.d = (f10.d + f3.d);
    r0 = 0;
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 200u, (r2 + -3472));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r4 = (r4_rot_2 & -1048576);
    MemoryAlias::FlatWriteRamFloat64((r1 + 40), f0.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 208u, (r2 + -3464));
    MemoryAlias::FlatWriteRam32((r1 + 44), r0);
    f9.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 192u, (r2 + -3480));
    f8.d = MemoryAlias::FlatReadFloat64((r1 + 40));
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 248u, (r2 + -3424));
    f3.d = (f8.d - f3.d);
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 240u, (r2 + -3432));
    f7.d = (f0.d * f8.d);
    f5.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 232u, (r2 + -3440));
    f4.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 224u, (r2 + -3448));
    f0.d = (f10.d - f3.d);
    f10.d = (f9.d * f8.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 216u, (r2 + -3456));
    f8.d = (f2.d * f0.d);
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 256u, (r2 + -3416));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3672));
    f11.d = (f8.d + f7.d);
    f9.d = (f10.d + f11.d);
    f7.d = (f9.d * f9.d);
    f8.d = (f9.d - f10.d);
    f6.d = (f6.d * f7.d);
    f8.d = (f11.d - f8.d);
    f6.d = (f1.d + f6.d);
    f1.d = (f9.d * f8.d);
    f6.d = (f7.d * f6.d);
    f1.d = (f8.d + f1.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f7.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f7.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f7.d * f3.d);
    f4.d = (f9.d - f3.d);
    f3.d = (f9.d * f4.d);
    f2.d = (f4.d - f2.d);
    f2.d = (f3.d / f2.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f1.d - f9.d);
    f1.d = (f0.d - f1.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 80), f1.d);
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 20);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80465D40;
    }
}

loc_80465D34:
{
    ctx->lr = 0x80465D38u;
    if constexpr (KnownRegArgsCpuCall<0x8046463Cu>(&func_8046463C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8046463C_7125 = func_8046463C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8046463C_7125);
        r4 = static_cast<uint32_t>(regargs_result_8046463C_7125 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046463Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryAlias::FlatWriteRamFloat64((r1 + 80), f1.d);
    goto loc_80465D4C;
}

loc_80465D40:
{
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r0 = (r0 + r4);
    MemoryAlias::FlatWriteRam32((r1 + 80), r0);
}

loc_80465D4C:
{
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 80));
    f1.d = (f31.d * f0.d);
}

loc_80465D54:
{
    r0 = MemoryAlias::FlatRead32((r1 + 196));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f30.d = MemoryAlias::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f29.d = MemoryAlias::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f28.d = MemoryAlias::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f27.d = MemoryAlias::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f26.d = MemoryAlias::FlatReadFloat64((r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80465580(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80465580_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80465580 func_80465580 preserves=true fpr_mask=0x00000000
