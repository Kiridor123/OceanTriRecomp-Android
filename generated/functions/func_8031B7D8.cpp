#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A0060(CpuContext* ctx);
extern "C" void func_802A0060_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A6C80(CpuContext* ctx);
extern "C" uint64_t func_802A6C80_ra68_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802DE6FC(CpuContext* ctx);
extern "C" uint64_t func_802DE6FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0CE4(CpuContext* ctx);
extern "C" uint64_t func_802E0CE4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8031B400(CpuContext* ctx);
extern "C" uint64_t func_8031B400_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B4C0(CpuContext* ctx);
extern "C" uint64_t func_8031B4C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B528(CpuContext* ctx);
extern "C" uint64_t func_8031B528_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B634(CpuContext* ctx);
extern "C" uint64_t func_8031B634_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031B688(CpuContext* ctx);
extern "C" uint64_t func_8031B688_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031C11C(CpuContext* ctx);
extern "C" uint64_t func_8031C11C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031C39C(CpuContext* ctx);
extern "C" uint64_t func_8031C39C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8031C578(CpuContext* ctx);
extern "C" uint64_t func_8031C578_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8031C660(CpuContext* ctx);
extern "C" uint64_t func_8031C660_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8031C998(CpuContext* ctx);
extern "C" uint64_t func_8031C998_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8033ACDC(CpuContext* ctx);
extern "C" uint64_t func_8033ACDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8034928C(CpuContext* ctx);
extern "C" uint64_t func_8034928C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8035B764(CpuContext* ctx);
extern "C" uint64_t func_8035B764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8031B7D8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8031B7D8;

loc_8031B7D8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r31 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    r30 = (r0 & 65535);
    r29 = (r3 + 492);
    MemoryInline::FlatWrite16((r3 + 412), static_cast<uint16_t>(r30));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 414), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8031B820:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031B83C;
    }
}

loc_8031B824:
{
    r4 = MemoryInline::FlatRead8((r29 + 32));
}

loc_8031B82C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031B850;
    }
}

loc_8031B830:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    goto loc_8031B850;
}

loc_8031B83C:
{
    r4 = MemoryInline::FlatRead8((r29 + 32));
}

loc_8031B844:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_8031B850;
    }
}

loc_8031B848:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
}

loc_8031B850:
{
    r0 = MemoryInline::FlatRead8((r29 + 22));
}

loc_8031B858:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031B874;
    }
}

loc_8031B85C:
{
    r4 = MemoryInline::FlatRead8((r29 + 33));
}

loc_8031B864:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031B888;
    }
}

loc_8031B868:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r0));
    goto loc_8031B888;
}

loc_8031B874:
{
    r4 = MemoryInline::FlatRead8((r29 + 33));
}

loc_8031B87C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_8031B888;
    }
}

loc_8031B880:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r0));
}

loc_8031B888:
{
    r4 = MemoryInline::FlatRead8((r29 + 34));
}

loc_8031B890:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_8031B89C;
    }
}

loc_8031B894:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 34), static_cast<uint8_t>(r0));
}

loc_8031B89C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8031B8A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8031BD98;
    }
}

loc_8031B8A8:
{
    r4 = 0x805E0000u;
    r4 = (r4 + -10648);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8031B8C0u:
        goto loc_8031B8C0;
        break;
    case 0x8031B9BCu:
        goto loc_8031B9BC;
        break;
    case 0x8031B9C4u:
        goto loc_8031B9C4;
        break;
    case 0x8031BB1Cu:
        goto loc_8031BB1C;
        break;
    case 0x8031BB44u:
        goto loc_8031BB44;
        break;
    case 0x8031BBE8u:
        goto loc_8031BBE8;
        break;
    case 0x8031BC38u:
        goto loc_8031BC38;
        break;
    case 0x8031BD98u:
        goto loc_8031BD98;
        break;
    case 0x8031BC94u:
        goto loc_8031BC94;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8031B8C0:
{
    r4 = MemoryInline::FlatRead8((r3 + 570));
}

loc_8031B8C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031B8D4;
    }
}

