#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041CEEC_ra58_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x8041CEECu);
    goto loc_8041CEEC;

loc_8041CEEC:
{
    r6 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 40));
    goto loc_8041CF14;
}

loc_8041CEF8:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_8041CF00:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8041CF0C;
    }
}

loc_8041CF04:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8041CF0C:
{
    r3 = (r3 + 4);
    r6 = (r6 + 1);
}

loc_8041CF14:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8041CF1C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_8041CEF8;
    }
}

loc_8041CF20:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8041CEEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041CEEC_ra58_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000059 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041CEEC func_8041CEEC preserves=true fpr_mask=0x00000000
