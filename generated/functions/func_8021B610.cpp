#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8021B610_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x8021B610u);
    goto loc_8021B610;

loc_8021B610:
{
    r6 = -1;
    r7 = 0;
    r4 = 0x805C0000u;
    r8 = (r4 + -25056);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    goto loc_8021B650;
}

loc_8021B628:
{
    r5 = MemoryInline::FlatRead16((r8 + 2));
}

loc_8021B630:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r4))) {
        goto loc_8021B648;
    }
}

loc_8021B634:
{
    r0 = MemoryInline::FlatRead16((r8 + 4));
    r0 = (r5 + r0);
}

loc_8021B640:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8021B648;
    }
}

loc_8021B644:
{
    r6 = r7;
}

loc_8021B648:
{
    r7 = (r7 + 1);
    r8 = (r8 + 6);
}

loc_8021B650:
{
    r0 = MemoryInline::FlatRead16(r8);
}

loc_8021B658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8021B628;
    }
}

loc_8021B65C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_8021B664:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8021B680;
    }
}

loc_8021B668:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -25012);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r3 - r0);
    r0 = (r7 + r0);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021B680:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021B610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021B610_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021B610 func_8021B610 preserves=true fpr_mask=0x00000000
