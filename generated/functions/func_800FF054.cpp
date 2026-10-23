#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9228(CpuContext* ctx);
extern "C" uint64_t func_800F9228_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800FEFDC(CpuContext* ctx);
extern "C" uint64_t func_800FEFDC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800FFD0C(CpuContext* ctx);
extern "C" uint64_t func_800FFD0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801000EC(CpuContext* ctx);
extern "C" uint64_t func_801000EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800FF054_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800FF054;

loc_800FF054:
{
    r3 = (r31 + r24);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 68), r30);
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r22));
}

loc_800FF0B4:
{
    r25 = (r25 + 1);
    r24 = (r24 + 4);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800FF0C4:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FEFDC;
    }
}

loc_800FF0C8:
{
    r0 = (r26 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(22));
}

loc_800FF0D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF0E4;
    }
}

loc_800FF0D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF878;
    }
}

loc_800FF0D8:
{
}

loc_800FF0DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(21))) {
        goto loc_800FF3C4;
    }
}

loc_800FF0E0:
{
    goto loc_800FF878;
}

loc_800FF0E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800FF0EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF11C;
    }
}

loc_800FF0F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF100;
    }
}

loc_800FF0F4:
{
}

loc_800FF0F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800FF10C;
    }
}

loc_800FF0FC:
{
    goto loc_800FF3B8;
}

loc_800FF100:
{
}

loc_800FF104:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_800FF3B8;
    }
}

loc_800FF108:
{
    goto loc_800FF12C;
}

loc_800FF10C:
{
    r0 = 15;
    r27 = 1619;
    r28 = 22;
    goto loc_800FF464;
}

loc_800FF11C:
{
    r0 = 13;
    r27 = 1640;
    r28 = 25;
    goto loc_800FF464;
}

loc_800FF12C:
{
    r3 = 3;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF13C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF198;
    }
}

loc_800FF140:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF154;
    }
}

loc_800FF144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF204;
    }
}

loc_800FF14C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF160;
    }
}

loc_800FF150:
{
    goto loc_800FF204;
}

loc_800FF154:
{
}

loc_800FF158:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF204;
    }
}

loc_800FF15C:
{
    goto loc_800FF1D0;
}

loc_800FF160:
{
    r3 = 1025;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF178u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_1A85 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_1A85);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_1A85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF204;
}

loc_800FF198:
{
    r3 = 1026;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF1B0u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_247F = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_247F);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_247F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF204;
}

loc_800FF1D0:
{
    r3 = 1027;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF1E8u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_2E79 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_2E79);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_2E79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800FF204:
{
    r3 = 0;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF270;
    }
}

loc_800FF218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF22C;
    }
}

loc_800FF21C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF2DC;
    }
}

loc_800FF224:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF238;
    }
}

loc_800FF228:
{
    goto loc_800FF2DC;
}

loc_800FF22C:
{
}

loc_800FF230:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF2DC;
    }
}

loc_800FF234:
{
    goto loc_800FF2A8;
}

loc_800FF238:
{
    r3 = 1028;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF250u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_3CB2 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_3CB2);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_3CB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF2DC;
}

loc_800FF270:
{
    r3 = 1029;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF288u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_46AC = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_46AC);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_46AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF2DC;
}

loc_800FF2A8:
{
    r3 = 1030;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF2C0u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_50A6 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_50A6);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_50A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800FF2DC:
{
    r3 = 2;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF2EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF344;
    }
}

loc_800FF2F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF304;
    }
}

loc_800FF2F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF2F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF3A8;
    }
}

loc_800FF2FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF310;
    }
}

loc_800FF300:
{
    goto loc_800FF3A8;
}

loc_800FF304:
{
}

loc_800FF308:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF3A8;
    }
}

loc_800FF30C:
{
    goto loc_800FF378;
}

loc_800FF310:
{
    r3 = 1031;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF328u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_5EDF = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_5EDF);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_5EDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF3A8;
}

loc_800FF344:
{
    r3 = 1032;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF35Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_68C5 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_68C5);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_68C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800FF3A8;
}

loc_800FF378:
{
    r3 = 1033;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF390u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_72AB = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_72AB);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_72AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800FF3A8:
{
    r0 = 7;
    r27 = 1653;
    r28 = 26;
    goto loc_800FF464;
}

loc_800FF3B8:
{
    r3 = r30;
    ctx->lr = 0x800FF3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
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
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
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
    goto loc_800FF888;
}

loc_800FF3C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_800FF3CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800FF458;
    }
}

