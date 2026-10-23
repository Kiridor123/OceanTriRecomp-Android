#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027CC2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8027CC2C;

loc_8027CC2C:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 1161));
}

loc_8027CC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027CC5C;
    }
}

loc_8027CC3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1170));
}

loc_8027CC44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8027CC5C;
    }
}

loc_8027CC48:
{
    r4 = MemoryInline::FlatRead8((r3 + 1244));
    r0 = 0;
}

loc_8027CC54:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8027CC5C;
    }
}

loc_8027CC58:
{
    r5 = r4;
}

loc_8027CC5C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1253));
}

loc_8027CC64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027CC88;
    }
}

loc_8027CC68:
{
    r0 = MemoryInline::FlatRead8((r3 + 1262));
}

loc_8027CC70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8027CC88;
    }
}

loc_8027CC74:
{
    r4 = MemoryInline::FlatRead8((r3 + 1336));
    r0 = (r5 & 255);
}

loc_8027CC80:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8027CC88;
    }
}

loc_8027CC84:
{
    r5 = r4;
}

loc_8027CC88:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027CC2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027CC2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027CC2C func_8027CC2C preserves=true fpr_mask=0x00000000
