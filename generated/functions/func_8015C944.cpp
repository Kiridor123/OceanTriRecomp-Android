#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8015C8F4(CpuContext* ctx);
extern "C" uint32_t func_8015C8F4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8015C944_ra58_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015C944;

loc_8015C944:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_8015C96C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8015C980;
    }
}

loc_8015C970:
{
    r4 = 207;
    r29 = 72;
    r30 = 48;
    goto loc_8015C9AC;
}

loc_8015C980:
{
    r3 = r31;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8015C98C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8015C9A0;
    }
}

loc_8015C990:
{
    r4 = 64;
    r29 = 188;
    r30 = 191;
    goto loc_8015C9AC;
}

loc_8015C9A0:
{
    r4 = 255;
    r29 = 255;
    r30 = 255;
}

loc_8015C9AC:
{
    r3 = MemoryInline::FlatRead8((r31 + 808));
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_D7B = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_D7B;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 809));
    r4 = r29;
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_10F4 = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_10F4;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 809), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 810));
    r4 = r30;
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_146F = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_146F;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 810), static_cast<uint8_t>(r3));
    r3 = r31;
    // inline leaf 0x80133770 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2378));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80133770
}

loc_8015C9F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015CA08;
    }
}

loc_8015C9F4:
{
    r4 = 255;
    r30 = 255;
    r29 = 255;
    r28 = 0;
    goto loc_8015CA18;
}

loc_8015CA08:
{
    r4 = 255;
    r30 = 0;
    r29 = 0;
    r28 = 255;
}

loc_8015CA18:
{
    r3 = MemoryInline::FlatRead8((r31 + 811));
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_1AA7 = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_1AA7;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 811), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 812));
    r4 = r30;
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_1E22 = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_1E22;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 812), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 813));
    r4 = r29;
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_219D = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_219D;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 813), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 814));
    r4 = r28;
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_2518 = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_2518;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 814), static_cast<uint8_t>(r3));
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_8015CA74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8015CA8C;
    }
}

loc_8015CA78:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26520));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26516));
    ctx->lr = 0x8015CA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F990_2A56 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2A56);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2A56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8015CA8C:
{
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(205));
}

loc_8015CA9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CB44;
    }
}

loc_8015CAA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015CAD8;
    }
}

loc_8015CAA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(201));
}

loc_8015CAA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CB14;
    }
}

loc_8015CAAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015CAC8;
    }
}

loc_8015CAB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8015CAB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CAFC;
    }
}

loc_8015CAB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015CB74;
    }
}

loc_8015CABC:
{
}

loc_8015CAC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(200))) {
        goto loc_8015CB08;
    }
}

loc_8015CAC4:
{
    goto loc_8015CB74;
}

loc_8015CAC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(203));
}

loc_8015CACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CB2C;
    }
}

loc_8015CAD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015CB38;
    }
}

loc_8015CAD4:
{
    goto loc_8015CB20;
}

loc_8015CAD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(220));
}

loc_8015CADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CB5C;
    }
}

loc_8015CAE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015CAF0;
    }
}

loc_8015CAE4:
{
}

loc_8015CAE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(218))) {
        goto loc_8015CB50;
    }
}

loc_8015CAEC:
{
    goto loc_8015CB74;
}

loc_8015CAF0:
{
}

loc_8015CAF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(225))) {
        goto loc_8015CB68;
    }
}

loc_8015CAF8:
{
    goto loc_8015CB74;
}

loc_8015CAFC:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20080);
    goto loc_8015CB78;
}

loc_8015CB08:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20120);
    goto loc_8015CB78;
}

loc_8015CB14:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20152);
    goto loc_8015CB78;
}

loc_8015CB20:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20176);
    goto loc_8015CB78;
}

loc_8015CB2C:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20200);
    goto loc_8015CB78;
}

loc_8015CB38:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20232);
    goto loc_8015CB78;
}

loc_8015CB44:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20264);
    goto loc_8015CB78;
}

loc_8015CB50:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20288);
    goto loc_8015CB78;
}

loc_8015CB5C:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20336);
    goto loc_8015CB78;
}

loc_8015CB68:
{
    r3 = 0x805A0000u;
    r28 = (r3 + 20360);
    goto loc_8015CB78;
}

loc_8015CB74:
{
    r28 = 0;
}

loc_8015CB78:
{
}

loc_8015CB7C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8015CBA0;
    }
}

loc_8015CB80:
{
    r3 = r31;
    // inline leaf 0x8012F950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 152));
    // end of inlined leaf 0x8012F950
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80052364_3DF7 = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_3DF7;
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
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    goto loc_8015CBA4;
}

loc_8015CBA0:
{
    r0 = 0;
}

loc_8015CBA4:
{
    r3 = MemoryInline::FlatRead8((r31 + 815));
    r4 = (r0 & 255);
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x8015C8F4u>(&func_8015C8F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8015C8F4_438B = func_8015C8F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8015C8F4_438B;
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
        InvokeDirectCpu<0x8015C8F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 815), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8015C944(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8015C944_ra58_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000DF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015C944 func_8015C944 preserves=true fpr_mask=0x00000000
