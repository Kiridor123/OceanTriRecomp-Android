#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F35B8_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x800F35B8u);
    goto loc_800F35B8;

loc_800F35B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 99), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 101), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 72));
}

loc_800F35DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F35E0:
{
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_800F35E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F35EC:
{
}

loc_800F35F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F3600;
    }
}

loc_800F35F4:
{
    r0 = 94;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    goto loc_800F3608;
}

loc_800F3600:
{
    r0 = 95;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
}

loc_800F3608:
{
    r0 = MemoryInline::FlatRead8((r3 + 472));
}

loc_800F3610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F363C;
    }
}

loc_800F3614:
{
    r4 = MemoryInline::FlatRead16((r3 + 564));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_800F361C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F3634;
    }
}

loc_800F3620:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 564), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    goto loc_800F363C;
}

loc_800F3634:
{
    r0 = 96;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
}

loc_800F363C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_800F364C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F365C;
    }
}

loc_800F3650:
{
    r0 = MemoryInline::FlatRead8((r3 + 69));
}

loc_800F3658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F365C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_800F35B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F35B8_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F35B8 func_800F35B8 preserves=true fpr_mask=0x00000000
