#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80097E48(CpuContext* ctx);
extern "C" uint64_t func_80097E48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D9868(CpuContext* ctx);
extern "C" uint64_t func_800D9868_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E31C8(CpuContext* ctx);
extern "C" uint64_t func_800E31C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800FAD54(CpuContext* ctx);
extern "C" uint64_t func_800FAD54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010C640(CpuContext* ctx);
extern "C" uint64_t func_8010C640_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80125244(CpuContext* ctx);
extern "C" uint64_t func_80125244_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801264F8(CpuContext* ctx);
extern "C" uint64_t func_801264F8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801282D0(CpuContext* ctx);
extern "C" uint64_t func_801282D0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801297F4(CpuContext* ctx);
extern "C" uint32_t func_801297F4_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012A418(CpuContext* ctx);
extern "C" uint32_t func_8012A418_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012F61C(CpuContext* ctx);
extern "C" uint64_t func_8012F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012FCC4(CpuContext* ctx);
extern "C" uint64_t func_8012FCC4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013046C(CpuContext* ctx);
extern "C" uint64_t func_8013046C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80130B8C(CpuContext* ctx);
extern "C" uint64_t func_80130B8C_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80132108(CpuContext* ctx);
extern "C" uint32_t func_80132108_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80132544(CpuContext* ctx);
extern "C" uint32_t func_80132544_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801328C0(CpuContext* ctx);
extern "C" uint32_t func_801328C0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80132B94(CpuContext* ctx);
extern "C" uint32_t func_80132B94_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80132DB8(CpuContext* ctx);
extern "C" uint32_t func_80132DB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80133008(CpuContext* ctx);
extern "C" uint64_t func_80133008_ra188_1f0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_801330CC(CpuContext* ctx);
extern "C" uint32_t func_801330CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801332C0(CpuContext* ctx);
extern "C" uint32_t func_801332C0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80133BC0(CpuContext* ctx);
extern "C" uint32_t func_80133BC0_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80136E9C(CpuContext* ctx);
extern "C" uint64_t func_80136E9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80137C84(CpuContext* ctx);
extern "C" uint64_t func_80137C84_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_80138EC8(CpuContext* ctx);
extern "C" uint64_t func_80138EC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013A894(CpuContext* ctx);
extern "C" uint64_t func_8013A894_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142248(CpuContext* ctx);
extern "C" uint64_t func_80142248_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80144FFC(CpuContext* ctx);
extern "C" uint64_t func_80144FFC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802ABD8C(CpuContext* ctx);
extern "C" uint64_t func_802ABD8C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8031E5E0(CpuContext* ctx);
extern "C" uint64_t func_8031E5E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4F2C(CpuContext* ctx);
extern "C" uint32_t func_803B4F2C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B5094(CpuContext* ctx);
extern "C" uint32_t func_803B5094_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B9A24(CpuContext* ctx);
extern "C" uint64_t func_803B9A24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801255C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
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
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x801255C0u);
    goto loc_801255C0;

loc_801255C0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r29 = r4;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126098_20D1 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_20D1);
        r4 = static_cast<uint32_t>(regargs_result_80126098_20D1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r3 = (r1 + 16);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    ctx->lr = 0x80125600u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_24FF = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_24FF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = (r29 & 255);
}

loc_80125610:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80125640;
    }
}

loc_80125614:
{
    r3 = r28;
    ctx->lr = 0x8012561Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B9A24u>(&func_803B9A24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803B9A24_2928 = func_803B9A24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B9A24_2928);
        r4 = static_cast<uint32_t>(regargs_result_803B9A24_2928 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B9A24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctr = ctx->ctr;
    }
    r0 = 255;
    MemoryInline::FlatWrite8((r28 + 2550), static_cast<uint8_t>(r0));
    r3 = (r28 + 2820);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r0));
    goto loc_80125648;
}

