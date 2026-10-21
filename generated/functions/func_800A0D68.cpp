#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009D624(CpuContext* ctx);
extern "C" uint64_t func_8009D624_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A1310(CpuContext* ctx);
extern "C" uint64_t func_800A1310_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A0D68_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A0D68u);
    goto loc_800A0D68;

loc_800A0D68:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r3;
    r25 = r4;
    r31 = r5;
    r26 = r6;
    r30 = r7;
    r27 = r8;
    r28 = r9;
    r29 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A0DC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0DD8;
    }
}

loc_800A0DC4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A0DD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0DD8;
    }
}

loc_800A0DD4:
{
    r10 = 0;
}

loc_800A0DD8:
{
}

loc_800A0DDC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A0DF4;
    }
}

loc_800A0DE0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A0DEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0DF4;
    }
}

loc_800A0DF0:
{
    r9 = 0;
}

loc_800A0DF4:
{
}

loc_800A0DF8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A0E0C;
    }
}

loc_800A0DFC:
{
    r0 = (r11 + 1073741824);
}

loc_800A0E04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0E0C;
    }
}

loc_800A0E08:
{
    r8 = 0;
}

loc_800A0E0C:
{
}

loc_800A0E10:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A0E28;
    }
}

loc_800A0E14:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A0E20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0E28;
    }
}

loc_800A0E24:
{
    r7 = 0;
}

loc_800A0E28:
{
}

loc_800A0E2C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A0E44;
    }
}

loc_800A0E30:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A0E3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0E44;
    }
}

loc_800A0E40:
{
    r6 = 0;
}

loc_800A0E44:
{
}

loc_800A0E48:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A0E60;
    }
}

loc_800A0E4C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A0E58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0E60;
    }
}

loc_800A0E5C:
{
    r5 = 0;
}

loc_800A0E60:
{
}

loc_800A0E64:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A0E88;
    }
}

loc_800A0E68:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1641;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A0E88u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A0E88:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r25 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A0EAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0EC4;
    }
}

loc_800A0EB0:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A0EBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0EC4;
    }
}

loc_800A0EC0:
{
    r9 = 0;
}

loc_800A0EC4:
{
}

loc_800A0EC8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A0EE0;
    }
}

loc_800A0ECC:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A0ED8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0EE0;
    }
}

loc_800A0EDC:
{
    r8 = 0;
}

loc_800A0EE0:
{
}

loc_800A0EE4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A0EF8;
    }
}

loc_800A0EE8:
{
    r0 = (r10 + 1073741824);
}

loc_800A0EF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0EF8;
    }
}

loc_800A0EF4:
{
    r7 = 0;
}

loc_800A0EF8:
{
}

loc_800A0EFC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A0F14;
    }
}

loc_800A0F00:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A0F0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0F14;
    }
}

loc_800A0F10:
{
    r6 = 0;
}

loc_800A0F14:
{
}

loc_800A0F18:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A0F30;
    }
}

loc_800A0F1C:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A0F28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0F30;
    }
}

loc_800A0F2C:
{
    r5 = 0;
}

loc_800A0F30:
{
}

loc_800A0F34:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A0F4C;
    }
}

loc_800A0F38:
{
    r3 = (r25 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A0F44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0F4C;
    }
}

loc_800A0F48:
{
    r4 = 0;
}

loc_800A0F4C:
{
}

loc_800A0F50:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A0F74;
    }
}

loc_800A0F54:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1642;
    r5 = 0x80590000u;
    r5 = (r5 + 10584);
    r6 = r25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A0F74u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A0F74:
{
    r3 = r24;
    r4 = (r1 + 44);
    r5 = (r1 + 40);
    r6 = (r1 + 36);
    r7 = (r1 + 32);
    r8 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8009F290u>(ctx);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 44));
    r5 = r31;
    r6 = (r1 + 10);
    r7 = (r1 + 24);
    r8 = (r1 + 20);
    r9 = (r1 + 8);
    ctx->lr = 0x800A0FB0u;
    if constexpr (KnownRegArgsCpuCall<0x8009D624u>(&func_8009D624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8009D624_25AB = func_8009D624_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8009D624_25AB);
        r4 = static_cast<uint32_t>(regargs_result_8009D624_25AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8009D624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_800A0FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(104))) {
        goto loc_800A0FD4;
    }
}

loc_800A0FC0:
{
}

loc_800A0FC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(108))) {
        goto loc_800A0FE0;
    }
}

loc_800A0FC8:
{
}

loc_800A0FCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(112))) {
        goto loc_800A0FEC;
    }
}

loc_800A0FD0:
{
    goto loc_800A12DC;
}

