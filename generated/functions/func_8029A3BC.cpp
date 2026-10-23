#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F174(CpuContext* ctx);
extern "C" uint64_t func_8012F174_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027E284(CpuContext* ctx);
extern "C" uint64_t func_8027E284_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029A200(CpuContext* ctx);
extern "C" uint64_t func_8029A200_ra10_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8029A2D8(CpuContext* ctx);
extern "C" uint32_t func_8029A2D8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029CBC4(CpuContext* ctx);
extern "C" uint64_t func_8029CBC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8029CDE0(CpuContext* ctx);
extern "C" uint64_t func_8029CDE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8029D174(CpuContext* ctx);
extern "C" uint64_t func_8029D174_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8029D544(CpuContext* ctx);
extern "C" uint64_t func_8029D544_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8029D760(CpuContext* ctx);
extern "C" uint32_t func_8029D760_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029F0E8(CpuContext* ctx);
extern "C" uint64_t func_8029F0E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8029A3BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8029A3BC;

loc_8029A3BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r3 = 0x806B0000u;
    r30 = (r3 + -4824);
    r29 = MemoryInline::FlatRead32((r3 + -4824));
    ctx->lr = 0x8029A3E0u;
    if constexpr (KnownRegArgsCpuCall<0x8029A200u>(&func_8029A200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029A200_122F = func_8029A200_ra10_0_18_0(ctx, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029A200_122F);
        r4 = static_cast<uint32_t>(regargs_result_8029A200_122F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029A200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 1;
    ctx->lr = 0x8029A3E8u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_1522 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_1522;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029A3EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8029A7D4;
    }
}

loc_8029A3F0:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    goto loc_8029A41C;
}

loc_8029A3F8:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
}

loc_8029A400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A418;
    }
}

loc_8029A404:
{
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8029A40C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8029A418;
    }
}

loc_8029A410:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
}

loc_8029A418:
{
    r4 = MemoryInline::FlatRead32(r4);
}

loc_8029A41C:
{
}

loc_8029A420:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8029A3F8;
    }
}

loc_8029A424:
{
    r28 = 0x806C0000u;
    r31 = (r28 + -2080);
    goto loc_8029A7CC;
}

loc_8029A430:
{
    r3 = r29;
    ctx->lr = 0x8029A438u;
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
    InvokeDirectCpu<0x80299F5Cu>(ctx);
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

loc_8029A43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A7C8;
    }
}

loc_8029A440:
{
    r3 = 2;
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
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r25 = r3;
    r3 = 2;
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
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r27 = (r3 & 65535);
    r26 = 0;
    goto loc_8029A560;
}

loc_8029A460:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8029A468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A46C:
{
    r0 = MemoryInline::FlatRead8((r25 + 926));
}

loc_8029A474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A478:
{
    r3 = MemoryInline::FlatRead8((r29 + 15));
    r4 = MemoryInline::FlatRead8((r25 + 22));
    ctx->lr = 0x8029A484u;
    if constexpr (KnownRegArgsCpuCall<0x8029D760u>(&func_8029D760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029D760_2925 = func_8029D760_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029D760_2925;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029D760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8029A488:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A48C:
{
    r0 = MemoryInline::FlatRead8((r25 + 9));
}

loc_8029A494:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_8029A558;
    }
}

loc_8029A498:
{
    r3 = (r25 + 1340);
    r4 = MemoryInline::FlatRead16((r29 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8029F0E8u>(&func_8029F0E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F0E8_2CFA = func_8029F0E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029F0E8_2CFA);
        r4 = static_cast<uint32_t>(regargs_result_8029F0E8_2CFA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029F0E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8029A4A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A4AC:
{
    r3 = MemoryInline::FlatRead8((r29 + 66));
    r0 = (r3 + -10);
}

loc_8029A4B8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029A558;
    }
}

loc_8029A4BC:
{
    r0 = (r3 + -14);
}

loc_8029A4C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029A4D0;
    }
}

loc_8029A4C8:
{
}

loc_8029A4CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(32))) {
        goto loc_8029A4E4;
    }
}

loc_8029A4D0:
{
    r3 = r25;
    // inline leaf 0x8027C094 (13 guest instruction(s))
}

loc_inl3_0x8027C094:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl3_0x8027C09C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_inl3_0x8027C0C0;
    }
}

loc_inl3_0x8027C0A0:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -5);
}

loc_inl3_0x8027C0AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl3_0x8027C0B8;
    }
}

loc_inl3_0x8027C0B0:
{
}

loc_inl3_0x8027C0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_inl3_0x8027C0C0;
    }
}

loc_inl3_0x8027C0B8:
{
    r3 = 1;
    goto loc_inl3_cont_8027C094;
}

loc_inl3_0x8027C0C0:
{
    r3 = 0;
}

