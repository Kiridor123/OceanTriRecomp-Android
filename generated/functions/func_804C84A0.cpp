#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C84A0_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804C84A0;

loc_804C84A0:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804C84A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32(r6, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C84C4;
    }
}

loc_804C84B8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_804C84C4:
{
    r0 = (r3 & 32);
}

loc_804C84C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C84D8;
    }
}

loc_804C84CC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_804C84D8:
{
    r0 = (r3 & 4);
}

loc_804C84DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C84EC;
    }
}

loc_804C84E0:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804C84EC:
{
    r0 = (r3 & 8);
}

loc_804C84F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8500;
    }
}

loc_804C84F4:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804C8500:
{
    r0 = (r3 & 1);
}

loc_804C8504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C8514;
    }
}

loc_804C8508:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_804C8514:
{
    r0 = (r3 & 2);
}

loc_804C8518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804C851C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_804C84A0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804C84A0_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C84A0 func_804C84A0 preserves=true fpr_mask=0x00000000
