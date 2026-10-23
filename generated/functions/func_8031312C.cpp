#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801E68B4(CpuContext* ctx);
extern "C" void func_801E68B4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029F810(CpuContext* ctx);
extern "C" uint32_t func_8029F810_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0714(CpuContext* ctx);
extern "C" uint64_t func_802E0714_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0910(CpuContext* ctx);
extern "C" uint64_t func_802E0910_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E09A8(CpuContext* ctx);
extern "C" uint64_t func_802E09A8_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E2344(CpuContext* ctx);
extern "C" uint64_t func_802E2344_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E2360(CpuContext* ctx);
extern "C" uint64_t func_802E2360_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8030E748(CpuContext* ctx);
extern "C" uint64_t func_8030E748_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80314F7C(CpuContext* ctx);
extern "C" uint64_t func_80314F7C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80316A78(CpuContext* ctx);
extern "C" uint64_t func_80316A78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80316E40(CpuContext* ctx);
extern "C" uint64_t func_80316E40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80317118(CpuContext* ctx);
extern "C" uint64_t func_80317118_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80317300(CpuContext* ctx);
extern "C" uint64_t func_80317300_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80317428(CpuContext* ctx);
extern "C" uint64_t func_80317428_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803177EC(CpuContext* ctx);
extern "C" uint64_t func_803177EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80317BE8(CpuContext* ctx);
extern "C" uint64_t func_80317BE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031833C(CpuContext* ctx);
extern "C" uint64_t func_8031833C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803187F4(CpuContext* ctx);
extern "C" uint64_t func_803187F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80318910(CpuContext* ctx);
extern "C" uint64_t func_80318910_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801E68B4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8029F810_statefree(uint32_t);
extern "C" void func_801E68B4_statefree_v0(uint32_t, uint32_t);
extern "C" uint64_t func_8029F810_statefree_v0(uint32_t);

extern "C" uint64_t func_8031312C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80313B80_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_23 = nullptr;
    uint8_t* guest_range_24 = nullptr;
    uint8_t* guest_range_25 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8031312C;

loc_8031312C:
{
    r3 = 202;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x8029F810
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3_addr_1 = (r3 + r26);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    r4 = (r1 + 48);
    r5 = (r1 + 28);
    ctx->lr = 0x8031314Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E0714u>(&func_802E0714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E0714_1EB9 = func_802E0714_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0714_1EB9);
        r4 = static_cast<uint32_t>(regargs_result_802E0714_1EB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = 201;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x8029F810
    r4 = (r1 + 48);
    ctx->lr = 0x8031315Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E09A8u>(&func_802E09A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E09A8_249F = func_802E09A8_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E09A8_249F);
        r4 = static_cast<uint32_t>(regargs_result_802E09A8_249F >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E09A8u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = 0;
}

loc_80313164:
{
    if ((static_cast<uint32_t>(r18) > static_cast<uint32_t>(8))) {
        goto loc_80313AC0;
    }
}

loc_80313168:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -10980);
    r3_addr_3 = (r3 + r31);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8031317Cu:
        goto loc_8031317C;
        break;
    case 0x8031328Cu:
        goto loc_8031328C;
        break;
    case 0x80313368u:
        goto loc_80313368;
        break;
    case 0x8031342Cu:
        goto loc_8031342C;
        break;
    case 0x8031357Cu:
        goto loc_8031357C;
        break;
    case 0x80313698u:
        goto loc_80313698;
        break;
    case 0x803137A8u:
        goto loc_803137A8;
        break;
    case 0x803138B8u:
        goto loc_803138B8;
        break;
    case 0x803139ACu:
        goto loc_803139AC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8031317C:
{
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 16);
    ctx->lr = 0x80313198u;
    if constexpr (KnownRegArgsCpuCall<0x80316A78u>(&func_80316A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80316A78_35C5 = func_80316A78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80316A78_35C5);
        r4 = static_cast<uint32_t>(regargs_result_80316A78_35C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80316A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803131A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313248;
    }
}

loc_803131AC:
{
    r3 = (r1 + 64);
    r4 = (r13 + -25148);
    r5 = MemoryInline::FlatRead16((r1 + 16));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803131C0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_3D21 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_3D21);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_3D21 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x803131CCu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_44DF = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_44DF);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_44DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_803131DC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_803131F8;
    }
}