loc_8031B8CC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 570), static_cast<uint8_t>(r0));
}

loc_8031B8D4:
{
    r0 = (r30 & 16);
}

loc_8031B8DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031B974;
    }
}

loc_8031B8E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 114));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 528));
}

loc_8031B904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031B958;
    }
}

loc_8031B908:
{
    r3 = r28;
    ctx->lr = 0x8031B910u;
    if constexpr (KnownRegArgsCpuCall<0x8031B528u>(&func_8031B528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8031B528_2B14 = func_8031B528_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B528_2B14);
        r4 = static_cast<uint32_t>(regargs_result_8031B528_2B14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r29;
    ctx->lr = 0x8031B918u;
    if constexpr (KnownRegArgsCpuCall<0x8031C11Cu>(&func_8031C11C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031C11C_2FA0 = func_8031C11C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C11C_2FA0);
        r4 = static_cast<uint32_t>(regargs_result_8031C11C_2FA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C11Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
}

loc_8031B91C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8031B92C;
    }
}

loc_8031B920:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 26), static_cast<uint8_t>(r0));
    goto loc_8031B934;
}

loc_8031B92C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 26), static_cast<uint8_t>(r0));
}

loc_8031B934:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 22), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r28 + 26));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x8031B954u;
    if constexpr (KnownRegArgsCpuCall<0x8031B688u>(&func_8031B688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031B688_36C0 = func_8031B688_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B688_36C0);
        r4 = static_cast<uint32_t>(regargs_result_8031B688_36C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8031B688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_8031B968;
}

loc_8031B958:
{
    r3 = r28;
    ctx->lr = 0x8031B960u;
    if constexpr (KnownRegArgsCpuCall<0x8031B634u>(&func_8031B634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031B634_3AE5 = func_8031B634_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8031B634_3AE5);
        r4 = static_cast<uint32_t>(regargs_result_8031B634_3AE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B634u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r0 = 10;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
}

loc_8031B968:
{
    r3 = 0;
    ctx->lr = 0x8031B970u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_4065 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4065);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4065 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031B9A8;
}

loc_8031B974:
{
    r0 = (r30 & 32);
}

loc_8031B97C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031B990;
    }
}

loc_8031B980:
{
    r31 = 2;
    r3 = 1;
    ctx->lr = 0x8031B98Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_4910 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4910);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4910 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031B9A8;
}

loc_8031B990:
{
    r3 = (r3 + 412);
    ctx->lr = 0x8031B998u;
    if constexpr (KnownRegArgsCpuCall<0x802A6C80u>(&func_802A6C80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802A6C80_50F2 = func_802A6C80_ra68_1f8_18_0(ctx, r3, r5, r6, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A6C80_50F2);
        r4 = static_cast<uint32_t>(regargs_result_802A6C80_50F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A6C80u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r28;
    ctx->lr = 0x8031B9A0u;
    if constexpr (KnownRegArgsCpuCall<0x8031B528u>(&func_8031B528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8031B528_5866 = func_8031B528_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B528_5866);
        r4 = static_cast<uint32_t>(regargs_result_8031B528_5866 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r29;
    ctx->lr = 0x8031B9A8u;
    if constexpr (KnownRegArgsCpuCall<0x8031C11Cu>(&func_8031C11C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031C11C_5CF2 = func_8031C11C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C11C_5CF2);
        r4 = static_cast<uint32_t>(regargs_result_8031C11C_5CF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C11Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
}

loc_8031B9A8:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r28 + 418));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x802A0060u>(&func_802A0060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_802A0060_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x802A0060u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_8031BD98;
}

loc_8031B9BC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_8031B9C4:
{
    r26 = 0;
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r26));
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r28 + 6));
    if constexpr (KnownRegArgsCpuCall<0x8031C39Cu>(&func_8031C39C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031C39C_65B4 = func_8031C39C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8031C39C_65B4);
        r4 = static_cast<uint32_t>(regargs_result_8031C39C_65B4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8031C39Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
    r3 = r29;
    ctx->lr = 0x8031B9E4u;
    if constexpr (KnownRegArgsCpuCall<0x8031C11Cu>(&func_8031C11C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031C11C_68D7 = func_8031C11C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C11C_68D7);
        r4 = static_cast<uint32_t>(regargs_result_8031C11C_68D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C11Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r0 = (r30 & 32);
}

loc_8031B9EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BA00;
    }
}

loc_8031B9F0:
{
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r26));
    r3 = 1;
    ctx->lr = 0x8031B9FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_6EDC = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_6EDC);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_6EDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031BD98;
}

