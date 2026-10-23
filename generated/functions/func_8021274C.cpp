#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8021274C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8021274C;

loc_8021274C:
{
    r6 = 0;
    r7 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80212758:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r7 = (r7 + r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_80212768:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r4))) {
        goto loc_80212780;
    }
}

loc_8021276C:
{
    r3 = (r3 + 2);
    r6 = (r6 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_8021277C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80212758;
    }
}

loc_80212780:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021274C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021274C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021274C func_8021274C preserves=true fpr_mask=0x00000000
