#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80077DC8(CpuContext* ctx);
extern "C" uint32_t func_80077DC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80077E20(CpuContext* ctx);
extern "C" double func_80077E20_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800882C4(CpuContext* ctx);
extern "C" uint64_t func_800882C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800883A0(CpuContext* ctx);
extern "C" uint64_t func_800883A0_ra30_180_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80088470(CpuContext* ctx);
extern "C" uint64_t func_80088470_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804C72E0(CpuContext* ctx);
extern "C" uint64_t func_804C72E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80084C00_ra38_18e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80084C00;

loc_80084C00:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
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

loc_80084C4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084C64;
    }
}

loc_80084C50:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80084C5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084C64;
    }
}

loc_80084C60:
{
    r10 = 0;
}

loc_80084C64:
{
}

loc_80084C68:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80084C80;
    }
}

loc_80084C6C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80084C78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084C80;
    }
}

loc_80084C7C:
{
    r9 = 0;
}

loc_80084C80:
{
}

loc_80084C84:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80084C98;
    }
}

loc_80084C88:
{
    r0 = (r11 + 1073741824);
}

loc_80084C90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084C98;
    }
}

loc_80084C94:
{
    r8 = 0;
}

loc_80084C98:
{
}

loc_80084C9C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80084CB4;
    }
}

loc_80084CA0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80084CAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084CB4;
    }
}

loc_80084CB0:
{
    r7 = 0;
}

loc_80084CB4:
{
}

loc_80084CB8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80084CD0;
    }
}

loc_80084CBC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80084CC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084CD0;
    }
}

loc_80084CCC:
{
    r6 = 0;
}

loc_80084CD0:
{
}

loc_80084CD4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80084CEC;
    }
}

loc_80084CD8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80084CE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084CEC;
    }
}

loc_80084CE8:
{
    r5 = 0;
}

loc_80084CEC:
{
}

loc_80084CF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80084D14;
    }
}

loc_80084CF4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 199;
    r5 = 0x80590000u;
    r5 = (r5 + -224);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80084D14u;
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

loc_80084D14:
{
}

loc_80084D18:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80085080;
    }
}

loc_80084D1C:
{
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x80088380 (8 guest instruction(s))
}

loc_inl3_0x80088380:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl3_0x8008838C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
}

loc_inl3_cont_80088380:
{
    // end of inlined leaf 0x80088380
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    ctx->lr = 0x80084D60u;
    if constexpr (KnownRegArgsCpuCall<0x800883A0u>(&func_800883A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_800883A0_1D5C = func_800883A0_ra30_180_18_0(ctx, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800883A0_1D5C);
        r4 = static_cast<uint32_t>(regargs_result_800883A0_1D5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800883A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r28 = r3;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800882D4u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r31 & 255);
}

loc_80084D78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(127))) {
        goto loc_80084F28;
    }
}

loc_80084D7C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800882C4u>(&func_800882C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800882C4_2460 = func_800882C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800882C4_2460);
        r4 = static_cast<uint32_t>(regargs_result_800882C4_2460 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800882C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800651F0
}

loc_80084D8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80084F28;
    }
}

loc_80084D90:
{
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800882C4u>(&func_800882C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800882C4_297E = func_800882C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800882C4_297E);
        r4 = static_cast<uint32_t>(regargs_result_800882C4_297E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800882C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A848u>(ctx);
    r3 = r30;
    ctx->lr = 0x80084DB4u;
    if constexpr (KnownRegArgsCpuCall<0x80077DC8u>(&func_80077DC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80077DC8_2D0E = func_80077DC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80077DC8_2D0E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80077DC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80084DB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80084DE4;
    }
}

loc_80084DBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084DC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E4C;
    }
}

loc_80084DCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084DD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E4C;
    }
}

loc_80084DD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084DE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E4C;
    }
}

loc_80084DE4:
{
    r3 = r30;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A82Cu>(ctx);
    r3 = (r1 + 68);
    r4 = r28;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    if constexpr (KnownRegArgsCpuCall<0x80077E20u>(&func_80077E20)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80077E20_3469 = func_80077E20_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_80077E20_3469;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80077E20u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 68);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E5C;
    }
}

