#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800407D4(CpuContext* ctx);
extern "C" uint64_t func_800407D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800407FC(CpuContext* ctx);
extern "C" uint64_t func_800407FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800408D8(CpuContext* ctx);
extern "C" uint64_t func_800408D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800490D4(CpuContext* ctx);
extern "C" uint64_t func_800490D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8029F898(CpuContext* ctx);
extern "C" uint64_t func_8029F898_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8029FAD8(CpuContext* ctx);
extern "C" uint32_t func_8029FAD8_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029FB64(CpuContext* ctx);
extern "C" uint64_t func_8029FB64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A001C(CpuContext* ctx);
extern "C" uint64_t func_802A001C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A0060(CpuContext* ctx);
extern "C" void func_802A0060_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A00A4(CpuContext* ctx);
extern "C" uint32_t func_802A00A4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A02C0(CpuContext* ctx);
extern "C" uint64_t func_802A02C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A06B4(CpuContext* ctx);
extern "C" uint64_t func_802A06B4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A1524(CpuContext* ctx);
extern "C" uint64_t func_802A1524_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A16B8(CpuContext* ctx);
extern "C" uint64_t func_802A16B8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A4D5C(CpuContext* ctx);
extern "C" uint64_t func_802A4D5C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A8F3C(CpuContext* ctx);
extern "C" uint64_t func_802A8F3C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802DE5DC(CpuContext* ctx);
extern "C" uint64_t func_802DE5DC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DEC7C(CpuContext* ctx);
extern "C" uint64_t func_802DEC7C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0CE4(CpuContext* ctx);
extern "C" uint64_t func_802E0CE4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80308F24(CpuContext* ctx);
extern "C" uint64_t func_80308F24_ra188_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031A5F0(CpuContext* ctx);
extern "C" uint64_t func_8031A5F0_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B734(CpuContext* ctx);
extern "C" uint64_t func_8031B734_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8036A88C(CpuContext* ctx);
extern "C" uint64_t func_8036A88C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8036B680(CpuContext* ctx);
extern "C" uint64_t func_8036B680_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8036C244(CpuContext* ctx);
extern "C" uint64_t func_8036C244_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8036CB68(CpuContext* ctx);
extern "C" uint32_t func_8036CB68_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80384388(CpuContext* ctx);
extern "C" uint64_t func_80384388_ra0_0_18_0(CpuContext*);
extern "C" void func_8038443C(CpuContext* ctx);
extern "C" uint64_t func_8038443C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8042CFD0(CpuContext* ctx);
extern "C" uint64_t func_8042CFD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043611C(CpuContext* ctx);
extern "C" uint64_t func_8043611C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043843C(CpuContext* ctx);
extern "C" uint64_t func_8043843C_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804397FC(CpuContext* ctx);
extern "C" uint32_t func_804397FC_ra88_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80442C08(CpuContext* ctx);
extern "C" uint64_t func_80442C08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80443E70(CpuContext* ctx);
extern "C" uint64_t func_80443E70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804465B0(CpuContext* ctx);
extern "C" uint64_t func_804465B0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802A0804_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802A0804;

loc_802A0804:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r31 = (r3 + -4792);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    MemoryInline::FlatWriteRam8((r31 + 15), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
}

loc_802A0830:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A0868;
    }
}

loc_802A0834:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802A083C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A0854;
    }
}

loc_802A0840:
{
    r3 = 99;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802A084C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A0868;
    }
}

loc_802A0850:
{
    goto loc_802A150C;
}

loc_802A0854:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_802A0864:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A150C;
    }
}

loc_802A0868:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_802A0874:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A150C;
    }
}

loc_802A0878:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802A0884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A0894;
    }
}

loc_802A0888:
{
}

loc_802A088C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A08C4;
    }
}

loc_802A0890:
{
    goto loc_802A150C;
}

loc_802A0894:
{
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
}

loc_802A08A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A150C;
    }
}

loc_802A08A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 274));
}

loc_802A08AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A150C;
    }
}

loc_802A08B0:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_802A08BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_802A08D8;
    }
}

loc_802A08C0:
{
    goto loc_802A150C;
}

loc_802A08C4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_802A08D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A150C;
    }
}

loc_802A08D8:
{
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80046F70
}

loc_802A08E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802A14B0;
    }
}

loc_802A08E4:
{
    r3 = 0;
    ctx->lr = 0x802A08ECu;
    if constexpr (KnownRegArgsCpuCall<0x802DEC7Cu>(&func_802DEC7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802DEC7C_35DB = func_802DEC7C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DEC7C_35DB);
        r4 = static_cast<uint32_t>(regargs_result_802DEC7C_35DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802DEC7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A08F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A08F4:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802A0900:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A0938;
    }
}

loc_802A0904:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_802A0910:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(36))) {
        goto loc_802A0920;
    }
}

