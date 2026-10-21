#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80358854_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80358854u);
    goto loc_80358854;

loc_80358854:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_8035885C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80358860:
{
    r0 = MemoryInline::FlatRead16((r3 + 812));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80358874:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(500))) {
        goto loc_80358884;
    }
}

loc_80358878:
{
    r0 = 500;
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_80358884:
{
}

loc_80358888:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035888C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80358854(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80358854_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80358854 func_80358854 preserves=true fpr_mask=0x00000000
