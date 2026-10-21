#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D50D0(CpuContext* ctx);
extern "C" uint32_t func_800D50D0_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F77DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    ctx->gpr[5] = arg_r5;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    MKW_GUEST_ENTER(0x800F77DCu);
    goto loc_800F77DC;

loc_800F77DC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r4 = 0x806A0000u;
    r4 = (r4 + 20916);
    r0 = (r3 & 255);
    r0 = (r0 * 24);
    r31 = (r4 + r0);
    r3 = 0x806A0000u;
    r30 = (r3 + 17776);
    r29 = 0;
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r26 = r3;
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_800F7824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7830;
    }
}

loc_800F7828:
{
    r3 = 0;
    goto loc_800F7AF0;
}

loc_800F7830:
{
}

loc_800F7834:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F7AA4;
    }
}

loc_800F7838:
{
    r3 = MemoryInline::FlatRead8((r31 + 9));
    r0 = (r3 + -238);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r28 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_800F7854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F786C;
    }
}

loc_800F7858:
{
}

loc_800F785C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F7934;
    }
}

loc_800F7860:
{
}

loc_800F7864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800F79FC;
    }
}

loc_800F7868:
{
    goto loc_800F7AA4;
}

loc_800F786C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
}

loc_800F7874:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F78D4;
    }
}

loc_800F7878:
{
    // inline leaf 0x800D58C8 (19 guest instruction(s))
}

loc_inl2_0x800D58C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 24760));
}

loc_inl2_0x800D58E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_inl2_0x800D58F4;
    }
}

loc_inl2_0x800D58E4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 24760), r0);
    r3 = -1;
    goto loc_inl2_cont_800D58C8;
}

loc_inl2_0x800D58F4:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    r3 = 0;
}

loc_inl2_cont_800D58C8:
{
    // end of inlined leaf 0x800D58C8
}

loc_800F7880:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F78D4;
    }
}

loc_800F7884:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
}

loc_800F788C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F7898;
    }
}

loc_800F7890:
{
    r3 = r26;
    ctx->lr = 0x800F7898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800B4724u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_800F7898:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_800F78A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800F78D0;
    }
}

loc_800F78A4:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 60));
}

loc_800F78B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_800F78D0;
    }
}

loc_800F78BC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 60), r0);
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 48), r0);
}

loc_800F78D0:
{
    r29 = 1;
}

loc_800F78D4:
{
}

loc_800F78D8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800F7910;
    }
}

loc_800F78DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
}

loc_800F78E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F791C;
    }
}

loc_800F78E8:
{
    // inline leaf 0x800D519C (13 guest instruction(s))
}

loc_inl3_0x800D519C:
{
}

loc_inl3_0x800D51A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl3_0x800D51AC;
    }
}

loc_inl3_0x800D51A4:
{
    r3 = 0;
    goto loc_inl3_cont_800D519C;
}

loc_inl3_0x800D51AC:
{
}

loc_inl3_0x800D51B0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl3_0x800D51BC;
    }
}

loc_inl3_0x800D51B4:
{
    r3 = 0;
    goto loc_inl3_cont_800D519C;
}

loc_inl3_0x800D51BC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12404));
}

loc_inl3_cont_800D519C:
{
    // end of inlined leaf 0x800D519C
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->lr = 0x800F78F8u;
    if constexpr (KnownRegArgsCpuCall<0x800D50D0u>(&func_800D50D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800D50D0_1F55 = func_800D50D0_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800D50D0_1F55;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D50D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800F78FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F791C;
    }
}

loc_800F7900:
{
    r0 = MemoryInline::FlatRead32((r30 + 3132));
    r0 = (r0 - r28);
    MemoryInline::FlatWriteRam32((r30 + 3132), r0);
    goto loc_800F791C;
}

loc_800F7910:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 48), r0);
}

loc_800F791C:
{
    r3 = 0x806A0000u;
    r4 = (r3 + 20916);
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 2), static_cast<uint8_t>(r0));
    goto loc_800F7AA4;
}

loc_800F7934:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
}

loc_800F793C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F799C;
    }
}

loc_800F7940:
{
    // inline leaf 0x800D58C8 (19 guest instruction(s))
}

loc_inl4_0x800D58C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 24760));
}

loc_inl4_0x800D58E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_inl4_0x800D58F4;
    }
}

loc_inl4_0x800D58E4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 24760), r0);
    r3 = -1;
    goto loc_inl4_cont_800D58C8;
}

loc_inl4_0x800D58F4:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    r3 = 0;
}

loc_inl4_cont_800D58C8:
{
    // end of inlined leaf 0x800D58C8
}

loc_800F7948:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F799C;
    }
}

