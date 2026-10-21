#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AAFEC(CpuContext* ctx);
extern "C" uint64_t func_803AAFEC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800FD8C8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800FD8C8u);
    goto loc_800FD8C8;

loc_800FD8C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r3 = 2292;
    ctx->lr = 0x800FD8E4u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F87EC_B2C = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_B2C);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_B2C >> 32);
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
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_800FD8EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FE934;
    }
}

loc_800FD8F0:
{
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 2260), 0, 1u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r27 = (r3 & 255);
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r28 = (r3 & 255);
}

loc_800FD910:
{
    if ((static_cast<uint32_t>(r27) > static_cast<uint32_t>(22))) {
        goto loc_800FE8DC;
    }
}

loc_800FD914:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13532);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE8DCu:
        goto loc_800FE8DC;
        break;
    case 0x800FD92Cu:
        goto loc_800FD92C;
        break;
    case 0x800FDA94u:
        goto loc_800FDA94;
        break;
    case 0x800FDBC0u:
        goto loc_800FDBC0;
        break;
    case 0x800FDD0Cu:
        goto loc_800FDD0C;
        break;
    case 0x800FDE18u:
        goto loc_800FDE18;
        break;
    case 0x800FDF20u:
        goto loc_800FDF20;
        break;
    case 0x800FDF88u:
        goto loc_800FDF88;
        break;
    case 0x800FE008u:
        goto loc_800FE008;
        break;
    case 0x800FE034u:
        goto loc_800FE034;
        break;
    case 0x800FE060u:
        goto loc_800FE060;
        break;
    case 0x800FE0A8u:
        goto loc_800FE0A8;
        break;
    case 0x800FE208u:
        goto loc_800FE208;
        break;
    case 0x800FE334u:
        goto loc_800FE334;
        break;
    case 0x800FE46Cu:
        goto loc_800FE46C;
        break;
    case 0x800FE578u:
        goto loc_800FE578;
        break;
    case 0x800FE680u:
        goto loc_800FE680;
        break;
    case 0x800FE6E8u:
        goto loc_800FE6E8;
        break;
    case 0x800FE768u:
        goto loc_800FE768;
        break;
    case 0x800FE794u:
        goto loc_800FE794;
        break;
    case 0x800FE870u:
        goto loc_800FE870;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FD92C:
{
}

loc_800FD930:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(12))) {
        goto loc_800FDA88;
    }
}

loc_800FD934:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13584);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FD94Cu:
        goto loc_800FD94C;
        break;
    case 0x800FD984u:
        goto loc_800FD984;
        break;
    case 0x800FD99Cu:
        goto loc_800FD99C;
        break;
    case 0x800FD9B0u:
        goto loc_800FD9B0;
        break;
    case 0x800FD9C4u:
        goto loc_800FD9C4;
        break;
    case 0x800FD9D8u:
        goto loc_800FD9D8;
        break;
    case 0x800FD9ECu:
        goto loc_800FD9EC;
        break;
    case 0x800FDA00u:
        goto loc_800FDA00;
        break;
    case 0x800FDA1Cu:
        goto loc_800FDA1C;
        break;
    case 0x800FDA30u:
        goto loc_800FDA30;
        break;
    case 0x800FDA44u:
        goto loc_800FDA44;
        break;
    case 0x800FDA58u:
        goto loc_800FDA58;
        break;
    case 0x800FDA6Cu:
        goto loc_800FDA6C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FD94C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    ctx->lr = 0x800FD954u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_216D = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_216D);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_216D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800FD95C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FD96C;
    }
}

loc_800FD960:
{
    r3 = 62;
    r4 = 7;
    goto loc_800FD974;
}

loc_800FD96C:
{
    r3 = 60;
    r4 = 9;
}

loc_800FD974:
{
    r5 = 10;
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FD984:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 112;
    r4 = 18;
    r5 = 15;
    goto loc_800FE8E8;
}

loc_800FD99C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 69;
    r4 = 6;
    r5 = 11;
    goto loc_800FE8E8;
}

loc_800FD9B0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 92;
    r4 = 5;
    r5 = 13;
    goto loc_800FE8E8;
}

loc_800FD9C4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 359;
    r4 = 7;
    r5 = 42;
    goto loc_800FE8E8;
}

loc_800FD9D8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 130;
    r4 = 2;
    r5 = 16;
    goto loc_800FE8E8;
}

