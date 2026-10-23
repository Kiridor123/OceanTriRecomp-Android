#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A9B4(CpuContext* ctx);
extern "C" uint64_t func_8005A9B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F1BC(CpuContext* ctx);
extern "C" uint64_t func_8006F1BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F2FC(CpuContext* ctx);
extern "C" uint64_t func_8006F2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F3D8(CpuContext* ctx);
extern "C" uint64_t func_8006F3D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F480(CpuContext* ctx);
extern "C" uint64_t func_8006F480_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F520(CpuContext* ctx);
extern "C" uint64_t func_8006F520_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076734(CpuContext* ctx);
extern "C" uint64_t func_80076734_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800767F8(CpuContext* ctx);
extern "C" uint64_t func_800767F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800768C0(CpuContext* ctx);
extern "C" uint64_t func_800768C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076968(CpuContext* ctx);
extern "C" uint32_t func_80076968_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800769EC(CpuContext* ctx);
extern "C" uint64_t func_800769EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078414(CpuContext* ctx);
extern "C" uint32_t func_80078414_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078450(CpuContext* ctx);
extern "C" uint64_t func_80078450_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800784BC(CpuContext* ctx);
extern "C" uint32_t func_800784BC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800784F8(CpuContext* ctx);
extern "C" uint32_t func_800784F8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078534(CpuContext* ctx);
extern "C" uint32_t func_80078534_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078570(CpuContext* ctx);
extern "C" uint32_t func_80078570_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800785AC(CpuContext* ctx);
extern "C" uint32_t func_800785AC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800785E8(CpuContext* ctx);
extern "C" uint32_t func_800785E8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078624(CpuContext* ctx);
extern "C" uint64_t func_80078624_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078678(CpuContext* ctx);
extern "C" uint32_t func_80078678_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800786B4(CpuContext* ctx);
extern "C" uint32_t func_800786B4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80077ED4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80077ED4;

loc_80077ED4:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80077F1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077F34;
    }
}

loc_80077F20:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80077F2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077F34;
    }
}

loc_80077F30:
{
    r10 = 0;
}

loc_80077F34:
{
}

loc_80077F38:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80077F50;
    }
}

loc_80077F3C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80077F48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077F50;
    }
}

loc_80077F4C:
{
    r9 = 0;
}

loc_80077F50:
{
}

loc_80077F54:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80077F68;
    }
}

loc_80077F58:
{
    r0 = (r11 + 1073741824);
}

loc_80077F60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077F68;
    }
}

loc_80077F64:
{
    r8 = 0;
}

loc_80077F68:
{
}

loc_80077F6C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80077F84;
    }
}

loc_80077F70:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80077F7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077F84;
    }
}

loc_80077F80:
{
    r7 = 0;
}

loc_80077F84:
{
}

loc_80077F88:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80077FA0;
    }
}

loc_80077F8C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80077F98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077FA0;
    }
}

loc_80077F9C:
{
    r6 = 0;
}

loc_80077FA0:
{
}

loc_80077FA4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80077FBC;
    }
}

loc_80077FA8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80077FB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80077FBC;
    }
}

loc_80077FB8:
{
    r5 = 0;
}

loc_80077FBC:
{
}

loc_80077FC0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80077FE4;
    }
}

loc_80077FC4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -4032);
    r4 = 205;
    r5 = 0x80590000u;
    r5 = (r5 + -3928);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80077FE4u;
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

loc_80077FE4:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80078008:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078020;
    }
}

loc_8007800C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80078018:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078020;
    }
}

loc_8007801C:
{
    r9 = 0;
}

loc_80078020:
{
}

loc_80078024:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007803C;
    }
}

loc_80078028:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80078034:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007803C;
    }
}

loc_80078038:
{
    r8 = 0;
}

loc_8007803C:
{
}

loc_80078040:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80078054;
    }
}

loc_80078044:
{
    r0 = (r10 + 1073741824);
}

loc_8007804C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078054;
    }
}

loc_80078050:
{
    r7 = 0;
}

loc_80078054:
{
}

loc_80078058:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80078070;
    }
}

loc_8007805C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80078068:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078070;
    }
}

loc_8007806C:
{
    r6 = 0;
}

loc_80078070:
{
}

loc_80078074:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007808C;
    }
}

loc_80078078:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80078084:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007808C;
    }
}

loc_80078088:
{
    r5 = 0;
}

loc_8007808C:
{
}

loc_80078090:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800780A8;
    }
}

loc_80078094:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800780A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800780A8;
    }
}

loc_800780A4:
{
    r4 = 0;
}

loc_800780A8:
{
}

loc_800780AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800780D0;
    }
}

loc_800780B0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -4032);
    r4 = 206;
    r5 = 0x80590000u;
    r5 = (r5 + -3876);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800780D0u;
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

loc_800780D0:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
}

loc_800780D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800780FC;
    }
}

loc_800780DC:
{
    r3 = (r1 + 92);
    r0 = (r31 * 260);
    r4 = (r4 + r0);
    ctx->lr = 0x800780ECu;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F520_2C1F = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_2C1F);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_2C1F >> 32);
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
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = r29;
    ctx->lr = 0x800780F8u;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_2FA5 = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_2FA5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078114;
}

