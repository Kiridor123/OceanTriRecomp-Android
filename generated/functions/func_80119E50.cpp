#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD254(CpuContext* ctx);
extern "C" uint64_t func_800DD254_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_800DDD1C(CpuContext* ctx);
extern "C" uint64_t func_800DDD1C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011A3B0(CpuContext* ctx);
extern "C" uint64_t func_8011A3B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8011AD64(CpuContext* ctx);
extern "C" uint64_t func_8011AD64_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80119E50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80119E50;

loc_80119E50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = MemoryInline::FlatRead32((r30 + 56));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148638324);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80119E84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8011A2EC;
    }
}

loc_80119E88:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3 = 0x805A0000u;
    r28 = (r3 + 3760);
    r28_addr_1 = (r28 + r4);
    r27 = MemoryInline::FlatRead16(r28_addr_1);
    r3 = 0x805A0000u;
    r29 = (r3 + 3792);
    r29_addr_1 = (r29 + r4);
    r26 = MemoryInline::FlatRead16(r29_addr_1);
}

loc_80119EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80119EF0;
    }
}

loc_80119EBC:
{
}

loc_80119EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8011A018;
    }
}

loc_80119EC4:
{
}

loc_80119EC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8011A0A8;
    }
}

loc_80119ECC:
{
}

loc_80119ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8011A10C;
    }
}

loc_80119ED4:
{
}

loc_80119ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8011A128;
    }
}

loc_80119EDC:
{
}

loc_80119EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8011A1BC;
    }
}

loc_80119EE4:
{
}

loc_80119EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8011A1CC;
    }
}

loc_80119EEC:
{
    goto loc_8011A1F4;
}

loc_80119EF0:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80119EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80119F1C;
    }
}

loc_80119F00:
{
}

loc_80119F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80119F58;
    }
}

loc_80119F08:
{
}

loc_80119F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80119F94;
    }
}

loc_80119F10:
{
}

loc_80119F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_80119FD0;
    }
}

loc_80119F18:
{
    goto loc_8011A00C;
}

loc_80119F1C:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80119F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80119F34;
    }
}

loc_80119F28:
{
}

loc_80119F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80119F40;
    }
}

loc_80119F30:
{
    goto loc_80119F4C;
}

loc_80119F34:
{
    r27 = 140;
    r26 = 53;
    goto loc_8011A1F4;
}

loc_80119F40:
{
    r27 = 139;
    r26 = 17;
    goto loc_8011A1F4;
}

loc_80119F4C:
{
    r3 = r30;
    ctx->lr = 0x80119F54u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_1C6B = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_1C6B);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_1C6B >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_80119F58:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80119F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80119F70;
    }
}

loc_80119F64:
{
}

loc_80119F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80119F7C;
    }
}

loc_80119F6C:
{
    goto loc_80119F88;
}

loc_80119F70:
{
    r27 = 2472;
    r26 = 181;
    goto loc_8011A1F4;
}

loc_80119F7C:
{
    r27 = 2476;
    r26 = 182;
    goto loc_8011A1F4;
}

loc_80119F88:
{
    r3 = r30;
    ctx->lr = 0x80119F90u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_25EF = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_25EF);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_25EF >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_80119F94:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80119F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80119FAC;
    }
}

loc_80119FA0:
{
}

loc_80119FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80119FB8;
    }
}

loc_80119FA8:
{
    goto loc_80119FC4;
}

loc_80119FAC:
{
    r27 = 142;
    r26 = 128;
    goto loc_8011A1F4;
}

loc_80119FB8:
{
    r27 = 141;
    r26 = 132;
    goto loc_8011A1F4;
}

loc_80119FC4:
{
    r3 = r30;
    ctx->lr = 0x80119FCCu;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_2F72 = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_2F72);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_2F72 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_80119FD0:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80119FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80119FE8;
    }
}

loc_80119FDC:
{
}

loc_80119FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80119FF4;
    }
}

loc_80119FE4:
{
    goto loc_8011A000;
}

