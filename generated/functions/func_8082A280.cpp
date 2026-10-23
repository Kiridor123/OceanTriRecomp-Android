#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_8082A280;

loc_8082A280:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = 0;
    r6 = 0x80810000u;
    ctr = r0;
    // nop
}

loc_8082A298:
{
    r7 = MemoryInline::FlatRead32(r4);
}

loc_8082A2A0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8082A2D0;
    }
}

loc_8082A2AC:
{
    r0 = MemoryInline::FlatRead8((r1 + 15));
    r7 = (r6 + -32639);
    r0 = (r0 * r5);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8082A2D0:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8082A2D8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r7 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8082A328;
    }
}

loc_8082A304:
{
    r0 = MemoryInline::FlatRead8((r1 + 15));
    r7 = (r6 + -32639);
    r0 = (r0 * r5);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8082A328:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A298;
    }
}

loc_8082A358:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001DB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082A280 func_8082A280 preserves=true fpr_mask=0x00000000
