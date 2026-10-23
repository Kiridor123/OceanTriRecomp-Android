#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80535B9C_ra58_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80535B9C;

loc_80535B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80535BC0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_80535C18;
    }
}

loc_80535BC4:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80535BCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535BEC;
    }
}

loc_80535BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535BDC;
    }
}

loc_80535BD4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    ctx->lr = 0x80535BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80535BDC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
}

loc_80535BEC:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r4 = (r4_rot_1 & 8160);
    ctx->lr = 0x80535BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80535BFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535C04;
    }
}

loc_80535C00:
{
    goto loc_80535C08;
}

loc_80535C04:
{
    r3 = 0;
}

loc_80535C08:
{
}

loc_80535C0C:
{
    MemoryInline::FlatWrite32((r30 + 4), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535C18;
    }
}

loc_80535C14:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
}

loc_80535C18:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80535B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80535B9C_ra58_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80535B9C func_80535B9C preserves=true fpr_mask=0x00000000
