#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804884B4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x804884B4u);
    goto loc_804884B4;

loc_804884B4:
{
    r4 = 0x80740000u;
    r3 = 0;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead16((r4 + 6236));
}

loc_804884C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_804884DC;
    }
}

loc_804884CC:
{
}

loc_804884D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_804884D8;
    }
}

loc_804884D4:
{
    goto loc_804884DC;
}

loc_804884D8:
{
    r3 = 1;
}

loc_804884DC:
{
    r0 = MemoryInline::FlatRead16((r4 + 6288));
}

loc_804884E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_804884F8;
    }
}

loc_804884E8:
{
}

loc_804884EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_804884F4;
    }
}

loc_804884F0:
{
    goto loc_804884F8;
}

loc_804884F4:
{
    r3 = (r3 + 1);
}

loc_804884F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 6340));
}

loc_80488500:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_return;
    }
}

loc_80488504:
{
}

loc_80488508:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_return;
    }
}

loc_8048850C:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804884B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804884B4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804884B4 func_804884B4 preserves=true fpr_mask=0x00000000
