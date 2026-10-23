#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BA8B8(CpuContext* ctx);
extern "C" uint64_t func_800BA8B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800BB020(CpuContext* ctx);
extern "C" uint64_t func_800BB020_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B9AE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_800B9AE4;

loc_800B9AE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B9B30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9B48;
    }
}

loc_800B9B34:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B9B40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9B48;
    }
}

loc_800B9B44:
{
    r10 = 0;
}

loc_800B9B48:
{
}

loc_800B9B4C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B9B64;
    }
}

loc_800B9B50:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B9B5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9B64;
    }
}

loc_800B9B60:
{
    r9 = 0;
}

loc_800B9B64:
{
}

loc_800B9B68:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B9B7C;
    }
}

loc_800B9B6C:
{
    r0 = (r11 + 1073741824);
}

loc_800B9B74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9B7C;
    }
}

loc_800B9B78:
{
    r8 = 0;
}

loc_800B9B7C:
{
}

loc_800B9B80:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B9B98;
    }
}

loc_800B9B84:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B9B90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9B98;
    }
}

loc_800B9B94:
{
    r7 = 0;
}

loc_800B9B98:
{
}

loc_800B9B9C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B9BB4;
    }
}

loc_800B9BA0:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B9BAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9BB4;
    }
}

loc_800B9BB0:
{
    r6 = 0;
}

loc_800B9BB4:
{
}

loc_800B9BB8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B9BD0;
    }
}

loc_800B9BBC:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B9BC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9BD0;
    }
}

loc_800B9BCC:
{
    r4 = 0;
}

loc_800B9BD0:
{
}

loc_800B9BD4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B9BF8;
    }
}

loc_800B9BD8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 502;
    r5 = 0x80590000u;
    r5 = (r5 + 18024);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B9BF8u;
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

loc_800B9BF8:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r30 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B9C20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9C38;
    }
}

loc_800B9C24:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B9C30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9C38;
    }
}

loc_800B9C34:
{
    r10 = 0;
}

loc_800B9C38:
{
}

loc_800B9C3C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B9C54;
    }
}

loc_800B9C40:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B9C4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9C54;
    }
}

loc_800B9C50:
{
    r9 = 0;
}

loc_800B9C54:
{
}

loc_800B9C58:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B9C6C;
    }
}

loc_800B9C5C:
{
    r0 = (r11 + 1073741824);
}

loc_800B9C64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9C6C;
    }
}

loc_800B9C68:
{
    r8 = 0;
}

loc_800B9C6C:
{
}

loc_800B9C70:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B9C88;
    }
}

loc_800B9C74:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B9C80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9C88;
    }
}

loc_800B9C84:
{
    r7 = 0;
}

loc_800B9C88:
{
}

loc_800B9C8C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B9CA4;
    }
}

loc_800B9C90:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B9C9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9CA4;
    }
}

loc_800B9CA0:
{
    r5 = 0;
}

loc_800B9CA4:
{
}

loc_800B9CA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B9CC0;
    }
}

loc_800B9CAC:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B9CB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9CC0;
    }
}

loc_800B9CBC:
{
    r4 = 0;
}

loc_800B9CC0:
{
}

loc_800B9CC4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B9CE4;
    }
}

loc_800B9CC8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 503;
    r5 = 0x80590000u;
    r5 = (r5 + 18076);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B9CE4u;
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

loc_800B9CE4:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    ctx->lr = 0x800B9CECu;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_2183 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_2183;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B9D14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D2C;
    }
}

loc_800B9D18:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B9D24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D2C;
    }
}

loc_800B9D28:
{
    r10 = 0;
}

loc_800B9D2C:
{
}

loc_800B9D30:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B9D48;
    }
}

loc_800B9D34:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B9D40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D48;
    }
}

loc_800B9D44:
{
    r9 = 0;
}

loc_800B9D48:
{
}

loc_800B9D4C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B9D60;
    }
}

loc_800B9D50:
{
    r0 = (r11 + 1073741824);
}

loc_800B9D58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D60;
    }
}

loc_800B9D5C:
{
    r8 = 0;
}

loc_800B9D60:
{
}

loc_800B9D64:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B9D7C;
    }
}

loc_800B9D68:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B9D74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D7C;
    }
}

loc_800B9D78:
{
    r7 = 0;
}

loc_800B9D7C:
{
}

loc_800B9D80:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B9D98;
    }
}

loc_800B9D84:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B9D90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9D98;
    }
}

loc_800B9D94:
{
    r6 = 0;
}

loc_800B9D98:
{
}

loc_800B9D9C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B9DB4;
    }
}

loc_800B9DA0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B9DAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B9DB4;
    }
}

loc_800B9DB0:
{
    r5 = 0;
}

loc_800B9DB4:
{
}

loc_800B9DB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B9DDC;
    }
}

loc_800B9DBC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 506;
    r5 = 0x80590000u;
    r5 = (r5 + 18136);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B9DDCu;
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

loc_800B9DDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 173));
}

loc_800B9DE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B9E04;
    }
}

loc_800B9DE8:
{
}

loc_800B9DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800B9E04;
    }
}

loc_800B9DF0:
{
}

loc_800B9DF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B9E18;
    }
}

loc_800B9DF8:
{
}

loc_800B9DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B9E2C;
    }
}

loc_800B9E00:
{
    goto loc_800B9E3C;
}

loc_800B9E04:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x800B9E14u;
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
    InvokeDirectCpu<0x800B9E5Cu>(ctx);
    r0 = ctx->gpr[0];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    goto loc_800B9E3C;
}

loc_800B9E18:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x800B9E28u;
    if constexpr (KnownRegArgsCpuCall<0x800BA8B8u>(&func_800BA8B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800BA8B8_3761 = func_800BA8B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800BA8B8_3761);
        r4 = static_cast<uint32_t>(regargs_result_800BA8B8_3761 >> 32);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x800BA8B8u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_800B9E3C;
}

loc_800B9E2C:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x800B9E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800BB020u>(&func_800BB020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800BB020_3FB7 = func_800BB020_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800BB020_3FB7);
        r4 = static_cast<uint32_t>(regargs_result_800BB020_3FB7 >> 32);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x800BB020u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_800B9E3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFF0FFFF fpr_write=0xFFF0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B9AE4 func_800B9AE4 preserves=true fpr_mask=0x00000000