loc_800FD9EC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 370;
    r4 = 6;
    r5 = 44;
    goto loc_800FE8E8;
}

loc_800FDA00:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 520;
    r4 = 5;
    r5 = 53;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDA1C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 348;
    r4 = 11;
    r5 = 41;
    goto loc_800FE8E8;
}

loc_800FDA30:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 75;
    r4 = 16;
    r5 = 12;
    goto loc_800FE8E8;
}

loc_800FDA44:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 100;
    r4 = 3;
    r5 = 14;
    goto loc_800FE8E8;
}

loc_800FDA58:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 389;
    r4 = 22;
    r5 = 45;
    goto loc_800FE8E8;
}

loc_800FDA6C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 135;
    r4 = 17;
    r5 = 17;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDA88:
{
    r3 = r30;
    ctx->lr = 0x800FDA90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDA94:
{
}

loc_800FDA98:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(11))) {
        goto loc_800FDBB4;
    }
}

loc_800FDA9C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13632);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FDAB4u:
        goto loc_800FDAB4;
        break;
    case 0x800FDAC8u:
        goto loc_800FDAC8;
        break;
    case 0x800FDAE0u:
        goto loc_800FDAE0;
        break;
    case 0x800FDAF8u:
        goto loc_800FDAF8;
        break;
    case 0x800FDB0Cu:
        goto loc_800FDB0C;
        break;
    case 0x800FDB20u:
        goto loc_800FDB20;
        break;
    case 0x800FDB34u:
        goto loc_800FDB34;
        break;
    case 0x800FDB48u:
        goto loc_800FDB48;
        break;
    case 0x800FDB60u:
        goto loc_800FDB60;
        break;
    case 0x800FDB78u:
        goto loc_800FDB78;
        break;
    case 0x800FDB8Cu:
        goto loc_800FDB8C;
        break;
    case 0x800FDBA0u:
        goto loc_800FDBA0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FDAB4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 559;
    r4 = 7;
    r5 = 57;
    goto loc_800FE8E8;
}

loc_800FDAC8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 428;
    r4 = 3;
    r5 = 46;
    goto loc_800FE8E8;
}

loc_800FDAE0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 438;
    r4 = 2;
    r5 = 47;
    goto loc_800FE8E8;
}

loc_800FDAF8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 578;
    r4 = 1;
    r5 = 59;
    goto loc_800FE8E8;
}

loc_800FDB0C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 450;
    r4 = 7;
    r5 = 48;
    goto loc_800FE8E8;
}

loc_800FDB20:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 463;
    r4 = 9;
    r5 = 49;
    goto loc_800FE8E8;
}

loc_800FDB34:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 527;
    r4 = 4;
    r5 = 54;
    goto loc_800FE8E8;
}

loc_800FDB48:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 162;
    r4 = 2;
    r5 = 18;
    goto loc_800FE8E8;
}

loc_800FDB60:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 549;
    r4 = 2;
    r5 = 55;
    goto loc_800FE8E8;
}

loc_800FDB78:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 572;
    r4 = 3;
    r5 = 58;
    goto loc_800FE8E8;
}

loc_800FDB8C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 552;
    r4 = 7;
    r5 = 56;
    goto loc_800FE8E8;
}

loc_800FDBA0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 510;
    r4 = 9;
    r5 = 52;
    goto loc_800FE8E8;
}

loc_800FDBB4:
{
    r3 = r30;
    ctx->lr = 0x800FDBBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDBC0:
{
}

loc_800FDBC4:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(10))) {
        goto loc_800FDD00;
    }
}

