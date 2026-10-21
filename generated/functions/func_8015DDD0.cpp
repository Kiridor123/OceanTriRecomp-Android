#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8015DDD0_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8015DDD0u);
    goto loc_8015DDD0;

loc_8015DDD0:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_8015DDD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8015DDE8;
    }
}

loc_8015DDDC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 907), static_cast<uint8_t>(r0));
    goto loc_8015DDF0;
}

loc_8015DDE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 907), static_cast<uint8_t>(r0));
}

loc_8015DDF0:
{
    r4 = MemoryInline::FlatRead16((r3 + 808));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8015DDF8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8015DE04;
    }
}

loc_8015DDFC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 808), static_cast<uint16_t>(r0));
}

loc_8015DE04:
{
    r4 = MemoryInline::FlatRead16((r3 + 810));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8015DE0C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8015DE10:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 810), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8015DDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8015DDD0_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DDD0 func_8015DDD0 preserves=true fpr_mask=0x00000000
