#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FDDCC(CpuContext* ctx);
extern "C" uint64_t func_803FDDCC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803FE204(CpuContext* ctx);
extern "C" void func_803FE204_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803FFFB4(CpuContext* ctx);
extern "C" uint64_t func_803FFFB4_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804000EC(CpuContext* ctx);
extern "C" uint64_t func_804000EC_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400D84(CpuContext* ctx);
extern "C" uint64_t func_80400D84_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400DD0(CpuContext* ctx);
extern "C" uint64_t func_80400DD0_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400E1C(CpuContext* ctx);
extern "C" uint64_t func_80400E1C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400E98(CpuContext* ctx);
extern "C" uint64_t func_80400E98_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400EFC(CpuContext* ctx);
extern "C" uint64_t func_80400EFC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400F88(CpuContext* ctx);
extern "C" uint64_t func_80400F88_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400FD4(CpuContext* ctx);
extern "C" uint64_t func_80400FD4_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401020(CpuContext* ctx);
extern "C" uint64_t func_80401020_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401060(CpuContext* ctx);
extern "C" uint64_t func_80401060_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804010AC(CpuContext* ctx);
extern "C" uint64_t func_804010AC_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401110(CpuContext* ctx);
extern "C" uint64_t func_80401110_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8040119C(CpuContext* ctx);
extern "C" uint64_t func_8040119C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_803FE204_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803FE9F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803FE9F0u);
    goto loc_803FE9F0;

loc_803FE9F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r6 = MemoryInline::FlatRead8((r3 + 24882));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(90));
}

loc_803FEA10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEF20;
    }
}

loc_803FEA14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEAB8;
    }
}

loc_803FEA18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(45));
}

loc_803FEA1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FECF0;
    }
}

loc_803FEA20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEA6C;
    }
}

loc_803FEA24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(20));
}

loc_803FEA28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEBB4;
    }
}

loc_803FEA2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEA54;
    }
}

loc_803FEA30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_803FEA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEB6C;
    }
}

loc_803FEA38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEA48;
    }
}

loc_803FEA3C:
{
}

loc_803FEA40:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_803FEB54;
    }
}

loc_803FEA44:
{
    goto loc_803FF1F0;
}

loc_803FEA48:
{
}

loc_803FEA4C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(10))) {
        goto loc_803FEB78;
    }
}

loc_803FEA50:
{
    goto loc_803FF1F0;
}

loc_803FEA54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(40));
}

loc_803FEA58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEC5C;
    }
}

loc_803FEA5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF1F0;
    }
}

loc_803FEA60:
{
}

loc_803FEA64:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(30))) {
        goto loc_803FEC04;
    }
}

loc_803FEA68:
{
    goto loc_803FF1F0;
}

loc_803FEA6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(60));
}

loc_803FEA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEE88;
    }
}

loc_803FEA74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEAA0;
    }
}

loc_803FEA78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(57));
}

loc_803FEA7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FED74;
    }
}

loc_803FEA80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEA94;
    }
}

loc_803FEA84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(55));
}

loc_803FEA88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FED24;
    }
}

loc_803FEA8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FED50;
    }
}

loc_803FEA90:
{
    goto loc_803FF1F0;
}

loc_803FEA94:
{
}

loc_803FEA98:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(59))) {
        goto loc_803FEE50;
    }
}

loc_803FEA9C:
{
    goto loc_803FEE10;
}

loc_803FEAA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(80));
}

loc_803FEAA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEF00;
    }
}

loc_803FEAA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF1F0;
    }
}

loc_803FEAAC:
{
}

loc_803FEAB0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(70))) {
        goto loc_803FEED4;
    }
}

loc_803FEAB4:
{
    goto loc_803FF1F0;
}

loc_803FEAB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(140));
}

loc_803FEABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF118;
    }
}

loc_803FEAC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEB0C;
    }
}

loc_803FEAC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(120));
}

loc_803FEAC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF02C;
    }
}

loc_803FEACC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEAF4;
    }
}

loc_803FEAD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(105));
}

loc_803FEAD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FEFE0;
    }
}

loc_803FEAD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEAE8;
    }
}

loc_803FEADC:
{
}

loc_803FEAE0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(95))) {
        goto loc_803FEFA8;
    }
}

loc_803FEAE4:
{
    goto loc_803FF1F0;
}

loc_803FEAE8:
{
}

loc_803FEAEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(110))) {
        goto loc_803FF00C;
    }
}

