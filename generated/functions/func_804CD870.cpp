#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CD870_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_804CD870;

loc_804CD870:
{
    r5 = 0;
    MemoryInline::FlatWrite16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWrite16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_804CD870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CD870_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD870 func_804CD870 preserves=true fpr_mask=0x00000000
