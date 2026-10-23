#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80451EA0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80451EA0;

loc_80451EA0:
{
    r5 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80451EA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80451EB4;
    }
}

loc_80451EAC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80451EB4:
{
    r5 = (r5 + 65536);
    r0 = (r3 * 36);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -29565));
}

loc_80451EC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80451ED4;
    }
}

loc_80451ECC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80451ED4:
{
    r0 = MemoryInline::FlatRead16((r5 + -29564));
    r3 = (r4 & 65535);
}

loc_80451EE0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_80451EF8;
    }
}

loc_80451EE4:
{
    r0 = MemoryInline::FlatRead16((r5 + -29562));
}

loc_80451EEC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80451EF8;
    }
}

loc_80451EF0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80451EF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80451EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80451EA0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80451EA0 func_80451EA0 preserves=true fpr_mask=0x00000000