loc_803FEAF0:
{
    goto loc_803FF1F0;
}

loc_803FEAF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(135));
}

loc_803FEAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF0EC;
    }
}

loc_803FEAFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF1F0;
    }
}

loc_803FEB00:
{
}

loc_803FEB04:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(125))) {
        goto loc_803FF0B4;
    }
}

loc_803FEB08:
{
    goto loc_803FF1F0;
}

loc_803FEB0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(210));
}

loc_803FEB10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF154;
    }
}

loc_803FEB14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEB3C;
    }
}

loc_803FEB18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(160));
}

loc_803FEB1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF138;
    }
}

loc_803FEB20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FEB30;
    }
}

loc_803FEB24:
{
}

loc_803FEB28:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(150))) {
        goto loc_803FF128;
    }
}

loc_803FEB2C:
{
    goto loc_803FF1F0;
}

loc_803FEB30:
{
}

loc_803FEB34:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(200))) {
        goto loc_803FF144;
    }
}

loc_803FEB38:
{
    goto loc_803FF1F0;
}

loc_803FEB3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(255));
}

loc_803FEB40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF1C0;
    }
}

loc_803FEB44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF1F0;
    }
}

loc_803FEB48:
{
}

loc_803FEB4C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(245))) {
        goto loc_803FF160;
    }
}

loc_803FEB50:
{
    goto loc_803FF1F0;
}

loc_803FEB54:
{
    r0 = MemoryInline::FlatRead8((r3 + 24884));
}

loc_803FEB5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_803FF1F0;
    }
}

loc_803FEB60:
{
    r0 = 90;
    MemoryInline::FlatWrite8((r3 + 24884), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEB6C:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEB78:
{
    // inline leaf 0x803FE28C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x803FE28C
}

loc_803FEB80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FEB90;
    }
}

loc_803FEB84:
{
    r0 = 200;
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEB90:
{
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    // inline leaf 0x80416AAC (2 guest instruction(s))
    r3 = (r3 + 11245);
    // end of inlined leaf 0x80416AAC
    r4 = r3;
    r3 = r31;
    ctx->lr = 0x803FEBB0u;
    if constexpr (KnownRegArgsCpuCall<0x8040119Cu>(&func_8040119C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8040119C_3295 = func_8040119C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8040119C_3295);
        r4 = static_cast<uint32_t>(regargs_result_8040119C_3295 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8040119Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEBB4:
{
    // inline leaf 0x803FE264 (10 guest instruction(s))
}

loc_inl3_0x803FE264:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
}

loc_inl3_0x803FE274:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_inl3_0x803FE284;
    }
}

loc_inl3_0x803FE278:
{
}

loc_inl3_0x803FE27C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_inl3_0x803FE284;
    }
}

loc_inl3_0x803FE280:
{
    r0 = 0;
}

loc_inl3_0x803FE284:
{
    r3 = r0;
}

loc_inl3_cont_803FE264:
{
    // end of inlined leaf 0x803FE264
}

loc_803FEBBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803FEBEC;
    }
}

loc_803FEBC0:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32140));
}

loc_803FEBCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEBDC;
    }
}

loc_803FEBD0:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -32104));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_803FEBDC:
{
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 10);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEBEC:
{
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x803FEC00u;
    if constexpr (KnownRegArgsCpuCall<0x80400F88u>(&func_80400F88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80400F88_3F3C = func_80400F88_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400F88_3F3C);
        r4 = static_cast<uint32_t>(regargs_result_80400F88_3F3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400F88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEC04:
{
    // inline leaf 0x803FE24C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x803FE24C
}

loc_803FEC0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FEC38;
    }
}

loc_803FEC10:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32148));
}

loc_803FEC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEC2C;
    }
}

loc_803FEC20:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -32112));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_803FEC2C:
{
    r0 = 245;
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEC38:
{
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -32164), r0);
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x803FEC58u;
    if constexpr (KnownRegArgsCpuCall<0x80400DD0u>(&func_80400DD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80400DD0_4B0E = func_80400DD0_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400DD0_4B0E);
        r4 = static_cast<uint32_t>(regargs_result_80400DD0_4B0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400DD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEC5C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -32152));
}

loc_803FEC68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEC84;
    }
}

loc_803FEC6C:
{
    r0 = MemoryInline::FlatRead32((r4 + -32164));
}

loc_803FEC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEC84;
    }
}

