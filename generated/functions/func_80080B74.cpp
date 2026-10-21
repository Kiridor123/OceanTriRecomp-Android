#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080B74_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80080B74u);
    goto loc_80080B74;

loc_80080B74:
{
    r0 = (r4 & 1);
}

loc_80080B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080B8C;
    }
}

loc_80080B80:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 288), static_cast<uint8_t>(r0));
}

loc_80080B8C:
{
    r0 = (r4 & 2);
}

loc_80080B94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080BA4;
    }
}

loc_80080B98:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r3 + 288), static_cast<uint8_t>(r0));
}

loc_80080BA4:
{
    r0 = (r4 & 4);
}

loc_80080BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80080BB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 288), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80080B74(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80080B74_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80080B74 func_80080B74 preserves=true fpr_mask=0x00000000