loc_800FDBC8:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13676);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FDBE0u:
        goto loc_800FDBE0;
        break;
    case 0x800FDBF8u:
        goto loc_800FDBF8;
        break;
    case 0x800FDC14u:
        goto loc_800FDC14;
        break;
    case 0x800FDC30u:
        goto loc_800FDC30;
        break;
    case 0x800FDC4Cu:
        goto loc_800FDC4C;
        break;
    case 0x800FDC68u:
        goto loc_800FDC68;
        break;
    case 0x800FDC80u:
        goto loc_800FDC80;
        break;
    case 0x800FDC9Cu:
        goto loc_800FDC9C;
        break;
    case 0x800FDCB4u:
        goto loc_800FDCB4;
        break;
    case 0x800FDCD0u:
        goto loc_800FDCD0;
        break;
    case 0x800FDCE8u:
        goto loc_800FDCE8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FDBE0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 707;
    r4 = 25;
    r5 = 68;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FDBF8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 757;
    r4 = 17;
    r5 = 72;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDC14:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 877;
    r4 = 8;
    r5 = 77;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDC30:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 895;
    r4 = 4;
    r5 = 78;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDC4C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 735;
    r4 = 11;
    r5 = 70;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDC68:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 797;
    r4 = 1;
    r5 = 74;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FDC80:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 983;
    r4 = 9;
    r5 = 83;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDC9C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 923;
    r4 = 8;
    r5 = 80;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FDCB4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 969;
    r4 = 11;
    r5 = 82;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDCD0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 953;
    r4 = 10;
    r5 = 81;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FDCE8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 915;
    r4 = 3;
    r5 = 79;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FDD00:
{
    r3 = r30;
    ctx->lr = 0x800FDD08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDD0C:
{
}

loc_800FDD10:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(9))) {
        goto loc_800FDE0C;
    }
}

loc_800FDD14:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13716);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FDD2Cu:
        goto loc_800FDD2C;
        break;
    case 0x800FDD40u:
        goto loc_800FDD40;
        break;
    case 0x800FDD58u:
        goto loc_800FDD58;
        break;
    case 0x800FDD70u:
        goto loc_800FDD70;
        break;
    case 0x800FDD88u:
        goto loc_800FDD88;
        break;
    case 0x800FDDA0u:
        goto loc_800FDDA0;
        break;
    case 0x800FDDB4u:
        goto loc_800FDDB4;
        break;
    case 0x800FDDCCu:
        goto loc_800FDDCC;
        break;
    case 0x800FDDE4u:
        goto loc_800FDDE4;
        break;
    case 0x800FDDF8u:
        goto loc_800FDDF8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FDD2C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1379;
    r4 = 18;
    r5 = 102;
    goto loc_800FE8E8;
}

loc_800FDD40:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1397;
    r4 = 2;
    r5 = 103;
    goto loc_800FE8E8;
}

loc_800FDD58:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1409;
    r4 = 2;
    r5 = 104;
    goto loc_800FE8E8;
}

loc_800FDD70:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 665;
    r4 = 6;
    r5 = 64;
    goto loc_800FE8E8;
}

loc_800FDD88:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1415;
    r4 = 12;
    r5 = 105;
    goto loc_800FE8E8;
}

loc_800FDDA0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1427;
    r4 = 9;
    r5 = 106;
    goto loc_800FE8E8;
}

loc_800FDDB4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1445;
    r4 = 15;
    r5 = 107;
    goto loc_800FE8E8;
}

loc_800FDDCC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1460;
    r4 = 1;
    r5 = 108;
    goto loc_800FE8E8;
}

loc_800FDDE4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1467;
    r4 = 5;
    r5 = 109;
    goto loc_800FE8E8;
}

loc_800FDDF8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1483;
    r4 = 1;
    r5 = 110;
    goto loc_800FE8E8;
}

loc_800FDE0C:
{
    r3 = r30;
    ctx->lr = 0x800FDE14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDE18:
{
}

loc_800FDE1C:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(10))) {
        goto loc_800FDF14;
    }
}

loc_800FDE20:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13760);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FDE38u:
        goto loc_800FDE38;
        break;
    case 0x800FDE4Cu:
        goto loc_800FDE4C;
        break;
    case 0x800FDE60u:
        goto loc_800FDE60;
        break;
    case 0x800FDE74u:
        goto loc_800FDE74;
        break;
    case 0x800FDE88u:
        goto loc_800FDE88;
        break;
    case 0x800FDE9Cu:
        goto loc_800FDE9C;
        break;
    case 0x800FDEB0u:
        goto loc_800FDEB0;
        break;
    case 0x800FDEC4u:
        goto loc_800FDEC4;
        break;
    case 0x800FDED8u:
        goto loc_800FDED8;
        break;
    case 0x800FDEECu:
        goto loc_800FDEEC;
        break;
    case 0x800FDF00u:
        goto loc_800FDF00;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FDE38:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 812;
    r4 = 11;
    r5 = 75;
    goto loc_800FE8E8;
}

loc_800FDE4C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1068;
    r4 = 5;
    r5 = 86;
    goto loc_800FE8E8;
}

