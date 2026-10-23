#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80379000_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80379000;

loc_80379000:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    r0 = (r0 & 3);
}

loc_80379018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80379024;
    }
}

loc_8037901C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 816), static_cast<uint16_t>(r0));
}

loc_80379024:
{
    r0 = (r4 & 255);
    r0 = (r0 & 12);
}

loc_80379030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8037903C;
    }
}

loc_80379034:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 818), static_cast<uint16_t>(r0));
}

loc_8037903C:
{
    r0 = (r4 & 255);
    r0 = (r0 & 48);
}

loc_80379048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80379054;
    }
}

loc_8037904C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
}

loc_80379054:
{
    r0 = (r4 & 255);
    r0 = (r0 & 192);
}

loc_80379060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80379064:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 822), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80379000(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80379000_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80379000 func_80379000 preserves=true fpr_mask=0x00000000