loc_8031BA00:
{
}

loc_8031BA04:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8031BA20;
    }
}

loc_8031BA08:
{
    r0 = MemoryInline::FlatRead8((r28 + 26));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031BA14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031BA20;
    }
}

loc_8031BA18:
{
    r3 = 1;
    goto loc_8031BA24;
}

loc_8031BA20:
{
    r3 = 0;
}

loc_8031BA24:
{
    r0 = (r30 & 16);
}

loc_8031BA2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031BA38;
    }
}

loc_8031BA30:
{
}

loc_8031BA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031BAD4;
    }
}

loc_8031BA38:
{
    r0 = MemoryInline::FlatRead8((r28 + 26));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031BA44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BA5C;
    }
}

loc_8031BA48:
{
}

loc_8031BA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8031BA98;
    }
}

loc_8031BA50:
{
}

loc_8031BA54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8031BAB4;
    }
}

loc_8031BA58:
{
    goto loc_8031BB08;
}

loc_8031BA5C:
{
    r0 = MemoryInline::FlatRead8((r29 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031BA68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8031BA8C;
    }
}

loc_8031BA6C:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8031BA78u;
    if constexpr (KnownRegArgsCpuCall<0x8031C578u>(&func_8031C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031C578_7D25 = func_8031C578_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C578_7D25);
        r4 = static_cast<uint32_t>(regargs_result_8031C578_7D25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C578u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    goto loc_8031BB08;
}

loc_8031BA8C:
{
    r3 = 2;
    ctx->lr = 0x8031BA94u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_85C8 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_85C8);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_85C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031BB08;
}

loc_8031BA98:
{
    r3 = r28;
    ctx->lr = 0x8031BAA0u;
    if constexpr (KnownRegArgsCpuCall<0x8031B634u>(&func_8031B634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031B634_8D88 = func_8031B634_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8031B634_8D88);
        r4 = static_cast<uint32_t>(regargs_result_8031B634_8D88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B634u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r0 = 10;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x8031BAB0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_92F1 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_92F1);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_92F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031BB08;
}

loc_8031BAB4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r28 + 418));
    ctx->lr = 0x8031BAC8u;
    if constexpr (KnownRegArgsCpuCall<0x8031B4C0u>(&func_8031B4C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8031B4C0_9AFC = func_8031B4C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B4C0_9AFC);
        r4 = static_cast<uint32_t>(regargs_result_8031B4C0_9AFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8031B4C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0;
    ctx->lr = 0x8031BAD0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_9F71 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_9F71);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_9F71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031BB08;
}

loc_8031BAD4:
{
    r0 = (r30 & 3);
}

loc_8031BADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BB08;
    }
}

loc_8031BAE0:
{
    r3 = MemoryInline::FlatRead8((r28 + 26));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead8((r28 + 22));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = r30;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x8031BB00u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802A8F60_A8FD = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_A8FD);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_A8FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802A8F60u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r28 + 26), static_cast<uint8_t>(r0));
}

loc_8031BB08:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r28 + 26));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x8031BB18u;
    if constexpr (KnownRegArgsCpuCall<0x8031B688u>(&func_8031B688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031B688_B140 = func_8031B688_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B688_B140);
        r4 = static_cast<uint32_t>(regargs_result_8031B688_B140 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8031B688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_8031BD98;
}

loc_8031BB1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r5 = MemoryInline::FlatRead16((r28 + 6));
    ctx->lr = 0x8031BB34u;
    if constexpr (KnownRegArgsCpuCall<0x8031C660u>(&func_8031C660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8031C660_B62F = func_8031C660_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C660_B62F);
        r4 = static_cast<uint32_t>(regargs_result_8031C660_B62F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C660u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8031BB38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8031BD98;
    }
}

loc_8031BB3C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
}

