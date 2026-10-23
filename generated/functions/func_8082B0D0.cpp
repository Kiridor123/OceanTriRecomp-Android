#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082B0D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8082B0D0;

loc_8082B0D0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r6 = 0x80840000u;
    r29 = 0;
    r0 = (r3 + 16);
    MemoryInline::FlatWrite32((r3 + 4), r29);
    r6 = (r6 + 25728);
    r24 = r4;
    r25 = r5;
    MemoryInline::FlatWrite32(r3, r6);
    r23 = r3;
    r5 = 16;
    MemoryInline::FlatWrite32((r3 + 8), r29);
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 12), r29);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r29));
    r3 = (r3 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r27 = (r24 + 28);
    r26 = 0;
    r28 = 0;
    r31 = 0x80870000u;
    goto loc_8082B1AC;
}

loc_8082B140:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r4 = (r27 + r28);
    r5 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8082B15Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082B160:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082B1A4;
    }
}

loc_8082B168:
{
    r3 = MemoryInline::FlatRead32((r31 + -32224));
    r4 = 12;
    ctx->lr = 0x8082B174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082B178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082B1A4;
    }
}

loc_8082B17C:
{
    r5 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082B18C;
    }
}

loc_8082B184:
{
    MemoryInline::FlatWrite32(r3, r29);
    MemoryInline::FlatWrite32((r3 + 4), r29);
}

loc_8082B18C:
{
    MemoryInline::FlatWrite32((r3 + 8), r30);
    r0 = (r23 + 16);
    r3 = (r23 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x80839AB0 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x80839AB0
}

loc_8082B1A4:
{
    r28 = (r28 + 16);
    r26 = (r26 + 1);
}

loc_8082B1AC:
{
    r0 = MemoryInline::FlatRead16((r24 + 24));
}

loc_8082B1B4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8082B140;
    }
}

loc_8082B1B8:
{
    r11 = (r1 + 64);
    r3 = r23;
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082B0D0 func_8082B0D0 preserves=true fpr_mask=0x00000000
