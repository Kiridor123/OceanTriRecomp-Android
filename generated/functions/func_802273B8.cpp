#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80229368(CpuContext* ctx);
extern "C" uint64_t func_80229368_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802273B8_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802273B8u);
    goto loc_802273B8;

loc_802273B8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r4;
    r30 = r5;
    r28 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = (r30 + 128);
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80227408:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227428;
    }
}

loc_8022740C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15644));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15652));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_80227428:
{
    r3 = r29;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80227438:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227460;
    }
}

loc_8022743C:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_80227444:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80227460;
    }
}

loc_80227448:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15644));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15652));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_80227460:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15816), 0, 180u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80227470:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    r0 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1128));
}

loc_80227484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022781C;
    }
}

loc_80227488:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227504;
    }
}

loc_8022748C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1051));
}

loc_80227490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802275D0;
    }
}

loc_80227494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802274D4;
    }
}

loc_80227498:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1002));
}

loc_8022749C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802275D0;
    }
}

loc_802274A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802274BC;
    }
}

loc_802274A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(356));
}

loc_802274A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022757C;
    }
}

loc_802274AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227900;
    }
}

loc_802274B0:
{
}

loc_802274B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(313))) {
        goto loc_8022757C;
    }
}

loc_802274B8:
{
    goto loc_80227900;
}

loc_802274BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_802274C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227708;
    }
}

loc_802274C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227900;
    }
}

loc_802274C8:
{
}

loc_802274CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1004))) {
        goto loc_80227900;
    }
}

loc_802274D0:
{
    goto loc_80227708;
}

loc_802274D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1101));
}

loc_802274D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802278A8;
    }
}

loc_802274DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802274F8;
    }
}

loc_802274E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_802274E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227708;
    }
}

loc_802274E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227900;
    }
}

loc_802274EC:
{
}

loc_802274F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1053))) {
        goto loc_80227900;
    }
}

loc_802274F4:
{
    goto loc_80227708;
}

loc_802274F8:
{
}

loc_802274FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1104))) {
        goto loc_80227660;
    }
}

loc_80227500:
{
    goto loc_80227900;
}

loc_80227504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1154));
}

loc_80227508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802276B4;
    }
}

loc_8022750C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022754C;
    }
}

loc_80227510:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1134));
}

loc_80227514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227900;
    }
}

loc_80227518:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227534;
    }
}

loc_8022751C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1132));
}

loc_80227520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227900;
    }
}

loc_80227524:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802278A8;
    }
}

loc_80227528:
{
}

loc_8022752C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1131))) {
        goto loc_80227660;
    }
}

loc_80227530:
{
    goto loc_80227900;
}

loc_80227534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1150));
}

loc_80227538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802278A8;
    }
}

loc_8022753C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227900;
    }
}

loc_80227540:
{
}

loc_80227544:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1136))) {
        goto loc_80227900;
    }
}

loc_80227548:
{
    goto loc_80227840;
}

loc_8022754C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1170));
}

loc_80227550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802278A8;
    }
}

loc_80227554:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227570;
    }
}

loc_80227558:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1167));
}

loc_8022755C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802276B4;
    }
}

loc_80227560:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227900;
    }
}

loc_80227564:
{
}

loc_80227568:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1166))) {
        goto loc_80227864;
    }
}

loc_8022756C:
{
    goto loc_80227900;
}

loc_80227570:
{
}

loc_80227574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1172))) {
        goto loc_80227888;
    }
}

loc_80227578:
{
    goto loc_80227900;
}

loc_8022757C:
{
}

loc_80227580:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802275B4;
    }
}

loc_80227584:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17816);
    ctx->lr = 0x80227594u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_2617 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_2617;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17440);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x802275B0u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_2B74 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_2B74);
        r4 = static_cast<uint32_t>(regargs_result_80229368_2B74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_802275B4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_802275D0:
{
}

loc_802275D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227644;
    }
}

loc_802275D8:
{
    r0 = (r28 & 65535);
}

loc_802275E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1002))) {
        goto loc_80227614;
    }
}

loc_802275E4:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17776);
    ctx->lr = 0x802275F4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_33CE = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_33CE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17320);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x80227610u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_392B = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_392B);
        r4 = static_cast<uint32_t>(regargs_result_80229368_392B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_80227614:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17776);
    ctx->lr = 0x80227624u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_3EBC = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3EBC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17104);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x80227640u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_4419 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_4419);
        r4 = static_cast<uint32_t>(regargs_result_80229368_4419 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_80227644:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_80227660:
{
}

loc_80227664:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227698;
    }
}

