#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800504B0(CpuContext* ctx);
extern "C" uint64_t func_800504B0_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80050574(CpuContext* ctx);
extern "C" uint64_t func_80050574_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80050B08(CpuContext* ctx);
extern "C" uint64_t func_80050B08_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_800B0BF4(CpuContext* ctx);
extern "C" uint64_t func_800B0BF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800FBC20(CpuContext* ctx);
extern "C" uint64_t func_800FBC20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800FBC24(CpuContext* ctx);
extern "C" uint64_t func_800FBC24_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801359FC(CpuContext* ctx);
extern "C" uint64_t func_801359FC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801B7080(CpuContext* ctx);
extern "C" uint32_t func_801B7080_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802248E8(CpuContext* ctx);
extern "C" uint64_t func_802248E8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027D850(CpuContext* ctx);
extern "C" uint32_t func_8027D850_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B0110(CpuContext* ctx);
extern "C" uint64_t func_802B0110_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802BE09C(CpuContext* ctx);
extern "C" uint32_t func_802BE09C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_801B7080_statefree(uint32_t);
extern "C" uint64_t func_801B7080_statefree_v0(uint32_t);

extern "C" uint64_t func_800FB1C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800FBBC8_loc_0 = 0;
    uint32_t addr_psqx_800FBBD4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800FB1C4;

loc_800FB1C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 224);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r1 + 160), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r1 + 168), r0);
    r3 = (r1 + 96);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 112);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 84);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 72);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r27 = MemoryInline::FlatRead32((r26 + 56));
    r3 = (r1 + 60);
    r4 = MemoryInline::FlatRead8((r26 + 68));
    ctx->lr = 0x800FB22Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B0110u>(&func_802B0110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802B0110_1A78 = func_802B0110_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B0110_1A78);
        r4 = static_cast<uint32_t>(regargs_result_802B0110_1A78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B0110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r27 + 12);
    r4 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_800FB240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FB258;
    }
}

loc_800FB244:
{
}

loc_800FB248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800FB42C;
    }
}

loc_800FB24C:
{
}

loc_800FB250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800FBAF4;
    }
}

loc_800FB254:
{
    goto loc_800FBBBC;
}

loc_800FB258:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x800FB264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
}

loc_800FB268:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FB284;
    }
}

loc_800FB26C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_800FBBC4;
}

loc_800FB284:
{
    r31 = MemoryInline::FlatRead32((r26 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 22));
    MemoryInline::FlatWrite8((r26 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_800FB2A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800FB2C8;
    }
}

loc_800FB2A4:
{
    r3 = r31;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027D850u>(&func_8027D850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027D850_27EE = func_8027D850_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027D850_27EE;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D850u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_800FB2B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800FB2C8;
    }
}

loc_800FB2B8:
{
    r0 = MemoryInline::FlatRead16((r31 + 1444));
    r0 = (r0 & 20480);
}

loc_800FB2C0:
{
}

loc_800FB2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FB2D4;
    }
}

loc_800FB2C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_800FB300;
}

loc_800FB2D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_800FB2DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800FB300;
    }
}

loc_800FB2E0:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -52);
    r0 = (r0 & 65535);
}

loc_800FB2F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_800FB300;
    }
}

loc_800FB2F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
}

loc_800FB300:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_800FB308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FBBC4;
    }
}

loc_800FB30C:
{
    r3 = r31;
    ctx->lr = 0x800FB314u;
    if constexpr (KnownRegArgsCpuCall<0x802248E8u>(&func_802248E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802248E8_2F76 = func_802248E8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802248E8_2F76);
        r4 = static_cast<uint32_t>(regargs_result_802248E8_2F76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802248E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800FB31C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FB324;
    }
}

loc_800FB320:
{
    goto loc_800FBBC4;
}

loc_800FB324:
{
    r3 = r26;
    r4 = 0;
    r5 = 20;
    ctx->lr = 0x800FB334u;
    if constexpr (KnownRegArgsCpuCall<0x800FBC24u>(&func_800FBC24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800FBC24_3449 = func_800FBC24_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800FBC24_3449);
        r4 = static_cast<uint32_t>(regargs_result_800FBC24_3449 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FBC24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = 1;
    r5 = 17;
    ctx->lr = 0x800FB344u;
    if constexpr (KnownRegArgsCpuCall<0x800FBC24u>(&func_800FBC24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800FBC24_3B56 = func_800FBC24_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800FBC24_3B56);
        r4 = static_cast<uint32_t>(regargs_result_800FBC24_3B56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FBC24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 36);
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r4 + 4);
    r5 = MemoryInline::FlatRead32((r27 + 8));
    r5 = (r5 + 4);
    ctx->lr = 0x800FB35Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_424D = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_424D);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_424D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 48);
    r4 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29832));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r26 + 24);
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 24);
    r4 = (r27 + 12);
    r5 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 96);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 96);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 96);
    ctx->lr = 0x800FB3A8u;
    if constexpr (KnownRegArgsCpuCall<0x80050B08u>(&func_80050B08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050B08_4A32 = func_80050B08_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050B08_4A32);
        r4 = static_cast<uint32_t>(regargs_result_80050B08_4A32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050B08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
    MemoryInline::FlatWrite32((r26 + 40), r3);
    r30 = 0;
    r29 = r27;
    r28 = 0;
    goto loc_800FB3EC;
}

loc_800FB3BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r28);
    r0 = MemoryInline::FlatRead32((r26 + 40));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r28);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    ctx->lr = 0x800FB3E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_800FB3EC:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800FB3F4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_800FB3BC;
    }
}

