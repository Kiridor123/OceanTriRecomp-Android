#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805174E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x805174E8u);
    goto loc_805174E8;

loc_805174E8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_805174F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_80517504;
    }
}

loc_805174F4:
{
    r0 = 43;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517504:
{
}

loc_80517508:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_80517514;
    }
}

loc_8051750C:
{
}

loc_80517510:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_8051753C;
    }
}

loc_80517514:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8051751C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80517528;
    }
}

loc_80517520:
{
}

loc_80517524:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_8051753C;
    }
}

loc_80517528:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80517530:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_80517548;
    }
}

loc_80517534:
{
}

loc_80517538:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(122))) {
        goto loc_80517548;
    }
}

loc_8051753C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517548:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r5 = (r5_rot_0 & 15);
    r0 = 37;
}

loc_80517554:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 & 15);
    r0 = (r5 + 55);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(10))) {
        goto loc_80517568;
    }
}

loc_80517564:
{
    r0 = (r5 + 48);
}

loc_80517568:
{
}

loc_8051756C:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = (r4 + 55);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(10))) {
        goto loc_8051757C;
    }
}

loc_80517578:
{
    r0 = (r4 + 48);
}

loc_8051757C:
{
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805174E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805174E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805174E8 func_805174E8 preserves=true fpr_mask=0x00000000