loc_802A0914:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802A091C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A14B0;
    }
}

loc_802A0920:
{
    r3 = MemoryInline::FlatRead32((r31 + 400));
}

loc_802A0928:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0938;
    }
}

loc_802A092C:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_802A0934:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(43))) {
        goto loc_802A14B0;
    }
}

loc_802A0938:
{
    r3 = r31;
    ctx->lr = 0x802A0940u;
    if constexpr (KnownRegArgsCpuCall<0x802A16B8u>(&func_802A16B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A16B8_4226 = func_802A16B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A16B8_4226);
        r4 = static_cast<uint32_t>(regargs_result_802A16B8_4226 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A16B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl8_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl8_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl8_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x802DE508:
{
    r3 = 1;
    goto loc_inl8_cont_802DE4E4;
}

loc_inl8_return:
{
}

loc_inl8_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_802A0948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0954;
    }
}

loc_802A094C:
{
    r3 = r31;
    // inline leaf 0x802A175C (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A175C
}

loc_802A0954:
{
    r0 = MemoryInline::FlatRead8((r31 + 813));
}

loc_802A095C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A0C;
    }
}

loc_802A0960:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A0968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0980;
    }
}

loc_802A096C:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2240), static_cast<uint8_t>(r0));
    goto loc_802A0990;
}

loc_802A0980:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2240), static_cast<uint8_t>(r0));
}

loc_802A0990:
{
    ctx->lr = 0x802A0994u;
    if constexpr (KnownRegArgsCpuCall<0x800408D8u>(&func_800408D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800408D8_4D8D = func_800408D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800408D8_4D8D);
        r4 = static_cast<uint32_t>(regargs_result_800408D8_4D8D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800408D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A0998:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A0A0C;
    }
}

loc_802A099C:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A09A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A09E0;
    }
}

loc_802A09A8:
{
    r3 = 0;
    ctx->lr = 0x802A09B0u;
    if constexpr (KnownRegArgsCpuCall<0x8029F898u>(&func_8029F898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8029F898_5677 = func_8029F898_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029F898_5677);
        r4 = static_cast<uint32_t>(regargs_result_8029F898_5677 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029F898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A09B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A09C8;
    }
}

loc_802A09BC:
{
    r3 = 2;
    ctx->lr = 0x802A09C4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_5EF6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_5EF6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_5EF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A0A0C;
}

loc_802A09C8:
{
    r3 = 2;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r3));
    goto loc_802A0A0C;
}

loc_802A09E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_802A09E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A0C;
    }
}

loc_802A09EC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802A09F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802A0A0C;
    }
}

loc_802A09F8:
{
    r3 = 2;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r3));
}

loc_802A0A0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 1024);
}

loc_802A0A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0A90;
    }
}

loc_802A0A1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 813));
}

loc_802A0A24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A90;
    }
}

loc_802A0A28:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A0A30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A54;
    }
}

loc_802A0A34:
{
    r3 = 1;
    ctx->lr = 0x802A0A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029F898u>(&func_8029F898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8029F898_6CDB = func_8029F898_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029F898_6CDB);
        r4 = static_cast<uint32_t>(regargs_result_8029F898_6CDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029F898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A0A44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A90;
    }
}

loc_802A0A48:
{
    r3 = 2;
    ctx->lr = 0x802A0A50u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_755A = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_755A);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_755A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A0A90;
}

loc_802A0A54:
{
    r0 = MemoryInline::FlatRead8((r31 + 19));
}

loc_802A0A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A90;
    }
}

loc_802A0A60:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_802A0A68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0A90;
    }
}

loc_802A0A6C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802A0A74:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802A0A90;
    }
}

loc_802A0A78:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x802A0A90u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_8029 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_8029);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_8029 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A0A90:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A0A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A150C;
    }
}

loc_802A0A9C:
{
    r3 = MemoryInline::FlatRead8((r31 + 19));
}

loc_802A0AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0AB0;
    }
}

loc_802A0AA8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r31 + 19), static_cast<uint8_t>(r0));
}

loc_802A0AB0:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 & 15);
    r0 = (r3 | r0);
    r30 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_802A0ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0AE4;
    }
}

loc_802A0AD0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802A0AD8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802A0AE4;
    }
}

loc_802A0ADC:
{
    // inline leaf 0x802DE288 (5 guest instruction(s))
    r0 = 1;
    r3 = 0x806C0000u;
    r3 = (r3 + -376);
    MemoryInline::FlatWriteRam8((r3 + 37), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE288
    goto loc_802A0AE8;
}

loc_802A0AE4:
{
    // inline leaf 0x802DE29C (5 guest instruction(s))
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + -376);
    MemoryInline::FlatWriteRam8((r3 + 37), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE29C
}

loc_802A0AE8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802A0AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0B10;
    }
}

