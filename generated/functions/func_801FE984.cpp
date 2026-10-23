#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801FE984_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_801FE984;

loc_801FE984:
{
    r0 = (r3 & 255);
}

loc_801FE98C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(14))) {
        goto loc_801FE998;
    }
}

loc_801FE990:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801FE998:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_801FE9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE9B8;
    }
}

loc_801FE9AC:
{
}

loc_801FE9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FE9D8;
    }
}

loc_801FE9B4:
{
    goto loc_801FEA1C;
}

loc_801FE9B8:
{
    r0 = (r4 & 255);
}

loc_801FE9C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801FEA1C;
    }
}

loc_801FE9C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 128));
}

loc_801FE9CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801FEA1C;
    }
}

loc_801FE9D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801FE9D8:
{
    r0 = (r4 & 255);
}

loc_801FE9E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE9F8;
    }
}

loc_801FE9E4:
{
}

loc_801FE9E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FEA00;
    }
}

loc_801FE9EC:
{
}

loc_801FE9F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801FEA14;
    }
}

loc_801FE9F4:
{
    goto loc_801FEA1C;
}

loc_801FE9F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801FEA00:
{
    r0 = MemoryInline::FlatRead8((r3 + 128));
}

loc_801FEA08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801FEA1C;
    }
}

loc_801FEA0C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801FEA14:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801FEA1C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_801FE984(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801FE984_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FE984 func_801FE984 preserves=true fpr_mask=0x00000000
