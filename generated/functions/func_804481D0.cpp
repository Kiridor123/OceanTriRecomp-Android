#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804481D0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804481D0u);
    goto loc_804481D0;

loc_804481D0:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r13 + -16492));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804481E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804481E8;
    }
}

loc_804481E4:
{
    r3 = (r3 | 1);
}

loc_804481E8:
{
    r0 = MemoryInline::FlatRead8((r13 + -16491));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804481F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804481FC;
    }
}

loc_804481F8:
{
    r3 = (r3 | 2);
}

loc_804481FC:
{
    r0 = MemoryInline::FlatRead8((r13 + -16490));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80448208:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8044820C:
{
    r3 = (r3 | 3);
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_804481D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804481D0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804481D0 func_804481D0 preserves=true fpr_mask=0x00000000
