#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021AD78(CpuContext* ctx);
extern "C" uint64_t func_8021AD78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021AE1C(CpuContext* ctx);
extern "C" uint64_t func_8021AE1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021AEB8(CpuContext* ctx);
extern "C" uint64_t func_8021AEB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021AF50(CpuContext* ctx);
extern "C" uint64_t func_8021AF50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021B07C(CpuContext* ctx);
extern "C" uint64_t func_8021B07C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021B0EC(CpuContext* ctx);
extern "C" uint64_t func_8021B0EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7BC0(CpuContext* ctx);
extern "C" uint64_t func_802D7BC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021B1A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x8021B1A8u);
    goto loc_8021B1A8;

loc_8021B1A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = MemoryInline::FlatRead32((r13 + -17824));
    r30 = 0;
    r26 = 1;
    r31 = 0x805C0000u;
    r28 = 2;
    r27 = 2;
}

loc_8021B1D4:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021ACF0 (16 guest instruction(s))
}

loc_inl1_0x8021ACF0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x8021ACF8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_inl1_0x8021AD14;
    }
}

loc_inl1_0x8021ACFC:
{
    r3 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    r3 = (r0 & 65535);
    goto loc_inl1_cont_8021ACF0;
}

loc_inl1_0x8021AD14:
{
    r4 = MemoryInline::FlatRead16((r3 + 16634));
    r3 = 1;
    r0 = (r5 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_8021ACF0:
{
    // end of inlined leaf 0x8021ACF0
    r0 = (r3 & 65535);
}

loc_8021B1E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B5EC;
    }
}

loc_8021B1EC:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_8021B1F4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(23))) {
        goto loc_8021B5EC;
    }
}

loc_8021B1F8:
{
    r3 = (r31 + -22876);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8021B20Cu:
        goto loc_8021B20C;
        break;
    case 0x8021B21Cu:
        goto loc_8021B21C;
        break;
    case 0x8021B22Cu:
        goto loc_8021B22C;
        break;
    case 0x8021B310u:
        goto loc_8021B310;
        break;
    case 0x8021B320u:
        goto loc_8021B320;
        break;
    case 0x8021B330u:
        goto loc_8021B330;
        break;
    case 0x8021B354u:
        goto loc_8021B354;
        break;
    case 0x8021B3BCu:
        goto loc_8021B3BC;
        break;
    case 0x8021B3D0u:
        goto loc_8021B3D0;
        break;
    case 0x8021B424u:
        goto loc_8021B424;
        break;
    case 0x8021B434u:
        goto loc_8021B434;
        break;
    case 0x8021B458u:
        goto loc_8021B458;
        break;
    case 0x8021B46Cu:
        goto loc_8021B46C;
        break;
    case 0x8021B47Cu:
        goto loc_8021B47C;
        break;
    case 0x8021B48Cu:
        goto loc_8021B48C;
        break;
    case 0x8021B5ECu:
        goto loc_8021B5EC;
        break;
    case 0x8021B49Cu:
        goto loc_8021B49C;
        break;
    case 0x8021B4ACu:
        goto loc_8021B4AC;
        break;
    case 0x8021B4BCu:
        goto loc_8021B4BC;
        break;
    case 0x8021B4D0u:
        goto loc_8021B4D0;
        break;
    case 0x8021B5A8u:
        goto loc_8021B5A8;
        break;
    case 0x8021B5B4u:
        goto loc_8021B5B4;
        break;
    case 0x8021B5C8u:
        goto loc_8021B5C8;
        break;
    case 0x8021B5DCu:
        goto loc_8021B5DC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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

loc_8021B20C:
{
    r3 = r29;
    r5 = 0;
    ctx->lr = 0x8021B218u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_1C26 = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_1C26);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_1C26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B21C:
{
    r3 = r29;
    r5 = 1;
    ctx->lr = 0x8021B228u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_204F = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_204F);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_204F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B22C:
{
    r5 = 0;
    r4 = 0;
    r3 = r29;
    ctr = r27;
}

loc_8021B23C:
{
    r0 = MemoryInline::FlatRead32((r3 + 21220));
}

loc_8021B244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B25C;
    }
}

loc_8021B248:
{
    r0 = MemoryInline::FlatRead32((r3 + 21260));
}

loc_8021B250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B25C;
    }
}

loc_8021B254:
{
    r5 = 1;
    goto loc_8021B2F8;
}

loc_8021B25C:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 21224));
}

loc_8021B268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B280;
    }
}

loc_8021B26C:
{
    r0 = MemoryInline::FlatRead32((r3 + 21264));
}

loc_8021B274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B280;
    }
}

loc_8021B278:
{
    r5 = 1;
    goto loc_8021B2F8;
}

loc_8021B280:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 21228));
}

loc_8021B28C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2A4;
    }
}

loc_8021B290:
{
    r0 = MemoryInline::FlatRead32((r3 + 21268));
}

loc_8021B298:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2A4;
    }
}

loc_8021B29C:
{
    r5 = 1;
    goto loc_8021B2F8;
}