loc_80125640:
{
    r3 = r28;
    ctx->lr = 0x80125648u;
    if constexpr (KnownRegArgsCpuCall<0x80144FFCu>(&func_80144FFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80144FFC_349A = func_80144FFC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80144FFC_349A);
        r4 = static_cast<uint32_t>(regargs_result_80144FFC_349A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80144FFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_80125648:
{
    r3 = r28;
    // inline leaf 0x80135B4C (29 guest instruction(s))
    r5 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1160), 0, 264u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 1165), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 1166), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1160), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1161), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 1162), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 1163), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 1164), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 1170), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 1176), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 1288), r0);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 1167), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 1169), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 137u, (r3 + 1297), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 138u, (r3 + 1298), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r3 + 1292), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 133u, (r3 + 1293), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 134u, (r3 + 1294), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 135u, (r3 + 1295), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 136u, (r3 + 1296), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 142u, (r3 + 1302), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 148u, (r3 + 1308), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 1420), r0);
    MemoryInline::WriteResolved8(guest_range_0, 139u, (r3 + 1299), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 141u, (r3 + 1301), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x80135B4C
    r3 = r28;
    ctx->lr = 0x80125658u;
    if constexpr (KnownRegArgsCpuCall<0x80137C84u>(&func_80137C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80137C84_423C = func_80137C84_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80137C84_423C);
        r4 = static_cast<uint32_t>(regargs_result_80137C84_423C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80137C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 & 1);
}

loc_80125674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80125684;
    }
}

loc_80125678:
{
    r0 = MemoryInline::FlatRead8((r28 + 12));
}

loc_80125680:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80125690;
    }
}

loc_80125684:
{
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r28 + 456), r0);
}

loc_80125690:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    MemoryInline::FlatWriteFloat32((r28 + 472), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 468), f0.d);
    r27 = 0;
    MemoryInline::FlatWrite16((r28 + 476), static_cast<uint16_t>(r27));
    r3 = r28;
    // inline leaf 0x801308A8 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2214), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2218), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801308A8
    r3 = r28;
    ctx->lr = 0x801256B4u;
    if constexpr (KnownRegArgsCpuCall<0x80132108u>(&func_80132108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80132108_4C25 = func_80132108_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80132108_4C25;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80132108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    MemoryInline::FlatWriteFloat32((r28 + 1984), f0.d);
    MemoryInline::FlatWrite8((r28 + 482), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 484), static_cast<uint8_t>(r27));
    r3 = r28;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801256D8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F61Cu>(&func_8012F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F61C_518A = func_8012F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F61C_518A);
        r4 = static_cast<uint32_t>(regargs_result_8012F61C_518A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = 255;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801256ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_5A3D = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_5A3D);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_5A3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 480), 0, 1748u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 419u, (r28 + 899), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 426u, (r28 + 906), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 427u, (r28 + 907), static_cast<uint8_t>(r27));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_4, 428u, (r28 + 908), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 429u, (r28 + 909), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 1745u, (r28 + 2225), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 1746u, (r28 + 2226), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 1747u, (r28 + 2227), static_cast<uint8_t>(r27));
    r3 = r28;
    // inline leaf 0x8012825C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_4, 20u, (r3 + 500), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8012825C
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r28 + 480), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r28 + 488), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r28 + 489), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r28 + 490), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r28 + 491), static_cast<uint8_t>(r27));
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x801282D0u>(&func_801282D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801282D0_68EF = func_801282D0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801282D0_68EF);
        r4 = static_cast<uint32_t>(regargs_result_801282D0_68EF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801282D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r28 + 2798), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite16((r28 + 1128), static_cast<uint16_t>(r27));
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_80125748:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80125758;
    }
}

loc_8012574C:
{
    r3 = r28;
    ctx->lr = 0x80125754u;
    if constexpr (KnownRegArgsCpuCall<0x80125244u>(&func_80125244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80125244_6D44 = func_80125244_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80125244_6D44);
        r4 = static_cast<uint32_t>(regargs_result_80125244_6D44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80125244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r27));
}

loc_80125758:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 504), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x8012576Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    r12 = r3;
}

loc_80125774:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80125784;
    }
}

loc_80125778:
{
    r3 = r28;
    ctr = r12;
    ctx->lr = 0x80125784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
}

loc_80125784:
{
    r3 = r28;
    // inline leaf 0x80133C18 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C18
    r0 = (r29 & 255);
}

loc_80125794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801257A0;
    }
}

loc_80125798:
{
}

loc_8012579C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80125838;
    }
}

loc_801257A0:
{
    r3 = MemoryInline::FlatRead16((r28 + 26));
    r4 = (r1 + 56);
    ctx->lr = 0x801257ACu;
    if constexpr (KnownRegArgsCpuCall<0x80142248u>(&func_80142248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80142248_7BE8 = func_80142248_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142248_7BE8);
        r4 = static_cast<uint32_t>(regargs_result_80142248_7BE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80142248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801257B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801257D4;
    }
}

loc_801257B4:
{
    r0 = MemoryInline::FlatRead8((r1 + 57));
    MemoryInline::FlatWrite8((r28 + 481), static_cast<uint8_t>(r0));
    r3 = (r28 + 392);
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 444);
    r4 = (r1 + 76);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
}

