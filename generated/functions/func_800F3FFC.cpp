#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F30B8(CpuContext* ctx);
extern "C" uint64_t func_800F30B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F3668(CpuContext* ctx);
extern "C" uint64_t func_800F3668_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800F3CBC(CpuContext* ctx);
extern "C" uint64_t func_800F3CBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803AD958(CpuContext* ctx);
extern "C" uint32_t func_803AD958_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800F3FFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r21_entry = r21;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F3FFC;

loc_800F3FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r24 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F4018:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_800F439C;
    }
}

loc_800F401C:
{
    r0 = MemoryInline::FlatRead8((r24 + 68));
}

loc_800F4024:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F439C;
    }
}

loc_800F4028:
{
    ctx->lr = 0x800F402Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803AD958_E78 = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_E78;
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
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F4034:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_800F4058;
    }
}

loc_800F4038:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_800F4044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F439C;
    }
}

loc_800F4048:
{
    // inline leaf 0x8033A8B4 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = MemoryInline::FlatRead8((r3 + 5024));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8033A8B4
}

loc_800F4050:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F4058;
    }
}

loc_800F4054:
{
    goto loc_800F439C;
}

loc_800F4058:
{
    r3 = r24;
    ctx->lr = 0x800F4060u;
    if constexpr (KnownRegArgsCpuCall<0x800F3668u>(&func_800F3668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800F3668_162B = func_800F3668_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F3668_162B);
        r4 = static_cast<uint32_t>(regargs_result_800F3668_162B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F3668u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r24;
    ctx->lr = 0x800F4068u;
    if constexpr (KnownRegArgsCpuCall<0x800F3CBCu>(&func_800F3CBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F3CBC_1AA2 = func_800F3CBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F3CBC_1AA2);
        r4 = static_cast<uint32_t>(regargs_result_800F3CBC_1AA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F3CBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    r22 = 1;
    r21 = (r24 + 2);
}

loc_800F4070:
{
    r3 = r22;
    // inline leaf 0x800F0540 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + -26715));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x800F0540
}

loc_800F407C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F40E8;
    }
}

loc_800F4080:
{
    r3 = r22;
    // inline leaf 0x800F455C (16 guest instruction(s))
}

loc_inl4_0x800F455C:
{
    r0 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_inl4_0x800F4564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800F4570;
    }
}

loc_inl4_0x800F4568:
{
    r3 = 0;
    goto loc_inl4_cont_800F455C;
}

loc_inl4_0x800F4570:
{
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r3 + 255);
    r4 = (r0 & 255);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
}

loc_inl4_cont_800F455C:
{
    // end of inlined leaf 0x800F455C
}

loc_800F408C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F40E8;
    }
}

loc_800F4090:
{
    r3 = (r24 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_800F409C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800F40E8;
    }
}

loc_800F40A0:
{
    r0 = MemoryInline::FlatRead8((r24 + 68));
}

loc_800F40A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F40E8;
    }
}

loc_800F40AC:
{
    r0 = MemoryInline::FlatRead8((r24 + 69));
}

loc_800F40B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F40E8;
    }
}

loc_800F40B8:
{
    r0 = MemoryInline::FlatRead16((r21 + 88));
}

loc_800F40C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800F40E8;
    }
}

loc_800F40C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 76));
}

loc_800F40CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F40E8;
    }
}

loc_800F40D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 87));
}

loc_800F40D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F40E8;
    }
}

loc_800F40DC:
{
    r3 = r22;
    r4 = 3;
    ctx->lr = 0x800F40E8u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_2D9C = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_2D9C);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_2D9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
}

loc_800F40E8:
{
    r21 = (r21 + 2);
    r22 = (r22 + 1);
}

loc_800F40F4:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(3))) {
        goto loc_800F4070;
    }
}

loc_800F40F8:
{
    r22 = 0;
    r25 = r24;
    r28 = 0;
    r27 = 2;
    r26 = 1;
    r29 = 60;
    r21 = 65536;
    r30 = 3;
    r31 = 90;
}

loc_800F411C:
{
    r3 = MemoryInline::FlatRead16((r25 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800F4124:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F4130;
    }
}

loc_800F4128:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r25 + 84), static_cast<uint16_t>(r0));
}

loc_800F4130:
{
    r23 = (r24 + r22);
    r0 = MemoryInline::FlatRead8((r23 + 77));
}

loc_800F413C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F415C;
    }
}

loc_800F4140:
{
}

loc_800F4144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F41DC;
    }
}

loc_800F4148:
{
}

loc_800F414C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F429C;
    }
}

loc_800F4150:
{
}

loc_800F4154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800F4354;
    }
}

loc_800F4158:
{
    goto loc_800F438C;
}

loc_800F415C:
{
    r4 = MemoryInline::FlatRead8((r23 + 94));
}

loc_800F4164:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F438C;
    }
}

loc_800F4168:
{
    r0 = MemoryInline::FlatRead8((r23 + 100));
}

loc_800F4170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F4190;
    }
}

loc_800F4174:
{
    r0 = MemoryInline::FlatRead16((r25 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F417C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F438C;
    }
}

loc_800F4180:
{
    r3 = (r22 + 1);
    ctx->lr = 0x800F4188u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_3D76 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_3D76);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_3D76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r26));
    goto loc_800F41D0;
}

loc_800F4190:
{
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead8((r23 + 94));
}

loc_800F419C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F41D0;
    }
}

loc_800F41A0:
{
    r0 = MemoryInline::FlatRead8((r23 + 88));
}

loc_800F41A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800F41D0;
    }
}

