#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802791F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802791F8u);
    goto loc_802791F8;

loc_802791F8:
{
}

loc_802791FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80279224;
    }
}

loc_80279200:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1058), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1100));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80279218:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80279258;
    }
}

loc_8027921C:
{
    MemoryInline::FlatWrite8((r3 + 1100), static_cast<uint8_t>(r5));
    goto loc_80279258;
}

loc_80279224:
{
    r0 = MemoryInline::FlatRead16((r3 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027922C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80279240;
    }
}

loc_80279230:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1058), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80279240:
{
    r0 = MemoryInline::FlatRead8((r3 + 1101));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80279250:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80279258;
    }
}

loc_80279254:
{
    MemoryInline::FlatWrite8((r3 + 1101), static_cast<uint8_t>(r5));
}

loc_80279258:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802791F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802791F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802791F8 func_802791F8 preserves=true fpr_mask=0x00000000
