#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80059484_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_80059484;

loc_80059484:
{
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    r0 = MemoryInline::FlatRead8((r3 + 316));
}

loc_80059494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800594AC;
    }
}

loc_80059498:
{
}

loc_8005949C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800594CC;
    }
}

loc_800594A0:
{
}

loc_800594A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800594EC;
    }
}

loc_800594A8:
{
    goto loc_8005950C;
}

loc_800594AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32300));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800594B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_800594BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 324), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_800594CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32300));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800594D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_800594DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32268));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 324), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_800594EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32300));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800594F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_800594FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32264));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 324), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8005950C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32300));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80059518:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8005951C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32296));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 324), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80059484(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80059484_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80059484 func_80059484 preserves=true fpr_mask=0x00000000