loc_802A0AF4:
{
}

loc_802A0AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A11AC;
    }
}

loc_802A0AFC:
{
}

loc_802A0B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A1228;
    }
}

loc_802A0B04:
{
}

loc_802A0B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802A137C;
    }
}

loc_802A0B0C:
{
    goto loc_802A14B0;
}

loc_802A0B10:
{
    r0 = MemoryInline::FlatRead8((r31 + 21));
}

loc_802A0B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0B30;
    }
}

loc_802A0B1C:
{
}

loc_802A0B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A0FC4;
    }
}

loc_802A0B24:
{
}

loc_802A0B28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A100C;
    }
}

loc_802A0B2C:
{
    goto loc_802A14B0;
}

loc_802A0B30:
{
    ctx->lr = 0x802A0B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8029FD60u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 27));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x802A0060u>(&func_802A0060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_802A0060_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A0060u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = (r30 & 32);
}

loc_802A0B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0B78;
    }
}

loc_802A0B50:
{
    r0 = MemoryInline::FlatRead8((r31 + 19));
}

loc_802A0B58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A0B5C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x802A0B74u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_9BBD = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_9BBD);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_9BBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A0B78:
{
    r0 = (r30 & 16);
}

loc_802A0B80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0ED4;
    }
}

loc_802A0B84:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r5 * 24);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A0BA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0EC8;
    }
}

loc_802A0BA4:
{
    r0 = MemoryInline::FlatRead8((r31 + 27));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * 24);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A0BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0EC8;
    }
}

loc_802A0BC4:
{
}

loc_802A0BC8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802A0BE0;
    }
}

loc_802A0BCC:
{
}

loc_802A0BD0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_802A0D1C;
    }
}

loc_802A0BD4:
{
}

loc_802A0BD8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_802A0DD0;
    }
}

loc_802A0BDC:
{
    goto loc_802A14B0;
}

loc_802A0BE0:
{
}

loc_802A0BE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802A0C14;
    }
}

loc_802A0BE8:
{
}

loc_802A0BEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802A0C28;
    }
}

loc_802A0BF0:
{
}

loc_802A0BF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802A0C6C;
    }
}

loc_802A0BF8:
{
}

loc_802A0BFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802A0C8C;
    }
}

loc_802A0C00:
{
}

loc_802A0C04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802A0CA8;
    }
}

loc_802A0C08:
{
}

loc_802A0C0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_802A0CBC;
    }
}

loc_802A0C10:
{
    goto loc_802A0D00;
}

loc_802A0C14:
{
    r3 = r31;
    ctx->lr = 0x802A0C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A4D5Cu>(&func_802A4D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802A4D5C_ACB1 = func_802A4D5C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_802A4D5C_ACB1);
        r4 = static_cast<uint32_t>(regargs_result_802A4D5C_ACB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A4D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0D00;
}

loc_802A0C28:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r31 + 488), static_cast<uint16_t>(r0));
    r3 = 0;
    r4 = (r31 + 488);
    ctx->lr = 0x802A0C40u;
    if constexpr (KnownRegArgsCpuCall<0x802DE5DCu>(&func_802DE5DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DE5DC_B1DA = func_802DE5DC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802DE5DC_B1DA);
        r4 = static_cast<uint32_t>(regargs_result_802DE5DC_B1DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DE5DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802A0C48:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802A0D00;
    }
}

