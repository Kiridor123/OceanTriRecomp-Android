#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055DF0_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80055DF0;

loc_80055DF0:
{
    r0 = (r5 & 255);
    r5 = 0x80580000u;
    r5 = (r5 + 8400);
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r0 = (r0 * 20);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = (r5 + 20);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_80055DF0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80055DF0_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80055DF0 func_80055DF0 preserves=true fpr_mask=0x00000000
