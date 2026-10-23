#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8026CC48_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8026CC48;

loc_8026CC48:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8026CC50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026CC80;
    }
}

loc_8026CC54:
{
    r0 = (r4 & 255);
}

loc_8026CC5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CC68;
    }
}

loc_8026CC60:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    goto loc_8026CC6C;
}

loc_8026CC68:
{
    r0 = MemoryInline::FlatRead16((r3 + 188));
}

loc_8026CC6C:
{
    r0 = (r0 & 4);
}

loc_8026CC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CCCC;
    }
}

loc_8026CC78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8026CC80:
{
    r0 = (r4 & 255);
}

loc_8026CC88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CCA4;
    }
}

loc_8026CC8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    r0 = (r0 & 68);
}

loc_8026CC94:
{
}

loc_8026CC98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(68))) {
        goto loc_8026CCCC;
    }
}

loc_8026CC9C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8026CCA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 188));
    r0 = (r0 & 68);
}

loc_8026CCAC:
{
}

loc_8026CCB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CCCC;
    }
}

loc_8026CCB4:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    r0 = (r0 & 68);
}

loc_8026CCBC:
{
}

loc_8026CCC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(68))) {
        goto loc_8026CCCC;
    }
}

loc_8026CCC4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8026CCCC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8026CC48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8026CC48_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026CC48 func_8026CC48 preserves=true fpr_mask=0x00000000