loc_80227668:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17600);
    ctx->lr = 0x80227678u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_4BCE = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4BCE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16888);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x80227694u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_512B = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_512B);
        r4 = static_cast<uint32_t>(regargs_result_80229368_512B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_80227698:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_802276B4:
{
}

loc_802276B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802276EC;
    }
}

loc_802276BC:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17600);
    ctx->lr = 0x802276CCu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_58E0 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_58E0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16816);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x802276E8u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_5E3D = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_5E3D);
        r4 = static_cast<uint32_t>(regargs_result_80229368_5E3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_802276EC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_80227708:
{
}

loc_8022770C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802277F8;
    }
}

loc_80227710:
{
    r0 = (r28 & 65535);
}

loc_80227718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1003))) {
        goto loc_80227738;
    }
}

loc_8022771C:
{
}

loc_80227720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1009))) {
        goto loc_80227768;
    }
}

loc_80227724:
{
}

loc_80227728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1052))) {
        goto loc_80227798;
    }
}

loc_8022772C:
{
}

loc_80227730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1057))) {
        goto loc_802277C8;
    }
}

loc_80227734:
{
    goto loc_80227928;
}

loc_80227738:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17728);
    ctx->lr = 0x80227748u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_6860 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_6860;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17248);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x80227764u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_6DBD = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_6DBD);
        r4 = static_cast<uint32_t>(regargs_result_80229368_6DBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_80227768:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17664);
    ctx->lr = 0x80227778u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_734E = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_734E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17176);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x80227794u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_78AB = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_78AB);
        r4 = static_cast<uint32_t>(regargs_result_80229368_78AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_80227798:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17568);
    ctx->lr = 0x802277A8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_7E3C = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_7E3C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17032);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x802277C4u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_8399 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_8399);
        r4 = static_cast<uint32_t>(regargs_result_80229368_8399 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_802277C8:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -17504);
    ctx->lr = 0x802277D8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_892A = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_892A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16960);
    r5 = r31;
    r6 = (r31 + 8);
    ctx->lr = 0x802277F4u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_8E87 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_8E87);
        r4 = static_cast<uint32_t>(regargs_result_80229368_8E87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227928;
}

loc_802277F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r2 + -15644));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -15652));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_80227928;
}

loc_8022781C:
{
}

loc_80227820:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802278A8;
    }
}

loc_80227824:
{
    r3 = r29;
    r4 = 2;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -15728));
    ctx->lr = 0x80227834u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_96D9 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_96D9);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_96D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80227838:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80227928;
    }
}

loc_8022783C:
{
    goto loc_802278A8;
}

loc_80227840:
{
}

loc_80227844:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802278A8;
    }
}

loc_80227848:
{
    r3 = r29;
    r4 = 2;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -15672));
    ctx->lr = 0x80227858u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_9DB2 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_9DB2);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_9DB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8022785C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80227928;
    }
}

loc_80227860:
{
    goto loc_802278A8;
}

loc_80227864:
{
}

loc_80227868:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802278A8;
    }
}

loc_8022786C:
{
    r3 = r29;
    r4 = 2;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -15724));
    ctx->lr = 0x8022787Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_A48A = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_A48A);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_A48A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80227880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80227928;
    }
}

loc_80227884:
{
    goto loc_802278A8;
}

loc_80227888:
{
}

loc_8022788C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802278A8;
    }
}

loc_80227890:
{
    r3 = r29;
    r4 = 2;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r2 + -15736));
    ctx->lr = 0x802278A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_AB62 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_AB62);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_AB62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_802278A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80227928;
    }
}

loc_802278A8:
{
    r3 = r29;
    ctx->lr = 0x802278B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x802812C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_802278B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802278D0;
    }
}

loc_802278BC:
{
}

loc_802278C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802278DC;
    }
}

loc_802278C4:
{
}

loc_802278C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802278E8;
    }
}

loc_802278CC:
{
    goto loc_802278F4;
}

loc_802278D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_80227928;
}

loc_802278DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15636));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_80227928;
}

loc_802278E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15632));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_80227928;
}

loc_802278F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r30 + 200), f0.d);
    goto loc_80227928;
}

loc_80227900:
{
    r3 = r29;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80227910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227920;
    }
}

loc_80227914:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_8022791C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227928;
    }
}

loc_80227920:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
}

loc_80227928:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15624));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 172), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_802273B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802273B8_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802273B8 func_802273B8 preserves=true fpr_mask=0x00000000
