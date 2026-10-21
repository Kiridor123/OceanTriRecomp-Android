#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80478260_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80478260u);
    goto loc_80478260;

loc_80478260:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
}

loc_80478268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478274;
    }
}

loc_8047826C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80478274:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8047827C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_8047829C;
    }
}

loc_80478280:
{
    r3 = 0x80710000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    ctx->gpr[0] = r0;
    return r3;
}

loc_8047829C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80478260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80478260_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478260 func_80478260 preserves=true fpr_mask=0x00000000
