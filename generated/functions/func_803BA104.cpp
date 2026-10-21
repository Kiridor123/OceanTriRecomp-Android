#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BA104_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803BA104u);
    goto loc_803BA104;

loc_803BA104:
{
    r4 = MemoryInline::FlatRead32((r13 + -16840));
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 32));
    ctr = r0;
}

loc_803BA11C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803BA144;
    }
}

loc_803BA120:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803BA128:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BA138;
    }
}

loc_803BA12C:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_803BA138:
{
    r5 = (r5 + 1);
    r3 = (r3 + 548);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BA120;
    }
}

loc_803BA144:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803BA104(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BA104_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002029 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BA104 func_803BA104 preserves=true fpr_mask=0x00000000
