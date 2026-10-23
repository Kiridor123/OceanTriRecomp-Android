#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80456C5C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80456C5C;

loc_80456C5C:
{
    r7 = MemoryInline::FlatRead8(r3);
}

loc_80456C64:
{
    r6 = r3;
    r0 = 8;
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r8 = 4;
    r9 = 1;
    r5 = 0;
    r10 = 0;
    r11 = 4;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80456CA0;
    }
}

loc_80456C88:
{
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r6 = (r3 + 1);
    r8 = 8;
    r10 = 32;
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r11 = 8;
}

loc_80456CA0:
{
}

loc_80456CA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80456CC0;
    }
}

loc_80456CA8:
{
    r0 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80456CAC:
{
    r8 = 8;
    r0 = 7;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80456CBC;
    }
}

loc_80456CB8:
{
    r5 = 1;
}

loc_80456CBC:
{
    r9 = 2;
}

loc_80456CC0:
{
}

loc_80456CC4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80456CE8;
    }
}

loc_80456CC8:
{
    r7 = (r7 + r5);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = (r7 * r11);
    r3 = (r0 + r10);
    r0 = (r7 + r9);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r5 = (r5 + r3);
    goto loc_80456D10;
}

loc_80456CE8:
{
    r0 = 8;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = (r8 + -1);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6 = ~(r0 | r0);
    r5 = (r8 + r5);
    r0 = (r5 + -1);
    r5 = (r6 & r0);
    r0 = (r5 + r8);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80456D10:
{
}

loc_80456D14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80456D1C;
    }
}

loc_80456D18:
{
    r5 = MemoryInline::FlatRead32(r5);
}

loc_80456D1C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80456C5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80456C5C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80456C5C func_80456C5C preserves=true fpr_mask=0x00000000