loc_800780FC:
{
    r3 = (r1 + 88);
    r4 = 0;
    ctx->lr = 0x80078108u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F520_3260 = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_3260);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_3260 >> 32);
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
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = r29;
    ctx->lr = 0x80078114u;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_35E6 = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_35E6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078114:
{
    r4 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8007811C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078140;
    }
}

loc_80078120:
{
    r3 = (r1 + 84);
    r0 = (r31 * 100);
    r4 = (r4 + r0);
    ctx->lr = 0x80078130u;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F480_396B = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_396B);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_396B >> 32);
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
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 4);
    ctx->lr = 0x8007813Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078678u>(&func_80078678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078678_3CF7 = func_80078678_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078678_3CF7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078158;
}

loc_80078140:
{
    r3 = (r1 + 80);
    r4 = 0;
    ctx->lr = 0x8007814Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F480_3FB2 = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_3FB2);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_3FB2 >> 32);
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
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 4);
    ctx->lr = 0x80078158u;
    if constexpr (KnownRegArgsCpuCall<0x80078678u>(&func_80078678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078678_433E = func_80078678_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078678_433E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078158:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
}

loc_80078160:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078184;
    }
}

loc_80078164:
{
    r3 = (r1 + 76);
    r0 = (r31 * 584);
    r4 = (r4 + r0);
    ctx->lr = 0x80078174u;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F3D8_46C3 = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_46C3);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_46C3 >> 32);
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
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 40);
    ctx->lr = 0x80078180u;
    if constexpr (KnownRegArgsCpuCall<0x80078624u>(&func_80078624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078624_4A50 = func_80078624_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80078624_4A50);
        r4 = static_cast<uint32_t>(regargs_result_80078624_4A50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8007819C;
}

loc_80078184:
{
    r3 = (r1 + 72);
    r4 = 0;
    ctx->lr = 0x80078190u;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F3D8_4D87 = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_4D87);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_4D87 >> 32);
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
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 40);
    ctx->lr = 0x8007819Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078624u>(&func_80078624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078624_5114 = func_80078624_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80078624_5114);
        r4 = static_cast<uint32_t>(regargs_result_80078624_5114 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8007819C:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
}

loc_800781A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800781C8;
    }
}

loc_800781A8:
{
    r3 = (r1 + 68);
    r0 = (r31 * 40);
    r4 = (r4 + r0);
    ctx->lr = 0x800781B8u;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005A9B4_5514 = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_5514);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_5514 >> 32);
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
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 28);
    ctx->lr = 0x800781C4u;
    if constexpr (KnownRegArgsCpuCall<0x800785E8u>(&func_800785E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785E8_58A1 = func_800785E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785E8_58A1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800781E0;
}

loc_800781C8:
{
    r3 = (r1 + 64);
    r4 = 0;
    ctx->lr = 0x800781D4u;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005A9B4_5B5C = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_5B5C);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_5B5C >> 32);
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
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 28);
    ctx->lr = 0x800781E0u;
    if constexpr (KnownRegArgsCpuCall<0x800785E8u>(&func_800785E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785E8_5EE9 = func_800785E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785E8_5EE9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800781E0:
{
    r4 = MemoryInline::FlatRead32((r30 + 24));
}

loc_800781E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007820C;
    }
}

loc_800781EC:
{
    r3 = (r1 + 60);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = (r4 + r0);
    ctx->lr = 0x800781FCu;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800768C0_62C9 = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_62C9);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_62C9 >> 32);
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
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 8);
    ctx->lr = 0x80078208u;
    if constexpr (KnownRegArgsCpuCall<0x800785ACu>(&func_800785AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785AC_6655 = func_800785AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785AC_6655;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078224;
}

loc_8007820C:
{
    r3 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x80078218u;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800768C0_6910 = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_6910);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_6910 >> 32);
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
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 8);
    ctx->lr = 0x80078224u;
    if constexpr (KnownRegArgsCpuCall<0x800785ACu>(&func_800785AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785AC_6C9C = func_800785AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785AC_6C9C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078224:
{
    r4 = MemoryInline::FlatRead32((r30 + 28));
}

loc_8007822C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078250;
    }
}

loc_80078230:
{
    r3 = (r1 + 52);
    r0 = (r31 * 12);
    r4 = (r4 + r0);
    ctx->lr = 0x80078240u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800769EC_7020 = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_7020);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_7020 >> 32);
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
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 36);
    ctx->lr = 0x8007824Cu;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_73AD = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_73AD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078268;
}

loc_80078250:
{
    r3 = (r1 + 48);
    r4 = 0;
    ctx->lr = 0x8007825Cu;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800769EC_7668 = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_7668);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_7668 >> 32);
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
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 36);
    ctx->lr = 0x80078268u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_79F5 = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_79F5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078268:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
}

loc_80078270:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078294;
    }
}

loc_80078274:
{
    r3 = (r1 + 44);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r4 = (r4 + r0);
    ctx->lr = 0x80078284u;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800767F8_7DD6 = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_7DD6);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_7DD6 >> 32);
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
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 16);
    ctx->lr = 0x80078290u;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_8163 = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_8163;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800782AC;
}