loc_801257D4:
{
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::FlatWrite8((r28 + 1166), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1298), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 12;
    ctx->lr = 0x801257F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    r12 = r3;
}

loc_80125800:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80125820;
    }
}

loc_80125804:
{
    r3 = r28;
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x80125818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    r3 = r28;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
}

loc_80125820:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r6 = 1;
    ctx->lr = 0x80125834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80128624u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    goto loc_8012584C;
}

loc_80125838:
{
    r3 = r28;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8012584Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80128624u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
}

loc_8012584C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 460), f0.d);
    r30 = 255;
    MemoryInline::FlatWrite8((r28 + 2551), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r28 + 2552), static_cast<uint8_t>(r30));
    r27 = 0;
    MemoryInline::FlatWrite8((r28 + 505), static_cast<uint8_t>(r27));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 506), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 507), static_cast<uint8_t>(r27));
    r3 = r28;
    // inline leaf 0x801299E8 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801299E8
    MemoryInline::FlatWrite16((r28 + 512), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite8((r28 + 509), static_cast<uint8_t>(r27));
    r0 = 900;
    MemoryInline::FlatWrite16((r28 + 514), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1946), static_cast<uint8_t>(r27));
    r3 = r28;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
    MemoryInline::FlatWrite8((r28 + 1947), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 2532), static_cast<uint8_t>(r27));
    r3 = r28;
    // inline leaf 0x801255B0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2553), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2554), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801255B0
    r0 = (r29 & 255);
}

loc_801258BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801258CC;
    }
}

loc_801258C0:
{
    MemoryInline::FlatWrite8((r28 + 2564), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 2565), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r28 + 2566), static_cast<uint8_t>(r27));
}

