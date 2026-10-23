#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80207F10_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80207F10;

loc_80207F10:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80207F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80207F34;
    }
}

loc_80207F20:
{
}

loc_80207F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_80207F3C;
    }
}

loc_80207F28:
{
}

loc_80207F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_80207F44;
    }
}

loc_80207F30:
{
    goto loc_80207F48;
}

loc_80207F34:
{
    r4 = 0;
    goto loc_80207F48;
}

loc_80207F3C:
{
    r4 = 1;
    goto loc_80207F48;
}

loc_80207F44:
{
    r4 = 2;
}

loc_80207F48:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80207F10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80207F10_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80207F10 func_80207F10 preserves=true fpr_mask=0x00000000
