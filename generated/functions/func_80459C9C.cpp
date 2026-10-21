#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80459C9C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80459C9Cu);
    goto loc_80459C9C;

loc_80459C9C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    r7 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_80459CC8;
}

loc_80459CB0:
{
    r6 = MemoryInline::FlatRead8(r4);
    r5 = (r3 + r7);
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r0 = (r6 + -48);
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r0));
}

loc_80459CC8:
{
}

loc_80459CCC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(36))) {
        goto loc_80459CDC;
    }
}

loc_80459CD0:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80459CB0;
    }
}

loc_80459CDC:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80459CEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80459CF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80459CF4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80459D2C;
    }
}

loc_80459CF8:
{
    r5 = (r4 + 1);
    goto loc_80459D10;
}

loc_80459D00:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80459D08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(48))) {
        goto loc_80459D2C;
    }
}

loc_80459D0C:
{
    r5 = (r5 + 1);
}

loc_80459D10:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80459D00;
    }
}

loc_80459D1C:
{
    r4 = (r7 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r0 & 1);
}

loc_80459D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80459D2C:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r3 + 5);
    r0 = 0;
    r5 = (r6 + r4);
    r5 = (r5 + -1);
}

loc_80459D40:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_80459D48:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(9))) {
        goto loc_80459D58;
    }
}

loc_80459D4C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r4;
}

loc_80459D58:
{
}

loc_80459D5C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_80459D78;
    }
}

loc_80459D60:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r4;
}

loc_80459D78:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + -1);
    goto loc_80459D40;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_80459C9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80459C9C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80459C9C func_80459C9C preserves=true fpr_mask=0x00000000
