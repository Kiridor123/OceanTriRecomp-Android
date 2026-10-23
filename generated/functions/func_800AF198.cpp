#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800AF198_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_800AF198;

loc_800AF198:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r31 & 255);
}

loc_800AF1C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AF1DC;
    }
}

loc_800AF1C8:
{
}

loc_800AF1CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800AF1EC;
    }
}

loc_800AF1D0:
{
}

loc_800AF1D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800AF20C;
    }
}

loc_800AF1D8:
{
    goto loc_800AF228;
}

loc_800AF1DC:
{
    r3 = (r1 + 8);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800AF228;
}

loc_800AF1EC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_800AF228;
}

loc_800AF20C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_800AF228:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AF234:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF240;
    }
}

loc_800AF238:
{
    r3 = 3;
    goto loc_800AF2AC;
}

loc_800AF240:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AF24C;
    }
}

loc_800AF244:
{
    r3 = 3;
    goto loc_800AF2AC;
}

loc_800AF24C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_800AF258:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF268;
    }
}

loc_800AF25C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_800AF264:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF270;
    }
}

loc_800AF268:
{
    r3 = 4;
    goto loc_800AF2AC;
}

loc_800AF270:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800AF278:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF284;
    }
}

loc_800AF27C:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF280:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF28C;
    }
}

loc_800AF284:
{
    r3 = 4;
    goto loc_800AF2AC;
}

loc_800AF28C:
{
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF29C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF2A8;
    }
}

loc_800AF2A0:
{
    r3 = 4;
    goto loc_800AF2AC;
}

loc_800AF2A8:
{
    r3 = 1;
}

loc_800AF2AC:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800AF198(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800AF198_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AF198 func_800AF198 preserves=true fpr_mask=0x00000000
