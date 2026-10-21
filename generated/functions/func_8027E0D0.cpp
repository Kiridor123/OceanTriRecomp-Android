#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027E0D0_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8027E0D0u);
    goto loc_8027E0D0;

loc_8027E0D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027E0D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_8027E0E4;
    }
}

loc_8027E0DC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027E0E4:
{
}

loc_8027E0E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027E100;
    }
}

loc_8027E0EC:
{
}

loc_8027E0F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8027E120;
    }
}

loc_8027E0F4:
{
}

loc_8027E0F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8027E144;
    }
}

loc_8027E0FC:
{
    goto loc_8027E17C;
}

loc_8027E100:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -21);
    r0 = (r0 & 65535);
}

loc_8027E114:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027E17C;
    }
}

loc_8027E118:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027E120:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -14);
}

loc_8027E12C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027E13C;
    }
}

loc_8027E130:
{
    r0 = (r3 + -36);
}

loc_8027E138:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027E17C;
    }
}

loc_8027E13C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027E144:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -4);
}

loc_8027E150:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027E174;
    }
}

loc_8027E154:
{
    r0 = (r3 + -30);
}

loc_8027E15C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8027E174;
    }
}

loc_8027E160:
{
    r0 = (r3 + -26);
}

loc_8027E168:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027E174;
    }
}

loc_8027E16C:
{
}

loc_8027E170:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(38))) {
        goto loc_8027E17C;
    }
}

loc_8027E174:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027E17C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027E0D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027E0D0_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E0D0 func_8027E0D0 preserves=true fpr_mask=0x00000000
