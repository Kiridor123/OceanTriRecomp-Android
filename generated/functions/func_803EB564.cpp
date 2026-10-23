#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EB564_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803EB564;

loc_803EB564:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
}

loc_803EB578:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EB58C;
    }
}

loc_803EB57C:
{
}

loc_803EB580:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803EB58C;
    }
}

loc_803EB584:
{
}

loc_803EB588:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803EB594;
    }
}

loc_803EB58C:
{
    r3 = 0;
    goto loc_803EB680;
}

loc_803EB594:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r6);
}

loc_803EB5A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_803EB5AC;
    }
}

loc_803EB5A4:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_803EB5AC:
{
    r29 = 0;
    r30 = (r6 + 4);
    r7 = 1;
    r8 = 2;
    r9 = 3;
    r10 = 4;
    r11 = 6;
    r12 = 5;
    goto loc_803EB674;
}

loc_803EB5D0:
{
    r31 = MemoryInline::FlatRead8(r30);
    r0 = (r31 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_803EB5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803EB618;
    }
}

loc_803EB5EC:
{
}

loc_803EB5F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803EB620;
    }
}

loc_803EB5F4:
{
}

loc_803EB5F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803EB628;
    }
}

loc_803EB5FC:
{
}

loc_803EB600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803EB630;
    }
}

loc_803EB604:
{
}

loc_803EB608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803EB638;
    }
}

loc_803EB60C:
{
}

loc_803EB610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803EB640;
    }
}

loc_803EB614:
{
    goto loc_803EB66C;
}

loc_803EB618:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r12));
    goto loc_803EB644;
}

loc_803EB620:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r11));
    goto loc_803EB644;
}

loc_803EB628:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r10));
    goto loc_803EB644;
}

loc_803EB630:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r9));
    goto loc_803EB644;
}

loc_803EB638:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r8));
    goto loc_803EB644;
}

loc_803EB640:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r7));
}

loc_803EB644:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_803EB64C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EB66C;
    }
}

loc_803EB650:
{
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r4 + 12);
    r3 = (r3 + 1);
}

loc_803EB668:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_803EB680;
    }
}

loc_803EB66C:
{
    r30 = (r30 + 12);
    r29 = (r29 + 1);
}

loc_803EB674:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_803EB67C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_803EB5D0;
    }
}

loc_803EB680:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EB564(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EB564_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001F9B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EB564 func_803EB564 preserves=true fpr_mask=0x00000000