loc_80119FE8:
{
    r27 = 2479;
    r26 = 183;
    goto loc_8011A1F4;
}

loc_80119FF4:
{
    r27 = 2483;
    r26 = 184;
    goto loc_8011A1F4;
}

loc_8011A000:
{
    r3 = r30;
    ctx->lr = 0x8011A008u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_38F6 = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_38F6);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_38F6 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A00C:
{
    r3 = r30;
    ctx->lr = 0x8011A014u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_4056 = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_4056);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_4056 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A018:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A020:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8011A09C;
    }
}

loc_8011A024:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 3904);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8011A09Cu:
        goto loc_8011A09C;
        break;
    case 0x8011A03Cu:
        goto loc_8011A03C;
        break;
    case 0x8011A048u:
        goto loc_8011A048;
        break;
    case 0x8011A054u:
        goto loc_8011A054;
        break;
    case 0x8011A060u:
        goto loc_8011A060;
        break;
    case 0x8011A06Cu:
        goto loc_8011A06C;
        break;
    case 0x8011A078u:
        goto loc_8011A078;
        break;
    case 0x8011A084u:
        goto loc_8011A084;
        break;
    case 0x8011A090u:
        goto loc_8011A090;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8011A03C:
{
    r27 = 899;
    r26 = 72;
    goto loc_8011A1F4;
}

loc_8011A048:
{
    r27 = 900;
    r26 = 77;
    goto loc_8011A1F4;
}

loc_8011A054:
{
    r27 = 901;
    r26 = 78;
    goto loc_8011A1F4;
}

loc_8011A060:
{
    r27 = 902;
    r26 = 70;
    goto loc_8011A1F4;
}

loc_8011A06C:
{
    r27 = 903;
    r26 = 74;
    goto loc_8011A1F4;
}

loc_8011A078:
{
    r27 = 931;
    r26 = 80;
    goto loc_8011A1F4;
}

loc_8011A084:
{
    r27 = 963;
    r26 = 81;
    goto loc_8011A1F4;
}

loc_8011A090:
{
    r27 = 918;
    r26 = 79;
    goto loc_8011A1F4;
}

loc_8011A09C:
{
    r3 = r30;
    ctx->lr = 0x8011A0A4u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_5164 = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_5164);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_5164 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A0A8:
{
    r3 = 0;
    r4 = (r30 + 24);
    ctx->lr = 0x8011A0B4u;
    if constexpr (KnownRegArgsCpuCall<0x800DD254u>(&func_800DD254)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DD254_58D8 = func_800DD254_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD254_58D8);
        r4 = static_cast<uint32_t>(regargs_result_800DD254_58D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DD254u>(ctx);
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
        ctr = ctx->ctr;
    }
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_8011A0C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8011A0D0;
    }
}

loc_8011A0C4:
{
}

loc_8011A0C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_8011A0E8;
    }
}

loc_8011A0CC:
{
    goto loc_8011A1F4;
}

loc_8011A0D0:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A0D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8011A1F4;
    }
}

loc_8011A0DC:
{
    r27 = 1364;
    r26 = 101;
    goto loc_8011A1F4;
}

loc_8011A0E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A0F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8011A100;
    }
}

loc_8011A0F4:
{
    r27 = 2432;
    r26 = 177;
    goto loc_8011A1F4;
}

loc_8011A100:
{
    r27 = 2440;
    r26 = 178;
    goto loc_8011A1F4;
}

loc_8011A10C:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_8011A118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_8011A1F4;
    }
}

loc_8011A11C:
{
    r27 = 2532;
    r26 = 163;
    goto loc_8011A1F4;
}

loc_8011A128:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_8011A134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8011A144;
    }
}

loc_8011A138:
{
}

loc_8011A13C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(17))) {
        goto loc_8011A180;
    }
}

loc_8011A140:
{
    goto loc_8011A1F4;
}

loc_8011A144:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A14C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011A15C;
    }
}

loc_8011A150:
{
}

loc_8011A154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8011A168;
    }
}

loc_8011A158:
{
    goto loc_8011A174;
}