loc_802A0C4C:
{
    r3 = r31;
    ctx->lr = 0x802A0C54u;
    if constexpr (KnownRegArgsCpuCall<0x8031A5F0u>(&func_8031A5F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8031A5F0_B5F0 = func_8031A5F0_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8031A5F0_B5F0);
        r4 = static_cast<uint32_t>(regargs_result_8031A5F0_B5F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031A5F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A0D00;
}

loc_802A0C6C:
{
    r3 = r31;
    ctx->lr = 0x802A0C74u;
    if constexpr (KnownRegArgsCpuCall<0x8031B734u>(&func_8031B734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8031B734_BBC8 = func_8031B734_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8031B734_BBC8);
        r4 = static_cast<uint32_t>(regargs_result_8031B734_BBC8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A0D00;
}

loc_802A0C8C:
{
    r3 = r31;
    // inline leaf 0x80348AAC (12 guest instruction(s))
    r0 = 3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 572u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 20), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 26), static_cast<uint8_t>(r4));
    r0 = 30;
    MemoryInline::WriteResolved8(guest_range_0, 569u, (r3 + 570), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 571u, (r3 + 572), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80348AAC
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 25;
    ctx->lr = 0x802A0CA4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_C60C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_C60C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_C60C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A0D00;
}

loc_802A0CA8:
{
    r3 = r31;
    ctx->lr = 0x802A0CB0u;
    if constexpr (KnownRegArgsCpuCall<0x804465B0u>(&func_804465B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804465B0_CD75 = func_804465B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804465B0_CD75);
        r4 = static_cast<uint32_t>(regargs_result_804465B0_CD75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804465B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0D00;
}

loc_802A0CBC:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_802A0CC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802A0CDC;
    }
}

loc_802A0CC8:
{
    r3 = r31;
    // inline leaf 0x802A4480 (5 guest instruction(s))
    r0 = 5;
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam32((r3 + 396), r0);
    // end of inlined leaf 0x802A4480
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0D00;
}

loc_802A0CDC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802A0D00u;
    if constexpr (KnownRegArgsCpuCall<0x8029FB64u>(&func_8029FB64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8029FB64_D4F8 = func_8029FB64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029FB64_D4F8);
        r4 = static_cast<uint32_t>(regargs_result_8029FB64_D4F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8029FB64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_802A0D00:
{
    r0 = MemoryInline::FlatRead8((r31 + 27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A0D0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802A14B0;
    }
}

loc_802A0D10:
{
    r3 = 0;
    ctx->lr = 0x802A0D18u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_DAD0 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_DAD0);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_DAD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A0D1C:
{
}

loc_802A0D20:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802A0D50;
    }
}

loc_802A0D24:
{
}

loc_802A0D28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802A0D64;
    }
}

loc_802A0D2C:
{
}

loc_802A0D30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802A0D78;
    }
}

loc_802A0D34:
{
}

loc_802A0D38:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802A0D8C;
    }
}

loc_802A0D3C:
{
}

loc_802A0D40:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802A0DA0;
    }
}

loc_802A0D44:
{
}

loc_802A0D48:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_802A0DB4;
    }
}

loc_802A0D4C:
{
    goto loc_802A0DC4;
}

loc_802A0D50:
{
    r3 = r31;
    ctx->lr = 0x802A0D58u;
    if constexpr (KnownRegArgsCpuCall<0x8036CB68u>(&func_8036CB68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8036CB68_E5DA = func_8036CB68_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8036CB68_E5DA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8036CB68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0DC4;
}

loc_802A0D64:
{
    r3 = r31;
    ctx->lr = 0x802A0D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80308F24u>(&func_80308F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80308F24_E939 = func_80308F24_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_80308F24_E939);
        r4 = static_cast<uint32_t>(regargs_result_80308F24_E939 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80308F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0DC4;
}

loc_802A0D78:
{
    r3 = r31;
    // inline leaf 0x8030BB30 (10 guest instruction(s))
    r0 = 8;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 420u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 28), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 416u, (r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 417u, (r3 + 417), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 418u, (r3 + 418), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 419u, (r3 + 419), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 414u, (r3 + 414), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8030BB30
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31, static_cast<uint8_t>(r0));
    goto loc_802A0DC4;
}

loc_802A0D8C:
{
    r3 = r31;
    // inline leaf 0x804323F4 (16 guest instruction(s))
}

loc_inl15_0x804323F4:
{
    r5 = 12;
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 417), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 418), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 414), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r4 + 16634));
}

loc_inl15_0x8043241C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl15_0x8043242C;
    }
}

loc_inl15_0x80432420:
{
    r0 = 24;
    MemoryInline::FlatWriteRam8((r3 + 419), static_cast<uint8_t>(r0));
    goto loc_inl15_cont_804323F4;
}

loc_inl15_0x8043242C:
{
    MemoryInline::FlatWriteRam8((r3 + 419), static_cast<uint8_t>(r5));
}

loc_inl15_cont_804323F4:
{
    // end of inlined leaf 0x804323F4
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0DC4;
}

loc_802A0DA0:
{
    r3 = r31;
    // inline leaf 0x804327AC (3 guest instruction(s))
    r0 = 13;
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x804327AC
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0DC4;
}

loc_802A0DB4:
{
    r3 = r31;
    ctx->lr = 0x802A0DBCu;
    if constexpr (KnownRegArgsCpuCall<0x8043843Cu>(&func_8043843C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_8043843C_F854 = func_8043843C_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8043843C_F854);
        r4 = static_cast<uint32_t>(regargs_result_8043843C_F854 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8043843Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
}

loc_802A0DC4:
{
    r3 = 0;
    ctx->lr = 0x802A0DCCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_FD79 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_FD79);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_FD79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A0DD0:
{
}

loc_802A0DD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802A0E04;
    }
}

loc_802A0DD8:
{
}

loc_802A0DDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802A0E20;
    }
}

