#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046E410_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_10 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r11_addr_7 = 0;
    uint32_t r11_addr_8 = 0;
    uint32_t r11_addr_9 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046E410;

loc_8046E410:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 0x80610000u;
    r6 = (r6 + -2448);
    r9 = MemoryInline::FlatRead32((r3 + 24));
    r10 = MemoryInline::FlatRead32((r3 + 4));
    // nop
}

loc_8046E438:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E44C;
    }
}

loc_8046E444:
{
    r3 = r9;
    goto loc_8046E674;
}

loc_8046E44C:
{
}

loc_8046E450:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8046E460;
    }
}

loc_8046E454:
{
    r9 = 0;
    r4 = (r4 + 1);
    goto loc_8046E438;
}

loc_8046E460:
{
}

loc_8046E464:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8046E4D4;
    }
}

loc_8046E468:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8046E474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8046E4B4;
    }
}

loc_8046E478:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8046E484:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8046E49C;
    }
}

loc_8046E488:
{
    r0 = (r9 * 12);
    r4 = (r4 + 3);
    r5 = (r10 + r0);
    r9 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_8046E438;
}

loc_8046E49C:
{
}

loc_8046E4A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E4D4;
    }
}

loc_8046E4A4:
{
    r0 = (r9 * 12);
    r3 = (r10 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8046E674;
}

loc_8046E4B4:
{
}

loc_8046E4B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8046E4C4;
    }
}

loc_8046E4BC:
{
    r4 = (r4 + 2);
    goto loc_8046E438;
}

loc_8046E4C4:
{
}

loc_8046E4C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E4D4;
    }
}

loc_8046E4CC:
{
    r3 = r9;
    goto loc_8046E674;
}

loc_8046E4D4:
{
    r8 = r4;
    goto loc_8046E4E4;
}

loc_8046E4E0:
{
    r8 = (r8 + 1);
}

loc_8046E4E4:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046E4FC;
    }
}

loc_8046E4F0:
{
}

loc_8046E4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_8046E504;
    }
}

loc_8046E4F8:
{
    goto loc_8046E4E0;
}

loc_8046E4FC:
{
    r0 = 0;
    goto loc_8046E508;
}

loc_8046E504:
{
    r0 = 1;
}

loc_8046E508:
{
    r7 = (r9 * 12);
    r5 = MemoryInline::FlatRead32((r6 + 56));
    r8 = (r8 - r4);
    r9 = (r9 + 1);
    r7 = (r10 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
    goto loc_8046E648;
}

loc_8046E528:
{
    r11 = (r9 * 12);
    r29 = (r10 + r11);
}

loc_8046E530:
{
    r30 = MemoryInline::FlatRead32(r29);
    r11 = (r30 & -16777216);
}

loc_8046E538:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8046E544;
    }
}

loc_8046E53C:
{
}

loc_8046E540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8046E628;
    }
}

loc_8046E544:
{
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r11 = (r30 & 16777215);
    r28 = (r12 + r11);
    r12_addr_4 = (r12 + r11);
    r11 = MemoryInline::FlatRead8(r12_addr_4);
}

loc_8046E558:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(46))) {
        goto loc_8046E574;
    }
}

loc_8046E55C:
{
    r11 = MemoryInline::FlatRead8((r28 + 1));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8046E574;
    }
}

loc_8046E568:
{
    r29 = (r29 + 12);
    r9 = (r9 + 1);
    goto loc_8046E530;
}

loc_8046E574:
{
    r12 = r4;
    goto loc_8046E5F0;
}

loc_8046E580:
{
    r11 = MemoryInline::FlatRead8(r28);
    r31 = 1;
    r28 = (r28 + 1);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_8046E594:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(255))) {
        goto loc_8046E59C;
    }
}

loc_8046E598:
{
    r31 = 0;
}

loc_8046E59C:
{
}

loc_8046E5A0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8046E5A8;
    }
}

loc_8046E5A4:
{
    goto loc_8046E5B0;
}

loc_8046E5A8:
{
    r11 = MemoryInline::FlatRead32((r5 + 16));
    r11_addr_4 = (r11 + r30);
    r30 = MemoryInline::FlatRead8(r11_addr_4);
}

loc_8046E5B0:
{
    r11 = MemoryInline::FlatRead8(r12);
    r29 = 1;
    r12 = (r12 + 1);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_8046E5C4:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(255))) {
        goto loc_8046E5CC;
    }
}

loc_8046E5C8:
{
    r29 = 0;
}

loc_8046E5CC:
{
}

loc_8046E5D0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8046E5D8;
    }
}

loc_8046E5D4:
{
    goto loc_8046E5E0;
}

loc_8046E5D8:
{
    r11 = MemoryInline::FlatRead32((r5 + 16));
    r11_addr_6 = (r11 + r31);
    r31 = MemoryInline::FlatRead8(r11_addr_6);
}

loc_8046E5E0:
{
}

loc_8046E5E4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r30))) {
        goto loc_8046E5F0;
    }
}

loc_8046E5E8:
{
    r11 = 0;
    goto loc_8046E620;
}

loc_8046E5F0:
{
    r11 = MemoryInline::FlatRead8(r28);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8046E580;
    }
}

loc_8046E5FC:
{
    r11 = MemoryInline::FlatRead8(r12);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_8046E608:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(47))) {
        goto loc_8046E614;
    }
}

loc_8046E60C:
{
}

loc_8046E610:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8046E61C;
    }
}

loc_8046E614:
{
    r11 = 1;
    goto loc_8046E620;
}

loc_8046E61C:
{
    r11 = 0;
}

loc_8046E620:
{
}

loc_8046E624:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_8046E658;
    }
}

loc_8046E628:
{
    r11 = (r9 * 12);
    r12 = (r10 + r11);
    r10_addr_3 = (r10 + r11);
    r11 = MemoryInline::FlatRead32(r10_addr_3);
    r11 = (r11 & -16777216);
}

loc_8046E638:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8046E644;
    }
}

loc_8046E63C:
{
    r9 = MemoryInline::FlatRead32((r12 + 8));
    goto loc_8046E648;
}

loc_8046E644:
{
    r9 = (r9 + 1);
}

loc_8046E648:
{
}

loc_8046E64C:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r7))) {
        goto loc_8046E528;
    }
}

loc_8046E650:
{
    r3 = -1;
    goto loc_8046E674;
}

loc_8046E658:
{
}

loc_8046E65C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E668;
    }
}

loc_8046E660:
{
    r3 = r9;
    goto loc_8046E674;
}

loc_8046E668:
{
    r4 = (r8 + r4);
    r4 = (r4 + 1);
    goto loc_8046E438;
}

loc_8046E674:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046E410(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046E410_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046E410 func_8046E410 preserves=true fpr_mask=0x00000000
