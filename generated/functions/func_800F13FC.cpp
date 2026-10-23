#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F13FC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_800F13FC;

loc_800F13FC:
{
    r0 = (r4 & 255);
}

loc_800F1404:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F1410;
    }
}

loc_800F1408:
{
    r3 = 31;
    ctx->gpr[0] = r0;
    return r3;
}

loc_800F1410:
{
}

loc_800F1414:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F142C;
    }
}

loc_800F1418:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_800F1420:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F142C;
    }
}

loc_800F1424:
{
    r3 = 48;
    ctx->gpr[0] = r0;
    return r3;
}

loc_800F142C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -26859));
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_800F13FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F13FC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F13FC func_800F13FC preserves=true fpr_mask=0x00000000
