#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80485F2C(CpuContext* ctx);
extern "C" uint64_t func_80485F2C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80486008(CpuContext* ctx);
extern "C" uint64_t func_80486008_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048DB74(CpuContext* ctx);
extern "C" uint64_t func_8048DB74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80486410_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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

    goto loc_80486410;

loc_80486410:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r5 = 0x80740000u;
    r18 = r4;
    r27 = (r5 + -17608);
    r23 = 1;
    r0 = MemoryInline::FlatRead8((r27 + 6216));
    r21 = 0;
    r22 = MemoryInline::FlatRead32((r27 + 5812));
    r20 = 0;
}

loc_80486448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486670;
    }
}

loc_8048644C:
{
    r28 = MemoryInline::FlatRead8(r3);
    r17 = (r3 + 1);
    r26 = 0;
    r31 = 127;
    r16 = 0;
    goto loc_80486664;
}

loc_80486464:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_8048646C:
{
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 1));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 2));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 3));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 4));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 5));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r29 = MemoryInline::FlatRead8((r17 + 6));
    r30 = MemoryInline::FlatRead8((r17 + 7));
    r17 = (r17 + 8);
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_804864B0;
    }
}

loc_804864A8:
{
    r21 = MemoryInline::FlatRead8(r17);
    r17 = (r17 + 1);
}

loc_804864B0:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_804864B8:
{
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 1));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 2));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r17 + 4));
    r3 = MemoryInline::FlatRead8((r17 + 3));
    r17 = (r17 + 5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r3 + r0);
    r19 = (r0 & 65535);
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_804864F0;
    }
}

loc_804864E8:
{
    r20 = MemoryInline::FlatRead8(r17);
    r17 = (r17 + 1);
}

loc_804864F0:
{
    r3 = (r1 + 12);
    ctx->lr = 0x804864F8u;
    if constexpr (KnownRegArgsCpuCall<0x80485F2Cu>(&func_80485F2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80485F2C_157D = func_80485F2C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80485F2C_157D);
        r4 = static_cast<uint32_t>(regargs_result_80485F2C_157D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80485F2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_804864FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80486660;
    }
}

loc_80486500:
{
    r12 = MemoryInline::FlatRead32((r27 + 6220));
}

loc_80486508:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80486524;
    }
}

loc_8048650C:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x8048651Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r0 = (r3 & 255);
}

loc_80486520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486660;
    }
}

loc_80486524:
{
    r25 = (r27 + 5860);
    r24 = 0;
}

loc_8048652C:
{
    r0 = MemoryInline::FlatRead8((r25 + 26));
}

loc_80486534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486554;
    }
}

loc_80486538:
{
    r3 = (r25 + 10);
    r4 = (r1 + 12);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_2239 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_2239);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_2239 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8048654C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80486554;
    }
}

loc_80486550:
{
    goto loc_80486568;
}

loc_80486554:
{
    r24 = (r24 + 1);
    r25 = (r25 + 28);
}

loc_80486560:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(12))) {
        goto loc_8048652C;
    }
}

loc_80486564:
{
    r25 = 0;
}

loc_80486568:
{
}

loc_8048656C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80486584;
    }
}

loc_80486570:
{
    r3 = (r1 + 12);
    ctx->lr = 0x80486578u;
    if constexpr (KnownRegArgsCpuCall<0x80486008u>(&func_80486008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80486008_2825 = func_80486008_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80486008_2825);
        r4 = static_cast<uint32_t>(regargs_result_80486008_2825 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80486008u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    r25 = r3;
    r23 = 1;
    goto loc_80486598;
}

loc_80486584:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 5824));
}

loc_80486590:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80486598;
    }
}

loc_80486594:
{
    r23 = 0;
}

loc_80486598:
{
}

loc_8048659C:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_80486660;
    }
}

loc_804865A0:
{
    MemoryInline::FlatWrite8((r25 + 19), static_cast<uint8_t>(r29));
}

loc_804865A8:
{
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (r19 | 32768);
    MemoryInline::FlatWrite8((r25 + 20), static_cast<uint8_t>(r30));
    r24 = (r25 + 8);
    r4 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r25 + 21), static_cast<uint8_t>(r21));
    r3 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r25 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r25 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r25 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r25 + 8), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_804865E0;
    }
}

loc_804865D8:
{
    MemoryInline::FlatWrite8((r24 + 14), static_cast<uint8_t>(r20));
    goto loc_804865E4;
}

loc_804865E0:
{
    MemoryInline::FlatWrite8((r24 + 14), static_cast<uint8_t>(r31));
}

loc_804865E4:
{
    // inline leaf 0x80478ED0 (5 guest instruction(s))
    r3 = 0x80710000u;
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = MemoryInline::FlatRead32((r3 + -30680));
    // end of inlined leaf 0x80478ED0
    MemoryInline::FlatWrite32(r25, r3);
    r0 = MemoryInline::FlatRead32((r27 + 5824));
    MemoryInline::FlatWrite32((r25 + 4), r0);
    r0 = MemoryInline::FlatRead8((r27 + 6216));
    r3 = MemoryInline::FlatRead8((r27 + 6207));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80486600:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 6207), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80486628;
    }
}

loc_8048660C:
{
    r3 = MemoryInline::FlatRead8((r27 + 6198));
}

loc_80486614:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80486628;
    }
}

loc_80486618:
{
    r0 = (r0 & 255);
}

loc_80486620:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80486628;
    }
}

loc_80486624:
{
    ctx->lr = 0x80486628u;
    if constexpr (KnownRegArgsCpuCall<0x8048DB74u>(&func_8048DB74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048DB74_3A51 = func_8048DB74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048DB74_3A51);
        r4 = static_cast<uint32_t>(regargs_result_8048DB74_3A51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x8048DB74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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

loc_80486628:
{
}

loc_8048662C:
{
    MemoryInline::FlatWrite8((r25 + 24), static_cast<uint8_t>(r16));
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80486644;
    }
}

loc_80486634:
{
    r12 = r22;
    r3 = r24;
    ctr = r12;
    ctx->lr = 0x80486644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80486644:
{
    r12 = MemoryInline::FlatRead32((r27 + 5820));
}

loc_8048664C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80486660;
    }
}

loc_80486650:
{
    r3 = (r25 + 8);
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80486660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80486660:
{
    r26 = (r26 + 1);
}

loc_80486664:
{
    r0 = (r26 & 255);
}

loc_8048666C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r28))) {
        goto loc_80486464;
    }
}

loc_80486670:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_80486410(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80486410_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80486410 func_80486410 preserves=true fpr_mask=0x00000000