loc_803131E0:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_803131EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803131F8;
    }
}

loc_803131F0:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_803131F8:
{
}

loc_803131FC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80313230;
    }
}

loc_80313200:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_8031320C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313218;
    }
}

loc_80313210:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313218:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313230;
    }
}

loc_80313228:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313230:
{
    r3 = (r1 + 116);
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313244u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_569E = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_569E);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_569E >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313248:
{
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x80313254u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_5E8B = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_5E8B);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_5E8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x80313270u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_6B5C = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_6B5C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313288u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_6E82 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_6E82);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_6E82 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_8031328C:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 14);
    ctx->lr = 0x803132A8u;
    if constexpr (KnownRegArgsCpuCall<0x80316E40u>(&func_80316E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80316E40_774D = func_80316E40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80316E40_774D);
        r4 = static_cast<uint32_t>(regargs_result_80316E40_774D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80316E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803132B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313AC0;
    }
}

loc_803132BC:
{
    r3 = 50;
    ctx->lr = 0x803132C4u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_7C55 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_7C55;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r6 = r3;
    r3 = (r1 + 64);
    r4 = (r13 + -25140);
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803132E0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_8075 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_8075);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_8075 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x803132ECu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_8833 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_8833);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_8833 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_803132FC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80313318;
    }
}

loc_80313300:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_8031330C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313318;
    }
}

loc_80313310:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313318:
{
}

loc_8031331C:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80313350;
    }
}

loc_80313320:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_8031332C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313338;
    }
}

loc_80313330:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313338:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313350;
    }
}

loc_80313348:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313350:
{
    r3 = (r1 + 116);
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313364u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_99F2 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_99F2);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_99F2 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313368:
{
    r3 = 255;
}

loc_80313370:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_80313388;
    }
}

loc_80313374:
{
}

loc_80313378:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_80313398;
    }
}

loc_8031337C:
{
}

loc_80313380:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_803133A8;
    }
}

loc_80313384:
{
    goto loc_803133B4;
}

loc_80313388:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x80313394u;
    if constexpr (KnownRegArgsCpuCall<0x80314F7Cu>(&func_80314F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80314F7C_A3D8 = func_80314F7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314F7C_A3D8);
        r4 = static_cast<uint32_t>(regargs_result_80314F7C_A3D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80314F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_803133B4;
}

loc_80313398:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x803133A4u;
    if constexpr (KnownRegArgsCpuCall<0x80314F7Cu>(&func_80314F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80314F7C_A7A3 = func_80314F7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314F7C_A7A3);
        r4 = static_cast<uint32_t>(regargs_result_80314F7C_A7A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80314F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_803133B4;
}

loc_803133A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 156));
    r4 = MemoryInline::FlatRead32((r1 + 152));
    ctx->lr = 0x803133B4u;
    if constexpr (KnownRegArgsCpuCall<0x80314F7Cu>(&func_80314F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80314F7C_ABB2 = func_80314F7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314F7C_ABB2);
        r4 = static_cast<uint32_t>(regargs_result_80314F7C_ABB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80314F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_803133B4:
{
    r5 = (r3 & 255);
}

loc_803133BC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_803133E8;
    }
}

loc_803133C0:
{
    r3 = (r1 + 64);
    r4 = (r13 + -25148);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803133D0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_B11F = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_B11F);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_B11F >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2419;
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803133E4u;
    if constexpr (KnownRegArgsCpuCall<0x802E2360u>(&func_802E2360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2360_B975 = func_802E2360_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2360_B975);
        r4 = static_cast<uint32_t>(regargs_result_802E2360_B975 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2360u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_803133E8:
{
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x803133F4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_C162 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_C162);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_C162 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 0u, r4);
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_6, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_6, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_7, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_7, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_7, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_7, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x80313410u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_CE33 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_CE33;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313428u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_D159 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_D159);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_D159 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_8031342C:
{
    r0 = MemoryInline::FlatRead32((r1 + 168));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 44);
    ctx->lr = 0x80313448u;
    if constexpr (KnownRegArgsCpuCall<0x80317118u>(&func_80317118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80317118_DA0D = func_80317118_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80317118_DA0D);
        r4 = static_cast<uint32_t>(regargs_result_80317118_DA0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80317118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_80313458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803134F4;
    }
}

