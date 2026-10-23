#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80453684_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80453684;

loc_80453684:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_8045368C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80453698;
    }
}

loc_80453690:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    return r3;
}

loc_80453698:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16124));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804536A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804536B4;
    }
}

loc_804536AC:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    return r3;
}

loc_804536B4:
{
    r3 = (r3 + -16124);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80453684(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80453684_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453684 func_80453684 preserves=true fpr_mask=0x00000000
