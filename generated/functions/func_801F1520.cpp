#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801F1520_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x801F1520u);
    goto loc_801F1520;

loc_801F1520:
{
    r4 = MemoryInline::FlatRead16((r3 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801F1528:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_801F1550;
    }
}

loc_801F152C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801F153C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_801F1550;
    }
}

loc_801F1540:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
}

loc_801F1550:
{
    r4 = MemoryInline::FlatRead16((r3 + 20));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801F1558:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_801F1580;
    }
}

loc_801F155C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801F156C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_801F1580;
    }
}

loc_801F1570:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
}

loc_801F1580:
{
    r4 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801F1594:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(30))) {
        goto loc_return;
    }
}

loc_801F1598:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_801F1520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801F1520_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F1520 func_801F1520 preserves=true fpr_mask=0x00000000