loc_800FDE60:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1080;
    r4 = 2;
    r5 = 87;
    goto loc_800FE8E8;
}

loc_800FDE74:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1132;
    r4 = 10;
    r5 = 89;
    goto loc_800FE8E8;
}

loc_800FDE88:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1170;
    r4 = 4;
    r5 = 92;
    goto loc_800FE8E8;
}

loc_800FDE9C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1190;
    r4 = 8;
    r5 = 93;
    goto loc_800FE8E8;
}

loc_800FDEB0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1247;
    r4 = 3;
    r5 = 96;
    goto loc_800FE8E8;
}

loc_800FDEC4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1333;
    r4 = 8;
    r5 = 99;
    goto loc_800FE8E8;
}

loc_800FDED8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1345;
    r4 = 16;
    r5 = 100;
    goto loc_800FE8E8;
}

loc_800FDEEC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1362;
    r4 = 2;
    r5 = 101;
    goto loc_800FE8E8;
}

loc_800FDF00:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 782;
    r4 = 6;
    r5 = 73;
    goto loc_800FE8E8;
}

loc_800FDF14:
{
    r3 = r30;
    ctx->lr = 0x800FDF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDF20:
{
}

loc_800FDF24:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FDF3C;
    }
}

loc_800FDF28:
{
}

loc_800FDF2C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FDF50;
    }
}

loc_800FDF30:
{
}

loc_800FDF34:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FDF64;
    }
}

loc_800FDF38:
{
    goto loc_800FDF7C;
}

loc_800FDF3C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1600;
    r4 = 6;
    r5 = 115;
    goto loc_800FE8E8;
}

loc_800FDF50:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 651;
    r4 = 3;
    r5 = 61;
    goto loc_800FE8E8;
}

loc_800FDF64:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1606;
    r4 = 4;
    r5 = 116;
    goto loc_800FE8E8;
}

loc_800FDF7C:
{
    r3 = r30;
    ctx->lr = 0x800FDF84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FDF88:
{
}

loc_800FDF8C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FDFAC;
    }
}

loc_800FDF90:
{
}

loc_800FDF94:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FDFC0;
    }
}

loc_800FDF98:
{
}

loc_800FDF9C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FDFD4;
    }
}

loc_800FDFA0:
{
}

loc_800FDFA4:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(3))) {
        goto loc_800FDFE8;
    }
}

loc_800FDFA8:
{
    goto loc_800FDFFC;
}

loc_800FDFAC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1096;
    r4 = 22;
    r5 = 88;
    goto loc_800FE8E8;
}

loc_800FDFC0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2470;
    r4 = 2;
    r5 = 181;
    goto loc_800FE8E8;
}

loc_800FDFD4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2473;
    r4 = 1;
    r5 = 182;
    goto loc_800FE8E8;
}

loc_800FDFE8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1302;
    r4 = 7;
    r5 = 97;
    goto loc_800FE8E8;
}

loc_800FDFFC:
{
    r3 = r30;
    ctx->lr = 0x800FE004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE008:
{
}

loc_800FE00C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_800FE028;
    }
}

loc_800FE010:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1008;
    r4 = 4;
    r5 = 84;
    goto loc_800FE8E8;
}

loc_800FE028:
{
    r3 = r30;
    ctx->lr = 0x800FE030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE034:
{
}

loc_800FE038:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800FE054;
    }
}

loc_800FE03C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1014;
    r4 = 4;
    r5 = 85;
    goto loc_800FE8E8;
}

loc_800FE054:
{
    r3 = r30;
    ctx->lr = 0x800FE05Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE060:
{
}

loc_800FE064:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FE074;
    }
}

loc_800FE068:
{
}

loc_800FE06C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FE088;
    }
}

loc_800FE070:
{
    goto loc_800FE09C;
}

loc_800FE074:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1720;
    r4 = 13;
    r5 = 118;
    goto loc_800FE8E8;
}

loc_800FE088:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1745;
    r4 = 12;
    r5 = 119;
    goto loc_800FE8E8;
}

loc_800FE09C:
{
    r3 = r30;
    ctx->lr = 0x800FE0A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE0A8:
{
}

loc_800FE0AC:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(12))) {
        goto loc_800FE1FC;
    }
}

