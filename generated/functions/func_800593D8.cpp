#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800593D8_ra38_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_800593D8;

loc_800593D8:
{
    r4 = 0x80670000u;
    r5 = (r4 + -11912);
}

loc_800593E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80059418;
    }
}

loc_800593E8:
{
    r4 = MemoryInline::FlatRead8((r5 + 316));
    r0 = (r4 + 255);
    r0 = (r0 & 255);
}

loc_800593F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_800593FC:
{
}

loc_80059400:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_80059418;
    }
}

loc_80059404:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32284));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80059410:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80059418:
{
}

loc_8005941C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80059434;
    }
}

loc_80059420:
{
}

loc_80059424:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80059448;
    }
}

loc_80059428:
{
}

loc_8005942C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8005945C;
    }
}

loc_80059430:
{
    goto loc_8005946C;
}

loc_80059434:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r5 + 316), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32280));
    MemoryInline::FlatWriteRamFloat32((r5 + 324), f0.d);
    goto loc_8005946C;
}

loc_80059448:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r5 + 316), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32280));
    MemoryInline::FlatWriteRamFloat32((r5 + 324), f0.d);
    goto loc_8005946C;
}

loc_8005945C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r5 + 316), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32276));
    MemoryInline::FlatWriteRamFloat32((r5 + 324), f0.d);
}

loc_8005946C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r5 + 320), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 319), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 318), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 317), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_800593D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800593D8_ra38_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800593D8 func_800593D8 preserves=true fpr_mask=0x00000000
