#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804551FC_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804551FC;

loc_804551FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 780), static_cast<uint8_t>(r0));
}

loc_80455468:
{
    r0 = (r31 & 255);
    MemoryInline::FlatWrite8((r30 + 782), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_804551FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804551FC_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xC0000002 gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804551FC func_804551FC preserves=true fpr_mask=0x00000000
