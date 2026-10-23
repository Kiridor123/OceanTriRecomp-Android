#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8035F318_ra18_6_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_8035F318;

loc_8035F318:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9092));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8035F324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8035F340;
    }
}

loc_8035F328:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9088));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 460), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8035F338:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8035F340;
    }
}

loc_8035F33C:
{
    MemoryInline::FlatWriteFloat32((r3 + 460), f1.d);
}

loc_8035F340:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8035F348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035F360;
    }
}

loc_8035F34C:
{
    r4 = MemoryInline::FlatRead16((r3 + 808));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8035F354:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8035F360;
    }
}

loc_8035F358:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 808), static_cast<uint16_t>(r0));
}

loc_8035F360:
{
    r4 = MemoryInline::FlatRead16((r3 + 810));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8035F368:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8035F374;
    }
}

loc_8035F36C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 810), static_cast<uint16_t>(r0));
}

loc_8035F374:
{
    // inline leaf 0x80131E64 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2244), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131E64
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_8035F318(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8035F318_ra18_6_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035F318 func_8035F318 preserves=true fpr_mask=0x00000000
