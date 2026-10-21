#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE6AC_ra90_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803FE6ACu);
    goto loc_803FE6AC;

loc_803FE6AC:
{
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_803FE7AC:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_803FE6AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE6AC_ra90_0_8_0(ctx, ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xC0000092 gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE6AC func_803FE6AC preserves=true fpr_mask=0x00000000