loc_80078294:
{
    r3 = (r1 + 40);
    r4 = 0;
    ctx->lr = 0x800782A0u;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800767F8_841E = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_841E);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_841E >> 32);
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
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 16);
    ctx->lr = 0x800782ACu;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_87AB = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_87AB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800782AC:
{
    r4 = MemoryInline::FlatRead32((r30 + 36));
}

loc_800782B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800782D8;
    }
}

loc_800782B8:
{
    r3 = (r1 + 36);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r4 = (r4 + r0);
    ctx->lr = 0x800782C8u;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F1BC_8B8D = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_8B8D);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_8B8D >> 32);
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
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 20);
    ctx->lr = 0x800782D4u;
    if constexpr (KnownRegArgsCpuCall<0x80078534u>(&func_80078534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078534_8F1A = func_80078534_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078534_8F1A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800782F0;
}

loc_800782D8:
{
    r3 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x800782E4u;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F1BC_91D5 = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_91D5);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_91D5 >> 32);
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
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 20);
    ctx->lr = 0x800782F0u;
    if constexpr (KnownRegArgsCpuCall<0x80078534u>(&func_80078534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078534_9562 = func_80078534_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078534_9562;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800782F0:
{
    r4 = MemoryInline::FlatRead32((r30 + 40));
}

loc_800782F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007831C;
    }
}

loc_800782FC:
{
    r3 = (r1 + 28);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r4 = (r4 + r0);
    ctx->lr = 0x8007830Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F2FC_9943 = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_9943);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_9943 >> 32);
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
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 24);
    ctx->lr = 0x80078318u;
    if constexpr (KnownRegArgsCpuCall<0x800784F8u>(&func_800784F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784F8_9CD0 = func_800784F8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784F8_9CD0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078334;
}

loc_8007831C:
{
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x80078328u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006F2FC_9F8B = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_9F8B);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_9F8B >> 32);
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
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 24);
    ctx->lr = 0x80078334u;
    if constexpr (KnownRegArgsCpuCall<0x800784F8u>(&func_800784F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784F8_A318 = func_800784F8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784F8_A318;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078334:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
}

loc_8007833C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078360;
    }
}

loc_80078340:
{
    r3 = (r1 + 20);
    r0 = (r31 * 160);
    r4 = (r4 + r0);
    ctx->lr = 0x80078350u;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80076734_A69D = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_A69D);
        r4 = static_cast<uint32_t>(regargs_result_80076734_A69D >> 32);
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
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 32);
    ctx->lr = 0x8007835Cu;
    if constexpr (KnownRegArgsCpuCall<0x800784BCu>(&func_800784BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784BC_AA2A = func_800784BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784BC_AA2A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_80078378;
}

loc_80078360:
{
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x8007836Cu;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80076734_ACE5 = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_ACE5);
        r4 = static_cast<uint32_t>(regargs_result_80076734_ACE5 >> 32);
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
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 32);
    ctx->lr = 0x80078378u;
    if constexpr (KnownRegArgsCpuCall<0x800784BCu>(&func_800784BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784BC_B072 = func_800784BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784BC_B072;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078378:
{
    r4 = MemoryInline::FlatRead32((r30 + 48));
}

loc_80078380:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800783A4;
    }
}

loc_80078384:
{
    r3 = (r1 + 12);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r4 = (r4 + r0);
    ctx->lr = 0x80078394u;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078450_B454 = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_B454);
        r4 = static_cast<uint32_t>(regargs_result_80078450_B454 >> 32);
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
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 12);
    ctx->lr = 0x800783A0u;
    if constexpr (KnownRegArgsCpuCall<0x80078414u>(&func_80078414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078414_B7E1 = func_80078414_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078414_B7E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800783BC;
}

loc_800783A4:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x800783B0u;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078450_BA9B = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_BA9B);
        r4 = static_cast<uint32_t>(regargs_result_80078450_BA9B >> 32);
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
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = (r29 + 12);
    ctx->lr = 0x800783BCu;
    if constexpr (KnownRegArgsCpuCall<0x80078414u>(&func_80078414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078414_BE28 = func_80078414_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078414_BE28;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800783BC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 1);
}

loc_800783C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800783E0;
    }
}

loc_800783CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 44), r0);
    MemoryInline::FlatWrite32((r29 + 48), r0);
    MemoryInline::FlatWrite32((r29 + 52), r0);
    goto loc_800783F8;
}

loc_800783E0:
{
    r0 = MemoryInline::FlatRead32((r30 + 52));
    MemoryInline::FlatWrite32((r29 + 44), r0);
    r0 = MemoryInline::FlatRead32((r30 + 56));
    MemoryInline::FlatWrite32((r29 + 48), r0);
    r0 = MemoryInline::FlatRead32((r30 + 60));
    MemoryInline::FlatWrite32((r29 + 52), r0);
}

loc_800783F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80077ED4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80077ED4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80077ED4 func_80077ED4 preserves=true fpr_mask=0x00000000
