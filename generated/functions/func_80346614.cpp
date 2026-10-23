#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80344E08(CpuContext* ctx);
extern "C" uint64_t func_80344E08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034530C(CpuContext* ctx);
extern "C" uint64_t func_8034530C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034552C(CpuContext* ctx);
extern "C" uint64_t func_8034552C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803455B0(CpuContext* ctx);
extern "C" uint64_t func_803455B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803459F8(CpuContext* ctx);
extern "C" uint64_t func_803459F8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345FB0(CpuContext* ctx);
extern "C" uint64_t func_80345FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80346538(CpuContext* ctx);
extern "C" uint64_t func_80346538_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80346614_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80346614;

loc_80346614:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r31 = r3;
    r29 = MemoryInline::FlatRead32((r25 + 24));
    r28 = 0;
    r26 = 0;
}

loc_80346654:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80346730;
    }
}

loc_80346658:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r29 + 481));
    r5 = 0;
    ctx->lr = 0x80346668u;
    if constexpr (KnownRegArgsCpuCall<0x80344E08u>(&func_80344E08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80344E08_1804 = func_80344E08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80344E08_1804);
        r4 = static_cast<uint32_t>(regargs_result_80344E08_1804 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x80344E08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r28 = r29;
    r3 = r29;
    ctx->lr = 0x80346674u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8012ED54_2023 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_2023;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_80346678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034669C;
    }
}

loc_8034667C:
{
    r0 = MemoryInline::FlatRead8((r29 + 505));
}

loc_80346684:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8034669C;
    }
}

loc_80346688:
{
    r0 = MemoryInline::FlatRead8((r29 + 1085));
}

loc_80346690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8034669C;
    }
}

loc_80346694:
{
    r27 = 4;
    goto loc_803466D0;
}

loc_8034669C:
{
    r0 = MemoryInline::FlatRead8((r29 + 505));
}

loc_803466A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803466B0;
    }
}

loc_803466A8:
{
    r27 = 5;
    goto loc_803466D0;
}

loc_803466B0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1085));
}

loc_803466B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803466CC;
    }
}

loc_803466BC:
{
    r27 = 1;
    r0 = 0;
    MemoryInline::FlatWrite16((r25 + 32), static_cast<uint16_t>(r0));
    goto loc_803466D0;
}

loc_803466CC:
{
    r27 = 0;
}

loc_803466D0:
{
    r3 = MemoryInline::FlatRead8((r25 + 1));
    r0 = MemoryInline::FlatRead8((r25 + 23));
}

loc_803466DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80346714;
    }
}

loc_803466E0:
{
}

loc_803466E4:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(5))) {
        goto loc_803466F8;
    }
}

loc_803466E8:
{
    r3 = r25;
    ctx->lr = 0x803466F0u;
    if constexpr (KnownRegArgsCpuCall<0x80346538u>(&func_80346538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80346538_2AB3 = func_80346538_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80346538_2AB3);
        r4 = static_cast<uint32_t>(regargs_result_80346538_2AB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80346538u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803466F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80346714;
    }
}

loc_803466F8:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r25 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 24), r0);
    r29 = 0;
    r28 = 0;
    goto loc_80346730;
}

loc_80346714:
{
    r3 = (r25 + 36);
    r4 = (r29 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10052));
    MemoryInline::FlatWriteFloat32((r25 + 48), f0.d);
    r0 = 255;
    MemoryInline::FlatWrite8((r25 + 54), static_cast<uint8_t>(r0));
}

loc_80346730:
{
}

loc_80346734:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80346884;
    }
}

loc_80346738:
{
    r24 = 0;
    r3 = MemoryInline::FlatRead8((r25 + 19));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8034674C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80346774;
    }
}

loc_80346750:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346758:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80346774;
    }
}

loc_8034675C:
{
    r3 = 4;
    r4 = 1;
    // inline leaf 0x802B0B68 (13 guest instruction(s))
    r5 = 16;
    r0 = (r4 & 255);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 10268));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802B0B68
}

loc_8034676C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346774;
    }
}

loc_80346770:
{
    r24 = 1;
}

loc_80346774:
{
    r3 = r25;
    r4 = r24;
    ctx->lr = 0x80346780u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803459F8_37DA = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_37DA);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_37DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r27 = 0;
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 20));
    r5 = 1;
    ctx->lr = 0x80346794u;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80345FB0_3CCA = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_3CCA);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_3CCA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80345FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r3 & 255);
}

loc_8034679C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803467A8;
    }
}

loc_803467A0:
{
    r27 = 2;
    goto loc_80346884;
}

loc_803467A8:
{
    r24 = 0;
    r31 = (r31 & 65535);
    goto loc_80346820;
}

loc_803467B4:
{
    r3 = r30;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl5_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl5_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl5_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D080:
{
    r3 = 0;
    goto loc_inl5_cont_8012D068;
}

loc_inl5_0x8012D088:
{
    r3 = 1;
}

loc_inl5_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_803467C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80346818;
    }
}

loc_803467C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 485));
}

loc_803467CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80346818;
    }
}

loc_803467D0:
{
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 10));
    ctx->lr = 0x803467DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r25);
}

loc_803467E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80346818;
    }
}

loc_803467EC:
{
}

loc_803467F0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_80346818;
    }
}

loc_803467F4:
{
    r3 = MemoryInline::FlatRead8((r25 + 1));
    r0 = MemoryInline::FlatRead8((r30 + 1132));
}

loc_80346800:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80346818;
    }
}