loc_8031BB44:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 400));
    r4 = MemoryInline::FlatRead16((r29 + 12));
    r5 = MemoryInline::FlatRead16((r28 + 488));
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r29 + 21));
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->lr = 0x8031BB68u;
    if constexpr (KnownRegArgsCpuCall<0x802DE6FCu>(&func_802DE6FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_802DE6FC_C010 = func_802DE6FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DE6FC_C010);
        r4 = static_cast<uint32_t>(regargs_result_802DE6FC_C010 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802DE6FCu>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r30 = r3;
    r3 = r28;
    ctx->lr = 0x8031BB74u;
    if constexpr (KnownRegArgsCpuCall<0x8031B400u>(&func_8031B400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031B400_C7BC = func_8031B400_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B400_C7BC);
        r4 = static_cast<uint32_t>(regargs_result_8031B400_C7BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_8031BB7C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_8031BB98;
    }
}

loc_8031BB80:
{
    r0 = (r3 + -2);
}

loc_8031BB88:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8031BBAC;
    }
}

loc_8031BB8C:
{
}

loc_8031BB90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_8031BBD0;
    }
}

loc_8031BB94:
{
    goto loc_8031BD98;
}

loc_8031BB98:
{
    r3 = r29;
    // inline leaf 0x8031C950 (18 guest instruction(s))
}

loc_inl1_0x8031C950:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_inl1_0x8031C960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8031C970;
    }
}

loc_inl1_0x8031C964:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    goto loc_inl1_0x8031C98C;
}

loc_inl1_0x8031C970:
{
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl1_0x8031C980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8031C98C;
    }
}

loc_inl1_0x8031C984:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_inl1_0x8031C98C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
}

loc_inl1_cont_8031C950:
{
    // end of inlined leaf 0x8031C950
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BBAC:
{
    r3 = 2;
    r4 = 17;
    r5 = MemoryInline::FlatRead16((r29 + 12));
    ctx->lr = 0x8031BBBCu;
    if constexpr (KnownRegArgsCpuCall<0x8035B764u>(&func_8035B764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8035B764_D413 = func_8035B764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B764_D413);
        r4 = static_cast<uint32_t>(regargs_result_8035B764_D413 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8035B764u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r29;
    // inline leaf 0x8031C950 (18 guest instruction(s))
}

loc_inl2_0x8031C950:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_inl2_0x8031C960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8031C970;
    }
}

loc_inl2_0x8031C964:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    goto loc_inl2_0x8031C98C;
}

loc_inl2_0x8031C970:
{
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl2_0x8031C980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8031C98C;
    }
}

loc_inl2_0x8031C984:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_inl2_0x8031C98C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
}

loc_inl2_cont_8031C950:
{
    // end of inlined leaf 0x8031C950
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BBD0:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 15), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BBE8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r5 = MemoryInline::FlatRead16((r28 + 6));
    ctx->lr = 0x8031BC00u;
    if constexpr (KnownRegArgsCpuCall<0x8031C998u>(&func_8031C998)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8031C998_E2A6 = func_8031C998_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C998_E2A6);
        r4 = static_cast<uint32_t>(regargs_result_8031C998_E2A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C998u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8031BC04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8031BC14;
    }
}

loc_8031BC08:
{
}

loc_8031BC0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8031BC2C;
    }
}

loc_8031BC10:
{
    goto loc_8031BD98;
}

loc_8031BC14:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8031BC20u;
    if constexpr (KnownRegArgsCpuCall<0x8031C578u>(&func_8031C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031C578_EB99 = func_8031C578_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C578_EB99);
        r4 = static_cast<uint32_t>(regargs_result_8031C578_EB99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031C578u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BC2C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BC38:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 8));
}