loc_800FF3D0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13440);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FF3E8u:
        goto loc_800FF3E8;
        break;
    case 0x800FF3F8u:
        goto loc_800FF3F8;
        break;
    case 0x800FF408u:
        goto loc_800FF408;
        break;
    case 0x800FF418u:
        goto loc_800FF418;
        break;
    case 0x800FF458u:
        goto loc_800FF458;
        break;
    case 0x800FF428u:
        goto loc_800FF428;
        break;
    case 0x800FF438u:
        goto loc_800FF438;
        break;
    case 0x800FF448u:
        goto loc_800FF448;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FF3E8:
{
    r0 = 8;
    r27 = 619;
    r28 = 14;
    goto loc_800FF464;
}

loc_800FF3F8:
{
    r0 = 12;
    r27 = 26;
    r28 = 6;
    goto loc_800FF464;
}

loc_800FF408:
{
    r0 = 8;
    r27 = 627;
    r28 = 15;
    goto loc_800FF464;
}

loc_800FF418:
{
    r0 = 4;
    r27 = 635;
    r28 = 16;
    goto loc_800FF464;
}

loc_800FF428:
{
    r0 = 1;
    r27 = 639;
    r28 = 17;
    goto loc_800FF464;
}

loc_800FF438:
{
    r0 = 2;
    r27 = 640;
    r28 = 18;
    goto loc_800FF464;
}

loc_800FF448:
{
    r0 = 1;
    r27 = 642;
    r28 = 19;
    goto loc_800FF464;
}

loc_800FF458:
{
    r3 = r30;
    ctx->lr = 0x800FF460u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
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
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
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
    goto loc_800FF888;
}

loc_800FF464:
{
    MemoryInline::FlatWrite32((r31 + 124), r0);
    r25 = 0;
    r24 = 0;
    goto loc_800FF4B4;
}

loc_800FF474:
{
    r0 = (r25 + r27);
    r3 = (r0 & 65535);
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF48Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_8EC6 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_8EC6);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_8EC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r4 = (r31 + r24);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_800FF49C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FF4AC;
    }
}

loc_800FF4A0:
{
    r3 = r30;
    ctx->lr = 0x800FF4A8u;
    if constexpr (KnownRegArgsCpuCall<0x800FFD0Cu>(&func_800FFD0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800FFD0C_9803 = func_800FFD0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FFD0C_9803);
        r4 = static_cast<uint32_t>(regargs_result_800FFD0C_9803 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800FFD0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    goto loc_800FF888;
}

loc_800FF4AC:
{
    r25 = (r25 + 1);
    r24 = (r24 + 4);
}

loc_800FF4B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
}

loc_800FF4BC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FF474;
    }
}

loc_800FF4C0:
{
    r0 = (r26 & 255);
}

loc_800FF4C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_800FF734;
    }
}

loc_800FF4CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_800FF4D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800FF878;
    }
}

loc_800FF4D8:
{
    r3 = 3;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF540;
    }
}

loc_800FF4EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF500;
    }
}

loc_800FF4F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF4F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF5A4;
    }
}

loc_800FF4F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF50C;
    }
}

loc_800FF4FC:
{
    goto loc_800FF5A4;
}

loc_800FF500:
{
}

loc_800FF504:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF5A4;
    }
}

loc_800FF508:
{
    goto loc_800FF574;
}

loc_800FF50C:
{
    r3 = 1660;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF520u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_A761 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_A761);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_A761 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF5A4;
}

loc_800FF540:
{
    r3 = 1661;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF554u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_B135 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_B135);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_B135 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF5A4;
}

loc_800FF574:
{
    r3 = 1662;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF588u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_BB09 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_BB09);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_BB09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_800FF5A4:
{
    r3 = 0;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF5B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF60C;
    }
}

loc_800FF5B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF5CC;
    }
}

loc_800FF5BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF5C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF670;
    }
}

loc_800FF5C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF5D8;
    }
}

loc_800FF5C8:
{
    goto loc_800FF670;
}

loc_800FF5CC:
{
}

loc_800FF5D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF670;
    }
}

loc_800FF5D4:
{
    goto loc_800FF640;
}

loc_800FF5D8:
{
    r3 = 1663;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF5ECu;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_C91C = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_C91C);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_C91C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF670;
}

loc_800FF60C:
{
    r3 = 1664;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF620u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_D2F0 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_D2F0);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_D2F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF670;
}

loc_800FF640:
{
    r3 = 1665;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF654u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_DCC4 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_DCC4);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_DCC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r25 = (r25 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_800FF670:
{
    r3 = 2;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FF680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF6D4;
    }
}

loc_800FF684:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF698;
    }
}

loc_800FF688:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FF68C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FF878;
    }
}

loc_800FF690:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FF6A4;
    }
}

loc_800FF694:
{
    goto loc_800FF878;
}

loc_800FF698:
{
}

loc_800FF69C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF878;
    }
}

loc_800FF6A0:
{
    goto loc_800FF704;
}

loc_800FF6A4:
{
    r3 = 1666;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF6B8u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_EAD7 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_EAD7);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_EAD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF878;
}