loc_80346804:
{
    r0 = MemoryInline::FlatRead8((r30 + 1085));
}

loc_8034680C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80346818;
    }
}

loc_80346810:
{
    r27 = 1;
    r28 = r30;
}

loc_80346818:
{
    r30 = (r30 + 2840);
    r24 = (r24 + 1);
}

loc_80346820:
{
}

loc_80346824:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r31))) {
        goto loc_803467B4;
    }
}

loc_80346828:
{
    r0 = MemoryInline::FlatRead8((r25 + 5));
}

loc_80346830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80346864;
    }
}

loc_80346834:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_8034683C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80346884;
    }
}

loc_80346840:
{
}

loc_80346844:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_80346884;
    }
}

loc_80346848:
{
    r3 = r25;
    ctx->lr = 0x80346850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x803445C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80346854:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346884;
    }
}

loc_80346858:
{
    r26 = 1;
    r27 = 1;
    goto loc_80346884;
}

loc_80346864:
{
}

loc_80346868:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_80346884;
    }
}

loc_8034686C:
{
    r3 = r25;
    ctx->lr = 0x80346874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x803445C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80346878:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346884;
    }
}

loc_8034687C:
{
    r26 = 1;
    r27 = 1;
}

loc_80346884:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_8034688C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r27))) {
        goto loc_803468A4;
    }
}

loc_80346890:
{
    r3 = r25;
    r4 = r27;
    r5 = r28;
    r6 = r26;
    ctx->lr = 0x803468A4u;
    if constexpr (KnownRegArgsCpuCall<0x8034530Cu>(&func_8034530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_8034530C_5A64 = func_8034530C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034530C_5A64);
        r4 = static_cast<uint32_t>(regargs_result_8034530C_5A64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x8034530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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

loc_803468A4:
{
    r3 = MemoryInline::FlatRead8((r25 + 8));
    r0 = (r3 + -4);
}

loc_803468B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803468C0;
    }
}

loc_803468B4:
{
}

loc_803468B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_803468D0;
    }
}

loc_803468BC:
{
    goto loc_80346A24;
}

loc_803468C0:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80346A24;
}

loc_803468D0:
{
}

loc_803468D4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80346954;
    }
}

loc_803468D8:
{
    r0 = MemoryInline::FlatRead16((r25 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803468E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_80346944;
    }
}

loc_803468E4:
{
}

loc_803468E8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80346944;
    }
}

loc_803468EC:
{
    r0 = MemoryInline::FlatRead8((r25 + 5));
}

loc_803468F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80346908;
    }
}

loc_803468F8:
{
    r3 = r25;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80346904:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346928;
    }
}

loc_80346908:
{
    r3 = r25;
    r4 = r28;
    r5 = 4;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80346924u;
    if constexpr (KnownRegArgsCpuCall<0x803455B0u>(&func_803455B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803455B0_6984 = func_803455B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803455B0_6984);
        r4 = static_cast<uint32_t>(regargs_result_803455B0_6984 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x803455B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80346944;
}

loc_80346928:
{
    r3 = r25;
    r4 = r28;
    r5 = 4;
    r6 = 0;
    r7 = 0;
    r8 = 1;
    ctx->lr = 0x80346944u;
    if constexpr (KnownRegArgsCpuCall<0x803455B0u>(&func_803455B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803455B0_7207 = func_803455B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803455B0_7207);
        r4 = static_cast<uint32_t>(regargs_result_803455B0_7207 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x803455B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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

loc_80346944:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80346A24;
}

loc_80346954:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r28 + 896));
    r5 = MemoryInline::FlatRead8((r28 + 897));
    r6 = MemoryInline::FlatRead8((r28 + 898));
    r7 = 0;
    ctx->lr = 0x8034696Cu;
    if constexpr (KnownRegArgsCpuCall<0x8034552Cu>(&func_8034552C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_8034552C_7B94 = func_8034552C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034552C_7B94);
        r4 = static_cast<uint32_t>(regargs_result_8034552C_7B94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x8034552Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead8((r25 + 11));
    r0 = (r3 + -2);
}

loc_80346978:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80346990;
    }
}

loc_8034697C:
{
}

loc_80346980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80346990;
    }
}

loc_80346984:
{
}

loc_80346988:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80346A00;
    }
}

loc_8034698C:
{
    goto loc_80346A24;
}

loc_80346990:
{
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80346998:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803469A8;
    }
}

loc_8034699C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    goto loc_80346A24;
}

loc_803469A8:
{
    r3 = r29;
    // inline leaf 0x8012D8DC (11 guest instruction(s))
}

loc_inl7_0x8012D8DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl7_0x8012D8E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_inl7_0x8012D900;
    }
}

loc_inl7_0x8012D8E8:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -88);
}

loc_inl7_0x8012D8F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_inl7_0x8012D900;
    }
}

loc_inl7_0x8012D8F8:
{
    r3 = 1;
    goto loc_inl7_cont_8012D8DC;
}

loc_inl7_0x8012D900:
{
    r3 = 0;
}

loc_inl7_cont_8012D8DC:
{
    // end of inlined leaf 0x8012D8DC
}

loc_803469B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803469CC;
    }
}

loc_803469B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80346A24;
}

loc_803469CC:
{
    r3 = r29;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_803469D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803469F0;
    }
}

loc_803469DC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80346A24;
}

loc_803469F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80346A24;
}

loc_80346A00:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80346A14:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80346A24;
    }
}

loc_80346A18:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
}

loc_80346A24:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80346614(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80346614_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80346614 func_80346614 preserves=true fpr_mask=0x00000000
