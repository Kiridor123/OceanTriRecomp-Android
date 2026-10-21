#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8020D688_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8020D688u);
    goto loc_8020D688;

loc_8020D688:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8020D690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8020D73C;
    }
}

loc_8020D694:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -26164);
    r5 = (r4 + 2);
    r6 = 1;
    goto loc_8020D730;
}

loc_8020D6A8:
{
}

loc_8020D6AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_8020D6C4;
    }
}

loc_8020D6B0:
{
}

loc_8020D6B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(17))) {
        goto loc_8020D6E0;
    }
}

loc_8020D6B8:
{
}

loc_8020D6BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(12))) {
        goto loc_8020D6F8;
    }
}

loc_8020D6C0:
{
    goto loc_8020D714;
}

loc_8020D6C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8020D6CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_8020D6D8;
    }
}

loc_8020D6D0:
{
}

loc_8020D6D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8020D728;
    }
}

loc_8020D6D8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8020D6E0:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r4 + -17);
}

loc_8020D6EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8020D728;
    }
}

loc_8020D6F0:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8020D6F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8020D700:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8020D70C;
    }
}

loc_8020D704:
{
}

loc_8020D708:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_8020D728;
    }
}

loc_8020D70C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8020D714:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8020D71C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8020D728;
    }
}

loc_8020D720:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8020D728:
{
    r6 = (r6 + 1);
    r5 = (r5 + 2);
}

loc_8020D730:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_8020D738:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_8020D6A8;
    }
}

loc_8020D73C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8020D688(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020D688_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020D688 func_8020D688 preserves=true fpr_mask=0x00000000
