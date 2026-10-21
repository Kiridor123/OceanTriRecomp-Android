#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804964D0_ra50_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x804964D0u);
    goto loc_804964D0;

loc_804964D0:
{
    r3 = 0x80740000u;
    r3 = (r3 + -5120);
    r6 = MemoryInline::FlatRead32((r3 + 1980));
}

loc_804964E0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804964F0;
    }
}

loc_804964E4:
{
    r4 = MemoryInline::FlatRead32((r6 + 80));
}

loc_804964EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804964F8;
    }
}

loc_804964F0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_804964F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 13));
    r0 = (r3 + -8);
    r5 = MemoryInline::FlatRead8((r5 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r3 = (r5 + r3);
    r3 = (r3 & 65535);
}

loc_80496520:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8049652C;
    }
}

loc_80496524:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_8049652C:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_804964D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804964D0_ra50_0_10_0(ctx, ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000050 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804964D0 func_804964D0 preserves=true fpr_mask=0x00000000
