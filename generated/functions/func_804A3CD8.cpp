#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493DD4(CpuContext* ctx);
extern "C" uint64_t func_80493DD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A0934(CpuContext* ctx);
extern "C" uint64_t func_804A0934_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A0BA4(CpuContext* ctx);
extern "C" uint32_t func_804A0BA4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A4400(CpuContext* ctx);
extern "C" uint32_t func_804A4400_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A4554(CpuContext* ctx);
extern "C" uint64_t func_804A4554_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A4690(CpuContext* ctx);
extern "C" uint64_t func_804A4690_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A49E0(CpuContext* ctx);
extern "C" uint64_t func_804A49E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A3CD8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r0_subfic_ra_7 = 0;
    uint32_t r0_subfic_ra_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A3CD8u);
    goto loc_804A3CD8;

loc_804A3CD8:
{
    MemoryInline::FlatWriteRam32((r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 500), r0);
    r11 = (r1 + 496);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r5;
    r21 = r3;
    r22 = r4;
    r3 = r6;
    r4 = r20;
    r5 = (r1 + 144);
    r24 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804A4690u>(&func_804A4690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4690_11C2 = func_804A4690_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A4690_11C2);
        r4 = static_cast<uint32_t>(regargs_result_804A4690_11C2 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4690u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A3D10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3D20;
    }
}

loc_804A3D14:
{
    r0 = MemoryInline::FlatRead16((r1 + 144));
}

loc_804A3D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A3D38;
    }
}

loc_804A3D20:
{
    r3 = r21;
    r4 = r22;
    r5 = 3;
    r6 = 0;
    ctx->lr = 0x804A3D34u;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4554_179A = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_179A);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_179A >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804A40DC;
}

loc_804A3D38:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & -256);
    r4 = MemoryInline::FlatRead16((r21 + 32));
    r0 = (r5 + r0);
    r29 = (r0 & 65535);
    r0 = (r4 + -10);
}

loc_804A3D58:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r0))) {
        goto loc_804A3D60;
    }
}

loc_804A3D5C:
{
    r29 = (r0 & 65535);
}

loc_804A3D60:
{
    r4 = r20;
    r5 = (r1 + 76);
    r3 = (r3 + 2);
    if constexpr (KnownRegArgsCpuCall<0x804A49E0u>(&func_804A49E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804A49E0_2101 = func_804A49E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A49E0_2101);
        r4 = static_cast<uint32_t>(regargs_result_804A49E0_2101 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A49E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804A3D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3D84;
    }
}

loc_804A3D78:
{
    r0 = MemoryInline::FlatRead16((r1 + 76));
}

loc_804A3D80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A3D9C;
    }
}

loc_804A3D84:
{
    r3 = r21;
    r4 = r22;
    r5 = 3;
    r6 = 0;
    ctx->lr = 0x804A3D98u;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4554_263C = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_263C);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_263C >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804A40DC;
}

loc_804A3D9C:
{
    r0 = 8;
    r6 = (r1 + 4);
    r5 = (r1 + 72);
    ctr = r0;
}

loc_804A3DAC:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A3DAC;
    }
}

loc_804A3DC0:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804A3DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A3E2C;
    }
}

loc_804A3DD4:
{
}

loc_804A3DD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804A3DF4;
    }
}

loc_804A3DDC:
{
    r3 = r21;
    r4 = r22;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x804A3DF0u;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4554_313A = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_313A);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_313A >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804A40DC;
}

loc_804A3DF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r0 = MemoryInline::FlatRead16((r21 + 1142));
    r3 = (r4 + r3);
    r3 = (r3 & 65535);
}

loc_804A3E10:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804A3FC0;
    }
}

loc_804A3E14:
{
    r3 = r21;
    r4 = r22;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x804A3E28u;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4554_3AB7 = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_3AB7);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_3AB7 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804A40DC;
}

loc_804A3E2C:
{
    r0 = 0;
    r28 = (r21 + 41);
    MemoryInline::FlatWrite16((r21 + 1142), static_cast<uint16_t>(r0));
    r4 = (r1 + 144);
    r3 = 0;
    ctx->lr = 0x804A3E44u;
    if constexpr (KnownRegArgsCpuCall<0x804A0934u>(&func_804A0934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A0934_42DB = func_804A0934_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0934_42DB);
        r4 = static_cast<uint32_t>(regargs_result_804A0934_42DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A0934u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r26 = r3;
    r31 = 8;
    r20 = 54;
    goto loc_804A3F64;
}

loc_804A3E54:
{
    r5 = (r1 + 72);
    r4 = (r1 + 4);
    ctr = r31;
}

loc_804A3E60:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A3E60;
    }
}

loc_804A3E74:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r23 = r28;
    r27 = 0;
    r28 = (r28 + 3);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    goto loc_804A3F14;
}

loc_804A3E8C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    r30 = (r1 + 76);
    r30 = (r30 + r0);
    r3 = r26;
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r5 = MemoryInline::FlatRead16((r30 + 4));
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_4CD0 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_4CD0;
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_804A3EAC:
{
    r25 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3F10;
    }
}

loc_804A3EB4:
{
    r0 = (r21 + 38);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r28 - r0);
    r0 = (r0 & 65535);
    r0_subfic_ra_3 = r0;
    r0 = (1000 - r0_subfic_ra_3);
    r3 = (r0 & 65535);
    r0 = (r3 + -6);
}

loc_804A3ED4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_804A3EE0;
    }
}

