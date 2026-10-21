#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80269428_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80269428u);
    goto loc_80269428;

loc_80269428:
{
    r6 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80269430:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8026943C;
    }
}

loc_80269434:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026943C:
{
    r6 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r3 * 332);
    r6 = (r6 + r0);
    r7 = (r4 & 255);
    r8 = (r6 + r7);
    r0 = MemoryInline::FlatRead8(r8);
}

loc_80269458:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80269464;
    }
}

loc_8026945C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80269464:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 156));
}

loc_80269474:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80269488;
    }
}

loc_80269478:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80269488:
{
    r6 = 0;
    MemoryInline::FlatWrite8((r8 + 11), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + 24), r5);
    r0 = 2;
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17144));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 * 2848);
    r4 = (r4 + r0);
}

loc_802694B0:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(7))) {
        goto loc_802694C4;
    }
}

loc_802694B4:
{
    r0 = MemoryInline::FlatRead32((r4 + 316));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r6));
    goto loc_802694D0;
}

loc_802694C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 316));
    r3 = (r7 + r0);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r6));
}

loc_802694D0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80269428(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80269428_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021F8 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80269428 func_80269428 preserves=true fpr_mask=0x00000000
