#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80467BF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_80467DF4_loc_0 = 0;
    uint32_t addr_lfdx_80467E00_loc_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80467BF0;

loc_80467BF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = 0x80570000u;
    r0 = 1141899264;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = (r5 + 15320);
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 & 2147483647);
}

loc_80467C10:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467C30;
    }
}

loc_80467C14:
{
    r0 = 1071382528;
}

loc_80467C1C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467CB4;
    }
}

loc_80467C20:
{
    r0 = 1042284544;
}

loc_80467C28:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467CAC;
    }
}

loc_80467C2C:
{
    goto loc_80467C94;
}

loc_80467C30:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80467C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80467C44;
    }
}

loc_80467C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80467C50;
    }
}

loc_80467C40:
{
    goto loc_80467C58;
}

loc_80467C44:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80467C4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467C58;
    }
}

loc_80467C50:
{
    f1.d = (f1.d + f1.d);
    goto loc_80467E18;
}

loc_80467C58:
{
}

loc_80467C5C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80467C78;
    }
}

loc_80467C60:
{
    r4 = (r5 + 0);
    r3 = (r5 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f1.d = (f1.d + f0.d);
    goto loc_80467E18;
}

loc_80467C78:
{
    r4 = (r5 + 0);
    r3 = (r5 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f1.d = (-(f1.d));
    f1.d = (f1.d - f0.d);
    goto loc_80467E18;
}

loc_80467C94:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3064));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3056));
    f2.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80467CA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80467CAC;
    }
}

loc_80467CA8:
{
    goto loc_80467E18;
}

loc_80467CAC:
{
    r0 = -1;
    goto loc_80467D44;
}

loc_80467CB4:
{
    r0 = 1072889856;
    f3.d = std::fabs(f1.d);
}

loc_80467CC0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467D08;
    }
}

loc_80467CC4:
{
    r0 = 1072037888;
}

loc_80467CCC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467CF0;
    }
}

loc_80467CD0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3048));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3056));
    f2.d = (f0.d * f3.d);
    f0.d = (f0.d + f3.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f1.d / f0.d);
    goto loc_80467D44;
}

loc_80467CF0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3056));
    r0 = 1;
    f1.d = (f3.d - f0.d);
    f0.d = (f0.d + f3.d);
    f1.d = (f1.d / f0.d);
    goto loc_80467D44;
}

loc_80467D08:
{
    r3 = 1074003968;
    r0 = (r3 + -32768);
}

loc_80467D14:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467D38;
    }
}

loc_80467D18:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3040));
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3056));
    f1.d = (f2.d * f3.d);
    f2.d = (f3.d - f2.d);
    f0.d = (f0.d + f1.d);
    f1.d = (f2.d / f0.d);
    goto loc_80467D44;
}

loc_80467D38:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3032));
    r0 = 3;
    f1.d = (f0.d / f3.d);
}

loc_80467D44:
{
    f0.d = (f1.d * f1.d);
    r3 = (r5 + 64);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 80u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r3 + 80));
}

loc_80467D54:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r3 + 72));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r3 + 64));
    f13.d = (f0.d * f0.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r3 + 56));
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r3 + 48));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r3 + 40));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r3 + 32));
    f12.d = (f13.d * f3.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r3 + 24));
    f6.d = (f13.d * f2.d);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r3 + 16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r3 + 8));
    f11.d = (f11.d + f12.d);
    f7.d = MemoryInline::FlatReadFloat64((r5 + 64));
    f5.d = (f5.d + f6.d);
    f6.d = (f13.d * f11.d);
    f5.d = (f13.d * f5.d);
    f6.d = (f10.d + f6.d);
    f4.d = (f4.d + f5.d);
    f5.d = (f13.d * f6.d);
    f4.d = (f13.d * f4.d);
    f5.d = (f9.d + f5.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f13.d * f5.d);
    f3.d = (f13.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f13.d * f4.d);
    f4.d = (f13.d * f2.d);
    f2.d = (f7.d + f3.d);
    f0.d = (f0.d * f2.d);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80467DE4;
    }
}

loc_80467DD4:
{
    f0.d = (f0.d + f4.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d - f0.d);
    goto loc_80467E18;
}

loc_80467DE4:
{
    f0.d = (f0.d + f4.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r5 + 32);
    r4 = (r5 + 0);
    addr_lfdx_80467DF4_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_80467DF4_loc_0);
}

loc_80467DFC:
{
    f3.d = (f1.d * f0.d);
    addr_lfdx_80467E00_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80467E00_loc_0);
    f2.d = (f3.d - f2.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f0.d - f1.d);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80467E18;
    }
}

loc_80467E14:
{
    f1.d = (-(f1.d));
}

loc_80467E18:
{
    r1 = (r1 + 16);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80467BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80467BF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80467BF0 func_80467BF0 preserves=true fpr_mask=0x00000000
