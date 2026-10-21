#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80486E14_ra188_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80486E14u);
    goto loc_80486E14;

loc_80486E14:
{
    r3 = 0x80740000u;
    r12 = 0;
    r3 = (r3 + -17608);
    r0 = MemoryInline::FlatRead8((r3 + 1381));
}

loc_80486E28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_80486E44;
    }
}

loc_80486E2C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1368));
    r0 = (r0 & 2);
}

loc_80486E3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486E44;
    }
}

loc_80486E40:
{
    r12 = MemoryInline::FlatRead32((r3 + 1364));
}

loc_80486E44:
{
    r3 = 0x80740000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80486E4C:
{
    r3 = (r3 + -17608);
    r0 = 0;
    r4 = 4;
    MemoryInline::FlatWriteRam8((r3 + 1368), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1380), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1376), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80486E68:
{
    r0 = (r4 * 284);
    r4 = 5;
    r5 = 12;
    r6 = 0;
    r3 = (r3 + r0);
    r3 = (r3 + 60);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return ctx->gpr[3];
    return ctx->gpr[3];
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80486E14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80486E14_ra188_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003F8F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80486E14 func_80486E14 preserves=true fpr_mask=0x00000000
