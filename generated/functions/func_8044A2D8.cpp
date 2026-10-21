#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8044A2D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8044A2D8u);
    goto loc_8044A2D8;

loc_8044A2D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r31 = 8544;
    r12 = 8545;
    r11 = 8546;
    r10 = 8547;
    r9 = 8548;
    r8 = 8549;
    r7 = 8550;
    r6 = 8551;
    r5 = 8552;
    r0 = 8553;
    goto loc_8044A3AC;
}

loc_8044A30C:
{
}

loc_8044A310:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8560))) {
        goto loc_8044A318;
    }
}

loc_8044A314:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r31));
}

loc_8044A318:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A320:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8561))) {
        goto loc_8044A328;
    }
}

loc_8044A324:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r12));
}

loc_8044A328:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A330:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8562))) {
        goto loc_8044A338;
    }
}

loc_8044A334:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r11));
}

loc_8044A338:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A340:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8563))) {
        goto loc_8044A348;
    }
}

loc_8044A344:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r10));
}

loc_8044A348:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A350:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8564))) {
        goto loc_8044A358;
    }
}

loc_8044A354:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r9));
}

loc_8044A358:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A360:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8565))) {
        goto loc_8044A368;
    }
}

loc_8044A364:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r8));
}

loc_8044A368:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A370:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8566))) {
        goto loc_8044A378;
    }
}

loc_8044A374:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r7));
}

loc_8044A378:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A380:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8567))) {
        goto loc_8044A388;
    }
}

loc_8044A384:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r6));
}

loc_8044A388:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A390:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8568))) {
        goto loc_8044A398;
    }
}

loc_8044A394:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
}

loc_8044A398:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A3A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8569))) {
        goto loc_8044A3A8;
    }
}

loc_8044A3A4:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_8044A3A8:
{
    r3 = (r3 + 2);
}

loc_8044A3AC:
{
    r4 = MemoryInline::FlatRead16(r3);
}

loc_8044A3B4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8044A30C;
    }
}

loc_8044A3B8:
{
    r1 = (r1 + 16);
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

extern "C" void func_8044A2D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044A2D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044A2D8 func_8044A2D8 preserves=true fpr_mask=0x00000000
