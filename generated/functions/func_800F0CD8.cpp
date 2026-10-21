#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F0CD8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800F0CD8u);
    goto loc_800F0CD8;

loc_800F0CD8:
{
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = r6;
    r4 = (r3 & 255);
    r0 = 2;
    ctr = r0;
}

loc_800F0CF0:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0CFC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D00:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D14:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D18:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D2C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D30:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D44:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D48:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D5C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D60:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D74:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D78:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0D8C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0D90:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26908));
}

loc_800F0DA4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800F0DB4;
    }
}

loc_800F0DA8:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F0CF0;
    }
}

loc_800F0DB4:
{
}

loc_800F0DB8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(16))) {
        goto loc_800F0DD4;
    }
}

loc_800F0DBC:
{
    r3 = (r6 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -26907));
}

loc_800F0DD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_800F0DD8;
    }
}

loc_800F0DD4:
{
    r7 = 0;
}

loc_800F0DD8:
{
    r3 = (r6 + 65536);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + -26907));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F0CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F0CD8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F0CD8 func_800F0CD8 preserves=true fpr_mask=0x00000000
