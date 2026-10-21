#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804537FC_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addc_left_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804537FCu);
    goto loc_804537FC;

loc_804537FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453804:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80453810;
    }
}

loc_80453808:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

loc_80453810:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24300));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1700));
    r0 = -1;
    r3_addc_left_0 = r3;
    r3 = (r3_addc_left_0 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_804537FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804537FC_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002010 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804537FC func_804537FC preserves=true fpr_mask=0x00000000
