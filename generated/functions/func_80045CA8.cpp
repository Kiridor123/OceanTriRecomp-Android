#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80045CA8_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80045CA8u);
    goto loc_80045CA8;

loc_80045CA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32592));
    f3.d = PpcFmulsInline(f0.d, f0.d);
    r7 = (r3 + 288);
    r0 = (r3 + 312);
}

loc_80045CD0:
{
    r5 = MemoryInline::FlatRead8((r7 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80045CDC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80045D4C;
    }
}

loc_80045CE0:
{
    r5 = MemoryInline::FlatRead8((r7 + 9));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80045CEC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80045D4C;
    }
}

loc_80045CF0:
{
    r8 = (r3 + 240);
    r5 = (r3 + 288);
}

loc_80045CF8:
{
    r6 = MemoryInline::FlatRead8((r8 + 8));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80045D04:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80045D40;
    }
}

loc_80045D08:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80045D30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045D40;
    }
}

loc_80045D34:
{
    f3.d = f0.d;
    r31 = r7;
    r4 = r8;
}

loc_80045D40:
{
    r8 = (r8 + 12);
}

loc_80045D48:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r5))) {
        goto loc_80045CF8;
    }
}

loc_80045D4C:
{
    r7 = (r7 + 12);
}

loc_80045D54:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_80045CD0;
    }
}

loc_80045D58:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32592));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80045D64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80045D70;
    }
}

loc_80045D68:
{
    r3 = 0;
    goto loc_80045E30;
}

loc_80045D70:
{
    r3 = r31;
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    f5.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 356));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 360));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 288), 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 320), f2.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 324), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 316));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r0 = (r30 + 288);
}

loc_80045DBC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80045DEC;
    }
}

loc_80045DC0:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 300), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 304), f0.d);
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 308), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 309), static_cast<uint8_t>(r0));
    goto loc_80045E14;
}

loc_80045DEC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 288), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 292), f0.d);
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r30 + 296), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r30 + 297), static_cast<uint8_t>(r0));
}

loc_80045E14:
{
    r0 = MemoryInline::FlatRead8((r30 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045E20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80045E2C;
    }
}

loc_80045E24:
{
    r3 = -1;
    goto loc_80045E30;
}

loc_80045E2C:
{
    r3 = 1;
}

loc_80045E30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_80045CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045CA8_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045CA8 func_80045CA8 preserves=true fpr_mask=0x00000000
