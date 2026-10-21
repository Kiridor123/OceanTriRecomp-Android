#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A6470_ra98_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804A6470u);
    goto loc_804A6470;

loc_804A6470:
{
}

loc_804A6474:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_804A6498;
    }
}

loc_804A6478:
{
    r0 = MemoryInline::FlatRead32((r13 + -15776));
}

loc_804A6480:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804A6498;
    }
}

loc_804A6484:
{
    r7 = (r3 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -15768));
    r3_addr_1 = (r3 + r7);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r0 & -16777216);
}

loc_804A6494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A64A0;
    }
}

loc_804A6498:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_804A64A0:
{
    r3 = (r3 + r7);
    r5 = MemoryInline::FlatRead32((r13 + -15688));
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r3 = 1;
    r5 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite32((r4 + 48), r5);
    r5 = MemoryInline::FlatRead32((r13 + -15768));
    r5 = (r5 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 52), r5);
    MemoryInline::FlatWrite32((r4 + 56), r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_804A6470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A6470_ra98_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002099 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A6470 func_804A6470 preserves=true fpr_mask=0x00000000