loc_800F794C:
{
    r4 = MemoryInline::FlatRead32((r31 + 24));
}

loc_800F7954:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F7960;
    }
}

loc_800F7958:
{
    r3 = r26;
    ctx->lr = 0x800F7960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800B48FCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_800F7960:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_800F7968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800F7998;
    }
}

loc_800F796C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 1084));
}

loc_800F7980:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_800F7998;
    }
}

loc_800F7984:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 1084), r0);
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_800F7998:
{
    r29 = 1;
}

loc_800F799C:
{
}

loc_800F79A0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800F79D8;
    }
}

loc_800F79A4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
}

loc_800F79AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F79E4;
    }
}

loc_800F79B0:
{
    // inline leaf 0x800D519C (13 guest instruction(s))
}

loc_inl5_0x800D519C:
{
}

loc_inl5_0x800D51A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl5_0x800D51AC;
    }
}

loc_inl5_0x800D51A4:
{
    r3 = 0;
    goto loc_inl5_cont_800D519C;
}

loc_inl5_0x800D51AC:
{
}

loc_inl5_0x800D51B0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl5_0x800D51BC;
    }
}

loc_inl5_0x800D51B4:
{
    r3 = 0;
    goto loc_inl5_cont_800D519C;
}

loc_inl5_0x800D51BC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12404));
}

loc_inl5_cont_800D519C:
{
    // end of inlined leaf 0x800D519C
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->lr = 0x800F79C0u;
    if constexpr (KnownRegArgsCpuCall<0x800D50D0u>(&func_800D50D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800D50D0_38FD = func_800D50D0_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800D50D0_38FD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D50D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800F79C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F79E4;
    }
}

loc_800F79C8:
{
    r0 = MemoryInline::FlatRead32((r30 + 3132));
    r0 = (r0 - r28);
    MemoryInline::FlatWriteRam32((r30 + 3132), r0);
    goto loc_800F79E4;
}

loc_800F79D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_800F79E4:
{
    r3 = 0x806A0000u;
    r4 = (r3 + 20916);
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 3), static_cast<uint8_t>(r0));
    goto loc_800F7AA4;
}

loc_800F79FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
}

loc_800F7A04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F7A48;
    }
}

loc_800F7A08:
{
    // inline leaf 0x800D5914 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    // end of inlined leaf 0x800D5914
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_800F7A14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800F7A44;
    }
}

loc_800F7A18:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 2108));
}

loc_800F7A2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_800F7A44;
    }
}

loc_800F7A30:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 2108), r0);
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 56), r0);
}

loc_800F7A44:
{
    r29 = 1;
}

loc_800F7A48:
{
}

loc_800F7A4C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800F7A84;
    }
}

loc_800F7A50:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
}

loc_800F7A58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F7A90;
    }
}

loc_800F7A5C:
{
    // inline leaf 0x800D519C (13 guest instruction(s))
}

loc_inl7_0x800D519C:
{
}

loc_inl7_0x800D51A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl7_0x800D51AC;
    }
}

loc_inl7_0x800D51A4:
{
    r3 = 0;
    goto loc_inl7_cont_800D519C;
}

loc_inl7_0x800D51AC:
{
}

loc_inl7_0x800D51B0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl7_0x800D51BC;
    }
}

loc_inl7_0x800D51B4:
{
    r3 = 0;
    goto loc_inl7_cont_800D519C;
}

loc_inl7_0x800D51BC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12404));
}

loc_inl7_cont_800D519C:
{
    // end of inlined leaf 0x800D519C
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->lr = 0x800F7A6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D50D0u>(&func_800D50D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800D50D0_4D0F = func_800D50D0_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800D50D0_4D0F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D50D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800F7A70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7A90;
    }
}

loc_800F7A74:
{
    r0 = MemoryInline::FlatRead32((r30 + 3132));
    r0 = (r0 - r28);
    MemoryInline::FlatWriteRam32((r30 + 3132), r0);
    goto loc_800F7A90;
}

loc_800F7A84:
{
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r30 + 56), r0);
}

loc_800F7A90:
{
    r3 = 0x806A0000u;
    r4 = (r3 + 20916);
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 1), static_cast<uint8_t>(r0));
}

loc_800F7AA4:
{
    r3 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 4), static_cast<uint8_t>(r3));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 7), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 9), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 10), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 24), r3);
    }
    r4 = 0x806A0000u;
    r3 = MemoryInline::FlatRead8((r4 + 20916));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 20916), static_cast<uint8_t>(r0));
    r3 = r29;
}

loc_800F7AF0:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F77DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F77DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F77DC func_800F77DC preserves=true fpr_mask=0x00000000