loc_801258CC:
{
    r27 = 0;
    guest_range_5 = MemoryInline::ResolveRangeHost((r28 + 910), 0, 1658u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 1657u, (r28 + 2567), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r28 + 910), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r28 + 911), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 170u, (r28 + 1080), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 173u, (r28 + 1083), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 174u, (r28 + 1084), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved16(guest_range_5, 178u, (r28 + 1088), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 175u, (r28 + 1085), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 176u, (r28 + 1086), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 171u, (r28 + 1081), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 172u, (r28 + 1082), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved16(guest_range_5, 180u, (r28 + 1090), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 220u, (r28 + 1130), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_5, 225u, (r28 + 1135), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved32(guest_range_5, 2u, (r28 + 912), r27);
    MemoryInline::WriteResolved32(guest_range_5, 154u, (r28 + 1064), r27);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28236));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 198u, (r28 + 1108), f0.d);
    MemoryInline::WriteResolved32(guest_range_5, 6u, (r28 + 916), r27);
    MemoryInline::WriteResolved32(guest_range_5, 158u, (r28 + 1068), r27);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 202u, (r28 + 1112), f0.d);
    MemoryInline::WriteResolved32(guest_range_5, 10u, (r28 + 920), r27);
    MemoryInline::WriteResolved32(guest_range_5, 162u, (r28 + 1072), r27);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 206u, (r28 + 1116), f0.d);
    MemoryInline::WriteResolved32(guest_range_5, 14u, (r28 + 924), r27);
    MemoryInline::WriteResolved32(guest_range_5, 166u, (r28 + 1076), r27);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 210u, (r28 + 1120), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 18u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 18u, (r28 + 928), r27);
        MemoryInline::WriteResolved32(guest_range_5, 22u, (r28 + 932), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 26u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 26u, (r28 + 936), r27);
        MemoryInline::WriteResolved32(guest_range_5, 30u, (r28 + 940), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 34u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 34u, (r28 + 944), r27);
        MemoryInline::WriteResolved32(guest_range_5, 38u, (r28 + 948), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 42u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 42u, (r28 + 952), r27);
        MemoryInline::WriteResolved32(guest_range_5, 46u, (r28 + 956), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 50u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 50u, (r28 + 960), r27);
        MemoryInline::WriteResolved32(guest_range_5, 54u, (r28 + 964), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 58u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 58u, (r28 + 968), r27);
        MemoryInline::WriteResolved32(guest_range_5, 62u, (r28 + 972), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 66u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 66u, (r28 + 976), r27);
        MemoryInline::WriteResolved32(guest_range_5, 70u, (r28 + 980), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 74u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 74u, (r28 + 984), r27);
        MemoryInline::WriteResolved32(guest_range_5, 78u, (r28 + 988), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 82u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 82u, (r28 + 992), r27);
        MemoryInline::WriteResolved32(guest_range_5, 86u, (r28 + 996), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 90u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 90u, (r28 + 1000), r27);
        MemoryInline::WriteResolved32(guest_range_5, 94u, (r28 + 1004), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 98u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 98u, (r28 + 1008), r27);
        MemoryInline::WriteResolved32(guest_range_5, 102u, (r28 + 1012), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 106u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 106u, (r28 + 1016), r27);
        MemoryInline::WriteResolved32(guest_range_5, 110u, (r28 + 1020), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 114u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 114u, (r28 + 1024), r27);
        MemoryInline::WriteResolved32(guest_range_5, 118u, (r28 + 1028), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 122u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 122u, (r28 + 1032), r27);
        MemoryInline::WriteResolved32(guest_range_5, 126u, (r28 + 1036), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 130u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 130u, (r28 + 1040), r27);
        MemoryInline::WriteResolved32(guest_range_5, 134u, (r28 + 1044), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 138u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 138u, (r28 + 1048), r27);
        MemoryInline::WriteResolved32(guest_range_5, 142u, (r28 + 1052), r27);
    }
    MemoryInline::WriteResolved32(guest_range_5, 146u, (r28 + 1056), r27);
    r3 = r28;
    // inline leaf 0x8011EEE8 (40 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 1994), 0, 106u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 105u, (r3 + 2099), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 94u, (r3 + 2088), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 1994), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 2010), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 2026), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 1996), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 2012), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r3 + 2028), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 1998), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 2014), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r3 + 2030), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 2000), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 2016), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 2032), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 2002), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 2018), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r3 + 2034), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 2004), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 2020), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r3 + 2036), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 2006), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 2022), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r3 + 2038), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 2008), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 2024), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 46u, (r3 + 2040), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 56u, (r3 + 2050), r0);
        MemoryInline::WriteResolved16(guest_range_1, 58u, (r3 + 2052), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 60u, (r3 + 2054), r0);
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r3 + 2056), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r3 + 2048), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 64u, (r3 + 2058), r0);
        MemoryInline::WriteResolved16(guest_range_1, 66u, (r3 + 2060), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 68u, (r3 + 2062), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 50u, (r3 + 2044), r0);
    r0 = MemoryInline::FlatRead32((r3 + 448));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 76u, (r3 + 2070), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8011EEE8
    MemoryInline::WriteResolved8(guest_range_5, 1139u, (r28 + 2049), static_cast<uint8_t>(r27));
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 1274u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 1274u, (r28 + 2184), r0);
        MemoryInline::WriteResolved32(guest_range_5, 1278u, (r28 + 2188), r0);
    }
    MemoryInline::WriteResolved16(guest_range_5, 1290u, (r28 + 2200), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved32(guest_range_5, 1282u, (r28 + 2192), r0);
    MemoryInline::WriteResolved16(guest_range_5, 1292u, (r28 + 2202), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved32(guest_range_5, 1286u, (r28 + 2196), r0);
    MemoryInline::WriteResolved16(guest_range_5, 1294u, (r28 + 2204), static_cast<uint16_t>(r27));
    r3 = MemoryInline::FlatRead32((r31 + 108));
}

loc_801259F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80125A04;
    }
}

loc_801259F8:
{
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8((r28 + 2206), static_cast<uint8_t>(r0));
    goto loc_80125A08;
}

loc_80125A04:
{
    MemoryInline::FlatWrite8((r28 + 2206), static_cast<uint8_t>(r27));
}