loc_800FB3F8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800FB404:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FBBC4;
    }
}

loc_800FB408:
{
    r3 = r31;
    ctx->lr = 0x800FB410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F93E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r5 = (r3 | 2);
    r3 = r26;
    r4 = (r27 + 4);
    r6 = MemoryInline::FlatRead32(r27);
    r7 = 0;
    ctx->lr = 0x800FB428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800FBBC4;
}

loc_800FB42C:
{
    r30 = MemoryInline::FlatRead32((r26 + 48));
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

loc_800FB43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FB458;
    }
}

loc_800FB440:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_800FBBC4;
}

loc_800FB458:
{
    r3 = r30;
    // inline leaf 0x80136D9C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1948));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80136D9C
}

loc_800FB464:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FB474;
    }
}

loc_800FB468:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_800FB47C;
}

loc_800FB474:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
}

loc_800FB47C:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
    MemoryInline::FlatWrite8((r26 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = (r3 + -36);
}

loc_800FB490:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_800FB4B4;
    }
}

loc_800FB494:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801B7080u) && KnownTranslatedCpuCall<0x801B7080u>::kAvailable && !KnownTranslatedCpuCall<0x801B7080u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801B7080u>()) {
        const auto state_free_result_801B7080_69C1 = func_801B7080_statefree_v0(r3);
        r3 = static_cast<uint32_t>(state_free_result_801B7080_69C1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B7080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_800FB4A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FB4AC;
    }
}

loc_800FB4A4:
{
    r0 = 1;
    goto loc_800FB4B8;
}

loc_800FB4AC:
{
    r0 = 0;
    goto loc_800FB4B8;
}

loc_800FB4B4:
{
    r0 = 0;
}

loc_800FB4B8:
{
}

loc_800FB4BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FB5F8;
    }
}

loc_800FB4C0:
{
    r0 = MemoryInline::FlatRead8((r27 + 25));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 26));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 27));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 28));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29808));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 468));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = 0;
    r5 = 0;
    r6 = (r1 + 8);
    ctx->lr = 0x800FB51Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 516));
    r5 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 84);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29828));
    f2.d = MemoryInline::FlatReadFloat32((r13 + -30600));
    f3.d = MemoryInline::FlatReadFloat32((r13 + -30596));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 84);
    r4 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r26 + 24);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r26 + 24);
    r4 = (r1 + 84);
    ctx->lr = 0x800FB564u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_7DC1 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_7DC1);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_7DC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = (r3 + 4);
    r4 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 72);
    r4 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + 448));
    MemoryInline::FlatWrite32((r26 + 40), r0);
    r0 = MemoryInline::FlatRead32((r30 + 444));
    MemoryInline::FlatWrite32((r26 + 36), r0);
    r3 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 40));
    r4 = (r1 + 112);
    ctx->lr = 0x800FB5A4u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80050574_8546 = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_8546);
        r4 = static_cast<uint32_t>(regargs_result_80050574_8546 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
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
    }
    r3 = MemoryInline::FlatRead32((r26 + 36));
    r4 = (r1 + 112);
    ctx->lr = 0x800FB5B0u;
    if constexpr (KnownRegArgsCpuCall<0x800504B0u>(&func_800504B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800504B0_8CCE = func_800504B0_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800504B0_8CCE);
        r4 = static_cast<uint32_t>(regargs_result_800504B0_8CCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800504B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
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
    }
    r3 = (r1 + 112);
    r4 = (r26 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = r30;
    ctx->lr = 0x800FB5C4u;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_9582 = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_9582);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_9582 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f2.d = f1.d;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = (r3 + 28);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29824));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29820));
    f3.d = PpcFmulsInline(f0.d, f2.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r1 + 112);
    r5 = 0;
    ctx->lr = 0x800FB5F4u;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        const auto regargs_result_800E0880_9D4B = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_9D4B);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_9D4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_800FBBC4;
}

