#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80047118_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_80047118;

loc_80047118:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_80047128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80047138;
    }
}

loc_8004712C:
{
    r0 = MemoryInline::FlatRead8((r3 + 27));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[0] = r0;
    return r3;
}

loc_80047138:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80047118(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80047118_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80047118 func_80047118 preserves=true fpr_mask=0x00000000