loc_80125A08:
{
    r0 = 0;
    guest_range_6 = MemoryInline::ResolveRangeHost((r28 + 2064), 0, 318u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 38u, (r28 + 2102), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r28 + 2064), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 314u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_6, 314u, (r28 + 2378), r0);
        MemoryInline::WriteResolved16(guest_range_6, 316u, (r28 + 2380), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_6, 2u, (r28 + 2066), r0);
        MemoryInline::WriteResolved16(guest_range_6, 4u, (r28 + 2068), r0);
    }
    MemoryInline::WriteResolved8(guest_range_6, 36u, (r28 + 2100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 37u, (r28 + 2101), static_cast<uint8_t>(r0));
    r3 = r28;
    ctx->lr = 0x80125A34u;
    if constexpr (KnownRegArgsCpuCall<0x80130B8Cu>(&func_80130B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80130B8C_D556 = func_80130B8C_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130B8C_D556);
        r4 = static_cast<uint32_t>(regargs_result_80130B8C_D556 >> 32);
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
        InvokeDirectCpu<0x80130B8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801264F8u>(&func_801264F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801264F8_D8DF = func_801264F8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801264F8_D8DF);
        r4 = static_cast<uint32_t>(regargs_result_801264F8_D8DF >> 32);
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
        InvokeDirectCpu<0x801264F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r27 = r3;
    r3 = 0;
    ctx->lr = 0x80125A48u;
    if constexpr (KnownRegArgsCpuCall<0x803B4F2Cu>(&func_803B4F2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4F2C_DC6F = func_803B4F2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4F2C_DC6F;
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
        InvokeDirectCpu<0x803B4F2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80125A4C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80125A60;
    }
}

loc_80125A50:
{
    r3 = 0;
    ctx->lr = 0x80125A58u;
    if constexpr (KnownRegArgsCpuCall<0x803B5094u>(&func_803B5094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B5094_DFE7 = func_803B5094_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5094_DFE7;
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
        InvokeDirectCpu<0x803B5094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80125A5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80125A6C;
    }
}

loc_80125A60:
{
    r0 = 500;
    MemoryInline::FlatWrite16((r28 + 2210), static_cast<uint16_t>(r0));
    goto loc_80125B2C;
}

loc_80125A6C:
{
}

loc_80125A70:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80125B24;
    }
}

loc_80125A74:
{
    r30 = 1000;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = MemoryInline::FlatRead8((r28 + 1992));
}

loc_80125A80:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80125A88:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80125B0C;
    }
}

loc_80125A8C:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    r3 = r27;
    r25 = 0;
    goto loc_80125AA4;
}

loc_80125A9C:
{
    r25 = (r25 + r0);
    r3 = (r3 + 4);
}

loc_80125AA4:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80125AAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80125A9C;
    }
}

loc_80125AB0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
}

loc_80125AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125B18;
    }
}

loc_80125ABC:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl13_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl13_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl13_0x800CEF40;
    }
}

loc_inl13_0x800CEF3C:
{
    r0 = 1;
}

loc_inl13_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl13_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80125AFC;
}

loc_80125AE0:
{
    r3 = (r3 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80125AEC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80125AF8;
    }
}

loc_80125AF0:
{
    r30 = MemoryInline::FlatRead16((r27 + 2));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    goto loc_80125B18;
}

loc_80125AF8:
{
    r27 = (r27 + 4);
}

loc_80125AFC:
{
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80125B04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80125AE0;
    }
}

loc_80125B08:
{
    goto loc_80125B18;
}

loc_80125B0C:
{
    r3 = (r3 + 8);
}

loc_80125B14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80125A80;
    }
}

loc_80125B18:
{
    r0 = (r30 & 65535);
    MemoryInline::FlatWrite16((r28 + 2210), static_cast<uint16_t>(r0));
    goto loc_80125B2C;
}

loc_80125B24:
{
    r0 = 1000;
    MemoryInline::FlatWrite16((r28 + 2210), static_cast<uint16_t>(r0));
}

