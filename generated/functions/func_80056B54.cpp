#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040370(CpuContext* ctx);
extern "C" uint32_t func_80040370_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80056B54_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80056B54;

loc_80056B54:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_80056B88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80056B94;
    }
}

loc_80056B8C:
{
    r3 = 0;
    goto loc_80056E4C;
}

loc_80056B94:
{
    r0 = MemoryInline::FlatRead8((r31 + 38));
}

loc_80056B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80056BC0;
    }
}

loc_80056BA0:
{
}

loc_80056BA4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80056BC0;
    }
}

loc_80056BA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 33), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80056E4C;
}

loc_80056BC0:
{
}

loc_80056BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80056BDC;
    }
}

loc_80056BC8:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r31 + 36));
    r5 = (r1 + 24);
    ctx->lr = 0x80056BD8u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_C1D = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_C1D);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_C1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_80056BE8;
}

loc_80056BDC:
{
    r3 = (r1 + 24);
    r4 = (r31 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80056BE8:
{
    r3 = (r1 + 16);
    if constexpr (KnownRegArgsCpuCall<0x80040370u>(&func_80040370)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80040370_10FC = func_80040370_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80040370_10FC;
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
        InvokeDirectCpu<0x80040370u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    ctx->lr = 0x80056BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80082C30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    r4 = (r1 + 36);
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800752BCu>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 38));
}

loc_80056C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80056C30;
    }
}

loc_80056C18:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80056C28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80056BA8;
    }
}

loc_80056C2C:
{
    goto loc_80056C44;
}

loc_80056C30:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 39));
}

loc_80056C40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80056BA8;
    }
}

loc_80056C44:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 16));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32392), 0, 36u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -32360));
    f1.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056C84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056C9C;
    }
}

loc_80056C8C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -32380));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056C94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80056CB8;
    }
}

loc_80056C9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32388));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_80056CB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056CC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80056CCC;
    }
}

loc_80056CC8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80056CCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056CD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80056CE0;
    }
}

loc_80056CDC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_80056CE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -32380));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056CEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80056CF4;
    }
}

loc_80056CF0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80056CF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -32380));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80056D00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80056D08;
    }
}

loc_80056D04:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_80056D08:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_80056D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80056D38;
    }
}

loc_80056D24:
{
}

loc_80056D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80056DA8;
    }
}

loc_80056D2C:
{
}

loc_80056D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80056E08;
    }
}

loc_80056D34:
{
    goto loc_80056E48;
}

loc_80056D38:
{
    r30 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 37u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r31 + 33), static_cast<uint8_t>(r30));
    // inline leaf 0x80056A84 (7 guest instruction(s))
    r0 = 1;
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 112), r0);
    // end of inlined leaf 0x80056A84
    r0 = 128;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 2), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    r3 = (r31 + 20);
    r4 = (r1 + 12);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_1, 19u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = 16;
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -32024));
    MemoryInline::WriteResolved32(guest_range_1, 23u, (r31 + 24), r0);
    r0 = MemoryInline::FlatRead8((r13 + -32032));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r31 + 37), static_cast<uint8_t>(r0));
}

loc_80056D88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_80056D90;
    }
}

loc_80056D8C:
{
    MemoryInline::FlatWrite8((r31 + 37), static_cast<uint8_t>(r30));
}

loc_80056D90:
{
    r0 = MemoryInline::FlatRead8((r31 + 37));
}

loc_80056D98:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(120))) {
        goto loc_80056E48;
    }
}

loc_80056D9C:
{
    r0 = 120;
    MemoryInline::FlatWrite8((r31 + 37), static_cast<uint8_t>(r0));
    goto loc_80056E48;
}

loc_80056DA8:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_80056DB8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80056DE0;
    }
}

loc_80056DBC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 33), static_cast<uint8_t>(r0));
    r3 = (r13 + -32024);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r3 = (r13 + -32032);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 37), static_cast<uint8_t>(r0));
    goto loc_80056E48;
}

loc_80056DE0:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::FlatRead8((r31 + 37));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_80056DF8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(80))) {
        goto loc_80056E48;
    }
}

loc_80056DFC:
{
    r0 = 80;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_80056E48;
}

loc_80056E08:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_80056E18:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80056BA8;
    }
}

loc_80056E1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_80056E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80056BA8;
    }
}

loc_80056E28:
{
    r3 = MemoryInline::FlatRead8((r31 + 37));
}

loc_80056E30:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_80056E40;
    }
}

loc_80056E34:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_80056E48;
}

loc_80056E40:
{
    r0 = (r0 - r3);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_80056E48:
{
    r3 = 1;
}

loc_80056E4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80056B54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80056B54_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80056B54 func_80056B54 preserves=true fpr_mask=0x00000000
