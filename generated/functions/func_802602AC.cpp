#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802602AC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x802602ACu);
    goto loc_802602AC;

loc_802602AC:
{
    r6 = MemoryInline::FlatRead16((r3 + 1608));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + r5);
    MemoryInline::FlatWrite16((r3 + 1608), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802602C0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-100))) {
        goto loc_802602D0;
    }
}

loc_802602C4:
{
    r0 = -100;
    MemoryInline::FlatWrite16((r3 + 1608), static_cast<uint16_t>(r0));
    goto loc_802602E0;
}

loc_802602D0:
{
}

loc_802602D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_802602E0;
    }
}

loc_802602D8:
{
    r0 = 100;
    MemoryInline::FlatWrite16((r3 + 1608), static_cast<uint16_t>(r0));
}

loc_802602E0:
{
}

loc_802602E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_802602E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1608));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r6 * r0);
}

loc_802602F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802602F8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1608), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_802602AC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802602AC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802602AC func_802602AC preserves=true fpr_mask=0x00000000
