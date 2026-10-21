#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BDD80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804BDD80u);
    goto loc_804BDD80;

loc_804BDD80:
{
    r5 = MemoryInline::FlatRead32((r13 + -15304));
    r6 = 0x80750000u;
    r7 = 0x80750000u;
    r0 = 32;
    r5 = (r5 + -1);
    MemoryInline::FlatWrite32((r13 + -15304), r5);
    r6 = (r6 + -26240);
    r7 = (r7 + -26368);
    r5 = 0;
    ctr = r0;
}

loc_804BDDA8:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_804BDDB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804BDDE8;
    }
}

loc_804BDDB4:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_804BDDBC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_804BDDE8;
    }
}

loc_804BDDC0:
{
    r4 = 0x80750000u;
    r3 = 0x80750000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = 0;
    r4 = (r4 + -26240);
    r3 = (r3 + -26368);
    r0 = -1;
    r4_addr_0 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_0, r5);
    r3_addr_0 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_0, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804BDDE8:
{
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804BDDA8;
    }
}

loc_804BDDF8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BDD80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BDD80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BDD80 func_804BDD80 preserves=true fpr_mask=0x00000000
