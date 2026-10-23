#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80451D04_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80451D04;

loc_80451D04:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -32059));
}

loc_80451D14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451D38;
    }
}

loc_80451D18:
{
    r0 = MemoryInline::FlatRead8((r3 + -32057));
}

loc_80451D20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451D38;
    }
}

loc_80451D24:
{
    r0 = MemoryInline::FlatRead8((r3 + -32060));
}

loc_80451D2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451D38;
    }
}

loc_80451D30:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451D38:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80451D48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80451D54;
    }
}

loc_80451D4C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451D54:
{
    r0 = MemoryInline::FlatRead8((r3 + -15784));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80451D04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80451D04_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80451D04 func_80451D04 preserves=true fpr_mask=0x00000000
