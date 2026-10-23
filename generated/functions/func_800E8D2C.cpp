#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E8D2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_800E8D2C;

loc_800E8D2C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17460));
    MemoryInline::FlatWrite32((r13 + -17448), r5);
    r0 = MemoryInline::FlatRead32((r13 + -17848));
    MemoryInline::FlatWrite32((r13 + -17444), r0);
    r0 = MemoryInline::FlatRead32((r13 + -17464));
    r7 = (r5 + r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r4);
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = 0;
    ctr = r4;
}

loc_800E8D5C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800E8D60:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r3 + 2);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r4));
    r7 = (r7 + 2);
    r4 = MemoryInline::FlatRead32((r13 + -17460));
    r6 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -17460), r6);
    r5 = MemoryInline::FlatRead32((r13 + -17452));
    r4 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r4 = (r4 * r5);
    r4 = (r6 - r4);
}

loc_800E8D90:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800E8D9C;
    }
}

loc_800E8D94:
{
    MemoryInline::FlatWrite32((r13 + -17460), r0);
    r7 = MemoryInline::FlatRead32((r13 + -17464));
}

loc_800E8D9C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E8D60;
    }
}

loc_800E8DA0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E8D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E8D2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E8D2C func_800E8D2C preserves=true fpr_mask=0x00000000
