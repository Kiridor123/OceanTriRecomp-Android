#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800459D8_ra38_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_800459D8;

loc_800459D8:
{
    r7 = r3;
    r0 = (r3 + 36);
}

loc_800459E0:
{
    r4 = MemoryInline::FlatRead8((r7 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_800459EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80045A3C;
    }
}

loc_800459F0:
{
    r8 = (r7 + 12);
    r4 = (r3 + 36);
}

loc_800459F8:
{
    r6 = MemoryInline::FlatRead8((r8 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80045A04:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80045A30;
    }
}

loc_80045A08:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80045A30;
    }
}

loc_80045A18:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045A24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80045A30;
    }
}

loc_80045A28:
{
    r5 = (r6 | 2);
    MemoryInline::FlatWrite8((r8 + 8), static_cast<uint8_t>(r5));
}

loc_80045A30:
{
    r8 = (r8 + 12);
}

loc_80045A38:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(r4))) {
        goto loc_800459F8;
    }
}

loc_80045A3C:
{
    r7 = (r7 + 12);
}

loc_80045A44:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_800459E0;
    }
}

loc_80045A48:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_800459D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800459D8_ra38_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800459D8 func_800459D8 preserves=true fpr_mask=0x00000000
