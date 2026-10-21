#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80498E28_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x80498E28u);
    goto loc_80498E28;

loc_80498E28:
{
}

loc_80498E2C:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_80498E7C;
    }
}

loc_80498E34:
{
    r0 = (r4 + -64);
    r4 = 0x80740000u;
    r0 = (r0 & 65535);
    r0 = (r0 * 124);
    r4 = (r4 + -5120);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 376));
    r5 = (r4 + 376);
}

loc_80498E58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80498E64;
    }
}

loc_80498E5C:
{
    r5 = 0;
    goto loc_80498E7C;
}

loc_80498E64:
{
}

loc_80498E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80498E7C;
    }
}

loc_80498E6C:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80498E74:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80498E7C;
    }
}

loc_80498E78:
{
    r5 = 0;
}

loc_80498E7C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80498E28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80498E28_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80498E28 func_80498E28 preserves=true fpr_mask=0x00000000
