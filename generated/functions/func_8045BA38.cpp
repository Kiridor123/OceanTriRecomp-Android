#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045BA38_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8045BA38u);
    goto loc_8045BA38;

loc_8045BA38:
{
}

loc_8045BA3C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045BA48;
    }
}

loc_8045BA40:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8045BA48:
{
}

loc_8045BA4C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BA58;
    }
}

loc_8045BA50:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8045BA58:
{
}

loc_8045BA5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045BA68;
    }
}

loc_8045BA60:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_8045BA68:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045BA7C;
    }
}

loc_8045BA74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8045BA7C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8045BA38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045BA38_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045BA38 func_8045BA38 preserves=true fpr_mask=0x00000000
