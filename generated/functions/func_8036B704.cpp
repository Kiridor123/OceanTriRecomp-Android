#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8036B704_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8036B704u);
    goto loc_8036B704;

loc_8036B704:
{
    r4 = (r4 & 255);
}

loc_8036B70C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8036B720;
    }
}

loc_8036B710:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_8036B720:
{
    r6 = (r4 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    r0 = (r4 * r5);
    r0 = (r6 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8036B704(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8036B704_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8036B704 func_8036B704 preserves=true fpr_mask=0x00000000
