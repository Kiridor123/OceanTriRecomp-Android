#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB6BC(CpuContext* ctx);
extern "C" uint64_t func_800AB6BC_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802EEC88(CpuContext* ctx);
extern "C" uint64_t func_802EEC88_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802E4CC0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[2].d = arg_f2;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802E4CC0;

loc_802E4CC0:
{
    guest_range_0 = MemoryAlias::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryAlias::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r30 = r3;
    r31 = r4;
    r0 = 0;
    MemoryAlias::FlatWrite8((r4 + 21), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 25), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 22), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 23), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 24), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 15), static_cast<uint8_t>(r0));
    if (!MemoryAlias::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryAlias::WriteResolved16(guest_range_0, 8u, (r1 + 8), r0);
        MemoryAlias::WriteResolved16(guest_range_0, 10u, (r1 + 10), r0);
    }
    if (!MemoryAlias::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryAlias::WriteResolved16(guest_range_0, 12u, (r1 + 12), r0);
        MemoryAlias::WriteResolved16(guest_range_0, 14u, (r1 + 14), r0);
    }
    if (!MemoryAlias::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryAlias::WriteResolved16(guest_range_0, 16u, (r1 + 16), r0);
        MemoryAlias::WriteResolved16(guest_range_0, 18u, (r1 + 18), r0);
    }
    if (!MemoryAlias::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryAlias::WriteResolved16(guest_range_0, 20u, (r1 + 20), r0);
        MemoryAlias::WriteResolved16(guest_range_0, 22u, (r1 + 22), r0);
    }
    if (!MemoryAlias::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryAlias::WriteResolved16(guest_range_0, 24u, (r1 + 24), r0);
        MemoryAlias::WriteResolved16(guest_range_0, 26u, (r1 + 26), r0);
    }
    r0 = MemoryAlias::FlatRead8((r3 + 1001));
}

loc_802E4D2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E4D38;
    }
}

loc_802E4D30:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r4 + 23), static_cast<uint8_t>(r0));
}

loc_802E4D38:
{
    r5 = MemoryAlias::FlatRead8((r3 + 996));
    r0 = MemoryAlias::FlatRead8((r4 + 20));
}

loc_802E4D44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_802E4D60;
    }
}

loc_802E4D48:
{
    MemoryAlias::FlatWrite8((r4 + 20), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryAlias::FlatWrite8((r4 + 14), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 13), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    goto loc_802E4E44;
}

loc_802E4D60:
{
    r5 = MemoryAlias::FlatRead8((r4 + 12));
    r5 = MH3_TickLoad(r5, 2150518112);
    r0 = (r5 + 1);
    MemoryAlias::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r5 = (r0 & 255);
}

loc_802E4D74:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(190))) {
        goto loc_802E4D84;
    }
}

loc_802E4D78:
{
    r0 = 40;
    MemoryAlias::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    goto loc_802E4D9C;
}

loc_802E4D84:
{
    r0 = (r5 + 166);
    r0 = (r0 & 255);
}

loc_802E4D90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_802E4D9C;
    }
}

loc_802E4D94:
{
    r0 = 40;
    MemoryAlias::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
}

loc_802E4D9C:
{
    r0 = MemoryAlias::FlatRead8((r3 + 777));
    r0 = (r0 & 32);
}

loc_802E4DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E4DB4;
    }
}

loc_802E4DAC:
{
    r0 = 100;
    MemoryAlias::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
}

loc_802E4DB4:
{
    r3 = MemoryAlias::FlatRead8((r4 + 13));
    r3 = MH3_TickLoad(r3, 2150518196);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r4 + 13), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802E4DC8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(90))) {
        goto loc_802E4E24;
    }
}

loc_802E4DCC:
{
}

loc_802E4DD0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(138))) {
        goto loc_802E4DDC;
    }
}

loc_802E4DD4:
{
    r0 = 90;
    MemoryAlias::FlatWrite8((r4 + 13), static_cast<uint8_t>(r0));
}

loc_802E4DDC:
{
    r3 = MemoryAlias::FlatRead8((r4 + 13));
    r0 = (r3 + -90);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 32), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -12736));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800AB6BC_1F87 = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_1F87);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_1F87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -12732));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword0;
    MemoryAlias::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
}

loc_802E4E24:
{
    r3 = MemoryAlias::FlatRead8((r31 + 14));
    r3 = MH3_TickLoad(r3, 2150518308);
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802E4E38:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_802E4E44;
    }
}

loc_802E4E3C:
{
    r0 = 30;
    MemoryAlias::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_802E4E44:
{
    r0 = MemoryAlias::FlatRead8((r30 + 996));
}

loc_802E4E4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(18))) {
        goto loc_802E5268;
    }
}

