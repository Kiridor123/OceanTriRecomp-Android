#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E0970_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804E0970u);
    goto loc_804E0970;

loc_804E0970:
{
    r5 = MemoryInline::FlatRead32((r3 + 144));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_804E0978:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_return;
    }
}

loc_804E097C:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
}

loc_804E0984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E099C;
    }
}

loc_804E0988:
{
}

loc_804E098C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804E09E0;
    }
}

loc_804E0990:
{
}

loc_804E0994:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804E0A5C;
    }
}

loc_804E0998:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E099C:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = MemoryInline::FlatRead32((r3 + 128));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 124), r4);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804E09C8;
    }
}

loc_804E09B0:
{
}

loc_804E09B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r5))) {
        goto loc_return;
    }
}

loc_804E09B8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E09C8:
{
}

loc_804E09CC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r5))) {
        goto loc_return;
    }
}

loc_804E09D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E09E0:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804E0A28;
    }
}

loc_804E09F4:
{
}

loc_804E09F8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804E0A0C;
    }
}

loc_804E09FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E0A0C:
{
    r4 = MemoryInline::FlatRead32((r3 + 136));
}

loc_804E0A14:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_return;
    }
}

loc_804E0A18:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 124), r4);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E0A28:
{
}

loc_804E0A2C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804E0A40;
    }
}

loc_804E0A30:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E0A40:
{
    r4 = MemoryInline::FlatRead32((r3 + 136));
}

loc_804E0A48:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_return;
    }
}

loc_804E0A4C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 124), r4);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E0A5C:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804E0A88;
    }
}

loc_804E0A70:
{
}

loc_804E0A74:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804E0A78:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_804E0A88:
{
}

loc_804E0A8C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804E0A90:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_804E0970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E0970_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E0970 func_804E0970 preserves=true fpr_mask=0x00000000