loc_800FE0B0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13812);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE0C8u:
        goto loc_800FE0C8;
        break;
    case 0x800FE100u:
        goto loc_800FE100;
        break;
    case 0x800FE118u:
        goto loc_800FE118;
        break;
    case 0x800FE12Cu:
        goto loc_800FE12C;
        break;
    case 0x800FE140u:
        goto loc_800FE140;
        break;
    case 0x800FE154u:
        goto loc_800FE154;
        break;
    case 0x800FE168u:
        goto loc_800FE168;
        break;
    case 0x800FE17Cu:
        goto loc_800FE17C;
        break;
    case 0x800FE194u:
        goto loc_800FE194;
        break;
    case 0x800FE1A8u:
        goto loc_800FE1A8;
        break;
    case 0x800FE1BCu:
        goto loc_800FE1BC;
        break;
    case 0x800FE1D0u:
        goto loc_800FE1D0;
        break;
    case 0x800FE1E4u:
        goto loc_800FE1E4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FE0C8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    ctx->lr = 0x800FE0D0u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_89E4 = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_89E4);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_89E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800FE0D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FE0E8;
    }
}

loc_800FE0DC:
{
    r3 = 1768;
    r4 = 7;
    goto loc_800FE0F0;
}

loc_800FE0E8:
{
    r3 = 1766;
    r4 = 9;
}

loc_800FE0F0:
{
    r5 = 120;
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FE100:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1856;
    r4 = 5;
    r5 = 129;
    goto loc_800FE8E8;
}

loc_800FE118:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1775;
    r4 = 7;
    r5 = 121;
    goto loc_800FE8E8;
}

loc_800FE12C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1782;
    r4 = 5;
    r5 = 122;
    goto loc_800FE8E8;
}

loc_800FE140:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1787;
    r4 = 7;
    r5 = 123;
    goto loc_800FE8E8;
}

loc_800FE154:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1794;
    r4 = 2;
    r5 = 124;
    goto loc_800FE8E8;
}

loc_800FE168:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1799;
    r4 = 6;
    r5 = 125;
    goto loc_800FE8E8;
}

loc_800FE17C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1838;
    r4 = 4;
    r5 = 128;
    goto loc_800FE8E8;
}

loc_800FE194:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1813;
    r4 = 11;
    r5 = 126;
    goto loc_800FE8E8;
}

loc_800FE1A8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1824;
    r4 = 11;
    r5 = 127;
    goto loc_800FE8E8;
}

loc_800FE1BC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1861;
    r4 = 2;
    r5 = 130;
    goto loc_800FE8E8;
}

loc_800FE1D0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1870;
    r4 = 22;
    r5 = 131;
    goto loc_800FE8E8;
}

loc_800FE1E4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1892;
    r4 = 4;
    r5 = 132;
    goto loc_800FE8E8;
}

loc_800FE1FC:
{
    r3 = r30;
    ctx->lr = 0x800FE204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE208:
{
}

loc_800FE20C:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(11))) {
        goto loc_800FE328;
    }
}

loc_800FE210:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13860);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE228u:
        goto loc_800FE228;
        break;
    case 0x800FE23Cu:
        goto loc_800FE23C;
        break;
    case 0x800FE254u:
        goto loc_800FE254;
        break;
    case 0x800FE26Cu:
        goto loc_800FE26C;
        break;
    case 0x800FE280u:
        goto loc_800FE280;
        break;
    case 0x800FE294u:
        goto loc_800FE294;
        break;
    case 0x800FE2A8u:
        goto loc_800FE2A8;
        break;
    case 0x800FE2BCu:
        goto loc_800FE2BC;
        break;
    case 0x800FE2D4u:
        goto loc_800FE2D4;
        break;
    case 0x800FE2ECu:
        goto loc_800FE2EC;
        break;
    case 0x800FE300u:
        goto loc_800FE300;
        break;
    case 0x800FE314u:
        goto loc_800FE314;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FE228:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1896;
    r4 = 6;
    r5 = 133;
    goto loc_800FE8E8;
}

loc_800FE23C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1902;
    r4 = 4;
    r5 = 134;
    goto loc_800FE8E8;
}

loc_800FE254:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1907;
    r4 = 3;
    r5 = 135;
    goto loc_800FE8E8;
}

loc_800FE26C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1913;
    r4 = 5;
    r5 = 136;
    goto loc_800FE8E8;
}