loc_800FB5F8:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 1024);
}

loc_800FB604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FB8D8;
    }
}

loc_800FB608:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
}

loc_800FB610:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FB62C;
    }
}

loc_800FB614:
{
    r3 = 0x805A0000u;
    r28 = (r3 + -16944);
    r29 = (r13 + -30584);
    r3 = (r13 + -30576);
    r31 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_800FB640;
}

loc_800FB62C:
{
    r3 = 0x805A0000u;
    r28 = (r3 + -16968);
    r3 = 0x805A0000u;
    r29 = (r3 + -16920);
    r31 = MemoryInline::FlatRead32((r13 + -30576));
}

loc_800FB640:
{
    r3 = r30;
    ctx->lr = 0x800FB648u;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_A766 = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_A766);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_A766 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead8((r26 + 6));
}

loc_800FB650:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FB65C;
    }
}

loc_800FB654:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
}

loc_800FB65C:
{
    r0 = MemoryInline::FlatRead16((r30 + 552));
    r0 = (r0 & 2);
}

loc_800FB668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FB694;
    }
}

loc_800FB66C:
{
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_800FB674:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800FB8D0;
    }
}

loc_800FB678:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29844));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800FB690:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FB8D0;
    }
}

loc_800FB694:
{
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_800FB69C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800FB8D0;
    }
}

loc_800FB6A0:
{
}

loc_800FB6A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800FB8D0;
    }
}

loc_800FB6A8:
{
    r3 = MemoryInline::FlatRead8((r27 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800FB6B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800FB6C4;
    }
}

loc_800FB6B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r27 + 24), static_cast<uint8_t>(r0));
    goto loc_800FB8D8;
}

loc_800FB6C4:
{
    r0 = MemoryInline::FlatRead8((r26 + 6));
}

loc_800FB6CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FBBC4;
    }
}

loc_800FB6D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 12), r0);
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r3 = MH3_TickLoad(r3, 2148513496);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 16), r0);
    r3 = r30;
    ctx->lr = 0x800FB6ECu;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_B559 = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_B559);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_B559 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800FB6F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FB708;
    }
}

loc_800FB6F8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_800FB70C;
}

loc_800FB708:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29848));
}

loc_800FB70C:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29800));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f0.d);
    r0 = fctiwzword1;
}

loc_800FB738:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_800FB7BC;
    }
}

loc_800FB73C:
{
    r4 = MemoryInline::FlatRead32((r30 + 516));
    r0 = (r4 + 65536);
}

loc_800FB748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_800FB75C;
    }
}

loc_800FB74C:
{
    r3 = (r26 + 24);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800FB768;
}

loc_800FB75C:
{
    r3 = r30;
    r5 = (r26 + 24);
    ctx->lr = 0x800FB768u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_C0AC = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_C0AC);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_C0AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800FB768:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29840));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 28), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 16), r0);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl10_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl10_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl10_0x800CEF40;
    }
}

loc_inl10_0x800CEF3C:
{
    r0 = 1;
}

loc_inl10_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl10_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r26 + 40), r0);
    r0 = MemoryInline::FlatRead8((r30 + 485));
}

loc_800FB798:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_800FB7B4;
    }
}

loc_800FB79C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2258));
}

loc_800FB7A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FB7B4;
    }
}

loc_800FB7A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
    goto loc_800FB7BC;
}

loc_800FB7B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
}

loc_800FB7BC:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r26 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29800));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80052364_D042 = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_D042;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    r3 = r30;
    ctx->lr = 0x800FB7F4u;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_D524 = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_D524);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_D524 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = PpcFmulsInline(f30.d, f1.d);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r3 = (r3 + 28);
    f1.d = f30.d;
    f2.d = f30.d;
    f3.d = f30.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = MemoryInline::FlatRead8((r26 + 68));
    r4 = 1;
    ctx->lr = 0x800FB81Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r0 = (r3 & -16777216);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r26 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29800));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f0.d);
    r4 = fctiwzword2;
    ctx->lr = 0x800FB880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29808));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 468));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x800FB8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r0));
    goto loc_800FBA08;
}

loc_800FB8D0:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r27 + 24), static_cast<uint8_t>(r0));
}

loc_800FB8D8:
{
    r3 = r30;
    ctx->lr = 0x800FB8E0u;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_EF4F = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_EF4F);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_EF4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800FB8E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FB8FC;
    }
}

loc_800FB8EC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_800FB900;
}

loc_800FB8FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29848));
}

loc_800FB900:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29816));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite32((r26 + 16), r0);
    r4 = MemoryInline::FlatRead32((r30 + 516));
    r0 = (r4 + 65536);
}

