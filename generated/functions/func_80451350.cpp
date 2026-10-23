#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80451350_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80451350;

loc_80451350:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80451358:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80451364;
    }
}

loc_8045135C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451364:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_80451370:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451378;
    }
}

loc_80451374:
{
    r4 = 1;
}

loc_80451378:
{
    r0 = MemoryInline::FlatRead8((r3 + 65));
}

loc_80451380:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451388;
    }
}

loc_80451384:
{
    r4 = (r4 + 1);
}

loc_80451388:
{
    r0 = MemoryInline::FlatRead8((r3 + 66));
}

loc_80451390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80451398;
    }
}

loc_80451394:
{
    r4 = (r4 + 1);
}

loc_80451398:
{
    r0 = MemoryInline::FlatRead8((r3 + 67));
}

loc_804513A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804513A8;
    }
}

loc_804513A4:
{
    r4 = (r4 + 1);
}

loc_804513A8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80451350(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80451350_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80451350 func_80451350 preserves=true fpr_mask=0x00000000