loc_8031BC50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8031BD98;
    }
}

loc_8031BC54:
{
    r0 = MemoryInline::FlatRead16((r29 + 10));
}

loc_8031BC5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8031BD98;
    }
}

loc_8031BC60:
{
    r3 = MemoryInline::FlatRead16((r29 + 4));
    r4 = MemoryInline::FlatRead16((r29 + 6));
    r5 = 0;
    ctx->lr = 0x8031BC70u;
    if constexpr (KnownRegArgsCpuCall<0x8033ACDCu>(&func_8033ACDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8033ACDC_F671 = func_8033ACDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033ACDC_F671);
        r4 = static_cast<uint32_t>(regargs_result_8033ACDC_F671 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8033ACDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_8031BC74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031BD98;
    }
}

loc_8031BC78:
{
    r3 = r29;
    r4 = 0;
    r5 = r28;
    // inline leaf 0x8031C050 (12 guest instruction(s))
    r7 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r7);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r7);
    }
    r6 = 65536;
    r0 = (r6 + -1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    // end of inlined leaf 0x8031C050
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD98;
}

loc_8031BC94:
{
    r26 = (r3 + 816);
    r3 = (r26 + 4);
    r4 = (r28 + 4);
    // inline leaf 0x8031BDB4 (11 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8031BDB4
    r3 = MemoryInline::FlatRead8((r26 + 572));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 572), static_cast<uint8_t>(r0));
    r3 = 83;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x8029F810
    ctx->lr = 0x8031BCBCu;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_802E0CE4_104A7 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_104A7);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_104A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r26 + 572));
}

loc_8031BCC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_8031BCD4;
    }
}

loc_8031BCCC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 572), static_cast<uint8_t>(r0));
}

loc_8031BCD4:
{
    r3 = r26;
    ctx->lr = 0x8031BCDCu;
    if constexpr (KnownRegArgsCpuCall<0x8034928Cu>(&func_8034928C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8034928C_10AB8 = func_8034928C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034928C_10AB8);
        r4 = static_cast<uint32_t>(regargs_result_8034928C_10AB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8034928Cu>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_8031BCE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031BD30;
    }
}

loc_8031BCE8:
{
    r0 = MemoryInline::FlatRead8((r28 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 114));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 528));
}

loc_8031BD0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BD1C;
    }
}

loc_8031BD10:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_8031BD24;
}

loc_8031BD1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
}

loc_8031BD24:
{
    r3 = 1;
    ctx->lr = 0x8031BD2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_1167B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1167B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1167B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8031BD98;
}

loc_8031BD30:
{
    r0 = (r30 & 16);
}

loc_8031BD38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BD98;
    }
}

loc_8031BD3C:
{
    r0 = MemoryInline::FlatRead8((r26 + 423));
    r0 = (r0 * 24);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031BD54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031BD90;
    }
}

loc_8031BD58:
{
    r0 = MemoryInline::FlatRead8((r28 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 114));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r4 + 114));
    // inline leaf 0x8031B360 (8 guest instruction(s))
}

loc_inl6_0x8031B360:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_inl6_0x8031B368:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8031B36C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 14754), static_cast<uint16_t>(r4));
    goto loc_inl6_cont_8031B360;
}

loc_inl6_return:
{
}

loc_inl6_cont_8031B360:
{
    // end of inlined leaf 0x8031B360
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x8031BD84u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_124B9 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_124B9);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_124B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r28;
    ctx->lr = 0x8031BD8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8031B400u>(&func_8031B400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031B400_12C4D = func_8031B400_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031B400_12C4D);
        r4 = static_cast<uint32_t>(regargs_result_8031B400_12C4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031B400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    goto loc_8031BD98;
}

loc_8031BD90:
{
    r3 = 2;
    ctx->lr = 0x8031BD98u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_13196 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_13196);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_13196 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8031BD98:
{
    r3 = r31;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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

extern "C" void func_8031B7D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031B7D8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031B7D8 func_8031B7D8 preserves=true fpr_mask=0x00000000
