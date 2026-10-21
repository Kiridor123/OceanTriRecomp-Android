#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80526C20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80526C20u);
    goto loc_80526C20;

loc_80526C20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = r4;
    r29 = r3;
    // inline leaf 0x80523ED0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13544));
    // end of inlined leaf 0x80523ED0
}

loc_80526C4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_80526C58;
    }
}

loc_80526C50:
{
    r3 = 1;
    goto loc_80526D00;
}

loc_80526C58:
{
    r4 = 0x80790000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r3 = (r4 + 9112);
    r6 = MemoryInline::FlatRead32((r4 + 9112));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r5 + r30);
    r4 = (static_cast<int32_t>(r4) >> 1);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r6 - r0);
    r7 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80526C84:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80526C8C;
    }
}

loc_80526C88:
{
    r31 = 1;
}

loc_80526C8C:
{
    ctr = r4;
}

loc_80526C94:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80526CBC;
    }
}

loc_80526C98:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r5 + 1);
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80526CA8:
{
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite16(r7_addr_2, static_cast<uint16_t>(r3));
    r29 = (r29 + 2);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r6))) {
        goto loc_80526CB8;
    }
}

loc_80526CB4:
{
    r5 = 0;
}

loc_80526CB8:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80526C98;
    }
}

loc_80526CBC:
{
}

loc_80526CC0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80526CE4;
    }
}

loc_80526CC4:
{
    r3 = 0x80790000u;
    r0 = 1;
    r3 = (r3 + 9112);
    MemoryInline::FlatWriteRam32((r3 + 4), r6);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    goto loc_80526CFC;
}

loc_80526CE4:
{
    r3 = 0x80790000u;
    r3 = (r3 + 9112);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
}

loc_80526CFC:
{
    r3 = 1;
}

loc_80526D00:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526C20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526C20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526C20 func_80526C20 preserves=true fpr_mask=0x00000000