loc_802A0DE0:
{
}

loc_802A0DE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802A0E40;
    }
}

loc_802A0DE8:
{
}

loc_802A0DEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802A0E64;
    }
}

loc_802A0DF0:
{
}

loc_802A0DF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802A0E88;
    }
}

loc_802A0DF8:
{
}

loc_802A0DFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_802A0E9C;
    }
}

loc_802A0E00:
{
    goto loc_802A0EBC;
}

loc_802A0E04:
{
    r3 = r31;
    ctx->lr = 0x802A0E0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8036C244u>(&func_8036C244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8036C244_108D2 = func_8036C244_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8036C244_108D2);
        r4 = static_cast<uint32_t>(regargs_result_8036C244_108D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8036C244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A0EBC;
}

loc_802A0E20:
{
    r3 = r31;
    r4 = 25;
    ctx->lr = 0x802A0E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8038443Cu>(&func_8038443C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8038443C_10FB8 = func_8038443C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8038443C_10FB8);
        r4 = static_cast<uint32_t>(regargs_result_8038443C_10FB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8038443Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A0EBC;
}

loc_802A0E40:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802A0E60u;
    if constexpr (KnownRegArgsCpuCall<0x8029FB64u>(&func_8029FB64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8029FB64_11598 = func_8029FB64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029FB64_11598);
        r4 = static_cast<uint32_t>(regargs_result_8029FB64_11598 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8029FB64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A0EBC;
}

loc_802A0E64:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802A0E84u;
    if constexpr (KnownRegArgsCpuCall<0x8029FB64u>(&func_8029FB64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8029FB64_11B7C = func_8029FB64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029FB64_11B7C);
        r4 = static_cast<uint32_t>(regargs_result_8029FB64_11B7C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8029FB64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A0EBC;
}

loc_802A0E88:
{
    r3 = r31;
    ctx->lr = 0x802A0E90u;
    if constexpr (KnownRegArgsCpuCall<0x8043611Cu>(&func_8043611C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        const auto regargs_result_8043611C_1200A = func_8043611C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8043611C_1200A);
        r4 = static_cast<uint32_t>(regargs_result_8043611C_1200A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8043611Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_802A0EBC;
}

loc_802A0E9C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802A0EBCu;
    if constexpr (KnownRegArgsCpuCall<0x8029FB64u>(&func_8029FB64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8029FB64_1263C = func_8029FB64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029FB64_1263C);
        r4 = static_cast<uint32_t>(regargs_result_8029FB64_1263C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8029FB64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_802A0EBC:
{
    r3 = 0;
    ctx->lr = 0x802A0EC4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_12B1A = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_12B1A);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_12B1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A0EC8:
{
    r3 = 2;
    ctx->lr = 0x802A0ED0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_13309 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_13309);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_13309 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A0ED4:
{
    r3 = MemoryInline::FlatRead8((r31 + 570));
}

loc_802A0EDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0EE8;
    }
}

loc_802A0EE0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
}

loc_802A0EE8:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x802A0EF4u;
    if constexpr (KnownRegArgsCpuCall<0x802A1524u>(&func_802A1524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802A1524_13C0B = func_802A1524_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A1524_13C0B);
        r4 = static_cast<uint32_t>(regargs_result_802A1524_13C0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A1524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A0EF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0F08;
    }
}

loc_802A0EFC:
{
}

loc_802A0F00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_802A0FAC;
    }
}

loc_802A0F04:
{
    goto loc_802A14B0;
}

loc_802A0F08:
{
    r0 = (r30 & 12);
}

loc_802A0F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A0F64;
    }
}

loc_802A0F14:
{
    r3 = MemoryInline::FlatRead8((r31 + 25));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = r30;
    r6 = 4;
    r7 = 8;
    r8 = 6;
    ctx->lr = 0x802A0F38u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F3Cu>(&func_802A8F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802A8F3C_146D2 = func_802A8F3C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F3C_146D2);
        r4 = static_cast<uint32_t>(regargs_result_802A8F3C_146D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A8F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 25), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r0 & 255);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x802A0F50u;
    if constexpr (KnownRegArgsCpuCall<0x802A001Cu>(&func_802A001C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802A001C_14F19 = func_802A001C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A001C_14F19);
        r4 = static_cast<uint32_t>(regargs_result_802A001C_14F19 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A001Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 27));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x802A0060u>(&func_802A0060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_802A0060_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A0060u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A14B0;
}

loc_802A0F64:
{
    r0 = (r30 & 3);
}

loc_802A0F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A0F70:
{
    r3 = MemoryInline::FlatRead8((r31 + 27));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead8((r31 + 23));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = r30;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x802A0F90u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802A8F60_15949 = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_15949);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_15949 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A8F60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 27), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r0 & 255);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x802A0060u>(&func_802A0060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        func_802A0060_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A0060u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A14B0;
}

