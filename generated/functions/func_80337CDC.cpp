#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80337CDC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80337CDC;

loc_80337CDC:
{
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80337CDC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80337CDC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80337CDC func_80337CDC preserves=true fpr_mask=0x00000000