loc_800FB924:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_800FB938;
    }
}

loc_800FB928:
{
    r3 = (r26 + 24);
    r4 = (r30 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800FB944;
}

loc_800FB938:
{
    r3 = r30;
    r5 = (r26 + 24);
    ctx->lr = 0x800FB944u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_F939 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_F939);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_F939 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800FB944:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r3 = MH3_TickLoad(r3, 2148514116);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 12), r0);
}

loc_800FB954:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_800FB960;
    }
}

loc_800FB958:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r26 + 12), r0);
}

loc_800FB960:
{
    r0 = MemoryInline::FlatRead8((r27 + 25));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 26));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 27));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = (r13 + -30568);
    r4 = MemoryInline::FlatRead32((r26 + 12));
    ctx->lr = 0x800FB984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29808));
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 468));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = 0;
    r5 = 0;
    r6 = (r1 + 8);
    ctx->lr = 0x800FB9C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29840));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 28), f0.d);
    r3 = r30;
    ctx->lr = 0x800FB9E0u;
    if constexpr (KnownRegArgsCpuCall<0x801359FCu>(&func_801359FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801359FC_10C51 = func_801359FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359FC_10C51);
        r4 = static_cast<uint32_t>(regargs_result_801359FC_10C51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = (r3 + 28);
    f2.d = f30.d;
    f3.d = f30.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead32((r30 + 448));
    MemoryInline::FlatWrite32((r26 + 40), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r0));
}

loc_800FBA08:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 4);
    r4 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 84);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29828));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29812));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 84);
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    ctx->lr = 0x800FBA48u;
    if constexpr (KnownRegArgsCpuCall<0x802BE09Cu>(&func_802BE09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE09C_116AD = func_802BE09C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE09C_116AD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = (r3 & 65535);
    r3 = (r1 + 84);
    ctx->lr = 0x800FBA54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r3 = (r1 + 12);
    r4 = (r26 + 24);
    r5 = (r1 + 84);
    ctx->lr = 0x800FBA64u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_11D2F = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_11D2F);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_11D2F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 72);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r5 = 0;
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r4 = MemoryInline::FlatRead32((r26 + 40));
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r5);
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0;
    ctx->lr = 0x800FBACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r0 = MemoryInline::FlatRead8((r26 + 8));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4 = (r27 + r0);
    r4 = (r4 + 4);
    r5 = 2;
    r6 = 1;
    r7 = (r1 + 72);
    ctx->lr = 0x800FBAF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800FBBC4;
}

loc_800FBAF4:
{
    r3 = r26;
    r4 = 2;
    ctx->lr = 0x800FBB00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
}

loc_800FBB04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FBB20;
    }
}

loc_800FBB08:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_800FBBC4;
}

loc_800FBB20:
{
    r28 = MemoryInline::FlatRead32((r26 + 48));
    r3 = r28;
    r4 = 2;
    // inline leaf 0x802D2BDC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    // end of inlined leaf 0x802D2BDC
}

loc_800FBB34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FBB48;
    }
}

loc_800FBB38:
{
    r0 = MemoryInline::FlatRead16((r28 + 804));
    r0 = (r0 & 16384);
}

loc_800FBB44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FBB54;
    }
}

loc_800FBB48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_800FBB5C;
}

loc_800FBB54:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
}

loc_800FBB5C:
{
    r0 = MemoryInline::FlatRead8((r28 + 420));
    MemoryInline::FlatWrite8((r26 + 68), static_cast<uint8_t>(r0));
    r3 = (r28 + 8);
    r4 = 3;
    r5 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29840));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 412));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 28), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = (r3 + 4);
    r4 = (r26 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = 0;
    ctx->lr = 0x800FBBA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r27 + 4);
    r5 = 2;
    r6 = MemoryInline::FlatRead32(r27);
    r7 = 0;
    ctx->lr = 0x800FBBB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800FBBC4;
}

loc_800FBBBC:
{
    r3 = r26;
    ctx->lr = 0x800FBBC4u;
    if constexpr (KnownRegArgsCpuCall<0x800FBC20u>(&func_800FBC20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800FBC20_1423F = func_800FBC20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FBC20_1423F);
        r4 = static_cast<uint32_t>(regargs_result_800FBC20_1423F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800FBC20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800FBBC4:
{
    r0 = 248;
    addr_psqx_800FBBC8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800FBBC8_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 200), 0, 64u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 240));
    r0 = 232;
    addr_psqx_800FBBD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800FBBD4_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 224));
    r11 = (r1 + 224);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FB1C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FB1C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FB1C4 func_800FB1C4 preserves=true fpr_mask=0x00000000
