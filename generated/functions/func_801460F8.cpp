#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_801460F8_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_801460F8;

loc_801460F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -27844), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27844));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80146104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80146140;
    }
}

loc_80146108:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -27824));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27816));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27812));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -27820));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    r3 = (0 - r0);
    goto loc_80146168;
}

loc_80146140:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27816));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27812));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -27820));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r3 = (r0 & 65535);
}

loc_80146168:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_801460F8(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_801460F8_ra0_2_0_2(ctx, ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801460F8 func_801460F8 preserves=true fpr_mask=0x00000000