loc_80125B2C:
{
    r3 = r28;
    ctx->lr = 0x80125B34u;
    if constexpr (KnownRegArgsCpuCall<0x801297F4u>(&func_801297F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801297F4_F233 = func_801297F4_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_801297F4_F233;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x801297F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r30 = 0;
    guest_range_7 = MemoryInline::ResolveRangeHost((r28 + 2072), 0, 188u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r28 + 2072), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 170u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_7, 170u, (r28 + 2242), r30);
        MemoryInline::WriteResolved16(guest_range_7, 172u, (r28 + 2244), r30);
    }
    MemoryInline::WriteResolved16(guest_range_7, 174u, (r28 + 2246), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_7, 2u, (r28 + 2074), r30);
        MemoryInline::WriteResolved16(guest_range_7, 4u, (r28 + 2076), r30);
    }
    MemoryInline::WriteResolved16(guest_range_7, 6u, (r28 + 2078), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_7, 8u, (r28 + 2080), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_7, 9u, (r28 + 2081), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_7, 187u, (r28 + 2259), static_cast<uint8_t>(r30));
    r3 = r28;
    ctx->lr = 0x80125B68u;
    if constexpr (KnownRegArgsCpuCall<0x80132544u>(&func_80132544)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80132544_FAFD = func_80132544_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80132544_FAFD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80132544u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125B70u;
    if constexpr (KnownRegArgsCpuCall<0x80132B94u>(&func_80132B94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80132B94_FE55 = func_80132B94_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80132B94_FE55;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80132B94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125B78u;
    if constexpr (KnownRegArgsCpuCall<0x801328C0u>(&func_801328C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801328C0_101AD = func_801328C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801328C0_101AD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801328C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125B80u;
    if constexpr (KnownRegArgsCpuCall<0x801332C0u>(&func_801332C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801332C0_10507 = func_801332C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801332C0_10507;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801332C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125B88u;
    if constexpr (KnownRegArgsCpuCall<0x80132DB8u>(&func_80132DB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80132DB8_10895 = func_80132DB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80132DB8_10895;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80132DB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125B90u;
    if constexpr (KnownRegArgsCpuCall<0x801330CCu>(&func_801330CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801330CC_10CBF = func_801330CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801330CC_10CBF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801330CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    guest_range_8 = MemoryInline::ResolveRangeHost((r28 + 2219), 0, 169u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r28 + 2219), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r28 + 2220), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r28 + 2221), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r28 + 2222), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r28 + 2223), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r28 + 2224), static_cast<uint8_t>(r30));
    r3 = r28;
    // inline leaf 0x801322E8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_8, 163u, (r3 + 2382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801322E8
    r3 = r28;
    // inline leaf 0x80132364 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_8, 164u, (r3 + 2383), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132364
    if (!MemoryInline::WriteResolvedPair16(guest_range_8, 165u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_8, 165u, (r28 + 2384), r30);
        MemoryInline::WriteResolved16(guest_range_8, 167u, (r28 + 2386), r30);
    }
    MemoryInline::WriteResolved8(guest_range_8, 109u, (r28 + 2328), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_8, 107u, (r28 + 2326), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 110u, (r28 + 2329), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 111u, (r28 + 2330), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_8, 112u, (r28 + 2331), static_cast<uint8_t>(r30));
    r30 = 0;
    r27 = (r28 + 2568);
}

loc_80125BDC:
{
    r3 = r28;
    r4 = (r30 & 255);
    // inline leaf 0x80129788 (8 guest instruction(s))
    r6 = 0;
    r5 = (r4 & 255);
    r0 = (r5 * 92);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 2573), static_cast<uint8_t>(r6));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite8((r3 + 2796), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80129788
    r3 = r27;
    r4 = 1;
    r5 = r28;
    // inline leaf 0x8029F0A0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0A0
    r3 = r27;
    r4 = 1;
    r5 = r28;
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    r27 = (r27 + 92);
    r30 = (r30 + 1);
}

loc_80125C14:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_80125BDC;
    }
}

loc_80125C18:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 2793), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 2794), static_cast<uint16_t>(r0));
    r3 = (r28 + 2752);
    r4 = (r28 + 2792);
    // inline leaf 0x8029F1D4 (25 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 65536;
    r0 = (r4 + -1);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_2, 38u, (r3 + 38), r0);
    }
    // end of inlined leaf 0x8029F1D4
    r3 = r28;
    ctx->lr = 0x80125C38u;
    if constexpr (KnownRegArgsCpuCall<0x802ABD8Cu>(&func_802ABD8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802ABD8C_12A21 = func_802ABD8C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802ABD8C_12A21);
        r4 = static_cast<uint32_t>(regargs_result_802ABD8C_12A21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802ABD8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r28;
    // inline leaf 0x80136E7C (8 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 1872), r4);
    MemoryInline::FlatWrite32((r3 + 1876), r4);
    MemoryInline::FlatWrite32((r3 + 1880), r4);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1884), r0);
    MemoryInline::FlatWrite8((r3 + 1888), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80136E7C
    r3 = (r28 + 312);
    r4 = (r13 + -29752);
    ctx->lr = 0x80125C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80097E48u>(&func_80097E48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80097E48_13145 = func_80097E48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097E48_13145);
        r4 = static_cast<uint32_t>(regargs_result_80097E48_13145 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80097E48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    ctx->lr = 0x80125C5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_135EE = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_135EE);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_135EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 16);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80125C68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80125C7C;
    }
}

loc_80125C6C:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r28 + 516), r3);
    goto loc_80125C84;
}

loc_80125C7C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 516), r0);
}

