#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80126A4C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80126A4C;

loc_80126A4C:
{
    r0 = (r4 & 255);
    r4 = (r5 & 255);
}

loc_80126A58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80126A64;
    }
}

loc_80126A5C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80126A64:
{
}

loc_80126A68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80126A74;
    }
}

loc_80126A6C:
{
}

loc_80126A70:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_80126A7C;
    }
}

loc_80126A74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80126A7C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_80126A88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80126A94;
    }
}

loc_80126A8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80126A94:
{
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (-1 - r4);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80126A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80126A4C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80126A4C func_80126A4C preserves=true fpr_mask=0x00000000
