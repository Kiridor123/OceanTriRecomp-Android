#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802281F4(CpuContext* ctx);
extern "C" uint64_t func_802281F4_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80228324(CpuContext* ctx);
extern "C" uint64_t func_80228324_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8022842C_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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

    goto loc_8022842C;

loc_8022842C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r4;
    r29 = r5;
    r26 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80228470:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80228A44;
    }
}

loc_80228474:
{
    r31 = (r29 + 128);
    r30 = (r29 + 164);
    r3 = MemoryInline::FlatRead32((r28 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15816), 0, 240u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022848C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r27 = (r0 & 255);
    r0 = (r26 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1124));
}

loc_802284A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802287D0;
    }
}

loc_802284A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228524;
    }
}

loc_802284A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1051));
}

loc_802284AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228604;
    }
}

loc_802284B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802284F0;
    }
}

loc_802284B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1002));
}

loc_802284B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228604;
    }
}

loc_802284BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802284D8;
    }
}

loc_802284C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(356));
}

loc_802284C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802285A8;
    }
}

loc_802284C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_802284CC:
{
}

loc_802284D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(313))) {
        goto loc_802285A8;
    }
}

loc_802284D4:
{
    goto loc_80228978;
}

loc_802284D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_802284DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022864C;
    }
}

loc_802284E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_802284E4:
{
}

loc_802284E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1004))) {
        goto loc_80228978;
    }
}

loc_802284EC:
{
    goto loc_8022864C;
}

loc_802284F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1112));
}

loc_802284F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228710;
    }
}

loc_802284F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228514;
    }
}

loc_802284FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80228500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022864C;
    }
}

loc_80228504:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_80228508:
{
}

loc_8022850C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1053))) {
        goto loc_80228978;
    }
}

loc_80228510:
{
    goto loc_8022864C;
}

loc_80228514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1122));
}

loc_80228518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228758;
    }
}

loc_8022851C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022881C;
    }
}

loc_80228520:
{
    goto loc_80228978;
}

loc_80228524:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1172));
}

loc_80228528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228758;
    }
}

loc_8022852C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022856C;
    }
}

loc_80228530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1142));
}

loc_80228534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228910;
    }
}

loc_80228538:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228554;
    }
}

loc_8022853C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1140));
}

loc_80228540:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228878;
    }
}

loc_80228544:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802288AC;
    }
}

loc_80228548:
{
}

loc_8022854C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1126))) {
        goto loc_80228978;
    }
}

loc_80228550:
{
    goto loc_802287E8;
}

loc_80228554:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1162));
}

loc_80228558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228710;
    }
}

loc_8022855C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_80228560:
{
}

loc_80228564:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1144))) {
        goto loc_80228978;
    }
}

loc_80228568:
{
    goto loc_80228944;
}

loc_8022856C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1190));
}

loc_80228570:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228878;
    }
}

loc_80228574:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228590;
    }
}

loc_80228578:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1175));
}

loc_8022857C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802287E8;
    }
}

loc_80228580:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_80228584:
{
}

loc_80228588:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1174))) {
        goto loc_802287D0;
    }
}

loc_8022858C:
{
    goto loc_8022881C;
}

loc_80228590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1193));
}

loc_80228594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228944;
    }
}

loc_80228598:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228978;
    }
}

loc_8022859C:
{
}

loc_802285A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1192))) {
        goto loc_80228910;
    }
}

loc_802285A4:
{
    goto loc_802288AC;
}

loc_802285A8:
{
}

loc_802285AC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228998;
    }
}

loc_802285B0:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10056);
    r5 = r31;
    ctx->lr = 0x802285C4u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_266E = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_266E);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_266E >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8416);
    r5 = r30;
    ctx->lr = 0x802285D8u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_2C18 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_2C18);
        r4 = static_cast<uint32_t>(regargs_result_80228324_2C18 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7376);
    ctx->lr = 0x802285E8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_31E9 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_31E9;
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
    MemoryInline::FlatWriteFloat32((r29 + 208), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7296);
    ctx->lr = 0x802285FCu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_376D = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_376D;
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
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    goto loc_80228A44;
}