loc_8031345C:
{
    r3 = (r1 + 64);
    r4 = (r13 + -25148);
    r5 = MemoryInline::FlatRead32((r1 + 44));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80313470u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_DFED = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_DFED);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_DFED >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x8031347Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_E7AB = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_E7AB);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_E7AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_8 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
    guest_range_9 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_9, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_9, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_8, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_9, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_8, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_9, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_9, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_8, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_9, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_9, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_9, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_9, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_9, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_9, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_9, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_8031348C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_803134A8;
    }
}

loc_80313490:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_8031349C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803134A8;
    }
}

loc_803134A0:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_803134A8:
{
}

loc_803134AC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_803134E0;
    }
}

loc_803134B0:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_803134BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803134C8;
    }
}

loc_803134C0:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_803134C8:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_803134D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803134E0;
    }
}

loc_803134D8:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_803134E0:
{
    r3 = (r1 + 116);
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803134F4u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_F96A = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_F96A);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_F96A >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803134F4:
{
}

loc_803134F8:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(3))) {
        goto loc_80313AC0;
    }
}

loc_803134FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 10);
    ctx->lr = 0x80313518u;
    if constexpr (KnownRegArgsCpuCall<0x80317300u>(&func_80317300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80317300_102B1 = func_80317300_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80317300_102B1);
        r4 = static_cast<uint32_t>(regargs_result_80317300_102B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80317300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_80313528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313AC0;
    }
}

loc_8031352C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_80313534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8031354C;
    }
}

loc_80313538:
{
}

loc_8031353C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8031355C;
    }
}

loc_80313540:
{
}

loc_80313544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8031356C;
    }
}

loc_80313548:
{
    goto loc_80313AC0;
}

loc_8031354C:
{
    r3 = 2422;
    r4 = (r1 + 48);
    ctx->lr = 0x80313558u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E0910_10A36 = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_10A36);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_10A36 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_8031355C:
{
    r3 = 2423;
    r4 = (r1 + 48);
    ctx->lr = 0x80313568u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E0910_112B1 = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_112B1);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_112B1 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_8031356C:
{
    r3 = 2424;
    r4 = (r1 + 48);
    ctx->lr = 0x80313578u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E0910_11B2C = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_11B2C);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_11B2C >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_8031357C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f31.d);
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 40);
    ctx->lr = 0x80313594u;
    if constexpr (KnownRegArgsCpuCall<0x80317428u>(&func_80317428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80317428_123D2 = func_80317428_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80317428_123D2);
        r4 = static_cast<uint32_t>(regargs_result_80317428_123D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80317428u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803135A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313654;
    }
}

loc_803135A8:
{
    r3 = 50;
    ctx->lr = 0x803135B0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_12A1C = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_12A1C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r5 = r3;
    r3 = (r1 + 64);
    r4 = (r13 + -25120);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r5 = MemoryInline::FlatRead32(r5);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803135CCu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_12DFD = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_12DFD);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_12DFD >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x803135D8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_135BE = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_135BE);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_135BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_10 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 0u, r4);
    guest_range_11 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_11, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_11, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_10, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_11, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_10, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_11, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_11, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_10, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_11, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_10, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_11, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_10, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_11, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_11, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_11, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_11, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_11, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_803135E8:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80313604;
    }
}

loc_803135EC:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_803135F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313604;
    }
}

loc_803135FC:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313604:
{
}

loc_80313608:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8031363C;
    }
}

loc_8031360C:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_80313618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313624;
    }
}

loc_8031361C:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313624:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031363C;
    }
}