loc_8021B2A4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 21232));
}

loc_8021B2B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2C8;
    }
}

loc_8021B2B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 21272));
}

loc_8021B2BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2C8;
    }
}

loc_8021B2C0:
{
    r5 = 1;
    goto loc_8021B2F8;
}

loc_8021B2C8:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 21236));
}

loc_8021B2D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2EC;
    }
}

loc_8021B2D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 21276));
}

loc_8021B2E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B2EC;
    }
}

loc_8021B2E4:
{
    r5 = 1;
    goto loc_8021B2F8;
}

loc_8021B2EC:
{
    r3 = (r3 + 20);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021B23C;
    }
}

loc_8021B2F8:
{
}

loc_8021B2FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8021B5EC;
    }
}

loc_8021B300:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl2_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl2_0x8021AD58;
    }
}

loc_inl2_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_8021AD30;
}

loc_inl2_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl2_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B310:
{
    r3 = r29;
    r5 = 3;
    ctx->lr = 0x8021B31Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_3285 = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_3285);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_3285 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B320:
{
    r3 = r29;
    r5 = 4;
    ctx->lr = 0x8021B32Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_36AE = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_36AE);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_36AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B330:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8021B0ECu>(&func_8021B0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8021B0EC_3AAC = func_8021B0EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B0EC_3AAC);
        r4 = static_cast<uint32_t>(regargs_result_8021B0EC_3AAC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021B0ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8021B340:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(75))) {
        goto loc_8021B5EC;
    }
}

loc_8021B344:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl3_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl3_0x8021AD58;
    }
}

loc_inl3_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_8021AD30;
}

loc_inl3_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl3_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B354:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 18004));
}

loc_8021B360:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8021B368;
    }
}

loc_8021B364:
{
    r3 = 1;
}

loc_8021B368:
{
    r0 = MemoryInline::FlatRead8((r29 + 18005));
}

loc_8021B370:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8021B37C;
    }
}

loc_8021B374:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B37C:
{
    r0 = MemoryInline::FlatRead8((r29 + 18006));
}

loc_8021B384:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8021B390;
    }
}

loc_8021B388:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B390:
{
    r0 = MemoryInline::FlatRead8((r29 + 18007));
}

loc_8021B398:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8021B3A4;
    }
}

loc_8021B39C:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B3A4:
{
}

loc_8021B3A8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_8021B5EC;
    }
}

loc_8021B3AC:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl4_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl4_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl4_0x8021AD58;
    }
}

loc_inl4_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl4_cont_8021AD30;
}

loc_inl4_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl4_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B3BC:
{
    r3 = r29;
    r5 = 0;
    r6 = 7;
    ctx->lr = 0x8021B3CCu;
    if constexpr (KnownRegArgsCpuCall<0x8021AEB8u>(&func_8021AEB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AEB8_4C3B = func_8021AEB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AEB8_4C3B);
        r4 = static_cast<uint32_t>(regargs_result_8021AEB8_4C3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AEB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B3D0:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 16186));
}

loc_8021B3DC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8021B3E4;
    }
}

loc_8021B3E0:
{
    r3 = 1;
}

loc_8021B3E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 16198));
}

loc_8021B3EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8021B3F8;
    }
}

loc_8021B3F0:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B3F8:
{
    r0 = MemoryInline::FlatRead8((r29 + 16210));
}

loc_8021B400:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8021B40C;
    }
}

loc_8021B404:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B40C:
{
}

loc_8021B410:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(3))) {
        goto loc_8021B5EC;
    }
}

loc_8021B414:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl5_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl5_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl5_0x8021AD58;
    }
}

loc_inl5_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl5_cont_8021AD30;
}

loc_inl5_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl5_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B424:
{
    r3 = r29;
    r5 = 0;
    ctx->lr = 0x8021B430u;
    if constexpr (KnownRegArgsCpuCall<0x8021B07Cu>(&func_8021B07C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021B07C_580C = func_8021B07C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B07C_580C);
        r4 = static_cast<uint32_t>(regargs_result_8021B07C_580C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021B07Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8021B5EC;
}

loc_8021B434:
{
    r3 = MemoryInline::FlatRead16((r29 + 20896));
    if constexpr (KnownRegArgsCpuCall<0x802D7BC0u>(&func_802D7BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7BC0_5BC2 = func_802D7BC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7BC0_5BC2);
        r4 = static_cast<uint32_t>(regargs_result_802D7BC0_5BC2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7BC0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_8021B444:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(30))) {
        goto loc_8021B5EC;
    }
}

loc_8021B448:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl6_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl6_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl6_0x8021AD58;
    }
}

loc_inl6_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl6_cont_8021AD30;
}