loc_802E4E50:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 25352);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802E4E68u:
        goto loc_802E4E68;
        break;
    case 0x802E4E84u:
        goto loc_802E4E84;
        break;
    case 0x802E4E98u:
        goto loc_802E4E98;
        break;
    case 0x802E4EC8u:
        goto loc_802E4EC8;
        break;
    case 0x802E4EF8u:
        goto loc_802E4EF8;
        break;
    case 0x802E4F28u:
        goto loc_802E4F28;
        break;
    case 0x802E4FD8u:
        goto loc_802E4FD8;
        break;
    case 0x802E4FF0u:
        goto loc_802E4FF0;
        break;
    case 0x802E4F58u:
        goto loc_802E4F58;
        break;
    case 0x802E4F40u:
        goto loc_802E4F40;
        break;
    case 0x802E4F70u:
        goto loc_802E4F70;
        break;
    case 0x802E4F8Cu:
        goto loc_802E4F8C;
        break;
    case 0x802E4FC0u:
        goto loc_802E4FC0;
        break;
    case 0x802E5098u:
        goto loc_802E5098;
        break;
    case 0x802E4E6Cu:
        goto loc_802E4E6C;
        break;
    case 0x802E50C0u:
        goto loc_802E50C0;
        break;
    case 0x802E50E8u:
        goto loc_802E50E8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802E4E68:
{
    goto loc_802E5268;
}

loc_802E4E6C:
{
    r0 = 34;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -10289152;
    r0 = (r3 + 18431);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4E84:
{
    r0 = 34;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4E98:
{
    r3 = 0x80790000u;
    r4 = (r3 + 17648);
    r3 = (r1 + 8);
    goto loc_802E4EB8;
}

loc_802E4EA8:
{
    r0 = MemoryAlias::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryAlias::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_802E4EB8:
{
    r0 = MemoryAlias::FlatRead16(r4);
}

loc_802E4EC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802E4EA8;
    }
}

loc_802E4EC4:
{
    goto loc_802E5100;
}

loc_802E4EC8:
{
    r3 = 0x80790000u;
    r4 = (r3 + 17656);
    r3 = (r1 + 8);
    goto loc_802E4EE8;
}

loc_802E4ED8:
{
    r0 = MemoryAlias::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryAlias::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_802E4EE8:
{
    r0 = MemoryAlias::FlatRead16(r4);
}

loc_802E4EF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802E4ED8;
    }
}

loc_802E4EF4:
{
    goto loc_802E5100;
}

loc_802E4EF8:
{
    r3 = 0x805C0000u;
    r4 = (r3 + 1952);
    r3 = (r1 + 8);
    goto loc_802E4F18;
}

loc_802E4F08:
{
    r0 = MemoryAlias::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryAlias::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_802E4F18:
{
    r0 = MemoryAlias::FlatRead16(r4);
}

loc_802E4F20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802E4F08;
    }
}

loc_802E4F24:
{
    goto loc_802E5100;
}

loc_802E4F28:
{
    r0 = 115;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = 1135345664;
    r0 = (r3 + -8449);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4F40:
{
    r0 = 115;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -902889472;
    r0 = (r3 + 23039);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4F58:
{
    r0 = 110;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -1499398144;
    r0 = (r3 + -6401);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4F70:
{
    r0 = 48;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = 0x805D0000u;
    r3 = (r3 + -6600);
    r0 = MemoryAlias::FlatRead32((r3 + 4));
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4F8C:
{
    r0 = 48;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -267386880;
    r0 = (r3 + 4351);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    r3 = r30;
    r4 = 43;
    ctx->lr = 0x802E4FACu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80273218_3BDE = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_3BDE);
        r4 = static_cast<uint32_t>(regargs_result_80273218_3BDE >> 32);
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
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_802E4FB0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E4FB4:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    goto loc_802E5268;
}

loc_802E4FC0:
{
    r0 = 34;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -252706816;
    r0 = (r3 + 4351);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4FD8:
{
    r0 = 112;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -803471360;
    r0 = (r3 + 10239);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E4FF0:
{
    r3 = r30;
    r4 = MemoryAlias::FlatRead16((r30 + 772));
    ctx->lr = 0x802E4FFCu;
    if constexpr (KnownRegArgsCpuCall<0x802EEC88u>(&func_802EEC88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802EEC88_4260 = func_802EEC88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802EEC88_4260);
        r4 = static_cast<uint32_t>(regargs_result_802EEC88_4260 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802EEC88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802E5000:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E5004:
{
    r0 = MemoryAlias::FlatRead16((r30 + 772));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    r3 = MemoryAlias::FlatRead16((r3 + 632));
}

loc_802E5018:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(223))) {
        goto loc_802E5268;
    }
}

loc_802E501C:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryAlias::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryAlias::FlatRead8((r3 + 3));
}

loc_802E5028:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802E5040;
    }
}

loc_802E502C:
{
    r0 = MemoryAlias::FlatRead16((r30 + 772));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r30 + r0);
    r0 = MemoryAlias::FlatRead16((r4 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    goto loc_802E5044;
}

loc_802E5040:
{
    r0 = 0;
}

loc_802E5044:
{
    r0 = (r0 & 255);
    MemoryAlias::FlatWrite8((r31 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 4));
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 5));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6600);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryAlias::FlatRead32(r3_addr_2);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    r3 = r30;
    r0 = MemoryAlias::FlatRead16((r30 + 772));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r30 + r0);
    r4 = MemoryAlias::FlatRead16((r4 + 632));
    ctx->lr = 0x802E5084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8027C26Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
}

