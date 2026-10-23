#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802964AC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_802964AC;

loc_802964AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -320), 0, 328u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 324u, (r1 + 324), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 284);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 272);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 260);
    r4 = (r31 + 24);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 248);
    r4 = (r31 + 12);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 236);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 224);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 236);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 224);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296534:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80296544;
    }
}

loc_80296538:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029654C;
    }
}

loc_80296544:
{
    r3 = -1;
    goto loc_802968B4;
}

loc_8029654C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296558:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80296568;
    }
}

loc_8029655C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296564:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296570;
    }
}

loc_80296568:
{
    r3 = -1;
    goto loc_802968B4;
}

loc_80296570:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8029657C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8029658C;
    }
}

loc_80296580:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296588:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296594;
    }
}

loc_8029658C:
{
    r3 = -1;
    goto loc_802968B4;
}

loc_80296594:
{
    r31 = 0;
    r3 = (r1 + 272);
    r4 = (r1 + 236);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802965B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296624;
    }
}

loc_802965B4:
{
    r3 = (r1 + 212);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 212);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 200);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 224));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 200);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 188);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029660Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_1A1B = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_1A1B);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_1A1B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 188);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    MemoryInline::FlatWriteRamFloat32((r1 + 272), f0.d);
    r31 = 1;
}

loc_80296624:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296630:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802966A4;
    }
}

loc_80296634:
{
    r3 = (r1 + 176);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 164);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 224));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 164);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 152);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029668Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2478 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2478);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2478 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    MemoryInline::FlatWriteRamFloat32((r1 + 272), f0.d);
    r31 = 1;
}

loc_802966A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802966B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296724;
    }
}

loc_802966B4:
{
    r3 = (r1 + 140);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 140);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 128);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 288));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 116);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029670Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2ED5 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2ED5);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2ED5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 116);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f0.d);
    r31 = 1;
}

loc_80296724:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296730:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802967A4;
    }
}

loc_80296734:
{
    r3 = (r1 + 104);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 92);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 264));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 288));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 80);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029678Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_392F = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_392F);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_392F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f0.d);
    r31 = 1;
}

loc_802967A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802967B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296824;
    }
}

loc_802967B4:
{
    r3 = (r1 + 68);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 256));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 44);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029680Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_4386 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_4386);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_4386 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 256));
    MemoryInline::FlatWriteRamFloat32((r1 + 280), f0.d);
    r31 = 1;
}

loc_80296824:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802968A4;
    }
}

loc_80296834:
{
    r3 = (r1 + 32);
    r4 = (r1 + 272);
    r5 = (r1 + 224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 284);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 268));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 284);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = (r1 + 284);
    r5 = (r1 + 224);
    ctx->lr = 0x8029688Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_4DDC = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_4DDC);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_4DDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 272);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    MemoryInline::FlatWriteRamFloat32((r1 + 280), f0.d);
    r31 = 1;
}

loc_802968A4:
{
    r3 = r28;
    r4 = (r1 + 272);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
}

loc_802968B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802964AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802964AC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802964AC func_802964AC preserves=true fpr_mask=0x00000000
