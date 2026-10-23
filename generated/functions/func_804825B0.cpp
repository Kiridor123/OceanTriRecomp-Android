#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804825B0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804825B0;

loc_804825B0:
{
}

loc_804825B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804825CC;
    }
}

loc_804825B8:
{
    r3 = 0x80740000u;
    r0 = 0;
    r3 = (r3 + -17608);
    MemoryInline::FlatWriteRam32((r3 + 1224), r0);
    goto loc_804825EC;
}

loc_804825CC:
{
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead32((r4 + 1224));
}

loc_804825DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804825E8;
    }
}

loc_804825E0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804825E8:
{
    MemoryInline::FlatWriteRam32((r4 + 1224), r3);
}

loc_804825EC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804825B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804825B0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804825B0 func_804825B0 preserves=true fpr_mask=0x00000000