loc_803FEC78:
{
    r5 = MemoryInline::FlatRead32((r4 + -32148));
}

loc_803FEC80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803FECB0;
    }
}

loc_803FEC84:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32148));
}

loc_803FEC90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FECA0;
    }
}

loc_803FEC94:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -32112));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_803FECA0:
{
    r4 = MemoryInline::FlatRead8((r3 + 24882));
    r0 = (r4 + 20);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FECB0:
{
}

loc_803FECB4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_803FECC0;
    }
}

loc_803FECB8:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
}

loc_803FECC0:
{
    r5 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r5 + -32112));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -32148));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -32160), r0);
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FECF0:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r4 = (r3 + 65536);
    r5 = MemoryInline::FlatRead32((r4 + -32160));
    r0 = MemoryInline::FlatRead32((r4 + -32164));
    r0 = (r0 - r5);
    r4 = MemoryInline::FlatRead32((r4 + -32156));
}

loc_803FED10:
{
    r6 = 8192;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8192))) {
        goto loc_803FED1C;
    }
}

loc_803FED18:
{
    r6 = r0;
}

loc_803FED1C:
{
    ctx->lr = 0x803FED20u;
    if constexpr (KnownRegArgsCpuCall<0x80400E1Cu>(&func_80400E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80400E1C_5B75 = func_80400E1C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400E1C_5B75);
        r4 = static_cast<uint32_t>(regargs_result_80400E1C_5B75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FED24:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = MemoryInline::FlatRead32((r5 + -32160));
}

loc_803FED34:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_803FED44;
    }
}

loc_803FED38:
{
    r0 = (r6 + -10);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FED44:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FED50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24889), static_cast<uint8_t>(r0));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r4 = 1;
    ctx->lr = 0x803FED70u;
    if constexpr (KnownRegArgsCpuCall<0x80400E98u>(&func_80400E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80400E98_65B4 = func_80400E98_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400E98_65B4);
        r4 = static_cast<uint32_t>(regargs_result_80400E98_65B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FED74:
{
    r0 = MemoryInline::FlatRead8((r3 + 24889));
}

loc_803FED7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FF1F0;
    }
}

loc_803FED80:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -32152));
}

loc_803FED8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEDA8;
    }
}

loc_803FED90:
{
    r0 = MemoryInline::FlatRead32((r4 + -32164));
}

loc_803FED98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEDA8;
    }
}

loc_803FED9C:
{
    r5 = MemoryInline::FlatRead32((r4 + -32144));
}

loc_803FEDA4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803FEDD0;
    }
}

loc_803FEDA8:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32144));
}

loc_803FEDB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEDC4;
    }
}

loc_803FEDB8:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -32108));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_803FEDC4:
{
    r0 = 60;
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEDD0:
{
}

loc_803FEDD4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_803FEDE0;
    }
}

loc_803FEDD8:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
}

loc_803FEDE0:
{
    r5 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r5 + -32108));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -32144));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -32160), r0);
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEE10:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24889), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r5 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r5 + -32160));
    r0 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = (r0 - r6);
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r5 + -32156));
}

loc_803FEE3C:
{
    r7 = 8192;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8192))) {
        goto loc_803FEE48;
    }
}

loc_803FEE44:
{
    r7 = r0;
}

loc_803FEE48:
{
    ctx->lr = 0x803FEE4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80400EFCu>(&func_80400EFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80400EFC_76FA = func_80400EFC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400EFC_76FA);
        r4 = static_cast<uint32_t>(regargs_result_80400EFC_76FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400EFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEE50:
{
    r0 = MemoryInline::FlatRead8((r3 + 24889));
}

loc_803FEE58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FF1F0;
    }
}

loc_803FEE5C:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = MemoryInline::FlatRead32((r5 + -32160));
}

loc_803FEE6C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_803FEE7C;
    }
}

loc_803FEE70:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEE7C:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEE88:
{
    // inline leaf 0x803FE264 (10 guest instruction(s))
}

loc_inl5_0x803FE264:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
}

loc_inl5_0x803FE274:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_inl5_0x803FE284;
    }
}

loc_inl5_0x803FE278:
{
}

loc_inl5_0x803FE27C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_inl5_0x803FE284;
    }
}

loc_inl5_0x803FE280:
{
    r0 = 0;
}

loc_inl5_0x803FE284:
{
    r3 = r0;
}

loc_inl5_cont_803FE264:
{
    // end of inlined leaf 0x803FE264
}