loc_802A0FAC:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A0FC4:
{
    r3 = 30;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x8029F810
    ctx->lr = 0x802A0FD0u;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_802E0CE4_16754 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_16754);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_16754 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r31 + 570));
}

loc_802A0FDC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802A0FEC;
    }
}

loc_802A0FE0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    goto loc_802A0FFC;
}

loc_802A0FEC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
}

loc_802A0FFC:
{
    r3 = MemoryInline::FlatRead8((r31 + 26));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if constexpr (KnownRegArgsCpuCall<0x802A00A4u>(&func_802A00A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802A00A4_16E36 = func_802A00A4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A00A4_16E36;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A00A4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A14B0;
}

loc_802A100C:
{
    r0 = (r30 & 16);
}

loc_802A1014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A110C;
    }
}

loc_802A1018:
{
    r0 = MemoryInline::FlatRead8((r31 + 26));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 302));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A1034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A1100;
    }
}

loc_802A1038:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 300));
    MemoryInline::FlatWriteRam8((r31 + 20), static_cast<uint8_t>(r0));
    r30 = 1;
    r0 = MemoryInline::FlatRead8((r3 + 300));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -6);
}

loc_802A105C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_802A10EC;
    }
}

loc_802A1060:
{
    r3 = 0x805D0000u;
    r3 = (r3 + -6448);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802A1078u:
        goto loc_802A1078;
        break;
    case 0x802A10ECu:
        goto loc_802A10EC;
        break;
    case 0x802A1090u:
        goto loc_802A1090;
        break;
    case 0x802A109Cu:
        goto loc_802A109C;
        break;
    case 0x802A10A8u:
        goto loc_802A10A8;
        break;
    case 0x802A10B4u:
        goto loc_802A10B4;
        break;
    case 0x802A10C0u:
        goto loc_802A10C0;
        break;
    case 0x802A10CCu:
        goto loc_802A10CC;
        break;
    case 0x802A10E4u:
        goto loc_802A10E4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802A1078:
{
    r3 = r31;
    // inline leaf 0x802A4858 (7 guest instruction(s))
    r0 = 6;
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam32((r3 + 396), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802A4858
    r30 = 0;
    r3 = 5;
    ctx->lr = 0x802A108Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_17E1F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_17E1F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_17E1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A10EC;
}

loc_802A1090:
{
    r3 = r31;
    ctx->lr = 0x802A1098u;
    if constexpr (KnownRegArgsCpuCall<0x8036B680u>(&func_8036B680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8036B680_185A6 = func_8036B680_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8036B680_185A6);
        r4 = static_cast<uint32_t>(regargs_result_8036B680_185A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8036B680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_802A10EC;
}

loc_802A109C:
{
    r3 = r31;
    // inline leaf 0x8036B1E4 (9 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r4 + 16140));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r3 + 28), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 570), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8036B1E4
    goto loc_802A10EC;
}

loc_802A10A8:
{
    r3 = r31;
    ctx->lr = 0x802A10B0u;
    if constexpr (KnownRegArgsCpuCall<0x8036A88Cu>(&func_8036A88C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8036A88C_18BD3 = func_8036A88C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8036A88C_18BD3);
        r4 = static_cast<uint32_t>(regargs_result_8036A88C_18BD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8036A88Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802A10EC;
}

loc_802A10B4:
{
    r3 = r31;
    ctx->lr = 0x802A10BCu;
    if constexpr (KnownRegArgsCpuCall<0x804397FCu>(&func_804397FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_804397FC_18F9B = func_804397FC_ra88_0_8_0(ctx, r3, r7);
        r3 = regargs_result_804397FC_18F9B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804397FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A10EC;
}

loc_802A10C0:
{
    r3 = r31;
    ctx->lr = 0x802A10C8u;
    if constexpr (KnownRegArgsCpuCall<0x80442C08u>(&func_80442C08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80442C08_193F9 = func_80442C08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80442C08_193F9);
        r4 = static_cast<uint32_t>(regargs_result_80442C08_193F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80442C08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A10EC;
}

loc_802A10CC:
{
    r30 = 0;
    r3 = 27;
    ctx->lr = 0x802A10D8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_198FE = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_198FE);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_198FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    ctx->lr = 0x802A10E0u;
    if constexpr (KnownRegArgsCpuCall<0x80443E70u>(&func_80443E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80443E70_1A08A = func_80443E70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80443E70_1A08A);
        r4 = static_cast<uint32_t>(regargs_result_80443E70_1A08A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80443E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A10EC;
}

loc_802A10E4:
{
    r3 = r31;
    ctx->lr = 0x802A10ECu;
    if constexpr (KnownRegArgsCpuCall<0x80443E70u>(&func_80443E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80443E70_1A597 = func_80443E70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80443E70_1A597);
        r4 = static_cast<uint32_t>(regargs_result_80443E70_1A597 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80443E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A10EC:
{
}

loc_802A10F0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_802A14B0;
    }
}

loc_802A10F4:
{
    r3 = 0;
    ctx->lr = 0x802A10FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_1AB56 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1AB56);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1AB56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A1100:
{
    r3 = 2;
    ctx->lr = 0x802A1108u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_1B345 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1B345);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1B345 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A14B0;
}

loc_802A110C:
{
    r0 = (r30 & 32);
}

loc_802A1114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A1134;
    }
}

loc_802A1118:
{
    r3 = 1;
    ctx->lr = 0x802A1120u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_1BBDD = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1BBDD);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1BBDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x802A1124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8029FD60u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A1134:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x802A1140u;
    if constexpr (KnownRegArgsCpuCall<0x802A1524u>(&func_802A1524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802A1524_1C77C = func_802A1524_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A1524_1C77C);
        r4 = static_cast<uint32_t>(regargs_result_802A1524_1C77C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A1524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A1144:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A1154;
    }
}

loc_802A1148:
{
}

loc_802A114C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_802A1198;
    }
}

loc_802A1150:
{
    goto loc_802A14B0;
}

loc_802A1154:
{
    r0 = (r30 & 3);
}

loc_802A115C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A1160:
{
    r3 = MemoryInline::FlatRead8((r31 + 26));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead8((r31 + 24));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = r30;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x802A1180u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802A8F60_1D235 = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_1D235);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_1D235 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A8F60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 26), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if constexpr (KnownRegArgsCpuCall<0x802A00A4u>(&func_802A00A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802A00A4_1DA51 = func_802A00A4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A00A4_1DA51;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A00A4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A14B0;
}

loc_802A1198:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A11AC:
{
    r3 = r31;
    ctx->lr = 0x802A11B4u;
    if constexpr (KnownRegArgsCpuCall<0x802A06B4u>(&func_802A06B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802A06B4_1DF32 = func_802A06B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A06B4_1DF32);
        r4 = static_cast<uint32_t>(regargs_result_802A06B4_1DF32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A06B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (r3 + -1);
}

loc_802A11BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802A11D0;
    }
}

loc_802A11C0:
{
    r0 = (r3 + -3);
}

loc_802A11C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802A1214;
    }
}

loc_802A11CC:
{
    goto loc_802A14B0;
}

loc_802A11D0:
{
    r3 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 21));
}

loc_802A11E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A11E8;
    }
}

loc_802A11E4:
{
    goto loc_802A11F8;
}

loc_802A11E8:
{
    r3 = 30;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x8029F810
    ctx->lr = 0x802A11F4u;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_802E0CE4_1EAF1 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_1EAF1);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_1EAF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = (r3 & 65535);
}

