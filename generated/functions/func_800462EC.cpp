#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800462EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800462ECu);
    goto loc_800462EC;

loc_800462EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80046310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046320;
    }
}

loc_80046314:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    goto loc_80046888;
}

loc_80046320:
{
    f5.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 320));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8004635C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046384;
    }
}

loc_80046360:
{
    r3 = (r3 + 52);
    r4 = (r1 + 16);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r3 = (r30 + 60);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    goto loc_80046534;
}

loc_80046384:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r30 + 428));
}

loc_800463B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046474;
    }
}

loc_800463B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 184));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800463C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800463D0;
    }
}

loc_800463C8:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    goto loc_800463DC;
}

loc_800463D0:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
}

loc_800463DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r30 + 68), f1.d);
    r3 = (r30 + 52);
    r4 = (r1 + 8);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    goto loc_80046534;
}

loc_80046474:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 184));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8004647C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046520;
    }
}

loc_80046480:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r30 + 68), f1.d);
    r3 = (r30 + 52);
    r4 = (r1 + 8);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    goto loc_80046534;
}

loc_80046520:
{
    r3 = (r30 + 60);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_80046534:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 316));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = MemoryInline::FlatRead8((r30 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8004654C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046564;
    }
}

loc_80046550:
{
    MemoryInline::FlatWriteFloat32((r30 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_80046654;
}

loc_80046564:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80046574:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80046580;
    }
}

loc_80046578:
{
    f1.d = (-(f2.d));
    goto loc_80046584;
}

loc_80046580:
{
    f1.d = f2.d;
}

loc_80046584:
{
    r0 = MemoryInline::FlatRead32((r30 + 432));
}

loc_8004658C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800465F4;
    }
}

loc_80046590:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046598:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800465A8;
    }
}

loc_800465A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    goto loc_800465B4;
}

loc_800465A8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
}

loc_800465B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800465CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800465DC;
    }
}

loc_800465D0:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_800465E0;
}

loc_800465DC:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_800465E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_80046654;
}

loc_800465F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800465FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046648;
    }
}

loc_80046600:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80046630;
    }
}

loc_80046624:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_80046634;
}

loc_80046630:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_80046634:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_80046654;
}

loc_80046648:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80046654:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 94), 0, 234u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 194u, (r30 + 288));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 206u, (r30 + 300));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    f7.d = PpcFmulsInline(f2.d, f0.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f7.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 198u, (r30 + 292));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 210u, (r30 + 304));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f6.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 226u, (r30 + 320));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 126u, (r30 + 220));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 230u, (r30 + 324));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 130u, (r30 + 224));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = (-(f1.d));
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f3.d);
    f1.d = PpcFmulsInline(f2.d, f7.d);
    f0.d = PpcFmulsInline(f8.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 134u, (r30 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 142u, (r30 + 236));
    f6.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 138u, (r30 + 232));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f5.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 122u, (r30 + 216));
    f0.d = (-(f4.d));
    f2.d = PpcFmulsInline(f0.d, f6.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 118u, (r30 + 212));
    f0.d = PpcFmulsInline(f1.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f3.d);
    f0.d = (-(f1.d));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f2.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8004672C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046754;
    }
}

loc_80046730:
{
    r3 = (r30 + 32);
    r4 = (r1 + 16);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r3 = (r30 + 40);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    goto loc_80046884;
}

loc_80046754:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r30 + 424));
}

loc_80046784:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046804;
    }
}

loc_80046788:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046790:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800467A0;
    }
}

loc_80046798:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    goto loc_800467AC;
}

loc_800467A0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
}

loc_800467AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_80046884;
}

loc_80046804:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8004680C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80046870;
    }
}

loc_80046810:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_80046884;
}

loc_80046870:
{
    r3 = (r30 + 40);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
}

loc_80046884:
{
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r31));
}

loc_80046888:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800462EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800462EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800462EC func_800462EC preserves=true fpr_mask=0x00000000
