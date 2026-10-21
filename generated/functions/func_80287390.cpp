#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80287390_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80287390u);
    goto loc_80287390;

loc_80287390:
{
    r4 = MemoryInline::FlatRead32((r3 + 792));
}

loc_80287398:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802873AC;
    }
}

loc_8028739C:
{
    r0 = MemoryInline::FlatRead8((r3 + 787));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802873A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802873DC;
    }
}

loc_802873AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802873B8:
{
    r0 = (r0 & -129);
}

loc_802873C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802873D8;
    }
}

loc_802873C4:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_802873CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(252))) {
        goto loc_802873D8;
    }
}

loc_802873D0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802873D8:
{
    r4 = (r4 + 22);
}

loc_802873DC:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_802873E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802873B8;
    }
}

loc_802873E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80287390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80287390_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80287390 func_80287390 preserves=true fpr_mask=0x00000000
