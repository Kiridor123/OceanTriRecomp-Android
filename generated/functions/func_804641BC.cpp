#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804641BC_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_sthu_ea_0 = 0;
    uint32_t r5_sthu_ea_1 = 0;
    uint32_t r5_sthu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x804641BCu);
    goto loc_804641BC;

loc_804641BC:
{
    r4 = (r4 + -2);
    r5 = (r3 + -2);
}

loc_804641C4:
{
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r5_sthu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite16(r5_sthu_ea_2, static_cast<uint16_t>(r0));
    r5 = r5_sthu_ea_2;
}

loc_804641D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804641C4;
    }
}

loc_804641D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_804641BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804641BC_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804641BC func_804641BC preserves=true fpr_mask=0x00000000
