#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804537C4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804537C4;

loc_804537C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_804537CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804537D8;
    }
}

loc_804537D0:
{
    r3 = 0;
    return r3;
}

loc_804537D8:
{
    r3 = (r3 + 65536);
    r3 = (r3 + -24588);
    return r3;
}

}

extern "C" void func_804537C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804537C4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804537C4 func_804537C4 preserves=true fpr_mask=0x00000000