loc_800A0FD4:
{
    r30 = (r25 + 136);
    r31 = 0;
    goto loc_800A0FFC;
}

loc_800A0FE0:
{
    r30 = (r25 + 140);
    r31 = 1;
    goto loc_800A0FFC;
}

loc_800A0FEC:
{
    r30 = (r25 + 144);
    r31 = 2;
}

loc_800A0FFC:
{
    r8 = MemoryInline::FlatRead32((r1 + 40));
    r24 = (r8 + 4);
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r5 = r24;
    r6 = 16;
    r7 = 0;
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 0;
    ctx->lr = 0x800A1028u;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_30C8 = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_30C8);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_30C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A1310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r1 + 40));
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r23 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r23 + 2));
}

loc_800A1050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A1064;
    }
}

loc_800A1054:
{
    r3 = (r1 + 12);
    r4 = (r23 + 12);
    // inline leaf 0x800A12F4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A12F4
    goto loc_800A1140;
}

loc_800A1064:
{
    r22 = MemoryInline::FlatRead16((r23 + 12));
    r3 = (r26 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 44));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r22;
    r6 = MemoryInline::FlatRead32((r1 + 20));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_3B11 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_3B11);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_3B11 >> 32);
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
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r24 = r3;
    r0 = MemoryInline::FlatRead8((r23 + 2));
    r0 = (r0 & 2);
}

loc_800A1090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A1114;
    }
}

loc_800A1094:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r3 + r0);
    r22 = (r3 + 4);
    r3 = (r1 + 12);
    r4 = r22;
    // inline leaf 0x800A12F4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A12F4
    r0 = MemoryInline::FlatRead8((r22 + 4));
}

loc_800A10B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800A10D0;
    }
}

loc_800A10BC:
{
}

loc_800A10C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800A10EC;
    }
}

loc_800A10C4:
{
}

loc_800A10C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800A1108;
    }
}

loc_800A10CC:
{
    goto loc_800A1140;
}

loc_800A10D0:
{
    r0 = MemoryInline::FlatRead8((r1 + 13));
    r3 = (r0 & 2);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 1);
    r0 = (r3 | r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_800A1140;
}

loc_800A10EC:
{
    r0 = MemoryInline::FlatRead8((r1 + 13));
    r3 = (r0 & 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 2);
    r0 = (r3 | r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_800A1140;
}

loc_800A1108:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 3);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_800A1140;
}

loc_800A1114:
{
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r3 = (r1 + 12);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r6 + r0);
    r4 = (r4 + 4);
    // inline leaf 0x800A12F4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A12F4
}

loc_800A1140:
{
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A117C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1194;
    }
}

loc_800A1180:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A118C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1194;
    }
}

loc_800A1190:
{
    r9 = 0;
}

loc_800A1194:
{
}

loc_800A1198:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A11B0;
    }
}

loc_800A119C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A11A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A11B0;
    }
}

loc_800A11AC:
{
    r8 = 0;
}

loc_800A11B0:
{
}

loc_800A11B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A11C8;
    }
}

loc_800A11B8:
{
    r0 = (r10 + 1073741824);
}

loc_800A11C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A11C8;
    }
}

loc_800A11C4:
{
    r7 = 0;
}

loc_800A11C8:
{
}

loc_800A11CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A11E4;
    }
}

loc_800A11D0:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A11DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A11E4;
    }
}

loc_800A11E0:
{
    r6 = 0;
}

loc_800A11E4:
{
}

loc_800A11E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1200;
    }
}

loc_800A11EC:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A11F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1200;
    }
}

loc_800A11FC:
{
    r5 = 0;
}

loc_800A1200:
{
}

loc_800A1204:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A121C;
    }
}

loc_800A1208:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1214:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A121C;
    }
}

loc_800A1218:
{
    r4 = 0;
}

loc_800A121C:
{
}

loc_800A1220:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1244;
    }
}

loc_800A1224:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1756;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1244u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A1244:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = MemoryInline::FlatRead16((r25 + 148));
    r0 = 15;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = ~(r0 | r0);
    r0 = (r0 & 65535);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite16((r25 + 148), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r0 & 15);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r25 + 148), static_cast<uint16_t>(r0));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r3 = MemoryInline::FlatRead8((r25 + 150));
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = ~(r0 | r0);
    r0 = (r0 & 255);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite8((r25 + 150), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    r0 = (r0 & 3);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r25 + 150), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r28, r30);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWrite32(r27, r0);
    r0 = MemoryInline::FlatRead16((r1 + 14));
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 4), r31);
}

loc_800A12DC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A0D68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A0D68_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A0D68 func_800A0D68 preserves=true fpr_mask=0x00000000