loc_inl6_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl6_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B458:
{
    r3 = r29;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x8021B468u;
    if constexpr (KnownRegArgsCpuCall<0x8021AF50u>(&func_8021AF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8021AF50_641E = func_8021AF50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021AF50_641E);
        r4 = static_cast<uint32_t>(regargs_result_8021AF50_641E >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021AF50u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8021B5EC;
}

loc_8021B46C:
{
    r3 = r29;
    r5 = 5;
    ctx->lr = 0x8021B478u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_6B31 = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_6B31);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_6B31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B47C:
{
    r3 = r29;
    r5 = 6;
    ctx->lr = 0x8021B488u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_6F5A = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_6F5A);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_6F5A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B48C:
{
    r3 = r29;
    r5 = 7;
    ctx->lr = 0x8021B498u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_7383 = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_7383);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_7383 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B49C:
{
    r3 = r29;
    r5 = 8;
    ctx->lr = 0x8021B4A8u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_77AC = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_77AC);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_77AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B4AC:
{
    r3 = r29;
    r5 = 9;
    ctx->lr = 0x8021B4B8u;
    if constexpr (KnownRegArgsCpuCall<0x8021AE1Cu>(&func_8021AE1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AE1C_7BD5 = func_8021AE1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AE1C_7BD5);
        r4 = static_cast<uint32_t>(regargs_result_8021AE1C_7BD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AE1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B4BC:
{
    r3 = r29;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8021B4CCu;
    if constexpr (KnownRegArgsCpuCall<0x8021AF50u>(&func_8021AF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8021AF50_8022 = func_8021AF50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021AF50_8022);
        r4 = static_cast<uint32_t>(regargs_result_8021AF50_8022 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021AF50u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8021B5EC;
}

loc_8021B4D0:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8021B0ECu>(&func_8021B0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8021B0EC_870A = func_8021B0EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B0EC_870A);
        r4 = static_cast<uint32_t>(regargs_result_8021B0EC_870A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021B0ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8021B4E0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_8021B5EC;
    }
}

loc_8021B4E4:
{
    r4 = 0;
    r5 = 0;
}

loc_8021B4EC:
{
    r6 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 14770));
    ctr = r28;
}

loc_8021B500:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r0 = (r0 & r3);
}

loc_8021B510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021B51C;
    }
}

loc_8021B514:
{
    r0 = (r4 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B51C:
{
    r6 = (r6 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r0 = (r0 & r3);
}

loc_8021B530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021B53C;
    }
}

loc_8021B534:
{
    r0 = (r4 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B53C:
{
    r6 = (r6 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r0 = (r0 & r3);
}

loc_8021B550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021B55C;
    }
}

loc_8021B554:
{
    r0 = (r4 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B55C:
{
    r6 = (r6 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r0 = (r0 & r3);
}

loc_8021B570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021B57C;
    }
}

loc_8021B574:
{
    r0 = (r4 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B57C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021B500;
    }
}

loc_8021B584:
{
    r5 = (r5 + 1);
}

loc_8021B58C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(8))) {
        goto loc_8021B4EC;
    }
}

loc_8021B590:
{
}

loc_8021B594:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(35))) {
        goto loc_8021B5EC;
    }
}

loc_8021B598:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl7_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl7_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl7_0x8021AD58;
    }
}

loc_inl7_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl7_cont_8021AD30;
}

loc_inl7_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl7_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
    goto loc_8021B5EC;
}

loc_8021B5A8:
{
    r3 = r29;
    ctx->lr = 0x8021B5B0u;
    if constexpr (KnownRegArgsCpuCall<0x8021AD78u>(&func_8021AD78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AD78_984E = func_8021AD78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AD78_984E);
        r4 = static_cast<uint32_t>(regargs_result_8021AD78_984E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AD78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B5B4:
{
    r3 = r29;
    r5 = 1;
    r6 = 20;
    ctx->lr = 0x8021B5C4u;
    if constexpr (KnownRegArgsCpuCall<0x8021AEB8u>(&func_8021AEB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021AEB8_9C84 = func_8021AEB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021AEB8_9C84);
        r4 = static_cast<uint32_t>(regargs_result_8021AEB8_9C84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8021AEB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    goto loc_8021B5EC;
}

loc_8021B5C8:
{
    r3 = r29;
    r5 = 2;
    r6 = 1;
    ctx->lr = 0x8021B5D8u;
    if constexpr (KnownRegArgsCpuCall<0x8021AF50u>(&func_8021AF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8021AF50_A0D1 = func_8021AF50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021AF50_A0D1);
        r4 = static_cast<uint32_t>(regargs_result_8021AF50_A0D1 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021AF50u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8021B5EC;
}

loc_8021B5DC:
{
    r3 = r29;
    r5 = 3;
    r6 = 1;
    ctx->lr = 0x8021B5ECu;
    if constexpr (KnownRegArgsCpuCall<0x8021AF50u>(&func_8021AF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8021AF50_A808 = func_8021AF50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021AF50_A808);
        r4 = static_cast<uint32_t>(regargs_result_8021AF50_A808 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021AF50u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_8021B5EC:
{
    r30 = (r30 + 1);
}

loc_8021B5F4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(24))) {
        goto loc_8021B1D4;
    }
}

loc_8021B5F8:
{
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

extern "C" void func_8021B1A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021B1A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021B1A8 func_8021B1A8 preserves=true fpr_mask=0x00000000
