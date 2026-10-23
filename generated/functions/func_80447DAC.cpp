#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80447DAC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80447DAC;

loc_80447DAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80447DB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80447DB8:
{
}

loc_80447DBC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80447DC4;
    }
}

loc_80447DC0:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80447DC4:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_80447E10:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80447E18:
{
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80447E24;
    }
}

loc_80447E20:
{
    r0 = -100;
}

loc_80447E24:
{
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 216), r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 226), static_cast<uint8_t>(r0));
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

extern "C" void func_80447DAC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80447DAC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80447DAC func_80447DAC preserves=true fpr_mask=0x00000000
