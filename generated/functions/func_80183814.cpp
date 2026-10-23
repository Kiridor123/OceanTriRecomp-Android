#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012E6C8(CpuContext* ctx);
extern "C" uint32_t func_8012E6C8_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80130790(CpuContext* ctx);
extern "C" void func_80130790_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80135B28(CpuContext* ctx);
extern "C" uint64_t func_80135B28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80182FC4(CpuContext* ctx);
extern "C" uint32_t func_80182FC4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80183814_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80183A98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80183814;

loc_80183814:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    ctx->lr = 0x80183838u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8012D090_DEB = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_DEB);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_DEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8018383C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80183A94;
    }
}

loc_80183840:
{
    r0 = MemoryInline::FlatRead8((r29 + 482));
}

loc_80183848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80183870;
    }
}

loc_8018384C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_80183854:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80183870;
    }
}

loc_80183858:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl1_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl1_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801307B0;
    }
}

loc_inl1_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl1_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80130790;
}

loc_inl1_return:
{
}

loc_inl1_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 2100), static_cast<uint8_t>(r0));
}

loc_80183870:
{
    r0 = MemoryInline::FlatRead8((r29 + 2100));
}

loc_80183878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8018388C;
    }
}

loc_8018387C:
{
    r3 = r29;
    // inline leaf 0x80133860 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2066));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80133860
}

loc_80183888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801838B4;
    }
}

loc_8018388C:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl3_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl3_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x801307B0;
    }
}

loc_inl3_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl3_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_80130790;
}

loc_inl3_return:
{
}

loc_inl3_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r29;
    ctx->lr = 0x801838A4u;
    if constexpr (KnownRegArgsCpuCall<0x80182FC4u>(&func_80182FC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80182FC4_1ECA = func_80182FC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80182FC4_1ECA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80182FC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801838A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801838B4;
    }
}

loc_801838AC:
{
    r3 = r29;
    ctx->lr = 0x801838B4u;
    if constexpr (KnownRegArgsCpuCall<0x8012E6C8u>(&func_8012E6C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8012E6C8_22A1 = func_8012E6C8_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_8012E6C8_22A1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012E6C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801838B4:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_801838BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80183A94;
    }
}

loc_801838C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_801838C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80183A94;
    }
}

loc_801838CC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r0 & 31);
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_801838E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80183A38;
    }
}

loc_801838E8:
{
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl4_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB50;
    }
}

loc_inl4_0x800CFB48:
{
    r3 = 0;
    goto loc_inl4_cont_800CFB34;
}

loc_inl4_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB64;
    }
}

loc_inl4_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFB34;
}

loc_inl4_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl4_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r28 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl5_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB10;
    }
}

loc_inl5_0x800CFB08:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB24;
    }
}

loc_inl5_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl5_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r31 = 0;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 809), static_cast<uint8_t>(r0));
    r27 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -23524));
    r28 = (r28 & 65535);
    goto loc_80183A14;
}

loc_8018391C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80183924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80183A0C;
    }
}

loc_80183928:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 1);
}

loc_80183934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80183A0C;
    }
}

loc_80183938:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80183944:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80183A0C;
    }
}

loc_80183948:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_80183950:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_801839A0;
    }
}

loc_80183954:
{
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_8018395C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8018396C;
    }
}

loc_80183960:
{
}

loc_80183964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80183974;
    }
}

loc_80183968:
{
    goto loc_8018397C;
}

loc_8018396C:
{
    r5 = 0;
    goto loc_80183980;
}

loc_80183974:
{
    r5 = 1;
    goto loc_80183980;
}

loc_8018397C:
{
    r5 = 2;
}

loc_80183980:
{
    r3 = r29;
    r4 = 4;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl6_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl6_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x801307B0;
    }
}

loc_inl6_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl6_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl6_cont_80130790;
}

loc_inl6_return:
{
}

loc_inl6_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = (r29 + 432);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r31 = 1;
    goto loc_80183A20;
}

loc_801839A0:
{
    r3 = r30;
    ctx->lr = 0x801839A8u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80135B28_3F29 = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_3F29);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_3F29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_801839B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80183A0C;
    }
}

loc_801839B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1085));
}

loc_801839BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80183A0C;
    }
}

loc_801839C0:
{
    r31 = 1;
    r3 = (r29 + 392);
    r4 = (r30 + 392);
    ctx->lr = 0x801839D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_801839D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183A0C;
    }
}

loc_801839D8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_801839E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801839F4;
    }
}

loc_801839E4:
{
    r3 = r29;
    r4 = 3;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_801839F4:
{
    r3 = (r29 + 432);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 809), static_cast<uint8_t>(r0));
    goto loc_80183A20;
}

loc_80183A0C:
{
    r27 = (r27 + 1);
    r30 = (r30 + 2840);
}

loc_80183A14:
{
    r0 = (r27 & 255);
}

loc_80183A1C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r28))) {
        goto loc_8018391C;
    }
}

loc_80183A20:
{
}

loc_80183A24:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80183A38;
    }
}

loc_80183A28:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80183A38:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_80183A40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80183A64;
    }
}

loc_80183A44:
{
    r0 = MemoryInline::FlatRead16((r29 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80183A4C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(450))) {
        goto loc_80183A94;
    }
}

loc_80183A50:
{
    r3 = r29;
    r4 = 3;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_80183A94;
}

loc_80183A64:
{
}

loc_80183A68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80183A94;
    }
}

loc_80183A6C:
{
    r0 = MemoryInline::FlatRead8((r29 + 809));
}

loc_80183A74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80183A94;
    }
}

loc_80183A78:
{
    r0 = MemoryInline::FlatRead8((r29 + 808));
}

loc_80183A80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80183A94;
    }
}

loc_80183A84:
{
    r3 = r29;
    r4 = 2;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80183A94:
{
    r0 = 40;
    addr_psqx_80183A98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80183A98_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80183814(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80183814_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80183814 func_80183814 preserves=true fpr_mask=0x00000000
