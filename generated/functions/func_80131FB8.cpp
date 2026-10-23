#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80131FB8_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80131FB8;

loc_80131FB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 488));
}

loc_80131FC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80131FC4:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_80131FCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80131FD0:
{
    r4 = MemoryInline::FlatRead8((r3 + 2081));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80131FDC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80131FE8;
    }
}

loc_80131FE0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 2081), static_cast<uint8_t>(r0));
}

loc_80131FE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2081));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80131FF4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80131FF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2080), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80131FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80131FB8_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80131FB8 func_80131FB8 preserves=true fpr_mask=0x00000000