loc_800FF6D4:
{
    r3 = 1667;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF6E8u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_F495 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_F495);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_F495 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF878;
}

loc_800FF704:
{
    r3 = 1668;
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF718u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_FE53 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_FE53);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_FE53 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 124), r0);
    goto loc_800FF878;
}

loc_800FF734:
{
}

loc_800FF738:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_800FF878;
    }
}

loc_800FF73C:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_800FF744:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FF878;
    }
}

loc_800FF748:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_800FF750:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FF878;
    }
}

loc_800FF754:
{
}

loc_800FF758:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800FF760;
    }
}

loc_800FF75C:
{
    goto loc_800FF878;
}

loc_800FF760:
{
    r25 = 0;
    r24 = 0;
    goto loc_800FF784;
}

loc_800FF76C:
{
    r3 = (r31 + r24);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0;
    ctx->lr = 0x800FF77Cu;
    if constexpr (KnownRegArgsCpuCall<0x801000ECu>(&func_801000EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801000EC_10CA5 = func_801000EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801000EC_10CA5);
        r4 = static_cast<uint32_t>(regargs_result_801000EC_10CA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x801000ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r25 = (r25 + 1);
    r24 = (r24 + 4);
}

loc_800FF784:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800FF78C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FF76C;
    }
}

loc_800FF790:
{
    r25 = 0;
    r24 = 0;
    goto loc_800FF7E4;
}

loc_800FF79C:
{
    r0 = MemoryInline::FlatRead32((r31 + 208));
    r0 = (r25 + r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF7BCu;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_116DB = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_116DB);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_116DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r4 = (r31 + r24);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800FF7CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FF7DC;
    }
}

loc_800FF7D0:
{
    r3 = r30;
    ctx->lr = 0x800FF7D8u;
    if constexpr (KnownRegArgsCpuCall<0x800FFD0Cu>(&func_800FFD0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800FFD0C_12017 = func_800FFD0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FFD0C_12017);
        r4 = static_cast<uint32_t>(regargs_result_800FFD0C_12017 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800FFD0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    goto loc_800FF888;
}

loc_800FF7DC:
{
    r25 = (r25 + 1);
    r24 = (r24 + 4);
}

loc_800FF7E4:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800FF7EC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FF79C;
    }
}

loc_800FF7F0:
{
    r25 = 0;
    r24 = 0;
    goto loc_800FF814;
}

loc_800FF7FC:
{
    r3 = (r31 + r24);
    r3 = MemoryInline::FlatRead32((r3 + 128));
    r4 = 1;
    ctx->lr = 0x800FF80Cu;
    if constexpr (KnownRegArgsCpuCall<0x801000ECu>(&func_801000EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801000EC_12A0C = func_801000EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801000EC_12A0C);
        r4 = static_cast<uint32_t>(regargs_result_801000EC_12A0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x801000ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r25 = (r25 + 1);
    r24 = (r24 + 4);
}

loc_800FF814:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
}

loc_800FF81C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FF7FC;
    }
}

loc_800FF820:
{
    r25 = 0;
    r24 = 0;
    goto loc_800FF86C;
}

loc_800FF82C:
{
    r0 = (r25 + r27);
    r3 = (r0 & 65535);
    r4 = r28;
    r5 = 1;
    r6 = 200;
    ctx->lr = 0x800FF844u;
    if constexpr (KnownRegArgsCpuCall<0x800F9228u>(&func_800F9228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800F9228_133E0 = func_800F9228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9228_133E0);
        r4 = static_cast<uint32_t>(regargs_result_800F9228_133E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800F9228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    r4 = (r31 + r24);
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_800FF854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FF864;
    }
}

loc_800FF858:
{
    r3 = r30;
    ctx->lr = 0x800FF860u;
    if constexpr (KnownRegArgsCpuCall<0x800FFD0Cu>(&func_800FFD0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800FFD0C_13D20 = func_800FFD0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FFD0C_13D20);
        r4 = static_cast<uint32_t>(regargs_result_800FFD0C_13D20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x800FFD0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
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
    goto loc_800FF888;
}

loc_800FF864:
{
    r25 = (r25 + 1);
    r24 = (r24 + 4);
}

loc_800FF86C:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
}

loc_800FF874:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_800FF82C;
    }
}

loc_800FF878:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x800FF888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
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
    InvokeDirectCpu<0x800FF938u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
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

loc_800FF888:
{
    r10 = MemoryInline::FlatRead32(r1);
    r11 = r10;
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800FEFDC:
{
    if constexpr (KnownRegArgsCpuCall<0x800FEFDCu>(&func_800FEFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800FEFDC_15778 = func_800FEFDC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FEFDC_15778);
        r4 = static_cast<uint32_t>(regargs_result_800FEFDC_15778 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800FEFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FF054(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FF054_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFF403FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FF054 func_800FF054 preserves=true fpr_mask=0x00000000
