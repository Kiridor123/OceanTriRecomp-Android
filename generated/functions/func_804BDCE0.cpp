#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDCE0_ra98_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804BDCE0u);
    goto loc_804BDCE0;

loc_804BDCE0:
{
    r6 = MemoryInline::FlatRead32((r13 + -15304));
    r8 = 0x80750000u;
    r5 = MemoryInline::FlatRead32((r13 + -15300));
    r9 = 0x80750000u;
    r6 = (r6 + 1);
    r0 = 32;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r13 + -15304), r6);
    r8 = (r8 + -26240);
    r9 = (r9 + -26368);
    MemoryInline::FlatWrite32((r13 + -15300), r5);
    r7 = 0;
    ctr = r0;
    // nop
}

loc_804BDD18:
{
    r0 = MemoryInline::FlatRead32(r8);
}

loc_804BDD20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BDD50;
    }
}

loc_804BDD24:
{
    r0 = MemoryInline::FlatRead32(r9);
}

loc_804BDD2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_804BDD50;
    }
}

loc_804BDD30:
{
    r6 = 0x80750000u;
    r5 = 0x80750000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + -26240);
    r5 = (r5 + -26368);
    r6_addr_0 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_0, r3);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

loc_804BDD50:
{
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804BDD18;
    }
}

loc_804BDD60:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_804BDCE0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804BDCE0_ra98_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002399 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BDCE0 func_804BDCE0 preserves=true fpr_mask=0x00000000
