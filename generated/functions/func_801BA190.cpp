#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80128A78(CpuContext* ctx);
extern "C" uint64_t func_80128A78_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012D068(CpuContext* ctx);
extern "C" uint32_t func_8012D068_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012F61C(CpuContext* ctx);
extern "C" uint64_t func_8012F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_801304DC(CpuContext* ctx);
extern "C" uint64_t func_801304DC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8012D068_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8012D068_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_801BA190_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_801BA404_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801BA190;

loc_801BA190:
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
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 5));
}

loc_801BA1B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801BA1C8;
    }
}

loc_801BA1BC:
{
}

loc_801BA1C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_801BA1F0;
    }
}

loc_801BA1C4:
{
    goto loc_801BA400;
}

loc_801BA1C8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r4 = 0;
    ctx->lr = 0x801BA1D8u;
    if constexpr (KnownRegArgsCpuCall<0x801304DCu>(&func_801304DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801304DC_11B7 = func_801304DC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801304DC_11B7);
        r4 = static_cast<uint32_t>(regargs_result_801304DC_11B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801304DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801BA1ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012F61Cu>(&func_8012F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012F61C_16B1 = func_8012F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F61C_16B1);
        r4 = static_cast<uint32_t>(regargs_result_8012F61C_16B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x8012F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801BA400;
}

loc_801BA1F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 814));
}

loc_801BA1F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BA208;
    }
}

loc_801BA1FC:
{
}

loc_801BA200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801BA324;
    }
}

loc_801BA204:
{
    goto loc_801BA400;
}

loc_801BA208:
{
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = r3;
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
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
}

loc_801BA220:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801BA2E8;
    }
}

loc_801BA224:
{
    r27 = 0;
    r29 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19696));
    r30 = (r3 & 65535);
    goto loc_801BA2DC;
}

loc_801BA238:
{
    r3 = r28;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl3_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl3_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D080:
{
    r3 = 0;
    goto loc_inl3_cont_8012D068;
}

loc_inl3_0x8012D088:
{
    r3 = 1;
}

loc_inl3_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_801BA244:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801BA2D4;
    }
}

loc_801BA248:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_801BA250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_801BA2D4;
    }
}

loc_801BA254:
{
    r3 = MemoryInline::FlatRead16((r28 + 26));
    r0 = MemoryInline::FlatRead16((r31 + 28));
}

loc_801BA260:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801BA2D4;
    }
}

loc_801BA264:
{
    r3 = MemoryInline::FlatRead8((r28 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801BA270:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801BA2D4;
    }
}

loc_801BA274:
{
    r3 = r28;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801BA280:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BA2D4;
    }
}

loc_801BA284:
{
    r3 = r28;
    r4 = 7;
    r5 = 0;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl5_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl5_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl5_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D290:
{
    r3 = 1;
    goto loc_inl5_cont_8012D270;
}

loc_inl5_0x8012D298:
{
    r3 = 0;
}

loc_inl5_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801BA298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BA2D4;
    }
}

loc_801BA29C:
{
    r3 = r28;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19700));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    ctx->lr = 0x801BA2B0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012F980_343C = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_343C);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_343C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_801BA2B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BA2D4;
    }
}

loc_801BA2B8:
{
    r3 = (r31 + 392);
    r4 = (r28 + 392);
    ctx->lr = 0x801BA2C4u;
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

loc_801BA2C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA2D4;
    }
}

loc_801BA2D0:
{
    MemoryInline::FlatWrite8((r31 + 814), static_cast<uint8_t>(r29));
}

loc_801BA2D4:
{
    r27 = (r27 + 1);
    r28 = (r28 + 2840);
}

loc_801BA2DC:
{
    r0 = (r27 & 65535);
}

loc_801BA2E4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_801BA238;
    }
}

loc_801BA2E8:
{
    r3 = r31;
    // inline leaf 0x80130180 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 128);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80130180
}

loc_801BA2F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BA300;
    }
}

loc_801BA2F8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 814), static_cast<uint8_t>(r0));
}

loc_801BA300:
{
    r3 = MemoryInline::FlatRead16((r31 + 810));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 810), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801BA314:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801BA400;
    }
}

loc_801BA318:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 814), static_cast<uint8_t>(r0));
    goto loc_801BA400;
}

loc_801BA324:
{
    r4 = MemoryInline::FlatRead16((r3 + 812));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801BA32C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_801BA3D8;
    }
}

loc_801BA330:
{
    r27 = 0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800CFAF4_43B2 = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_43B2);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_43B2 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl7_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl7_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CFB50;
    }
}

loc_inl7_0x800CFB48:
{
    r3 = 0;
    goto loc_inl7_cont_800CFB34;
}

loc_inl7_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl7_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl7_0x800CFB64;
    }
}

loc_inl7_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl7_cont_800CFB34;
}

loc_inl7_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl7_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
}

loc_801BA34C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801BA400;
    }
}

loc_801BA350:
{
    r28 = 0;
    r30 = (r3 & 65535);
    goto loc_801BA3C8;
}

loc_801BA35C:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012D068u) && KnownTranslatedCpuCall<0x8012D068u>::kAvailable && !KnownTranslatedCpuCall<0x8012D068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012D068u>()) {
        const auto state_free_result_8012D068_4BC0 = func_8012D068_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8012D068_4BC0[0]);
        r3 = static_cast<uint32_t>(state_free_result_8012D068_4BC0[1]);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801BA368:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801BA3C0;
    }
}

loc_801BA36C:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_801BA374:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(40))) {
        goto loc_801BA3C0;
    }
}

loc_801BA378:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_801BA380:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801BA3C0;
    }
}

loc_801BA384:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801BA390:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801BA3C0;
    }
}

loc_801BA394:
{
    r0 = MemoryInline::FlatRead8((r29 + 814));
}

loc_801BA39C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801BA3C0;
    }
}

loc_801BA3A0:
{
}

loc_801BA3A4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r29))) {
        goto loc_801BA3BC;
    }
}

loc_801BA3A8:
{
    r3 = (r27 * 10);
    r0 = (r3 + 5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 812), static_cast<uint16_t>(r0));
    goto loc_801BA400;
}

loc_801BA3BC:
{
    r27 = (r27 + 1);
}

loc_801BA3C0:
{
    r28 = (r28 + 1);
    r29 = (r29 + 2840);
}

loc_801BA3C8:
{
    r0 = (r28 & 65535);
}

loc_801BA3D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_801BA35C;
    }
}

loc_801BA3D4:
{
    goto loc_801BA400;
}

loc_801BA3D8:
{
}

loc_801BA3DC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_801BA3EC;
    }
}

loc_801BA3E0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    goto loc_801BA400;
}

loc_801BA3EC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 814), static_cast<uint8_t>(r0));
    r4 = 11;
    r5 = 56;
    ctx->lr = 0x801BA400u;
    if constexpr (KnownRegArgsCpuCall<0x80128A78u>(&func_80128A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80128A78_59E7 = func_80128A78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128A78_59E7);
        r4 = static_cast<uint32_t>(regargs_result_80128A78_59E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x80128A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801BA400:
{
    r0 = 40;
    addr_psqx_801BA404_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801BA404_loc_0));
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

extern "C" void func_801BA190(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801BA190_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BA190 func_801BA190 preserves=true fpr_mask=0x00000000
