#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80415910_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80415910;

loc_80415910:
{
    r3 = 0;
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32(r6, r0);
    r9 = 0;
    goto loc_80415A00;
}

loc_80415928:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_80415930:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_804159A4;
    }
}

loc_80415934:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(1));
}

loc_80415938:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8041596C;
    }
}

loc_8041593C:
{
    r0 = MemoryInline::FlatRead8((r7 + -1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80415948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_804159F8;
    }
}

loc_8041594C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r6, r0);
    r7 = MemoryInline::FlatRead32(r5);
    r0 = (r7 + 2);
    MemoryInline::FlatWrite32(r5, r0);
    r3 = (r3 + -1);
    goto loc_804159FC;
}

loc_8041596C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804159F8;
    }
}

loc_80415970:
{
    r0 = MemoryInline::FlatRead8((r7 + -1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8041597C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_804159F8;
    }
}

loc_80415980:
{
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8041598C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804159F8;
    }
}

loc_80415990:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r6, r0);
    r3 = (r3 + -1);
    goto loc_80415A14;
}

loc_804159A4:
{
}

loc_804159A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(94))) {
        goto loc_804159D0;
    }
}

loc_804159AC:
{
}

loc_804159B0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_804159F8;
    }
}

loc_804159B4:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r6, r0);
    r7 = MemoryInline::FlatRead32(r5);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804159FC;
}

loc_804159D0:
{
}

loc_804159D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(36))) {
        goto loc_804159F8;
    }
}

loc_804159D8:
{
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804159E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804159F8;
    }
}

loc_804159E8:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_80415A14;
}

loc_804159F8:
{
    r3 = (r3 + 1);
}

loc_804159FC:
{
    r9 = (r9 + 1);
}

loc_80415A00:
{
    r7 = (r4 + r9);
    r8 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_80415A10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80415928;
    }
}

loc_80415A14:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80415A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80415A44;
    }
}

loc_80415A20:
{
}

loc_80415A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80415A44;
    }
}

loc_80415A28:
{
}

loc_80415A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80415A50;
    }
}

loc_80415A30:
{
}

loc_80415A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80415A50;
    }
}

loc_80415A38:
{
}

loc_80415A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80415A5C;
    }
}

loc_80415A40:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

loc_80415A44:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

loc_80415A50:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

loc_80415A5C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80415910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80415910_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000389 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80415910 func_80415910 preserves=true fpr_mask=0x00000000
