#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8026741C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8026741C;

loc_8026741C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80267424:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80267430;
    }
}

loc_80267428:
{
    r3 = 0;
    return r3;
}

loc_80267430:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    return r3;
}

}

extern "C" void func_8026741C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8026741C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026741C func_8026741C preserves=true fpr_mask=0x00000000