loc_80313634:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8031363C:
{
    r3 = (r1 + 116);
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313650u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_1479A = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_1479A);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_1479A >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313654:
{
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x80313660u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_14F8A = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_14F8A);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_14F8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_12 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 0u, r4);
    guest_range_13 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_13, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_13, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_12, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_13, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_12, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_13, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_12, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_13, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_12, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_13, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_13, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_13, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_13, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_13, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_13, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_13, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_13, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x8031367Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_15C79 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_15C79;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313694u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_15FA1 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_15FA1);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_15FA1 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313698:
{
    r0 = MemoryInline::FlatRead32((r1 + 176));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 9);
    ctx->lr = 0x803136B4u;
    if constexpr (KnownRegArgsCpuCall<0x803177ECu>(&func_803177EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803177EC_1686B = func_803177EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803177EC_1686B);
        r4 = static_cast<uint32_t>(regargs_result_803177EC_1686B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803177ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803136C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313764;
    }
}

loc_803136C8:
{
    r3 = 51;
    ctx->lr = 0x803136D0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_16D59 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_16D59;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r14 = r3;
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x803136E0u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_16FD1 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_16FD1);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_16FD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_14 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 0u, r4);
    guest_range_15 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_15, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_15, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_14, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_15, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_14, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_15, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_14, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_15, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_14, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_15, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_15, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_15, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_14, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_15, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_15, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_15, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_15, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_803136F0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8031370C;
    }
}

loc_803136F4:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_80313700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031370C;
    }
}

loc_80313704:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8031370C:
{
}

loc_80313710:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80313744;
    }
}

loc_80313714:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_80313720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031372C;
    }
}

loc_80313724:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8031372C:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313744;
    }
}

loc_8031373C:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313744:
{
    r3 = (r1 + 116);
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r14_addr_1 = (r14 + r0);
    r4 = MemoryInline::FlatRead32(r14_addr_1);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313760u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_18284 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_18284);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_18284 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313764:
{
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x80313770u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_18A74 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_18A74);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_18A74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_16 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_16, 0u, r4);
    guest_range_17 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_17, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_16, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_17, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_16, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_16, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_17, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_16, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_17, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_16, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_17, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_16, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_17, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_16, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_17, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_16, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_17, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_16, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_17, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_16, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_17, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_16, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_17, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_17, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x8031378Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_19763 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_19763;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803137A4u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_19A8B = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_19A8B);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_19A8B >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_803137A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 12);
    ctx->lr = 0x803137C4u;
    if constexpr (KnownRegArgsCpuCall<0x80317BE8u>(&func_80317BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80317BE8_1A359 = func_80317BE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80317BE8_1A359);
        r4 = static_cast<uint32_t>(regargs_result_80317BE8_1A359 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80317BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803137D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313874;
    }
}

loc_803137D8:
{
    r3 = 52;
    ctx->lr = 0x803137E0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1A847 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1A847;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r14 = r3;
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x803137F0u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_1AABF = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1AABF);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1AABF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_18 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_18, 0u, r4);
    guest_range_19 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_19, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_18, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_19, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_18, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_19, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_18, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_19, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_18, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_19, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_18, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_19, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_18, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_19, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_18, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_19, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_18, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_19, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_18, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_19, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_18, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_19, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_18, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_19, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_80313800:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8031381C;
    }
}

loc_80313804:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_80313810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031381C;
    }
}

loc_80313814:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8031381C:
{
}

loc_80313820:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80313854;
    }
}

loc_80313824:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_80313830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031383C;
    }
}

loc_80313834:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8031383C:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313854;
    }
}