loc_802A11F8:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r31 + 570), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 33), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802A1210u;
    if constexpr (KnownRegArgsCpuCall<0x8029FAD8u>(&func_8029FAD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8029FAD8_1F04E = func_8029FAD8_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8029FAD8_1F04E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8029FAD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_802A14B0;
}

loc_802A1214:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A1228:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_802A1230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A1250;
    }
}

loc_802A1234:
{
}

loc_802A1238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A12BC;
    }
}

loc_802A123C:
{
}

loc_802A1240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A1300;
    }
}

loc_802A1244:
{
}

loc_802A1248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802A1338;
    }
}

loc_802A124C:
{
    goto loc_802A14B0;
}

loc_802A1250:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802A1258:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A12A8;
    }
}

loc_802A125C:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802A1268:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A1278;
    }
}

loc_802A126C:
{
    r0 = 36;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -12348), static_cast<uint8_t>(r0));
}

loc_802A1278:
{
    r3 = 1;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    // inline leaf 0x803843E4 (10 guest instruction(s))
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 7), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803843E4
    r0 = MemoryInline::FlatRead8((r31 + 813));
}

loc_802A128C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A1298;
    }
}

loc_802A1290:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r0));
}

loc_802A1298:
{
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A12A8:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A12BC:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r31 + 813));
}

loc_802A12C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A12D0;
    }
}

loc_802A12CC:
{
    r3 = 129;
}

