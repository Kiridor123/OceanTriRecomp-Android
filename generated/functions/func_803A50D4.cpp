#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803A50D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803A50D4u);
    goto loc_803A50D4;

loc_803A50D4:
{
    r10 = 0;
    r8 = 0;
    r4 = 0x805F0000u;
    r6 = (r4 + 10416);
    r5 = (r3 & 255);
    r0 = 6;
}

loc_803A50EC:
{
    r7 = MemoryInline::FlatRead32(r6);
    r9 = 0;
    ctr = r0;
}

loc_803A50F8:
{
    r4 = (r10 & 255);
}

loc_803A5100:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_803A5114;
    }
}

loc_803A5104:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r7_addr_0 = (r7 + r0);
    r3 = MemoryInline::FlatRead16(r7_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A5114:
{
    r10 = (r10 + 1);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A50F8;
    }
}

loc_803A5120:
{
    r6 = (r6 + 4);
    r8 = (r8 + 1);
}

loc_803A512C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(4))) {
        goto loc_803A50EC;
    }
}

loc_803A5130:
{
    r5 = (r13 + -22712);
    r4 = (r3 & 255);
    goto loc_803A5150;
}

loc_803A513C:
{
    r0 = (r10 & 255);
}

loc_803A5144:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803A5148:
{
    r10 = (r10 + 1);
    r5 = (r5 + 2);
}

loc_803A5150:
{
    r3 = MemoryInline::FlatRead16(r5);
}

loc_803A5158:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A513C;
    }
}

loc_803A515C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A50D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A50D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A50D4 func_803A50D4 preserves=true fpr_mask=0x00000000
