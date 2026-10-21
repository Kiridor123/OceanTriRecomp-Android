#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802FFC68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802FFC68u);
    goto loc_802FFC68;

loc_802FFC68:
{
    r7 = 0;
    r6 = r3;
    r4 = (r4 & 65535);
    r0 = 64;
    ctr = r0;
}

loc_802FFC7C:
{
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFC84:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802FFD28;
    }
}

loc_802FFC88:
{
    r0 = (r7 * 12);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32((r6 + 1160), r0);
    r0 = MemoryInline::FlatRead16((r3 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FFCA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802FFCA8:
{
    r4 = MemoryInline::FlatRead16((r3 + 1096));
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFCB4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802FFCC0;
    }
}

loc_802FFCB8:
{
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    MemoryInline::FlatWrite32((r3 + 1100), r0);
}

loc_802FFCC0:
{
    r3 = (r3 + 1108);
    r4 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFCD0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802FFCDC;
    }
}

loc_802FFCD4:
{
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_802FFCDC:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFCE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802FFCF4;
    }
}

loc_802FFCEC:
{
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_802FFCF4:
{
    r4 = MemoryInline::FlatRead16((r3 + 24));
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFD00:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802FFD0C;
    }
}

loc_802FFD04:
{
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_802FFD0C:
{
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r0 = MemoryInline::FlatRead16((r6 + 1156));
}

loc_802FFD18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_802FFD1C:
{
    r0 = MemoryInline::FlatRead32((r6 + 1160));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802FFD28:
{
    r6 = (r6 + 12);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802FFC7C;
    }
}

loc_802FFD34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FFC68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FFC68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FFC68 func_802FFC68 preserves=true fpr_mask=0x00000000