loc_80125C84:
{
    r3 = r28;
    ctx->lr = 0x80125C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80133BC0u>(&func_80133BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80133BC0_13BE2 = func_80133BC0_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_80133BC0_13BE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x80133BC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r30 = 0;
    MemoryInline::FlatWrite8((r28 + 1889), static_cast<uint8_t>(r30));
    r3 = r28;
    ctx->lr = 0x80125C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012FCC4u>(&func_8012FCC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8012FCC4_13FC9 = func_8012FCC4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012FCC4_13FC9);
        r4 = static_cast<uint32_t>(regargs_result_8012FCC4_13FC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012FCC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    guest_range_9 = MemoryInline::ResolveRangeHost((r28 + 1894), 0, 78u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r28 + 1894), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_9, 2u, (r28 + 1896), static_cast<uint16_t>(r30));
    r3 = (r28 + 1900);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 6u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 6u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 10u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_9, 14u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r28 + 1912);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 18u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 18u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 22u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_9, 26u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 66u, (r28 + 1960), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28236));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 74u, (r28 + 1968), f0.d);
    r30 = 0;
    r27 = (r28 + 1160);
}

loc_80125CE4:
{
    r3 = r28;
    r4 = (r30 & 255);
    ctx->lr = 0x80125CF0u;
    if constexpr (KnownRegArgsCpuCall<0x8013A894u>(&func_8013A894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013A894_14B84 = func_8013A894_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013A894_14B84);
        r4 = static_cast<uint32_t>(regargs_result_8013A894_14B84 >> 32);
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
        InvokeDirectCpu<0x8013A894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r25 = r3;
}

loc_80125CF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80125D3C;
    }
}

loc_80125CFC:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead8(r25);
    // inline leaf 0x80135BC0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80135BC0
    r26 = 0;
}

loc_80125D0C:
{
    r4 = MemoryInline::FlatRead32((r25 + 20));
    r0 = (r4 + 65536);
}

loc_80125D18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80125D2C;
    }
}

loc_80125D1C:
{
    r3 = (r28 + 36);
    r5 = MemoryInline::FlatRead8((r28 + 2));
    r5 = (r5 + 8);
    ctx->lr = 0x80125D2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E31C8u>(&func_800E31C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800E31C8_151B5 = func_800E31C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E31C8_151B5);
        r4 = static_cast<uint32_t>(regargs_result_800E31C8_151B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E31C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
}

loc_80125D2C:
{
    r25 = (r25 + 4);
    r26 = (r26 + 1);
}

loc_80125D38:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(3))) {
        goto loc_80125D0C;
    }
}

loc_80125D3C:
{
    r27 = (r27 + 132);
    r30 = (r30 + 1);
}

loc_80125D48:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_80125CE4;
    }
}

loc_80125D4C:
{
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x80125D58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    r12 = r3;
}

loc_80125D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80125D74;
    }
}

loc_80125D64:
{
    r3 = r28;
    r4 = (r29 & 255);
    ctr = r12;
    ctx->lr = 0x80125D74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
}

loc_80125D74:
{
    r0 = (r29 & 255);
}

loc_80125D7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80125DDC;
    }
}

loc_80125D80:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 1960));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80125D8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80125D94;
    }
}

loc_80125D90:
{
    MemoryInline::FlatWriteFloat32((r28 + 1960), f0.d);
}

loc_80125D94:
{
    r0 = MemoryInline::FlatRead32((r28 + 1956));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1960));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 1964), r0);
    MemoryInline::FlatWrite32((r28 + 1952), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    goto loc_80125E38;
}

loc_80125DDC:
{
    r0 = MemoryInline::FlatRead32((r28 + 1952));
}

loc_80125DE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80125E38;
    }
}

loc_80125DE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 1960));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80125DF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80125DFC;
    }
}

loc_80125DF8:
{
    MemoryInline::FlatWriteFloat32((r28 + 1960), f0.d);
}

loc_80125DFC:
{
    r0 = MemoryInline::FlatRead32((r28 + 1956));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = 1127219200;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1960));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r28 + 1964), r0);
    MemoryInline::FlatWrite32((r28 + 1952), r0);
}