loc_803FEE90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FEEBC;
    }
}

loc_803FEE94:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32136));
}

loc_803FEEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEEB0;
    }
}

loc_803FEEA4:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -32100));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_803FEEB0:
{
    r0 = 245;
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEEBC:
{
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x803FEED0u;
    if constexpr (KnownRegArgsCpuCall<0x80400FD4u>(&func_80400FD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80400FD4_862F = func_80400FD4_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400FD4_862F);
        r4 = static_cast<uint32_t>(regargs_result_80400FD4_862F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400FD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEED4:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32132));
}

loc_803FEEE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FEEF0;
    }
}

loc_803FEEE4:
{
    r0 = (r6 + 10);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEEF0:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FEEFCu;
    if constexpr (KnownRegArgsCpuCall<0x80401020u>(&func_80401020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80401020_8EF4 = func_80401020_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401020_8EF4);
        r4 = static_cast<uint32_t>(regargs_result_80401020_8EF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEF00:
{
    r0 = 0;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r4 = 2;
    ctx->lr = 0x803FEF1Cu;
    if constexpr (KnownRegArgsCpuCall<0x804010ACu>(&func_804010AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804010AC_96DF = func_804010AC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804010AC_96DF);
        r4 = static_cast<uint32_t>(regargs_result_804010AC_96DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804010ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEF20:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32164));
}

loc_803FEF2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEF3C;
    }
}

loc_803FEF30:
{
    r5 = MemoryInline::FlatRead32((r4 + -32120));
}

loc_803FEF38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803FEF68;
    }
}

loc_803FEF3C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32120));
}

loc_803FEF48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FEF58;
    }
}

loc_803FEF4C:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -32084));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_803FEF58:
{
    r4 = MemoryInline::FlatRead8((r3 + 24882));
    r0 = (r4 + 20);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEF68:
{
}

loc_803FEF6C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_803FEF78;
    }
}

loc_803FEF70:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
}

loc_803FEF78:
{
    r5 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r5 + -32084));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -32120));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -32160), r0);
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FEFA8:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r5 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r5 + -32160));
    r0 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = (r0 - r6);
    r4 = 2;
    r5 = MemoryInline::FlatRead32((r5 + -32168));
}

loc_803FEFCC:
{
    r7 = 8192;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8192))) {
        goto loc_803FEFD8;
    }
}

loc_803FEFD4:
{
    r7 = r0;
}

loc_803FEFD8:
{
    ctx->lr = 0x803FEFDCu;
    if constexpr (KnownRegArgsCpuCall<0x80401110u>(&func_80401110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80401110_A699 = func_80401110_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401110_A699);
        r4 = static_cast<uint32_t>(regargs_result_80401110_A699 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FEFE0:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = MemoryInline::FlatRead32((r5 + -32160));
}

loc_803FEFF0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_803FF000;
    }
}

loc_803FEFF4:
{
    r0 = (r6 + -10);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF000:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF00C:
{
    r0 = 0;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r4 = 1;
    ctx->lr = 0x803FF028u;
    if constexpr (KnownRegArgsCpuCall<0x804010ACu>(&func_804010AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804010AC_B092 = func_804010AC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804010AC_B092);
        r4 = static_cast<uint32_t>(regargs_result_804010AC_B092 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804010ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF02C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32164));
}

loc_803FF038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FF048;
    }
}

loc_803FF03C:
{
    r5 = MemoryInline::FlatRead32((r4 + -32124));
}

loc_803FF044:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803FF074;
    }
}

loc_803FF048:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32124));
}

loc_803FF054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FF064;
    }
}

loc_803FF058:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -32088));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_803FF064:
{
    r4 = MemoryInline::FlatRead8((r3 + 24882));
    r0 = (r4 + 20);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF074:
{
}

loc_803FF078:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_803FF084;
    }
}

loc_803FF07C:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r4 + -32164), r0);
}

loc_803FF084:
{
    r5 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r5 + -32088));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -32124));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite32((r3 + -32160), r0);
    r3 = MemoryInline::FlatRead8((r31 + 24882));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF0B4:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r5 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r5 + -32160));
    r0 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = (r0 - r6);
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r5 + -32168));
}

loc_803FF0D8:
{
    r7 = 8192;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8192))) {
        goto loc_803FF0E4;
    }
}

loc_803FF0E0:
{
    r7 = r0;
}

