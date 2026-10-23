#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80517404_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80517404;

loc_80517404:
{
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r3 + 1);
    r3 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80517468;
}

loc_80517418:
{
}

loc_8051741C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_80517428;
    }
}

loc_80517420:
{
}

loc_80517424:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_80517450;
    }
}

loc_80517428:
{
}

loc_8051742C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80517438;
    }
}

loc_80517430:
{
}

loc_80517434:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_80517450;
    }
}

loc_80517438:
{
}

loc_8051743C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_80517448;
    }
}

loc_80517440:
{
}

loc_80517444:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(122))) {
        goto loc_80517450;
    }
}

loc_80517448:
{
}

loc_8051744C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_80517458;
    }
}

loc_80517450:
{
    r3 = (r3 + 1);
    goto loc_8051745C;
}

loc_80517458:
{
    r3 = (r3 + 3);
}

loc_8051745C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517468:
{
}

loc_8051746C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80517418;
    }
}

loc_80517470:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80517404(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517404_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517404 func_80517404 preserves=true fpr_mask=0x00000000