loc_800FE280:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1924;
    r4 = 8;
    r5 = 137;
    goto loc_800FE8E8;
}

loc_800FE294:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1939;
    r4 = 9;
    r5 = 138;
    goto loc_800FE8E8;
}

loc_800FE2A8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1953;
    r4 = 5;
    r5 = 139;
    goto loc_800FE8E8;
}

loc_800FE2BC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1975;
    r4 = 1;
    r5 = 140;
    goto loc_800FE8E8;
}

loc_800FE2D4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 1977;
    r4 = 3;
    r5 = 141;
    goto loc_800FE8E8;
}

loc_800FE2EC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1980;
    r4 = 3;
    r5 = 142;
    goto loc_800FE8E8;
}

loc_800FE300:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1986;
    r4 = 7;
    r5 = 143;
    goto loc_800FE8E8;
}

loc_800FE314:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 1993;
    r4 = 9;
    r5 = 144;
    goto loc_800FE8E8;
}

loc_800FE328:
{
    r3 = r30;
    ctx->lr = 0x800FE330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE334:
{
}

loc_800FE338:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(10))) {
        goto loc_800FE460;
    }
}

loc_800FE33C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13904);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE354u:
        goto loc_800FE354;
        break;
    case 0x800FE368u:
        goto loc_800FE368;
        break;
    case 0x800FE37Cu:
        goto loc_800FE37C;
        break;
    case 0x800FE390u:
        goto loc_800FE390;
        break;
    case 0x800FE3ACu:
        goto loc_800FE3AC;
        break;
    case 0x800FE3C8u:
        goto loc_800FE3C8;
        break;
    case 0x800FE3E0u:
        goto loc_800FE3E0;
        break;
    case 0x800FE3FCu:
        goto loc_800FE3FC;
        break;
    case 0x800FE414u:
        goto loc_800FE414;
        break;
    case 0x800FE430u:
        goto loc_800FE430;
        break;
    case 0x800FE448u:
        goto loc_800FE448;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FE354:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2002;
    r4 = 21;
    r5 = 145;
    goto loc_800FE8E8;
}

loc_800FE368:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2023;
    r4 = 9;
    r5 = 146;
    goto loc_800FE8E8;
}

loc_800FE37C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2040;
    r4 = 9;
    r5 = 147;
    goto loc_800FE8E8;
}

loc_800FE390:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2062;
    r4 = 3;
    r5 = 148;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FE3AC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2069;
    r4 = 13;
    r5 = 149;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FE3C8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2082;
    r4 = 4;
    r5 = 150;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FE3E0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2092;
    r4 = 9;
    r5 = 151;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FE3FC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2106;
    r4 = 2;
    r5 = 152;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FE414:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2114;
    r4 = 9;
    r5 = 153;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FE430:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2123;
    r4 = 7;
    r5 = 154;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FE448:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2132;
    r4 = 3;
    r5 = 155;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2260), static_cast<uint8_t>(r31));
    goto loc_800FE8E8;
}

loc_800FE460:
{
    r3 = r30;
    ctx->lr = 0x800FE468u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE46C:
{
}

loc_800FE470:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(9))) {
        goto loc_800FE56C;
    }
}

loc_800FE474:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13944);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE48Cu:
        goto loc_800FE48C;
        break;
    case 0x800FE4A0u:
        goto loc_800FE4A0;
        break;
    case 0x800FE4B8u:
        goto loc_800FE4B8;
        break;
    case 0x800FE4D0u:
        goto loc_800FE4D0;
        break;
    case 0x800FE4E8u:
        goto loc_800FE4E8;
        break;
    case 0x800FE500u:
        goto loc_800FE500;
        break;
    case 0x800FE514u:
        goto loc_800FE514;
        break;
    case 0x800FE52Cu:
        goto loc_800FE52C;
        break;
    case 0x800FE544u:
        goto loc_800FE544;
        break;
    case 0x800FE558u:
        goto loc_800FE558;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FE48C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2141;
    r4 = 18;
    r5 = 157;
    goto loc_800FE8E8;
}

loc_800FE4A0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2159;
    r4 = 2;
    r5 = 158;
    goto loc_800FE8E8;
}

loc_800FE4B8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2171;
    r4 = 2;
    r5 = 159;
    goto loc_800FE8E8;
}

