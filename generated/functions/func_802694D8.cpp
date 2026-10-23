#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802694D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_802694D8;

loc_802694D8:
{
    r6 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_802694E0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802694EC;
    }
}

loc_802694E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802694EC:
{
    r7 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r3 * 332);
    r7 = (r7 + r0);
    r6 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 156));
}

loc_8026950C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80269518;
    }
}

loc_80269510:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80269518:
{
    r7 = (r7 + r6);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80269524:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80269530;
    }
}

loc_80269528:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80269530:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 24), r5);
    r0 = 2;
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17144));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 * 2848);
    r5 = (r5 + r0);
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r5 + 316));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r4));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802694D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802694D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802694D8 func_802694D8 preserves=true fpr_mask=0x00000000
