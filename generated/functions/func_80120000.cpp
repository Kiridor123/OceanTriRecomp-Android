#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011F534(CpuContext* ctx);
extern "C" uint64_t func_8011F534_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011F5D4(CpuContext* ctx);
extern "C" uint64_t func_8011F5D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80123150(CpuContext* ctx);
extern "C" uint64_t func_80123150_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012E4C8(CpuContext* ctx);
extern "C" uint64_t func_8012E4C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80120000_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80120000;

loc_80120000:
{
    // inline leaf 0x8012D8B4 (10 guest instruction(s))
}

loc_inl0_0x8012D8B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl0_0x8012D8BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_inl0_0x8012D8D4;
    }
}

loc_inl0_0x8012D8C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_inl0_0x8012D8C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_inl0_0x8012D8D4;
    }
}

loc_inl0_0x8012D8CC:
{
    r3 = 1;
    goto loc_inl0_cont_8012D8B4;
}

loc_inl0_0x8012D8D4:
{
    r3 = 0;
}

loc_inl0_cont_8012D8B4:
{
    // end of inlined leaf 0x8012D8B4
}

loc_80120008:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120038;
    }
}

loc_8012000C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2094));
}

loc_80120014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120038;
    }
}

loc_80120018:
{
    r3 = r20;
    r4 = 2;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120028:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120038;
    }
}

loc_8012002C:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120038:
{
    r3 = MemoryInline::FlatRead8((r20 + 485));
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_80120048:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80120074;
    }
}

loc_8012004C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2076));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80120054:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80120074;
    }
}

loc_80120058:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 2);
}

loc_80120064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120074;
    }
}

loc_80120068:
{
    r0 = 22;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120074:
{
}

loc_80120078:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(10))) {
        goto loc_801200AC;
    }
}

loc_8012007C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 2);
}

loc_80120088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801200AC;
    }
}

loc_8012008C:
{
    r3 = r20;
    r4 = 1048576;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8012009C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801200AC;
    }
}

loc_801200A0:
{
    r0 = 25;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_801200AC:
{
}

loc_801200B0:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_801201B8;
    }
}

loc_801200B4:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_801200BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_8012010C;
    }
}

loc_801200C0:
{
    r0 = MemoryInline::FlatRead8((r20 + 482));
}

loc_801200C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012010C;
    }
}

loc_801200CC:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x80132240
}

loc_801200D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012010C;
    }
}

loc_801200DC:
{
    r3 = r20;
    r4 = 256;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_801200EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012010C;
    }
}

loc_801200F0:
{
    r3 = r20;
    ctx->lr = 0x801200F8u;
    if constexpr (KnownRegArgsCpuCall<0x8011F534u>(&func_8011F534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8011F534_1EAD = func_8011F534_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F534_1EAD);
        r4 = static_cast<uint32_t>(regargs_result_8011F534_1EAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        InvokeDirectCpu<0x8011F534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801200FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012010C;
    }
}

loc_80120100:
{
    r0 = 16;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_8012010C:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_80120114:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_80120158;
    }
}

loc_80120118:
{
    r3 = r20;
    ctx->lr = 0x80120120u;
    if constexpr (KnownRegArgsCpuCall<0x8011F5D4u>(&func_8011F5D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8011F5D4_26EF = func_8011F5D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F5D4_26EF);
        r4 = static_cast<uint32_t>(regargs_result_8011F5D4_26EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        InvokeDirectCpu<0x8011F5D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80120124:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120158;
    }
}

loc_80120128:
{
    r3 = r20;
    r4 = 16384;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120158;
    }
}

loc_8012013C:
{
    r0 = MemoryInline::FlatRead16((r20 + 2062));
    r0 = (r0 & 1);
}

loc_80120148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120158;
    }
}

loc_8012014C:
{
    r0 = 19;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
    goto loc_801201B8;
}

loc_80120158:
{
    r0 = MemoryInline::FlatRead8((r20 + 485));
}

loc_80120160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80120178;
    }
}

loc_80120164:
{
    r3 = r20;
    r4 = 0;
    ctx->lr = 0x80120170u;
    if constexpr (KnownRegArgsCpuCall<0x8012E4C8u>(&func_8012E4C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E4C8_3219 = func_8012E4C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E4C8_3219);
        r4 = static_cast<uint32_t>(regargs_result_8012E4C8_3219 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E4C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80120174:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_80120178:
{
    r3 = r20;
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x80132240
}

loc_80120184:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012019C;
    }
}

loc_80120188:
{
    r3 = r20;
    r4 = 2097152;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_11 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_80120198:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_8012019C:
{
    r3 = r20;
    r4 = 1;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_13 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_801201AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801201B8;
    }
}

loc_801201B0:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r20 + 2092), static_cast<uint16_t>(r0));
}

loc_801201B8:
{
}

loc_801201BC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_801201DC;
    }
}

loc_801201C0:
{
    r3 = r20;
    r4 = r25;
    // inline leaf 0x80120510 (2 guest instruction(s))
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // end of inlined leaf 0x80120510
    r0 = r3;
    r3 = r20;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x801201DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x801308BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_801201DC:
{
    r3 = r20;
    ctx->lr = 0x801201E4u;
    if constexpr (KnownRegArgsCpuCall<0x80123150u>(&func_80123150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        const auto regargs_result_80123150_4140 = func_80123150_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80123150_4140);
        r4 = static_cast<uint32_t>(regargs_result_80123150_4140 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80123150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r11 = (r1 + 80);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80120000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80120000_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x02903FFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80120000 func_80120000 preserves=true fpr_mask=0x00000000