loc_inl3_cont_8027C094:
{
    // end of inlined leaf 0x8027C094
}

loc_8029A4DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A4E0:
{
    goto loc_8029A4F4;
}

loc_8029A4E4:
{
    r3 = r25;
    ctx->lr = 0x8029A4ECu;
    if constexpr (KnownRegArgsCpuCall<0x8027E284u>(&func_8027E284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E284_36DB = func_8027E284_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027E284_36DB);
        r4 = static_cast<uint32_t>(regargs_result_8027E284_36DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E284u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029A4F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8029A558;
    }
}

loc_8029A4F4:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_8029A4FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A50C;
    }
}

loc_8029A500:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8029A508:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r25))) {
        goto loc_8029A524;
    }
}

loc_8029A50C:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8029A514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A538;
    }
}

loc_8029A518:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8029A520:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_8029A538;
    }
}

loc_8029A524:
{
    r3 = r29;
    r4 = 64;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A534:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A538:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8029F5E0 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 49));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8029F5E0
}

loc_8029A548:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A558;
    }
}

loc_8029A54C:
{
    r3 = r29;
    r4 = r25;
    ctx->lr = 0x8029A558u;
    if constexpr (KnownRegArgsCpuCall<0x8029CBC4u>(&func_8029CBC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8029CBC4_4176 = func_8029CBC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029CBC4_4176);
        r4 = static_cast<uint32_t>(regargs_result_8029CBC4_4176 >> 32);
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
        InvokeDirectCpu<0x8029CBC4u>(ctx);
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

loc_8029A558:
{
    r25 = (r25 + 2848);
    r26 = (r26 + 1);
}

loc_8029A560:
{
}

loc_8029A564:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r27))) {
        goto loc_8029A460;
    }
}

loc_8029A568:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl6_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl6_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CFB10;
    }
}

loc_inl6_0x800CFB08:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl6_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl6_0x800CFB24;
    }
}

loc_inl6_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB24:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl6_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r25 = r3;
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
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_4);
}

loc_inl7_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r27 = (r3 & 65535);
    r26 = 0;
    goto loc_8029A67C;
}

loc_8029A588:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8029A590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A594:
{
    r3 = MemoryInline::FlatRead8((r29 + 15));
    r4 = MemoryInline::FlatRead8((r25 + 481));
    ctx->lr = 0x8029A5A0u;
    if constexpr (KnownRegArgsCpuCall<0x8029D760u>(&func_8029D760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029D760_51A7 = func_8029D760_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029D760_51A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029D760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8029A5A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A5A8:
{
    r3 = (r25 + 2752);
    r4 = MemoryInline::FlatRead16((r29 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8029F0E8u>(&func_8029F0E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F0E8_54B9 = func_8029F0E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029F0E8_54B9);
        r4 = static_cast<uint32_t>(regargs_result_8029F0E8_54B9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029F0E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8029A5B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A5BC:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r29 + 66));
    r4 = (r4 & 65535);
    ctx->lr = 0x8029A5CCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F174u>(&func_8012F174)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F174_5890 = func_8012F174_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012F174_5890);
        r4 = static_cast<uint32_t>(regargs_result_8012F174_5890 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012F174u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8029A5D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A5D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_8029A5DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029A5EC;
    }
}

loc_8029A5E0:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8029A5E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r25))) {
        goto loc_8029A604;
    }
}

loc_8029A5EC:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8029A5F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029A618;
    }
}

loc_8029A5F8:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8029A600:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_8029A618;
    }
}

loc_8029A604:
{
    r3 = r29;
    r4 = 64;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A614:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A618:
{
    r3 = r29;
    r4 = 2;
    // inline leaf 0x8029F5E0 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 49));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8029F5E0
}

loc_8029A628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A62C:
{
    r3 = MemoryInline::FlatRead8((r29 + 66));
    r0 = (r3 + -10);
}

loc_8029A638:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029A648;
    }
}

loc_8029A63C:
{
}

loc_8029A640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_8029A65C;
    }
}

loc_8029A644:
{
    goto loc_8029A668;
}

loc_8029A648:
{
    r3 = r25;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_8029A654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A674;
    }
}

loc_8029A658:
{
    goto loc_8029A668;
}

loc_8029A65C:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
}

loc_8029A664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_8029A674;
    }
}

loc_8029A668:
{
    r3 = r29;
    r4 = r25;
    ctx->lr = 0x8029A674u;
    if constexpr (KnownRegArgsCpuCall<0x8029CDE0u>(&func_8029CDE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8029CDE0_6744 = func_8029CDE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029CDE0_6744);
        r4 = static_cast<uint32_t>(regargs_result_8029CDE0_6744 >> 32);
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
        InvokeDirectCpu<0x8029CDE0u>(ctx);
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

loc_8029A674:
{
    r25 = (r25 + 2840);
    r26 = (r26 + 1);
}

loc_8029A67C:
{
}

loc_8029A680:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r27))) {
        goto loc_8029A588;
    }
}

