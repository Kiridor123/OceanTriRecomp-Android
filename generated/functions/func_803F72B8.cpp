#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803F72B8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_803F72B8;

loc_803F72B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 + -32768);
}

loc_803F72D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_803F740C;
    }
}

loc_803F72DC:
{
    r4 = 0x80600000u;
    r4 = (r4 + -12280);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803F72F4u:
        goto loc_803F72F4;
        break;
    case 0x803F740Cu:
        goto loc_803F740C;
        break;
    case 0x803F7304u:
        goto loc_803F7304;
        break;
    case 0x803F7320u:
        goto loc_803F7320;
        break;
    case 0x803F7330u:
        goto loc_803F7330;
        break;
    case 0x803F7348u:
        goto loc_803F7348;
        break;
    case 0x803F7368u:
        goto loc_803F7368;
        break;
    case 0x803F7400u:
        goto loc_803F7400;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803F72F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F7304:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_803F730C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803F740C;
    }
}

loc_803F7310:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F7320:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F7330:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F7348:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F7368:
{
    r7 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = (r0 + r7);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r0 = (r6 + r0);
}

loc_803F7384:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_803F7390;
    }
}

loc_803F7388:
{
}

loc_803F738C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_803F73A0;
    }
}

loc_803F7390:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_803F740C;
}

loc_803F73A0:
{
    r4 = (r0 - r5);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = (r0 - r7);
}

loc_803F73B0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r30))) {
        goto loc_803F73B8;
    }
}

loc_803F73B4:
{
    r30 = r4;
}

loc_803F73B8:
{
}

loc_803F73BC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803F73E4;
    }
}

loc_803F73C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_803F73C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F73E4;
    }
}

loc_803F73CC:
{
    r3 = (r0 + r7);
    r4 = MemoryInline::FlatRead32((r8 + 12));
    r0 = (r5 - r6);
    r4 = (r4 + r0);
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803F73E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_803F740C;
}

loc_803F7400:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_803F740C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F72B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F72B8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F72B8 func_803F72B8 preserves=true fpr_mask=0x00000000