loc_800FE4D0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2174;
    r4 = 5;
    r5 = 160;
    goto loc_800FE8E8;
}

loc_800FE4E8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2212;
    r4 = 12;
    r5 = 162;
    goto loc_800FE8E8;
}

loc_800FE500:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2224;
    r4 = 9;
    r5 = 163;
    goto loc_800FE8E8;
}

loc_800FE514:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2242;
    r4 = 15;
    r5 = 164;
    goto loc_800FE8E8;
}

loc_800FE52C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2257;
    r4 = 1;
    r5 = 165;
    goto loc_800FE8E8;
}

loc_800FE544:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2261;
    r4 = 5;
    r5 = 166;
    goto loc_800FE8E8;
}

loc_800FE558:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2277;
    r4 = 1;
    r5 = 167;
    goto loc_800FE8E8;
}

loc_800FE56C:
{
    r3 = r30;
    ctx->lr = 0x800FE574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE578:
{
}

loc_800FE57C:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(10))) {
        goto loc_800FE674;
    }
}

loc_800FE580:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13988);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FE598u:
        goto loc_800FE598;
        break;
    case 0x800FE5ACu:
        goto loc_800FE5AC;
        break;
    case 0x800FE5C0u:
        goto loc_800FE5C0;
        break;
    case 0x800FE5D4u:
        goto loc_800FE5D4;
        break;
    case 0x800FE5E8u:
        goto loc_800FE5E8;
        break;
    case 0x800FE5FCu:
        goto loc_800FE5FC;
        break;
    case 0x800FE610u:
        goto loc_800FE610;
        break;
    case 0x800FE624u:
        goto loc_800FE624;
        break;
    case 0x800FE638u:
        goto loc_800FE638;
        break;
    case 0x800FE64Cu:
        goto loc_800FE64C;
        break;
    case 0x800FE660u:
        goto loc_800FE660;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FE598:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2298;
    r4 = 9;
    r5 = 168;
    goto loc_800FE8E8;
}

loc_800FE5AC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2307;
    r4 = 5;
    r5 = 169;
    goto loc_800FE8E8;
}

loc_800FE5C0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2318;
    r4 = 2;
    r5 = 170;
    goto loc_800FE8E8;
}

loc_800FE5D4:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2326;
    r4 = 10;
    r5 = 171;
    goto loc_800FE8E8;
}

loc_800FE5E8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2349;
    r4 = 4;
    r5 = 172;
    goto loc_800FE8E8;
}

loc_800FE5FC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2368;
    r4 = 8;
    r5 = 173;
    goto loc_800FE8E8;
}

loc_800FE610:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2384;
    r4 = 3;
    r5 = 174;
    goto loc_800FE8E8;
}

loc_800FE624:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2398;
    r4 = 8;
    r5 = 175;
    goto loc_800FE8E8;
}

loc_800FE638:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2411;
    r4 = 16;
    r5 = 176;
    goto loc_800FE8E8;
}

loc_800FE64C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2429;
    r4 = 2;
    r5 = 177;
    goto loc_800FE8E8;
}

loc_800FE660:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2434;
    r4 = 6;
    r5 = 178;
    goto loc_800FE8E8;
}

loc_800FE674:
{
    r3 = r30;
    ctx->lr = 0x800FE67Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE680:
{
}

loc_800FE684:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FE69C;
    }
}

loc_800FE688:
{
}

loc_800FE68C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FE6B0;
    }
}

loc_800FE690:
{
}

loc_800FE694:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FE6C4;
    }
}

loc_800FE698:
{
    goto loc_800FE6DC;
}

loc_800FE69C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2498;
    r4 = 6;
    r5 = 186;
    goto loc_800FE8E8;
}

loc_800FE6B0:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2504;
    r4 = 3;
    r5 = 187;
    goto loc_800FE8E8;
}

loc_800FE6C4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2516;
    r4 = 4;
    r5 = 188;
    goto loc_800FE8E8;
}

loc_800FE6DC:
{
    r3 = r30;
    ctx->lr = 0x800FE6E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE6E8:
{
}

loc_800FE6EC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FE70C;
    }
}

loc_800FE6F0:
{
}

loc_800FE6F4:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FE720;
    }
}

loc_800FE6F8:
{
}

loc_800FE6FC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FE734;
    }
}

loc_800FE700:
{
}

loc_800FE704:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(3))) {
        goto loc_800FE748;
    }
}

