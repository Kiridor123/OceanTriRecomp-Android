#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2948(CpuContext* ctx);
extern "C" uint64_t func_800E2948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_800F9E68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F9E68;

loc_800F9E68:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r27 = r5;
    r31 = r6;
    r28 = r7;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r4 = (r28 & 255);
    ctx->lr = 0x800F9EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = (r27 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800F9EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA064;
    }
}

loc_800F9EF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FA254;
    }
}

loc_800F9EFC:
{
}

loc_800F9F00:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800F9F08;
    }
}

loc_800F9F04:
{
    goto loc_800FA254;
}

loc_800F9F08:
{
    r3 = r30;
    // inline leaf 0x800A6124 (2 guest instruction(s))
    r3 = (r3 + 88);
    // end of inlined leaf 0x800A6124
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r0 = MemoryInline::FlatRead8((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_15EB = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_15EB;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800F9F60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800F9F68;
    }
}

loc_800F9F64:
{
    r3 = 255;
}

loc_800F9F68:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 49));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_1D73 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1D73;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800F9FA8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800F9FB0;
    }
}

loc_800F9FAC:
{
    r3 = 255;
}

loc_800F9FB0:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 50));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_24FB = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_24FB;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800F9FF0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800F9FF8;
    }
}

loc_800F9FF4:
{
    r3 = 255;
}

loc_800F9FF8:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 51));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_2C83 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2C83;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800FA038:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800FA040;
    }
}

loc_800FA03C:
{
    r3 = 255;
}

loc_800FA040:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (r1 + 12);
    r3 = r30;
    r4 = (r1 + 28);
    ctx->lr = 0x800FA060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800FA254;
}

loc_800FA064:
{
    r3 = r30;
    ctx->lr = 0x800FA06Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2948_3542 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_3542);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_3542 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r29 + 21));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_3D16 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_3D16;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800FA0BC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800FA0C4;
    }
}

loc_800FA0C0:
{
    r3 = 255;
}

loc_800FA0C4:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 21));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 49));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_45CE = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_45CE;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800FA11C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800FA124;
    }
}

loc_800FA120:
{
    r3 = 255;
}

loc_800FA124:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 21));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r31 + 50));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29864));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_4E86 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_4E86;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800FA17C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800FA184;
    }
}

loc_800FA180:
{
    r3 = 255;
}

loc_800FA184:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 20));
    r0 = (r3 & 1);
}

loc_800FA1A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FA1F0;
    }
}

loc_800FA1A4:
{
    r28 = MemoryInline::FlatRead8((r29 + 22));
    goto loc_800FA1E0;
}

loc_800FA1AC:
{
    r3 = r30;
    r4 = r28;
    r5 = 3;
    r6 = (r1 + 16);
    ctx->lr = 0x800FA1C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 19));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = r28;
    r5 = 3;
    r6 = (r1 + 24);
    ctx->lr = 0x800FA1DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_800FA1E0:
{
    r0 = MemoryInline::FlatRead8((r29 + 23));
}

loc_800FA1E8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800FA1AC;
    }
}

loc_800FA1EC:
{
    goto loc_800FA254;
}

loc_800FA1F0:
{
    r0 = (r3 & 2);
}

loc_800FA1F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FA254;
    }
}

loc_800FA1FC:
{
    r28 = MemoryInline::FlatRead8((r29 + 22));
    r31 = (r1 + 8);
    goto loc_800FA248;
}

loc_800FA208:
{
    r3 = r30;
    r4 = r28;
    r5 = 4;
    r6 = (r1 + 16);
    ctx->lr = 0x800FA21Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2B58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 19));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    r4 = r28;
    r5 = 4;
    r6 = r31;
    r7 = 0;
    ctx->lr = 0x800FA244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_800FA248:
{
    r0 = MemoryInline::FlatRead8((r29 + 23));
}

loc_800FA250:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800FA208;
    }
}

loc_800FA254:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F9E68 func_800F9E68 preserves=true fpr_mask=0x00000000
