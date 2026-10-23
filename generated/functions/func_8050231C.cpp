#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8050231C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8050231C;

loc_8050231C:
{
    r6 = 0;
    r5 = 0;
    goto loc_8050233C;
}

loc_80502328:
{
}

loc_8050232C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r6))) {
        goto loc_80502338;
    }
}

loc_80502330:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_80502338:
{
    r6 = (r6 + 1);
}

loc_8050233C:
{
}

loc_80502340:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80502354;
    }
}

loc_80502344:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_80502358;
}

loc_80502354:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_80502358:
{
}

loc_8050235C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80502328;
    }
}

loc_80502360:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8050231C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8050231C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050231C func_8050231C preserves=true fpr_mask=0x00000000
