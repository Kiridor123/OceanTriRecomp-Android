#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80451F00_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80451F00;

loc_80451F00:
{
    r5 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80451F08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80451F14;
    }
}

loc_80451F0C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80451F14:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r5 + 65536);
    r3 = (r0 + r3);
    r5 = MemoryInline::FlatRead16((r3 + -27002));
    r3 = MemoryInline::FlatRead16((r3 + -27004));
    r0 = (r4 & 65535);
}

loc_80451F30:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80451F44;
    }
}

loc_80451F34:
{
}

loc_80451F38:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_80451F44;
    }
}

loc_80451F3C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80451F44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80451F00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80451F00_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80451F00 func_80451F00 preserves=true fpr_mask=0x00000000
