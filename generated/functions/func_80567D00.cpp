#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80567D00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80567D00;

loc_80567D00:
{
}

loc_80567D04:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80567DC0;
    }
}

loc_80567D0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
}

loc_80567D10:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80567E70;
    }
}

loc_80567D14:
{
    r4 = 0x80660000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -24048);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80567D2Cu:
        goto loc_80567D2C;
        break;
    case 0x80567D38u:
        goto loc_80567D38;
        break;
    case 0x80567D44u:
        goto loc_80567D44;
        break;
    case 0x80567D50u:
        goto loc_80567D50;
        break;
    case 0x80567D70u:
        goto loc_80567D70;
        break;
    case 0x80567D90u:
        goto loc_80567D90;
        break;
    case 0x80567D9Cu:
        goto loc_80567D9C;
        break;
    case 0x80567DA8u:
        goto loc_80567DA8;
        break;
    case 0x80567DB4u:
        goto loc_80567DB4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80567D2C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567D38:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567D44:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567D50:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80567D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80567D5C:
{
    r4 = 8;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8((r3 + 61), static_cast<uint8_t>(r0));
    goto loc_80567E70;
}

loc_80567D70:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80567D78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80567D7C:
{
    r4 = 8;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8((r3 + 61), static_cast<uint8_t>(r0));
    goto loc_80567E70;
}

loc_80567D90:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567D9C:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567DA8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567DB4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567DC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
}

loc_80567DC4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80567E70;
    }
}

loc_80567DC8:
{
    r4 = 0x80660000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + -24084);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80567DE0u:
        goto loc_80567DE0;
        break;
    case 0x80567DECu:
        goto loc_80567DEC;
        break;
    case 0x80567DF8u:
        goto loc_80567DF8;
        break;
    case 0x80567E04u:
        goto loc_80567E04;
        break;
    case 0x80567E24u:
        goto loc_80567E24;
        break;
    case 0x80567E44u:
        goto loc_80567E44;
        break;
    case 0x80567E50u:
        goto loc_80567E50;
        break;
    case 0x80567E5Cu:
        goto loc_80567E5C;
        break;
    case 0x80567E68u:
        goto loc_80567E68;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80567DE0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567DEC:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567DF8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567E04:
{
    r0 = MemoryInline::FlatRead8((r3 + 62));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80567E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80567E10:
{
    r4 = 7;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8((r3 + 62), static_cast<uint8_t>(r0));
    goto loc_80567E70;
}

loc_80567E24:
{
    r0 = MemoryInline::FlatRead8((r3 + 62));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80567E2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80567E30:
{
    r4 = 7;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8((r3 + 62), static_cast<uint8_t>(r0));
    goto loc_80567E70;
}

loc_80567E44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567E50:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567E5C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80567E70;
}

loc_80567E68:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80567E70:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = r5;
    r6 = 1;
    r5 = (r3 + r0);
    MemoryInline::FlatWrite8((r5 + 52), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
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
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80567D00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80567D00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FBF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80567D00 func_80567D00 preserves=true fpr_mask=0x00000000