loc_802E5088:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E508C:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    goto loc_802E5268;
}

loc_802E5098:
{
    r0 = 35;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    // inline leaf 0x8027DCC8 (5 guest instruction(s))
    r3 = 0x806C0000u;
    r0 = MemoryAlias::FlatRead8((r3 + -9184));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8027DCC8
}

loc_802E50B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E50B4:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    goto loc_802E5268;
}

loc_802E50C0:
{
    r0 = 35;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    // inline leaf 0x8027DCDC (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -9184);
    r0 = MemoryAlias::FlatRead8((r3 + 8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8027DCDC
}

loc_802E50D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E50DC:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    goto loc_802E5268;
}

loc_802E50E8:
{
    r0 = 35;
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = -262144000;
    r0 = (r3 + 24831);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E5100:
{
    r6 = 0;
    r3 = (r1 + 8);
    r0 = 11;
    ctr = r0;
}

loc_802E5110:
{
    r4 = MemoryAlias::FlatRead16(r3);
}

loc_802E5118:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802E5198;
    }
}

loc_802E511C:
{
    r0 = MemoryAlias::FlatRead16((r30 + 772));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = (r30 + r0);
    r0 = MemoryAlias::FlatRead16((r5 + 632));
}

loc_802E5130:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_802E518C;
    }
}

loc_802E5134:
{
    r0 = MemoryAlias::FlatRead16((r5 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802E513C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802E518C;
    }
}

loc_802E5140:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r1 + 8);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_3);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl3_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryAlias::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F758;
    }
}

loc_inl3_0x8029F754:
{
    r3 = 0;
}

loc_inl3_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl3_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryAlias::FlatRead8((r3 + 4));
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead16((r30 + 772));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4 = (r30 + r0);
    r0 = MemoryAlias::FlatRead16((r4 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryAlias::FlatWrite8((r31 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 5));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6600);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryAlias::FlatRead32(r3_addr_4);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E518C:
{
    r3 = (r3 + 2);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802E5110;
    }
}

loc_802E5198:
{
    r7 = 0;
    r4 = (r1 + 8);
    r0 = 24;
}

loc_802E51A4:
{
    r6 = MemoryAlias::FlatRead16(r4);
}

loc_802E51AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_802E522C;
    }
}

loc_802E51B0:
{
    r29 = 0;
    r5 = r30;
    ctr = r0;
}

loc_802E51BC:
{
    r3 = MemoryAlias::FlatRead16((r5 + 632));
}

loc_802E51C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r6))) {
        goto loc_802E5210;
    }
}

loc_802E51C8:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r3 = (r1 + 8);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_5);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl4_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryAlias::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl4_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl4_0x8029F758;
    }
}

loc_inl4_0x8029F754:
{
    r3 = 0;
}

loc_inl4_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl4_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryAlias::FlatRead8((r3 + 4));
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = (r30 + r0);
    r0 = MemoryAlias::FlatRead16((r4 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryAlias::FlatWrite8((r31 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 5));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6600);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryAlias::FlatRead32(r3_addr_6);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    goto loc_802E5268;
}

loc_802E5210:
{
    r5 = (r5 + 4);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802E51BC;
    }
}

loc_802E521C:
{
    r4 = (r4 + 2);
    r7 = (r7 + 1);
}

loc_802E5228:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(11))) {
        goto loc_802E51A4;
    }
}

loc_802E522C:
{
    r0 = MemoryAlias::FlatRead8((r31 + 25));
}

loc_802E5234:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E5268;
    }
}

loc_802E5238:
{
    r3 = MemoryAlias::FlatRead16((r1 + 8));
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl5_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryAlias::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl5_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl5_0x8029F758;
    }
}

loc_inl5_0x8029F754:
{
    r3 = 0;
}

loc_inl5_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl5_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryAlias::FlatRead8((r3 + 4));
    MemoryAlias::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 5));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6600);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryAlias::FlatRead32(r3_addr_7);
    MemoryAlias::FlatWrite32((r31 + 16), r0);
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
}

loc_802E5268:
{
    r0 = MemoryAlias::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E4CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E4CC0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E4CC0 func_802E4CC0 preserves=true fpr_mask=0x00000000