loc_80084E28:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E5C;
    }
}

loc_80084E34:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084E3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084E5C;
    }
}

loc_80084E40:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31784));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80084E5C;
}

loc_80084E4C:
{
    r3 = (r1 + 68);
    r4 = r28;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
}

loc_80084E5C:
{
    r3 = r30;
    // inline leaf 0x80077DB0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80077DB0
}

loc_80084E68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80084E9C;
    }
}

loc_80084E6C:
{
    r3 = (r1 + 104);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r31 = r3;
    r3 = (r1 + 68);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r30 = r3;
    r3 = (r1 + 80);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x80084E98u;
    if constexpr (KnownRegArgsCpuCall<0x804C72E0u>(&func_804C72E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        const auto regargs_result_804C72E0_401D = func_804C72E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C72E0_401D);
        r4 = static_cast<uint32_t>(regargs_result_804C72E0_401D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804C72E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
    goto loc_80084EB4;
}

loc_80084E9C:
{
    r3 = (r1 + 8);
    r4 = (r1 + 68);
    if constexpr (KnownRegArgsCpuCall<0x80077E20u>(&func_80077E20)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80077E20_458D = func_80077E20_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_80077E20_458D;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80077E20u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 104);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80084EB4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80084F10;
    }
}

loc_80084EC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084ED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80084F10;
    }
}

loc_80084EDC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80084EF0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084F04;
    }
}

loc_80084EF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31784));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_80084FBC;
}

loc_80084F04:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31776));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_80084FBC;
}

loc_80084F10:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31776));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    goto loc_80084FBC;
}

loc_80084F28:
{
    r0 = (r30 & 255);
}

loc_80084F30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80084FA8;
    }
}

loc_80084F34:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x80084F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80088470u>(&func_80088470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80088470_51DD = func_80088470_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088470_51DD);
        r4 = static_cast<uint32_t>(regargs_result_80088470_51DD >> 32);
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
        InvokeDirectCpu<0x80088470u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r3 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f3.d = (-(f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 104);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r31 = r3;
    r3 = (r1 + 56);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r30 = r3;
    r3 = (r1 + 80);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x80084FA4u;
    if constexpr (KnownRegArgsCpuCall<0x804C72E0u>(&func_804C72E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        const auto regargs_result_804C72E0_5AD2 = func_804C72E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C72E0_5AD2);
        r4 = static_cast<uint32_t>(regargs_result_804C72E0_5AD2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804C72E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
    goto loc_80084FBC;
}

loc_80084FA8:
{
    // inline leaf 0x800885B8 (8 guest instruction(s))
}

loc_inl16_0x800885B8:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl16_0x800885C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
}

loc_inl16_cont_800885B8:
{
    // end of inlined leaf 0x800885B8
    r4 = r3;
    r3 = r29;
    ctx->lr = 0x80084FB8u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80071070_61E6 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_61E6);
        r4 = static_cast<uint32_t>(regargs_result_80071070_61E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80085080;
}

loc_80084FBC:
{
    r3 = (r1 + 104);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    r4 = (r1 + 92);
    r5 = (r1 + 104);
    ctx->lr = 0x80084FE8u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_80051884_6883 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_6883);
        r4 = static_cast<uint32_t>(regargs_result_80051884_6883 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r1 + 44);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 104);
    r5 = (r1 + 44);
    ctx->lr = 0x80085004u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_80051884_6EFF = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_6EFF);
        r4 = static_cast<uint32_t>(regargs_result_80051884_6EFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 84u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 44));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r1 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r1 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r1 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    r3 = r29;
    r4 = r29;
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    // inline leaf 0x800885B8 (8 guest instruction(s))
}

loc_inl19_0x800885B8:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl19_0x800885C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
}

loc_inl19_cont_800885B8:
{
    // end of inlined leaf 0x800885B8
    r4 = r3;
    r3 = r29;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_80085080:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80084C00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80084C00_ra38_18e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00003F8F fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80084C00 func_80084C00 preserves=true fpr_mask=0x00000000