loc_8031384C:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313854:
{
    r3 = (r1 + 116);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r14_addr_2 = (r14 + r0);
    r4 = MemoryInline::FlatRead32(r14_addr_2);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313870u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_1BDB6 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_1BDB6);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_1BDB6 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313874:
{
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x80313880u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_1C5A6 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1C5A6);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1C5A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_20 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_20, 0u, r4);
    guest_range_21 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_21, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_20, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_21, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_20, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_21, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_20, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_21, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_20, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_21, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_20, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_21, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_20, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_21, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_20, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_21, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_20, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_21, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_20, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_21, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_20, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_21, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_20, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_21, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_21, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x8031389Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1D295 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1D295;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803138B4u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_1D5BD = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_1D5BD);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_1D5BD >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_803138B8:
{
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 64);
    ctx->lr = 0x803138CCu;
    if constexpr (KnownRegArgsCpuCall<0x8031833Cu>(&func_8031833C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8031833C_1DE48 = func_8031833C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031833C_1DE48);
        r4 = static_cast<uint32_t>(regargs_result_8031833C_1DE48 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031833Cu>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_803138DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313968;
    }
}

loc_803138E0:
{
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x803138ECu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_1E6D5 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1E6D5);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1E6D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_22 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_22, 0u, r4);
    guest_range_23 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_23, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_22, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_23, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_22, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_23, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_22, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_23, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_22, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_23, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_22, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_23, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_22, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_23, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_22, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_23, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_22, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_23, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_22, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_23, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_22, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_23, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_22, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_23, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
}

loc_803138FC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80313918;
    }
}

loc_80313900:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_8031390C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313918;
    }
}

loc_80313910:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313918:
{
}

loc_8031391C:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80313950;
    }
}

loc_80313920:
{
    r0 = (r19 & 255);
    r0 = (r0 & 2);
}

loc_8031392C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313938;
    }
}

loc_80313930:
{
    r0 = (r28 + -3841);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313938:
{
    r0 = (r19 & 255);
    r0 = (r0 & 4);
}

loc_80313944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313950;
    }
}

loc_80313948:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_80313950:
{
    r3 = (r1 + 116);
    r4 = (r1 + 64);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313964u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_1F8B1 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_1F8B1);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_1F8B1 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313968:
{
    r3 = 2421;
    r4 = 0;
    ctx->lr = 0x80313974u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_200A1 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_200A1);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_200A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_24 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_24, 0u, r4);
    guest_range_25 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_25, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_24, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_25, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_24, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_25, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_24, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_25, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_24, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_25, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_24, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_25, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_24, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_25, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_24, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_25, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_24, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_25, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_24, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_25, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_24, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_25, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_24, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_25, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r30 + -30721);
    MemoryInline::WriteResolved32(guest_range_25, 28u, (r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x80313990u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_20D90 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_20D90;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803139A8u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_210B8 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_210B8);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_210B8 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_803139AC:
{
}

loc_803139B0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80313A80;
    }
}

loc_803139B4:
{
}

loc_803139B8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_80313A00;
    }
}

loc_803139BC:
{
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x803139C8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_219D0 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_219D0);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_219D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801E68B4u) && KnownTranslatedCpuCall<0x801E68B4u>::kAvailable && !KnownTranslatedCpuCall<0x801E68B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801E68B4u>()) {
        func_801E68B4_statefree_v0(r3, r4);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801E68B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r30 + -30721);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x803139E4u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_2235D = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_2235D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x803139FCu;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_22685 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_22685);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_22685 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313A00:
{
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    ctx->lr = 0x80313A10u;
    if constexpr (KnownRegArgsCpuCall<0x803187F4u>(&func_803187F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803187F4_22E8D = func_803187F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803187F4_22E8D);
        r4 = static_cast<uint32_t>(regargs_result_803187F4_22E8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803187F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_80313A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313A34;
    }
}

loc_80313A24:
{
    r3 = 2425;
    r4 = (r1 + 48);
    ctx->lr = 0x80313A30u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E0910_23354 = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_23354);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_23354 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313A34:
{
    r0 = MemoryInline::FlatRead32((r1 + 184));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r15;
    r4 = r16;
    r5 = (r17 & 255);
    r6 = (r1 + 8);
    ctx->lr = 0x80313A50u;
    if constexpr (KnownRegArgsCpuCall<0x80318910u>(&func_80318910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80318910_23C18 = func_80318910_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80318910_23C18);
        r4 = static_cast<uint32_t>(regargs_result_80318910_23C18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80318910u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r19 = r3;
    r0 = (r3 & 255);
    r0 = (r0 & 1);
}

loc_80313A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313AC0;
    }
}

loc_80313A64:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = 2426;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = (r1 + 24);
    ctx->lr = 0x80313A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030E748u>(&func_8030E748)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030E748_241C4 = func_8030E748_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8030E748_241C4);
        r4 = static_cast<uint32_t>(regargs_result_8030E748_241C4 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030E748u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80313AC0;
}

