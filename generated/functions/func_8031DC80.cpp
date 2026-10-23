#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F8EC0(CpuContext* ctx);
extern "C" uint64_t func_800F8EC0_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8031DF1C(CpuContext* ctx);
extern "C" uint64_t func_8031DF1C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8031E5DC(CpuContext* ctx);
extern "C" uint64_t func_8031E5DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8031DC80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;

    goto loc_8031DC80;

loc_8031DC80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r29 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r3));
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 232), r4);
    MemoryInline::FlatWrite32((r31 + 240), r4);
    r0 = (r29 & 255);
}

loc_8031DCC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8031DCE0;
    }
}

loc_8031DCC4:
{
}

loc_8031DCC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8031DD00;
    }
}

loc_8031DCCC:
{
}

loc_8031DCD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8031DD24;
    }
}

loc_8031DCD4:
{
}

loc_8031DCD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_8031DD24;
    }
}

loc_8031DCDC:
{
    goto loc_8031DDC8;
}

loc_8031DCE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8031DCE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8031DDC8;
    }
}

loc_8031DCEC:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10504);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    MemoryInline::FlatWrite8((r31 + 236), static_cast<uint8_t>(r4));
    goto loc_8031DDC8;
}

loc_8031DD00:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8031DD08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8031DDC8;
    }
}

loc_8031DD0C:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10504);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 236), static_cast<uint8_t>(r0));
    goto loc_8031DDC8;
}

loc_8031DD24:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8031DD2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8031DD54;
    }
}

loc_8031DD30:
{
}

loc_8031DD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8031DD64;
    }
}

loc_8031DD38:
{
}

loc_8031DD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8031DD74;
    }
}

loc_8031DD40:
{
}

loc_8031DD44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8031DD84;
    }
}

loc_8031DD48:
{
}

loc_8031DD4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8031DD9C;
    }
}

loc_8031DD50:
{
    goto loc_8031DDA8;
}

loc_8031DD54:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10360);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    goto loc_8031DDA8;
}

loc_8031DD64:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10264);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    goto loc_8031DDA8;
}

loc_8031DD74:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10168);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    goto loc_8031DDA8;
}

loc_8031DD84:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -10024);
    MemoryInline::FlatWrite32((r31 + 232), r0);
    r0 = (r13 + -25048);
    MemoryInline::FlatWrite32((r31 + 240), r0);
    goto loc_8031DDA8;
}

loc_8031DD9C:
{
    r3 = 0x805E0000u;
    r0 = (r3 + -9864);
    MemoryInline::FlatWrite32((r31 + 232), r0);
}

loc_8031DDA8:
{
    r0 = (r29 & 255);
}

loc_8031DDB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8031DDC0;
    }
}

loc_8031DDB4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 236), static_cast<uint8_t>(r0));
    goto loc_8031DDC8;
}

loc_8031DDC0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 236), static_cast<uint8_t>(r0));
}

loc_8031DDC8:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
}

loc_8031DDD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031DDE0;
    }
}

loc_8031DDD4:
{
    r3 = r30;
    ctx->lr = 0x8031DDDCu;
    if constexpr (KnownRegArgsCpuCall<0x8031E5DCu>(&func_8031E5DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8031E5DC_1A66 = func_8031E5DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031E5DC_1A66);
        r4 = static_cast<uint32_t>(regargs_result_8031E5DC_1A66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8031E5DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_8031DF04;
}

loc_8031DDE0:
{
    r27 = 0;
    r28 = r31;
    r29 = (r13 + -25044);
    goto loc_8031DE24;
}

loc_8031DDF0:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 236));
    r29_addr_2 = (r29 + r0);
    r4 = MemoryInline::FlatRead8(r29_addr_2);
    r4 = (r4 & 65535);
    r5 = 8;
    ctx->lr = 0x8031DE08u;
    if constexpr (KnownRegArgsCpuCall<0x800F8EC0u>(&func_800F8EC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800F8EC0_2303 = func_800F8EC0_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F8EC0_2303);
        r4 = static_cast<uint32_t>(regargs_result_800F8EC0_2303 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x800F8EC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
}

loc_8031DE0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031DE1C;
    }
}

loc_8031DE10:
{
    r3 = r30;
    ctx->lr = 0x8031DE18u;
    if constexpr (KnownRegArgsCpuCall<0x8031E5DCu>(&func_8031E5DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8031E5DC_2AB9 = func_8031E5DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031E5DC_2AB9);
        r4 = static_cast<uint32_t>(regargs_result_8031E5DC_2AB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8031E5DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_8031DF04;
}

loc_8031DE1C:
{
    r28 = (r28 + 56);
    r27 = (r27 + 1);
}

loc_8031DE24:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8031DE2C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8031DDF0;
    }
}

loc_8031DE30:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    MemoryInline::FlatWrite8((r31 + 244), static_cast<uint8_t>(r0));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11312));
    goto loc_8031DE70;
}

loc_8031DE60:
{
    r3 = MemoryInline::FlatRead8((r31 + 244));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 244), static_cast<uint8_t>(r0));
    r4 = (r4 + 16);
}

loc_8031DE70:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r3 = (r0 + r4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8031DE80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8031DE60;
    }
}

loc_8031DE88:
{
    r27 = 0;
    r28 = r31;
    r29 = 0;
    goto loc_8031DEDC;
}

loc_8031DE98:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r3 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11308));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r29);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r29);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r29);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r29));
    r28 = (r28 + 56);
    r27 = (r27 + 1);
}

loc_8031DEDC:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8031DEE4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8031DE98;
    }
}

loc_8031DEE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 228), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 229), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 230), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8031DF04u;
    if constexpr (KnownRegArgsCpuCall<0x8031DF1Cu>(&func_8031DF1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8031DF1C_3D2C = func_8031DF1C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031DF1C_3D2C);
        r4 = static_cast<uint32_t>(regargs_result_8031DF1C_3D2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8031DF1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
}

loc_8031DF04:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031DC80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031DC80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031DC80 func_8031DC80 preserves=true fpr_mask=0x00000000