loc_80228604:
{
}

loc_80228608:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228998;
    }
}

loc_8022860C:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9856);
    r5 = r31;
    ctx->lr = 0x80228620u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_3D8D = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_3D8D);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_3D8D >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8256);
    r5 = r30;
    ctx->lr = 0x80228634u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_4337 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_4337);
        r4 = static_cast<uint32_t>(regargs_result_80228324_4337 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7248);
    ctx->lr = 0x80228644u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_4908 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4908;
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
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    goto loc_80228A44;
}

loc_8022864C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1478));
}

loc_80228654:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802286B4;
    }
}

loc_80228658:
{
}

loc_8022865C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228A44;
    }
}

loc_80228660:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9756);
    r5 = r31;
    ctx->lr = 0x80228674u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_4FEC = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_4FEC);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_4FEC >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8192);
    r5 = r30;
    ctx->lr = 0x80228688u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_5596 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_5596);
        r4 = static_cast<uint32_t>(regargs_result_80228324_5596 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7328);
    ctx->lr = 0x80228698u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_5B67 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_5B67;
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
    MemoryInline::FlatWriteFloat32((r29 + 208), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7216);
    ctx->lr = 0x802286ACu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_60EB = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_60EB;
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
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    goto loc_80228A44;
}

loc_802286B4:
{
}

loc_802286B8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802289F8;
    }
}

loc_802286BC:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9616);
    r5 = r31;
    ctx->lr = 0x802286D0u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_670B = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_670B);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_670B >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8128);
    r5 = r30;
    ctx->lr = 0x802286E4u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_6CB5 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_6CB5);
        r4 = static_cast<uint32_t>(regargs_result_80228324_6CB5 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7328);
    ctx->lr = 0x802286F4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_7286 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_7286;
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
    MemoryInline::FlatWriteFloat32((r29 + 208), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7216);
    ctx->lr = 0x80228708u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_780A = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_780A;
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
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    goto loc_80228A44;
}

loc_80228710:
{
}

loc_80228714:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228998;
    }
}

loc_80228718:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9496);
    r5 = r31;
    ctx->lr = 0x8022872Cu;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_7E2A = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_7E2A);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_7E2A >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8032);
    r5 = r30;
    ctx->lr = 0x80228740u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_83D4 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_83D4);
        r4 = static_cast<uint32_t>(regargs_result_80228324_83D4 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7184);
    ctx->lr = 0x80228750u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_89A5 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_89A5;
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
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    goto loc_80228A44;
}

loc_80228758:
{
}

loc_8022875C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80228794;
    }
}

loc_80228760:
{
    r3 = r28;
    r4 = 4;
    r5 = 25;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl5_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl5_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl5_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl5_cont_8026FECC;
}

loc_inl5_0x8026FEF4:
{
    r3 = 0;
}

loc_inl5_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80228774:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8022881C;
    }
}

loc_80228778:
{
    r3 = r28;
    r4 = 4;
    r5 = 75;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl6_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl6_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl6_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl6_cont_8026FECC;
}

loc_inl6_0x8026FEF4:
{
    r3 = 0;
}

loc_inl6_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8022878C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802289F8;
    }
}

loc_80228790:
{
    goto loc_8022881C;
}

loc_80228794:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9416);
    r5 = r31;
    ctx->lr = 0x802287A8u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_9726 = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_9726);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_9726 >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15608));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15604));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r29 + 208), f0.d);
    goto loc_80228A44;
}

loc_802287D0:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9276);
    r5 = r31;
    ctx->lr = 0x802287E4u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_9EFB = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_9EFB);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_9EFB >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    goto loc_80228850;
}

loc_802287E8:
{
}

loc_802287EC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8022881C;
    }
}

loc_802287F0:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9176);
    r5 = r31;
    ctx->lr = 0x80228804u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_A568 = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_A568);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_A568 >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7968);
    r5 = r30;
    ctx->lr = 0x80228818u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_AB12 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_AB12);
        r4 = static_cast<uint32_t>(regargs_result_80228324_AB12 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    goto loc_80228A44;
}

