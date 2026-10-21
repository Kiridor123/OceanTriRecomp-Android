#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80384B98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x80384B98u);
    goto loc_80384B98;

loc_80384B98:
{
    r5 = MemoryInline::FlatRead8((r3 + 5));
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80384BA4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80384BE0;
    }
}

loc_80384BA8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r0 - r4);
    r0 = (r4 + -1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80384BD4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80384BF0;
    }
}

loc_80384BD8:
{
    r4 = (r4 + 96);
    goto loc_80384BF0;
}

loc_80384BE0:
{
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 - r0);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80384BF0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r0 * 100);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80384B98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80384B98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80384B98 func_80384B98 preserves=true fpr_mask=0x00000000