loc_80125E38:
{
    r3 = r28;
    ctx->lr = 0x80125E40u;
    if constexpr (KnownRegArgsCpuCall<0x80138EC8u>(&func_80138EC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80138EC8_16AAE = func_80138EC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80138EC8_16AAE);
        r4 = static_cast<uint32_t>(regargs_result_80138EC8_16AAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80138EC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r28;
    ctx->lr = 0x80125E48u;
    if constexpr (KnownRegArgsCpuCall<0x8013046Cu>(&func_8013046C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8013046C_16EA2 = func_8013046C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013046C_16EA2);
        r4 = static_cast<uint32_t>(regargs_result_8013046C_16EA2 >> 32);
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
        InvokeDirectCpu<0x8013046Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r28 + 428), f0.d);
    r3 = (r28 + 432);
    r4 = (r28 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 404);
    r4 = (r28 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 396));
    guest_range_10 = MemoryInline::ResolveRangeHost((r28 + 520), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_10, 4u, (r28 + 524), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_10, 8u, (r28 + 528), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_10, 12u, (r28 + 532), f0.d);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_10, 0u, (r28 + 520), r0);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_10, 16u, (r28 + 536), r0);
    MemoryInline::WriteResolved8(guest_range_10, 52u, (r28 + 572), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_10, 53u, (r28 + 573), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 56u, (r28 + 576), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_80125EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80125F7C;
    }
}

loc_80125EA4:
{
    r3 = r28;
    ctx->lr = 0x80125EACu;
    if constexpr (KnownRegArgsCpuCall<0x800FAD54u>(&func_800FAD54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800FAD54_1796F = func_800FAD54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FAD54_1796F);
        r4 = static_cast<uint32_t>(regargs_result_800FAD54_1796F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800FAD54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    r3 = r28;
    ctx->lr = 0x80125EB4u;
    if constexpr (KnownRegArgsCpuCall<0x80133008u>(&func_80133008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80133008_18267 = func_80133008_ra188_1f0_18_0(ctx, r3, r7, r8, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80133008_18267);
        r4 = static_cast<uint32_t>(regargs_result_80133008_18267 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80133008u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r31 + 156));
    r25 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80125EC0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80125F00;
    }
}

loc_80125EC4:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 12));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r28;
    r4 = MemoryInline::FlatRead32(r25);
    r5 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 16));
    r6 = 3;
    ctx->lr = 0x80125EFCu;
    if constexpr (KnownRegArgsCpuCall<0x8010C640u>(&func_8010C640)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010C640_18E86 = func_8010C640_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010C640_18E86);
        r4 = static_cast<uint32_t>(regargs_result_8010C640_18E86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010C640u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    goto loc_80125F2C;
}

loc_80125F00:
{
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = r28;
    r4 = 2;
    r5 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28224));
    r6 = 3;
    ctx->lr = 0x80125F2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8010C640u>(&func_8010C640)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010C640_19938 = func_8010C640_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010C640_19938);
        r4 = static_cast<uint32_t>(regargs_result_8010C640_19938 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010C640u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
}

loc_80125F2C:
{
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 & 1);
}

loc_80125F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125F54;
    }
}

loc_80125F3C:
{
    r3 = MemoryInline::FlatRead32((r31 + 156));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80125F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125F54;
    }
}

loc_80125F4C:
{
    r3 = r28;
    ctx->lr = 0x80125F54u;
    if constexpr (KnownRegArgsCpuCall<0x8031E5E0u>(&func_8031E5E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8031E5E0_1A38C = func_8031E5E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031E5E0_1A38C);
        r4 = static_cast<uint32_t>(regargs_result_8031E5E0_1A38C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031E5E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
}

loc_80125F54:
{
    r3 = r28;
    r4 = 7;
    ctx->lr = 0x80125F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    r5 = r3;
    r3 = 4;
    r4 = r28;
    ctx->lr = 0x80125F70u;
    if constexpr (KnownRegArgsCpuCall<0x800D9868u>(&func_800D9868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800D9868_1AFC4 = func_800D9868_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D9868_1AFC4);
        r4 = static_cast<uint32_t>(regargs_result_800D9868_1AFC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D9868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r28 + 2836), r3);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 9), static_cast<uint8_t>(r0));
}

loc_80125F7C:
{
    r3 = r28;
    ctx->lr = 0x80125F84u;
    if constexpr (KnownRegArgsCpuCall<0x8012A418u>(&func_8012A418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012A418_1B587 = func_8012A418_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_8012A418_1B587;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012A418u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 & 1);
}

loc_80125F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80125FA0;
    }
}

loc_80125F94:
{
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x80125FA0u;
    if constexpr (KnownRegArgsCpuCall<0x80136E9Cu>(&func_80136E9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80136E9C_1BC88 = func_80136E9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136E9C_1BC88);
        r4 = static_cast<uint32_t>(regargs_result_80136E9C_1BC88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136E9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctr = ctx->ctr;
    }
}

loc_80125FA0:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_11 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_11, 32u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801255C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801255C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801255C0 func_801255C0 preserves=true fpr_mask=0x00000000