loc_8022881C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 216u, (r2 + -15600));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -15788));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r2 + -15688));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 220u, (r2 + -15596));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
}

loc_80228850:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15608));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15604));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r29 + 208), f0.d);
    goto loc_80228A44;
}

loc_80228878:
{
}

loc_8022887C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228A44;
    }
}

loc_80228880:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -9036);
    r5 = r31;
    ctx->lr = 0x80228894u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_B726 = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_B726);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_B726 >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7872);
    r5 = r30;
    ctx->lr = 0x802288A8u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_BCD0 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_BCD0);
        r4 = static_cast<uint32_t>(regargs_result_80228324_BCD0 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    goto loc_80228A44;
}

loc_802288AC:
{
    r3 = r28;
    r4 = 4;
    r5 = 70;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl7_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl7_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl7_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl7_cont_8026FECC;
}

loc_inl7_0x8026FEF4:
{
    r3 = 0;
}

loc_inl7_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802288C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80228A44;
    }
}

loc_802288C4:
{
    r3 = r28;
    r4 = 4;
    r5 = 71;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl8_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl8_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl8_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl8_cont_8026FECC;
}

loc_inl8_0x8026FEF4:
{
    r3 = 0;
}

loc_inl8_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802288D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80228A44;
    }
}

loc_802288DC:
{
}

loc_802288E0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802289F8;
    }
}

loc_802288E4:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8856);
    r5 = r31;
    ctx->lr = 0x802288F8u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_CA6B = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_CA6B);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_CA6B >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7696);
    r5 = r30;
    ctx->lr = 0x8022890Cu;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_D015 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_D015);
        r4 = static_cast<uint32_t>(regargs_result_80228324_D015 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    goto loc_80228A44;
}

loc_80228910:
{
}

loc_80228914:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228A44;
    }
}

loc_80228918:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8656);
    r5 = r31;
    ctx->lr = 0x8022892Cu;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_D682 = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_D682);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_D682 >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7520);
    r5 = r30;
    ctx->lr = 0x80228940u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_DC2C = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_DC2C);
        r4 = static_cast<uint32_t>(regargs_result_80228324_DC2C >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    goto loc_80228A44;
}

loc_80228944:
{
}

loc_80228948:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802289F8;
    }
}

loc_8022894C:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -8536);
    r5 = r31;
    ctx->lr = 0x80228960u;
    if constexpr (KnownRegArgsCpuCall<0x802281F4u>(&func_802281F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802281F4_E299 = func_802281F4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802281F4_E299);
        r4 = static_cast<uint32_t>(regargs_result_802281F4_E299 >> 32);
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
        InvokeDirectCpu<0x802281F4u>(ctx);
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
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -7456);
    r5 = r30;
    ctx->lr = 0x80228974u;
    if constexpr (KnownRegArgsCpuCall<0x80228324u>(&func_80228324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80228324_E843 = func_80228324_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80228324_E843);
        r4 = static_cast<uint32_t>(regargs_result_80228324_E843 >> 32);
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
        InvokeDirectCpu<0x80228324u>(ctx);
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
    goto loc_80228A44;
}

loc_80228978:
{
    r3 = r28;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80228988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80228998;
    }
}

loc_8022898C:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80228994:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802289EC;
    }
}

loc_80228998:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -15640));
    MemoryInline::FlatWriteFloat32((r29 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 224u, (r2 + -15592));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 228u, (r2 + -15588));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 232u, (r2 + -15584));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -15788));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r2 + -15748));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 236u, (r2 + -15580));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    goto loc_80228A44;
}

loc_802289EC:
{
    r0 = MemoryInline::FlatRead8((r28 + 1478));
}

loc_802289F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80228A44;
    }
}

loc_802289F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 208u, (r2 + -15608));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    MemoryInline::FlatWriteFloat32((r30 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r2 + -15604));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -15788));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r2 + -15748));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 236u, (r2 + -15580));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 188u, (r2 + -15628));
    MemoryInline::FlatWriteFloat32((r29 + 208), f0.d);
}

loc_80228A44:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

extern "C" void func_8022842C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8022842C_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022842C func_8022842C preserves=true fpr_mask=0x00000000
