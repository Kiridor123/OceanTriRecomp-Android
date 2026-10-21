#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803DE458_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x803DE458u);
    goto loc_803DE458;

loc_803DE458:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
}

loc_803DE46C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803DE480;
    }
}

loc_803DE470:
{
}

loc_803DE474:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803DE480;
    }
}

loc_803DE478:
{
}

loc_803DE47C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803DE488;
    }
}

loc_803DE480:
{
    r3 = 0;
    goto loc_803DE574;
}

loc_803DE488:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_803DE494:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_803DE4A0;
    }
}

loc_803DE498:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r6 + 4), r0);
}

loc_803DE4A0:
{
    r29 = 0;
    r30 = (r6 + 8);
    r7 = 1;
    r8 = 2;
    r9 = 3;
    r10 = 4;
    r11 = 6;
    r12 = 5;
    goto loc_803DE568;
}

loc_803DE4C4:
{
    r31 = MemoryInline::FlatRead8(r30);
    r0 = (r31 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_803DE4DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803DE50C;
    }
}

loc_803DE4E0:
{
}

loc_803DE4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803DE514;
    }
}

loc_803DE4E8:
{
}

loc_803DE4EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803DE51C;
    }
}

loc_803DE4F0:
{
}

loc_803DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803DE524;
    }
}

loc_803DE4F8:
{
}

loc_803DE4FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803DE52C;
    }
}

loc_803DE500:
{
}

loc_803DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803DE534;
    }
}

loc_803DE508:
{
    goto loc_803DE560;
}

loc_803DE50C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r12));
    goto loc_803DE538;
}

loc_803DE514:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r11));
    goto loc_803DE538;
}

loc_803DE51C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r10));
    goto loc_803DE538;
}

loc_803DE524:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r9));
    goto loc_803DE538;
}

loc_803DE52C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r8));
    goto loc_803DE538;
}

loc_803DE534:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r7));
}

loc_803DE538:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_803DE540:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803DE560;
    }
}

loc_803DE544:
{
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r4 + 12);
    r3 = (r3 + 1);
}

loc_803DE55C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_803DE574;
    }
}

loc_803DE560:
{
    r30 = (r30 + 12);
    r29 = (r29 + 1);
}

loc_803DE568:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_803DE570:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_803DE4C4;
    }
}

loc_803DE574:
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

extern "C" void func_803DE458(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803DE458_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001F9B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803DE458 func_803DE458 preserves=true fpr_mask=0x00000000
