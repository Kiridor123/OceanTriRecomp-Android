#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8045BD3Cu);
    goto loc_8045BD3C;

loc_8045BD3C:
{
    r7 = (r4 + -1);
    r6 = (r3 + -1);
    r4 = (r5 + 1);
    goto loc_8045BD78;
}

loc_8045BD4C:
{
    r6 = (r6 + 1);
    r3 = MemoryInline::FlatRead8(r6);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8045BD58:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8045BD78;
    }
}

loc_8045BD5C:
{
    r4 = MemoryInline::FlatRead8(r6);
    r3 = 1;
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8045BD6C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_8045BD70:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045BD78:
{
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -1);
}

loc_8045BD7C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045BD4C;
    }
}

loc_8045BD80:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045BD3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045BD3C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BD3C func_8045BD3C preserves=true fpr_mask=0x00000000