loc_80313A80:
{
    r3 = 2419;
    r4 = 0;
    ctx->lr = 0x80313A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_249B4 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_249B4);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_249B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 116);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801E68B4u) && KnownTranslatedCpuCall<0x801E68B4u>::kAvailable && !KnownTranslatedCpuCall<0x801E68B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801E68B4u>()) {
        func_801E68B4_statefree_v0(r3, r4);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801E68B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r30 + -30721);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r3 = 48;
    ctx->lr = 0x80313AA8u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_25341 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_25341;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = 1;
    r6 = (r1 + 48);
    ctx->lr = 0x80313AC0u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_25669 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_25669);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_25669 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80313AC0:
{
}

loc_80313AC4:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80313B64;
    }
}

loc_80313AC8:
{
    r3 = 200;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8029F810u) && KnownTranslatedCpuCall<0x8029F810u>::kAvailable && !KnownTranslatedCpuCall<0x8029F810u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8029F810u>()) {
        const auto state_free_result_8029F810_25F0F = func_8029F810_statefree_v0(r3);
        r3 = static_cast<uint32_t>(state_free_result_8029F810_25F0F);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029F810u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3_addr_5 = (r3 + r26);
    r3 = MemoryInline::FlatRead16(r3_addr_5);
    r4 = (r1 + 48);
    r5 = (r1 + 20);
    ctx->lr = 0x80313AE8u;
    if constexpr (KnownRegArgsCpuCall<0x802E0714u>(&func_802E0714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E0714_2655A = func_802E0714_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0714_2655A);
        r4 = static_cast<uint32_t>(regargs_result_802E0714_2655A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = 2417;
    r4 = (r1 + 48);
    ctx->lr = 0x80313AF4u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E0910_269E2 = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_269E2);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_269E2 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 2416;
    r4 = 0;
    ctx->lr = 0x80313B00u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_2719D = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_2719D);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_2719D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801E68B4u) && KnownTranslatedCpuCall<0x801E68B4u>::kAvailable && !KnownTranslatedCpuCall<0x801E68B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801E68B4u>()) {
        const auto state_free_result_801E68B4_275E2 = func_801E68B4_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_801E68B4_275E2);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801E68B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80313B10:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80313B2C;
    }
}

loc_80313B14:
{
    r0 = (r19 & 255);
    r0 = (r0 & 24);
}

loc_80313B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313B2C;
    }
}

loc_80313B24:
{
    r0 = (r27 + 18175);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
}

loc_80313B2C:
{
    r0 = (r19 & 255);
    r0 = (r0 & 32);
}

loc_80313B38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80313B44;
    }
}

loc_80313B3C:
{
    r0 = (r30 + -30721);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
}

loc_80313B44:
{
    r3 = 49;
    ctx->lr = 0x80313B4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_27E27 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_27E27;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 80);
    r4_addr_1 = (r4 + r25);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = 4;
    r6 = (r1 + 48);
    ctx->lr = 0x80313B64u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802E2344_28172 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_28172);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_28172 >> 32);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E2344u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80313B64:
{
    r26 = (r26 + 2);
    r25 = (r25 + 4);
    r18 = (r18 + 1);
    r31 = (r31 + 4);
}

loc_80313B78:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(9))) {
        goto loc_8031312C;
    }
}

loc_80313B7C:
{
    r0 = 280;
    addr_psqx_80313B80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80313B80_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r11 = (r1 + 272);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
        r14 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -72));
        r15 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -68));
        r16 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -64));
        r17 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -60));
        r18 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -56));
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 52u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 56u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 60u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 64u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 68u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031312C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031312C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031312C func_8031312C preserves=false fpr_mask=0x80000000
