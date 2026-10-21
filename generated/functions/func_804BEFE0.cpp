#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BEFE0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804BEFE0u);
    goto loc_804BEFE0;

loc_804BEFE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32592));
    r6 = (r3 + 288);
    r0 = (r3 + 312);
    f4.d = PpcFmulsInline(f0.d, f0.d);
}

loc_804BEFF0:
{
    r4 = MemoryInline::FlatRead8((r6 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804BF060;
    }
}

loc_804BEFFC:
{
    r4 = MemoryInline::FlatRead8((r6 + 9));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804BF060;
    }
}

loc_804BF008:
{
    r7 = (r3 + 240);
    r4 = (r3 + 288);
}

loc_804BF010:
{
    r5 = MemoryInline::FlatRead8((r7 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804BF054;
    }
}

loc_804BF01C:
{
    f3.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_804BF044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BF054;
    }
}

loc_804BF048:
{
    f4.d = f0.d;
    r8 = r6;
    r9 = r7;
}

loc_804BF054:
{
    r7 = (r7 + 12);
}

loc_804BF05C:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r4))) {
        goto loc_804BF010;
    }
}

loc_804BF060:
{
    r6 = (r6 + 12);
}

loc_804BF068:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_804BEFF0;
    }
}

loc_804BF06C:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32592));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BF078:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF084;
    }
}

loc_804BF07C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804BF084:
{
    r4 = MemoryInline::FlatRead32((r9 + 4));
    r0 = (r3 + 288);
    r5 = MemoryInline::FlatRead32(r9);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_804BF094:
{
    MemoryInline::FlatWrite32(r8, r5);
    MemoryInline::FlatWrite32((r8 + 4), r4);
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::FlatWrite32((r8 + 8), r0);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1260));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1264));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1220));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 288), 0, 944u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 936u, (r3 + 1224), f3.d);
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 940u, (r3 + 1228), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF110;
    }
}

loc_804BF0E4:
{
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r4 = 0;
    r0 = -1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 300), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 308), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 304), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 309), static_cast<uint8_t>(r0));
    goto loc_804BF138;
}

loc_804BF110:
{
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r4 = 0;
    r0 = -1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 288), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 296), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 292), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 297), static_cast<uint8_t>(r0));
}

loc_804BF138:
{
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804BF14C;
    }
}

loc_804BF144:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804BF14C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_804BEFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BEFE0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BEFE0 func_804BEFE0 preserves=true fpr_mask=0x00000000