loc_8011A15C:
{
    r27 = 2496;
    r26 = 61;
    goto loc_8011A1F4;
}

loc_8011A168:
{
    r27 = 2497;
    r26 = 116;
    goto loc_8011A1F4;
}

loc_8011A174:
{
    r3 = r30;
    ctx->lr = 0x8011A17Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_68FA = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_68FA);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_68FA >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A180:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A188:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011A198;
    }
}

loc_8011A18C:
{
}

loc_8011A190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8011A1A4;
    }
}

loc_8011A194:
{
    goto loc_8011A1B0;
}

loc_8011A198:
{
    r27 = 2529;
    r26 = 187;
    goto loc_8011A1F4;
}

loc_8011A1A4:
{
    r27 = 2530;
    r26 = 188;
    goto loc_8011A1F4;
}

loc_8011A1B0:
{
    r3 = r30;
    ctx->lr = 0x8011A1B8u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_727E = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_727E);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_727E >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A1BC:
{
    r3 = 10;
    r4 = (r30 + 24);
    ctx->lr = 0x8011A1C8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDD1Cu>(&func_800DDD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800DDD1C_79D6 = func_800DDD1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DDD1C_79D6);
        r4 = static_cast<uint32_t>(regargs_result_800DDD1C_79D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    }
    goto loc_8011A1F4;
}

loc_8011A1CC:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_8011A1D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011A1EC;
    }
}

loc_8011A1D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r28_addr_2 = (r28 + r0);
    r27 = MemoryInline::FlatRead16(r28_addr_2);
    r29_addr_2 = (r29 + r0);
    r26 = MemoryInline::FlatRead16(r29_addr_2);
    goto loc_8011A1F4;
}

loc_8011A1EC:
{
    r27 = 1639;
    r26 = 22;
}

loc_8011A1F4:
{
    r29 = 0;
    r28 = r31;
    goto loc_8011A238;
}

loc_8011A200:
{
    r3 = (r27 & 65535);
    r4 = r26;
    r5 = 0;
    ctx->lr = 0x8011A210u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_8137 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_8137);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_8137 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
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
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r28 + 4), r3);
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_8011A21C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011A22C;
    }
}

loc_8011A220:
{
    r3 = r30;
    ctx->lr = 0x8011A228u;
    if constexpr (KnownRegArgsCpuCall<0x8011AD64u>(&func_8011AD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011AD64_8959 = func_8011AD64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011AD64_8959);
        r4 = static_cast<uint32_t>(regargs_result_8011AD64_8959 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011AD64u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8011A2EC;
}

loc_8011A22C:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8011A238:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8011A240:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8011A200;
    }
}

loc_8011A244:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_8011A24C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8011A2DC;
    }
}

loc_8011A250:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 3840);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8011A2DCu:
        goto loc_8011A2DC;
        break;
    case 0x8011A268u:
        goto loc_8011A268;
        break;
    case 0x8011A298u:
        goto loc_8011A298;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8011A268:
{
    r29 = 0;
    r28 = r31;
    goto loc_8011A288;
}

loc_8011A274:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r30 + 24);
    ctx->lr = 0x8011A280u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8011A288:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8011A290:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8011A274;
    }
}

loc_8011A294:
{
    goto loc_8011A2DC;
}

loc_8011A298:
{
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r3 = (r1 + 8);
    r4 = (r30 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r29 = 0;
    r28 = r31;
    goto loc_8011A2D0;
}

loc_8011A2BC:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r1 + 8);
    ctx->lr = 0x8011A2C8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8011A2D0:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8011A2D8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8011A2BC;
    }
}

loc_8011A2DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8011A2ECu;
    if constexpr (KnownRegArgsCpuCall<0x8011A3B0u>(&func_8011A3B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8011A3B0_A39A = func_8011A3B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011A3B0_A39A);
        r4 = static_cast<uint32_t>(regargs_result_8011A3B0_A39A >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8011A3B0u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_8011A2EC:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80119E50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80119E50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80119E50 func_80119E50 preserves=true fpr_mask=0x00000000