loc_804A3ED8:
{
    r24 = 1;
    goto loc_804A3F24;
}

loc_804A3EE0:
{
    r3 = r28;
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x804A4400u>(&func_804A4400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4400_51FA = func_804A4400_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A4400_51FA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4400u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r28 = r3;
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_804A3EFC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_804A3F10;
    }
}

loc_804A3F00:
{
    r3 = MemoryInline::FlatRead16((r25 + 8));
    r27 = (r27 + -1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_804A3F10:
{
    r27 = (r27 + 1);
}

loc_804A3F14:
{
    r0 = MemoryInline::FlatRead16((r1 + 76));
    r3 = (r27 & 65535);
}

loc_804A3F20:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804A3E8C;
    }
}

loc_804A3F24:
{
}

loc_804A3F28:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_804A3F6C;
    }
}

loc_804A3F2C:
{
    r3 = (r28 - r23);
    r0 = (r3 + -3);
    r3 = (r0 & 65535);
}

loc_804A3F38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3F50;
    }
}

loc_804A3F3C:
{
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r23 + 2), static_cast<uint8_t>(r3));
    goto loc_804A3F54;
}

loc_804A3F50:
{
    r28 = r23;
}

loc_804A3F54:
{
    r3 = r26;
    r4 = (r1 + 144);
    ctx->lr = 0x804A3F60u;
    if constexpr (KnownRegArgsCpuCall<0x804A0934u>(&func_804A0934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A0934_5B57 = func_804A0934_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0934_5B57);
        r4 = static_cast<uint32_t>(regargs_result_804A0934_5B57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A0934u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r26 = r3;
}

loc_804A3F64:
{
}

loc_804A3F68:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804A3E54;
    }
}

loc_804A3F6C:
{
    r0 = (r21 + 38);
    r0 = (r28 - r0);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16((r21 + 36), static_cast<uint16_t>(r0));
}

loc_804A3F80:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(255))) {
        goto loc_804A3FA0;
    }
}

loc_804A3F84:
{
    r3 = (r4 + -3);
    r4 = 54;
    r0 = (static_cast<int32_t>(r3) >> 8);
    MemoryInline::FlatWrite8((r21 + 38), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r21 + 39), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r21 + 40), static_cast<uint8_t>(r3));
    goto loc_804A3FC0;
}

loc_804A3FA0:
{
    r3 = (r4 + -3);
    r0 = (r4 + -1);
    r5 = 1;
    r4 = 53;
    MemoryInline::FlatWrite16((r21 + 1142), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r21 + 39), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r21 + 40), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r21 + 36), static_cast<uint16_t>(r0));
}

loc_804A3FC0:
{
    r3 = 2;
    ctx->lr = 0x804A3FC8u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80478000_6636 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_6636);
        r4 = static_cast<uint32_t>(regargs_result_80478000_6636 >> 32);
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
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_804A3FCC:
{
    r25 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A3FFC;
    }
}

loc_804A3FD4:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A3FE4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804A40DC;
    }
}

loc_804A3FE8:
{
    r4 = 0x80620000u;
    r3 = 655360;
    r4 = (r4 + -29556);
    ctx->lr = 0x804A3FF8u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_6BF2 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_6BF2);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_6BF2 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804A40DC;
}

loc_804A3FFC:
{
    r0 = 9;
    r28 = (r3 + 17);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r3 = 7;
    r30 = (r28 + 3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 255);
    MemoryInline::FlatWriteRam8(r28, static_cast<uint8_t>(r3));
    r31 = r30;
    MemoryInline::FlatWriteRam8((r28 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 2), static_cast<uint8_t>(r22));
    r0 = MemoryInline::FlatRead16((r21 + 36));
}

loc_804A402C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r29))) {
        goto loc_804A4034;
    }
}

loc_804A4030:
{
    r29 = r0;
}

loc_804A4034:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r0 = (r0_rot_10 & 255);
    r5 = (r29 & 65535);
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r29));
    r30 = (r30 + 4);
    r3 = r30;
    r0 = MemoryInline::FlatRead16((r21 + 1142));
    r4 = (r21 + r0);
    r4 = (r4 + 38);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r21 + 36));
    r3 = (r29 & 65535);
    r30 = (r30 + r3);
    r4 = MemoryInline::FlatRead16((r21 + 1142));
    r3 = (r0 - r29);
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804A4074:
{
    MemoryInline::FlatWrite16((r21 + 36), static_cast<uint16_t>(r3));
    r0 = (r4 + r29);
    MemoryInline::FlatWrite16((r21 + 1142), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A40A8;
    }
}

loc_804A4084:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 1142));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 1142));
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r30 = (r30 + 3);
    goto loc_804A40B4;
}

loc_804A40A8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r30 = (r30 + 1);
}

loc_804A40B4:
{
    r3 = (r30 - r31);
    r0 = (r30 - r28);
    r5 = (r3 + -2);
    r4 = r25;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 255);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r25 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r21 + 34));
    ctx->lr = 0x804A40DCu;
    if constexpr (KnownRegArgsCpuCall<0x80493DD4u>(&func_80493DD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80493DD4_7E4A = func_80493DD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493DD4_7E4A);
        r4 = static_cast<uint32_t>(regargs_result_80493DD4_7E4A >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80493DD4u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A40DC:
{
    r11 = (r1 + 496);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A3CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A3CD8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A3CD8 func_804A3CD8 preserves=true fpr_mask=0x00000000