loc_803FF0E4:
{
    ctx->lr = 0x803FF0E8u;
    if constexpr (KnownRegArgsCpuCall<0x80401110u>(&func_80401110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80401110_C04C = func_80401110_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401110_C04C);
        r4 = static_cast<uint32_t>(regargs_result_80401110_C04C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF0EC:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -32164));
    r0 = MemoryInline::FlatRead32((r5 + -32160));
}

loc_803FF0FC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_803FF10C;
    }
}

loc_803FF100:
{
    r0 = (r6 + -10);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF10C:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF118:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF124u;
    if constexpr (KnownRegArgsCpuCall<0x804000ECu>(&func_804000EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804000EC_C9CA = func_804000EC_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804000EC_C9CA);
        r4 = static_cast<uint32_t>(regargs_result_804000EC_C9CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804000ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF128:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF134u;
    if constexpr (KnownRegArgsCpuCall<0x80400D84u>(&func_80400D84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80400D84_D13A = func_80400D84_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400D84_D13A);
        r4 = static_cast<uint32_t>(regargs_result_80400D84_D13A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80400D84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF138:
{
    r0 = 245;
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF144:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF150u;
    if constexpr (KnownRegArgsCpuCall<0x80401060u>(&func_80401060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80401060_D928 = func_80401060_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401060_D928);
        r4 = static_cast<uint32_t>(regargs_result_80401060_D928 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF154:
{
    r0 = 245;
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF160:
{
    r0 = MemoryInline::FlatRead8((r3 + 24884));
}

loc_803FF168:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_803FF178;
    }
}

loc_803FF16C:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    goto loc_803FF1F0;
}

loc_803FF178:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    r30 = 0;
    // inline leaf 0x803FE264 (10 guest instruction(s))
}

loc_inl6_0x803FE264:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
}

loc_inl6_0x803FE274:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_inl6_0x803FE284;
    }
}

loc_inl6_0x803FE278:
{
}

loc_inl6_0x803FE27C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_inl6_0x803FE284;
    }
}

loc_inl6_0x803FE280:
{
    r0 = 0;
}

loc_inl6_0x803FE284:
{
    r3 = r0;
}

loc_inl6_cont_803FE264:
{
    // end of inlined leaf 0x803FE264
}

loc_803FF18C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803FF1A0;
    }
}

loc_803FF190:
{
    r3 = r31;
    // inline leaf 0x803FE28C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -32172));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x803FE28C
}

loc_803FF19C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF1A4;
    }
}

loc_803FF1A0:
{
    r30 = 1;
}

loc_803FF1A4:
{
}

loc_803FF1A8:
{
    r4 = 2;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803FF1B4;
    }
}

loc_803FF1B0:
{
    r4 = 1;
}

loc_803FF1B4:
{
    r3 = r31;
    ctx->lr = 0x803FF1BCu;
    if constexpr (KnownRegArgsCpuCall<0x803FFFB4u>(&func_803FFFB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_803FFFB4_E83B = func_803FFFB4_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FFFB4_E83B);
        r4 = static_cast<uint32_t>(regargs_result_803FFFB4_E83B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FFFB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803FF1F0;
}

loc_803FF1C0:
{
    // inline leaf 0x803FE9B8 (14 guest instruction(s))
}

loc_inl8_0x803FE9B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24881));
}

loc_inl8_0x803FE9C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x803FE9E8;
    }
}

loc_inl8_0x803FE9C4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24881), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24883), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24886), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24880), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 25944), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 25945), static_cast<uint8_t>(r0));
}

loc_inl8_0x803FE9E8:
{
    r3 = 0;
}

loc_inl8_cont_803FE9B8:
{
    // end of inlined leaf 0x803FE9B8
    r3 = r31;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x803FDDCCu>(&func_803FDDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_803FDDCC_F301 = func_803FDDCC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDDCC_F301);
        r4 = static_cast<uint32_t>(regargs_result_803FDDCC_F301 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FDDCCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803FE204u) && KnownTranslatedCpuCall<0x803FE204u>::kAvailable && !KnownTranslatedCpuCall<0x803FE204u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803FE204u>()) {
        func_803FE204_statefree(r3, r4, r5, r6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FE204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 1;
    goto loc_803FF1F4;
}

loc_803FF1F0:
{
    r3 = 0;
}

loc_803FF1F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FE9F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FE9F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FE9F0 func_803FE9F0 preserves=true fpr_mask=0x00000000