loc_800F41AC:
{
    MemoryInline::FlatWrite16((r25 + 80), static_cast<uint16_t>(r28));
    r3 = (r22 + 1);
    r4 = 1;
    ctx->lr = 0x800F41BCu;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_47B0 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_47B0);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_47B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 65), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    goto loc_800F438C;
}

loc_800F41D0:
{
    r0 = MemoryInline::FlatRead8((r23 + 94));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r0));
    goto loc_800F438C;
}

loc_800F41DC:
{
    MemoryInline::FlatWrite16((r24 + 566), static_cast<uint16_t>(r29));
    r4 = MemoryInline::FlatRead8((r23 + 94));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800F41E8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_800F4240;
    }
}

loc_800F41EC:
{
    r0 = MemoryInline::FlatRead8((r23 + 88));
}

loc_800F41F4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F4234;
    }
}

loc_800F41F8:
{
    r0 = MemoryInline::FlatRead16((r25 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F4200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F421C;
    }
}

loc_800F4204:
{
    r3 = (r22 + 1);
    r4 = 21;
    ctx->lr = 0x800F4210u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_5457 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_5457);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_5457 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 65), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    goto loc_800F438C;
}

loc_800F421C:
{
    r3 = (r22 + 1);
    ctx->lr = 0x800F4224u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_5CB5 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_5CB5);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_5CB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r23 + 94));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r0));
    goto loc_800F438C;
}

loc_800F4234:
{
    r0 = MemoryInline::FlatRead8((r23 + 100));
}

loc_800F423C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F4254;
    }
}

loc_800F4240:
{
    r3 = (r22 + 1);
    r4 = 21;
    ctx->lr = 0x800F424Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_6614 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_6614);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_6614 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r27));
    goto loc_800F438C;
}

loc_800F4254:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800F4270;
    }
}

loc_800F4258:
{
    r3 = (r22 + 1);
    r4 = 21;
    ctx->lr = 0x800F4264u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_6E9A = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_6E9A);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_6E9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite16((r25 + 80), static_cast<uint16_t>(r31));
    goto loc_800F438C;
}

loc_800F4270:
{
    r0 = MemoryInline::FlatRead8((r23 + 25));
}

loc_800F4278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F4284;
    }
}

loc_800F427C:
{
}

loc_800F4280:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800F438C;
    }
}

loc_800F4284:
{
    r3 = (r22 + 1);
    ctx->lr = 0x800F428Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_7851 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_7851);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_7851 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r23 + 94));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r0));
    goto loc_800F438C;
}

loc_800F429C:
{
    r4 = MemoryInline::FlatRead8((r23 + 100));
}

loc_800F42A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F42D4;
    }
}

loc_800F42A8:
{
    r3 = MemoryInline::FlatRead8((r23 + 94));
}

loc_800F42B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F42D4;
    }
}

loc_800F42B4:
{
    r0 = MemoryInline::FlatRead8((r23 + 88));
}

loc_800F42BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800F42D4;
    }
}

loc_800F42C0:
{
    r3 = (r22 + 1);
    r4 = 20;
    ctx->lr = 0x800F42CCu;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_8335 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_8335);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_8335 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r26));
    goto loc_800F438C;
}

loc_800F42D4:
{
    r0 = MemoryInline::FlatRead16((r25 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F42DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F4318;
    }
}

loc_800F42E0:
{
}

loc_800F42E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800F4318;
    }
}

loc_800F42E8:
{
    r4 = MemoryInline::FlatRead8((r23 + 94));
}

loc_800F42F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F4318;
    }
}

loc_800F42F4:
{
    r0 = MemoryInline::FlatRead8((r23 + 88));
}

loc_800F42FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F4318;
    }
}

loc_800F4300:
{
    r3 = (r22 + 1);
    ctx->lr = 0x800F4308u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_8E6C = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_8E6C);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_8E6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r23 + 94));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r0));
    goto loc_800F438C;
}

loc_800F4318:
{
    r3 = MemoryInline::FlatRead8((r23 + 94));
}

loc_800F4320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F438C;
    }
}

loc_800F4324:
{
    r0 = MemoryInline::FlatRead8((r23 + 88));
}

loc_800F432C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800F438C;
    }
}

loc_800F4330:
{
    MemoryInline::FlatWrite16((r25 + 80), static_cast<uint16_t>(r28));
    r3 = (r22 + 1);
    r4 = 1;
    ctx->lr = 0x800F4340u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_98D4 = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_98D4);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_98D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 65), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    goto loc_800F438C;
}

loc_800F4354:
{
    r0 = (r21 + -1);
    MemoryInline::FlatWrite16((r25 + 90), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r25 + 80));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800F4364:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F4384;
    }
}

loc_800F4368:
{
    r3 = (r22 + 1);
    r4 = 1;
    ctx->lr = 0x800F4374u;
    if constexpr (KnownRegArgsCpuCall<0x800F30B8u>(&func_800F30B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        const auto regargs_result_800F30B8_A32D = func_800F30B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F30B8_A32D);
        r4 = static_cast<uint32_t>(regargs_result_800F30B8_A32D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F30B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
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
    MemoryInline::FlatWrite8((r23 + 65), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 77), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r23 + 88), static_cast<uint8_t>(r28));
    goto loc_800F438C;
}

loc_800F4384:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r25 + 80), static_cast<uint16_t>(r0));
}

loc_800F438C:
{
    r25 = (r25 + 2);
    r22 = (r22 + 1);
}

loc_800F4398:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(2))) {
        goto loc_800F411C;
    }
}

loc_800F439C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->gpr[21] = r21_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F3FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F3FFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F3FFC func_800F3FFC preserves=true fpr_mask=0x00000000