loc_800FE708:
{
    goto loc_800FE75C;
}

loc_800FE70C:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2455;
    r4 = 15;
    r5 = 180;
    goto loc_800FE8E8;
}

loc_800FE720:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2477;
    r4 = 2;
    r5 = 183;
    goto loc_800FE8E8;
}

loc_800FE734:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2480;
    r4 = 1;
    r5 = 184;
    goto loc_800FE8E8;
}

loc_800FE748:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 2484;
    r4 = 7;
    r5 = 185;
    goto loc_800FE8E8;
}

loc_800FE75C:
{
    r3 = r30;
    ctx->lr = 0x800FE764u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE768:
{
}

loc_800FE76C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_800FE788;
    }
}

loc_800FE770:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 2441;
    r4 = 4;
    r5 = 179;
    goto loc_800FE8E8;
}

loc_800FE788:
{
    r3 = r30;
    ctx->lr = 0x800FE790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE794:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 6u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 7), static_cast<uint8_t>(r0));
}

loc_800FE7A0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FE7D8;
    }
}

loc_800FE7A4:
{
}

loc_800FE7A8:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FE7EC;
    }
}

loc_800FE7AC:
{
}

loc_800FE7B0:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FE800;
    }
}

loc_800FE7B4:
{
}

loc_800FE7B8:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(3))) {
        goto loc_800FE814;
    }
}

loc_800FE7BC:
{
}

loc_800FE7C0:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(5))) {
        goto loc_800FE828;
    }
}

loc_800FE7C4:
{
}

loc_800FE7C8:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(6))) {
        goto loc_800FE83C;
    }
}

loc_800FE7CC:
{
}

loc_800FE7D0:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(7))) {
        goto loc_800FE850;
    }
}

loc_800FE7D4:
{
    goto loc_800FE864;
}

loc_800FE7D8:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 4;
    r3 = 603;
    r5 = 8;
    goto loc_800FE8E8;
}

loc_800FE7EC:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 10;
    r3 = 3;
    r5 = 4;
    goto loc_800FE8E8;
}

loc_800FE800:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 4;
    r3 = 607;
    r5 = 9;
    goto loc_800FE8E8;
}

loc_800FE814:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 2;
    r3 = 611;
    r5 = 10;
    goto loc_800FE8E8;
}

loc_800FE828:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 1;
    r3 = 613;
    r5 = 11;
    goto loc_800FE8E8;
}

loc_800FE83C:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 2;
    r3 = 614;
    r5 = 12;
    goto loc_800FE8E8;
}

loc_800FE850:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2), static_cast<uint8_t>(r31));
    r4 = 1;
    r3 = 616;
    r5 = 13;
    goto loc_800FE8E8;
}

loc_800FE864:
{
    r3 = r30;
    ctx->lr = 0x800FE86Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE870:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
}

loc_800FE87C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FE894;
    }
}

loc_800FE880:
{
}

loc_800FE884:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_800FE8A8;
    }
}

loc_800FE888:
{
}

loc_800FE88C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_800FE8BC;
    }
}

loc_800FE890:
{
    goto loc_800FE8D0;
}

loc_800FE894:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r4 = 18;
    r3 = 175;
    r5 = 7;
    goto loc_800FE8E8;
}

loc_800FE8A8:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r4 = 10;
    r3 = 1048;
    r5 = 23;
    goto loc_800FE8E8;
}

loc_800FE8BC:
{
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r31));
    r4 = 6;
    r3 = 1019;
    r5 = 21;
    goto loc_800FE8E8;
}

loc_800FE8D0:
{
    r3 = r30;
    ctx->lr = 0x800FE8D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE8DC:
{
    r3 = r30;
    ctx->lr = 0x800FE8E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE8E8:
{
    MemoryInline::FlatWrite32(r29, r4);
    MemoryInline::FlatWrite32((r29 + 208), r3);
    MemoryInline::FlatWrite32((r29 + 212), r5);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 124), r0);
    MemoryInline::FlatWrite32((r29 + 2256), r0);
    r0 = 3;
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 68), static_cast<uint8_t>(r28));
    r3 = r30;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + -5812);
    MemoryInline::FlatWriteRam32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + -5728);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_800FE934:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FD8C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FD8C8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FD8C8 func_800FD8C8 preserves=true fpr_mask=0x00000000