loc_8029A684:
{
    r3 = MemoryInline::FlatRead8((r29 + 66));
    r0 = (r3 + -10);
}

loc_8029A690:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029A7C8;
    }
}

loc_8029A694:
{
    r0 = MemoryInline::FlatRead8((r28 + -2080));
}

loc_8029A69C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A6A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 534));
}

loc_8029A6A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A6AC:
{
    r3 = MemoryInline::FlatRead8((r29 + 15));
    r4 = MemoryInline::FlatRead8((r31 + 420));
    ctx->lr = 0x8029A6B8u;
    if constexpr (KnownRegArgsCpuCall<0x8029D760u>(&func_8029D760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029D760_712C = func_8029D760_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029D760_712C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029D760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8029A6BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A6C0:
{
    r3 = (r31 + 760);
    r4 = MemoryInline::FlatRead16((r29 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8029F0E8u>(&func_8029F0E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F0E8_743D = func_8029F0E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029F0E8_743D);
        r4 = static_cast<uint32_t>(regargs_result_8029F0E8_743D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029F0E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8029A6D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A6D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 532));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8029A6DC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A6E0:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_8029A6E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8029A6F8;
    }
}

loc_8029A6EC:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8029A6F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8029A710;
    }
}

loc_8029A6F8:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8029A700:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8029A724;
    }
}

loc_8029A704:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8029A70C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_8029A724;
    }
}

loc_8029A710:
{
    r3 = r29;
    r4 = 64;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A724:
{
    r3 = r29;
    r4 = 4;
    // inline leaf 0x8029F5E0 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 49));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8029F5E0
}

loc_8029A734:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A744;
    }
}

loc_8029A738:
{
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x8029A744u;
    if constexpr (KnownRegArgsCpuCall<0x8029D544u>(&func_8029D544)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8029D544_8002 = func_8029D544_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029D544_8002);
        r4 = static_cast<uint32_t>(regargs_result_8029D544_8002 >> 32);
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
        InvokeDirectCpu<0x8029D544u>(ctx);
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

loc_8029A744:
{
    r27 = MemoryInline::FlatRead32((r30 + 4));
    goto loc_8029A7C0;
}

loc_8029A74C:
{
    r3 = MemoryInline::FlatRead8((r29 + 66));
    r0 = (r3 + -10);
}

loc_8029A758:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029A7BC;
    }
}

loc_8029A75C:
{
    r0 = MemoryInline::FlatRead8((r27 + 5));
}

loc_8029A764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A7BC;
    }
}

loc_8029A768:
{
    r3 = MemoryInline::FlatRead8((r29 + 15));
    r4 = MemoryInline::FlatRead8((r27 + 8));
    ctx->lr = 0x8029A774u;
    if constexpr (KnownRegArgsCpuCall<0x8029D760u>(&func_8029D760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029D760_88A5 = func_8029D760_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029D760_88A5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029D760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8029A778:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A7BC;
    }
}

loc_8029A77C:
{
    r3 = (r27 + 22);
    r4 = MemoryInline::FlatRead16((r29 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8029F0E8u>(&func_8029F0E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F0E8_8BB5 = func_8029F0E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029F0E8_8BB5);
        r4 = static_cast<uint32_t>(regargs_result_8029F0E8_8BB5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029F0E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8029A78C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A7BC;
    }
}

loc_8029A790:
{
    r0 = MemoryInline::FlatRead16((r27 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8029A798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A7BC;
    }
}

loc_8029A79C:
{
    r3 = r27;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8029A2D8u>(&func_8029A2D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029A2D8_903D = func_8029A2D8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029A2D8_903D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029A2D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8029A7AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029A7BC;
    }
}

loc_8029A7B0:
{
    r3 = r29;
    r4 = r27;
    ctx->lr = 0x8029A7BCu;
    if constexpr (KnownRegArgsCpuCall<0x8029D174u>(&func_8029D174)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8029D174_9328 = func_8029D174_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029D174_9328);
        r4 = static_cast<uint32_t>(regargs_result_8029D174_9328 >> 32);
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
        InvokeDirectCpu<0x8029D174u>(ctx);
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

loc_8029A7BC:
{
    r27 = MemoryInline::FlatRead32(r27);
}

loc_8029A7C0:
{
}

loc_8029A7C4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8029A74C;
    }
}

loc_8029A7C8:
{
    r29 = MemoryInline::FlatRead32(r29);
}

loc_8029A7CC:
{
}

loc_8029A7D0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8029A430;
    }
}

loc_8029A7D4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029A3BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029A3BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF00FFFF fpr_write=0xFF00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029A3BC func_8029A3BC preserves=true fpr_mask=0x00000000