loc_802A12D0:
{
    ctx->lr = 0x802A12D4u;
    if constexpr (KnownRegArgsCpuCall<0x800407FCu>(&func_800407FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800407FC_202BD = func_800407FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800407FC_202BD);
        r4 = static_cast<uint32_t>(regargs_result_800407FC_202BD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800407FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A12D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A14B0;
    }
}

loc_802A12DC:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    MemoryInline::FlatWriteRam8((r3 + 813), static_cast<uint8_t>(r0));
    ctx->lr = 0x802A12F0u;
    if constexpr (KnownRegArgsCpuCall<0x80384388u>(&func_80384388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        const auto regargs_result_80384388_20B10 = func_80384388_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80384388_20B10);
        r4 = static_cast<uint32_t>(regargs_result_80384388_20B10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80384388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A1300:
{
    ctx->lr = 0x802A1304u;
    if constexpr (KnownRegArgsCpuCall<0x800407D4u>(&func_800407D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800407D4_20FEE = func_800407D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800407D4_20FEE);
        r4 = static_cast<uint32_t>(regargs_result_800407D4_20FEE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800407D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A1308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_802A1314;
    }
}

loc_802A130C:
{
}

loc_802A1310:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_802A14B0;
    }
}

loc_802A1314:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    MemoryInline::FlatWriteRam8((r3 + 813), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWriteRam8((r31 + 19), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A1338:
{
    r0 = MemoryInline::FlatRead8((r31 + 19));
}

loc_802A1340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A1344:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802A1350:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A1360;
    }
}

loc_802A1354:
{
    r0 = 0;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -12348), static_cast<uint8_t>(r0));
}

loc_802A1360:
{
    r3 = 0;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    r0 = 3;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A137C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_802A1384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A139C;
    }
}

loc_802A1388:
{
}

loc_802A138C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A1410;
    }
}

loc_802A1390:
{
}

loc_802A1394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A147C;
    }
}

loc_802A1398:
{
    goto loc_802A14B0;
}

loc_802A139C:
{
    ctx->lr = 0x802A13A0u;
    if constexpr (KnownRegArgsCpuCall<0x802A02C0u>(&func_802A02C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802A02C0_2203D = func_802A02C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A02C0_2203D);
        r4 = static_cast<uint32_t>(regargs_result_802A02C0_2203D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A02C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A13A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A13F4;
    }
}

loc_802A13A8:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802A13B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A13DC;
    }
}

loc_802A13B4:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_802A13BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A13DC;
    }
}

loc_802A13C0:
{
    r3 = 1;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    // inline leaf 0x802DE29C (5 guest instruction(s))
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + -376);
    MemoryInline::FlatWriteRam8((r3 + 37), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE29C
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A13DC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A13F4:
{
    r3 = 1;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    // inline leaf 0x802DE29C (5 guest instruction(s))
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + -376);
    MemoryInline::FlatWriteRam8((r3 + 37), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE29C
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A1410:
{
    r3 = 0x806B0000u;
    r30 = (r3 + -4792);
    r0 = MemoryInline::FlatRead8((r30 + 798));
}

loc_802A1420:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A143C;
    }
}

loc_802A1424:
{
    r3 = 27;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl33_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl33_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl33_0x803BECF4;
    }
}

loc_inl33_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (r0 ^ 1);
    goto loc_inl33_cont_803BECD4;
}

loc_inl33_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl33_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 799));
}

loc_802A1438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_802A145C;
    }
}

loc_802A143C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r3 = (r3 + 5781);
    ctx->lr = 0x802A144Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042CFD0u>(&func_8042CFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8042CFD0_237A9 = func_8042CFD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042CFD0_237A9);
        r4 = static_cast<uint32_t>(regargs_result_8042CFD0_237A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042CFD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A145C:
{
    r3 = 0;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802A14B0;
}

loc_802A147C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r0 = MemoryInline::FlatRead8((r3 + 5781));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A1490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A14B0;
    }
}

loc_802A1494:
{
    r3 = 0;
    // inline leaf 0x802A05A0 (4 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x802A05A0
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 813), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_802A14B0:
{
    // inline leaf 0x8033A8B4 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = MemoryInline::FlatRead8((r3 + 5024));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8033A8B4
}

loc_802A14B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802A150C;
    }
}

loc_802A14BC:
{
    r3 = 0;
    // inline leaf 0x802DE6D4 (10 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -296);
    r0 = (r3 & 255);
    r0 = (r0 * 304);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x802DE6D4
}

loc_802A14C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A14E8;
    }
}

loc_802A14CC:
{
    r3 = 6;
    r4 = 0x802E0000u;
    r4 = (r4 + -3848);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800490D4_249B3 = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_249B3);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_249B3 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_802A150C;
}

loc_802A14E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_802A14F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A150C;
    }
}

loc_802A14F4:
{
    r3 = 6;
    r4 = 0x802A0000u;
    r4 = (r4 + 6008);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800490D4_24F76 = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_24F76);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_24F76 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_802A150C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A0804(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A0804_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A0804 func_802A0804 preserves=true fpr_mask=0x00000000
