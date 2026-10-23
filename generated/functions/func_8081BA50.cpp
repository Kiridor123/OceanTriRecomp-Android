#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081BA50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
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
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8081BA50;

loc_8081BA50:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r23 = 0x80840000u;
    r25 = 0x80840000u;
    r31 = 0x80870000u;
    r30 = 0x80870000u;
    r27 = MemoryInline::FlatRead32((r4 + 4));
    r28 = r3;
    r23 = (r23 + 20576);
    r25 = (r25 + 20136);
    r31 = (r31 + -32208);
    r30 = (r30 + -32192);
    r26 = (r4 + 4);
    r22 = 0x80870000u;
    r24 = 0;
    goto loc_8081BCC8;
}

loc_8081BA9C:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
}

loc_8081BAA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081BB1C;
    }
}

loc_8081BAA8:
{
    r4 = 48;
    ctx->lr = 0x8081BAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r4 = 16;
    ctx->lr = 0x8081BAC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BAC4:
{
    r21 = r3;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8081BB04;
    }
}

loc_8081BACC:
{
    r0 = MemoryInline::FlatRead32((r22 + -32752));
    r3 = r29;
    MemoryInline::FlatWrite32(r29, r23);
    MemoryInline::FlatWrite8((r29 + 24), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite32((r29 + 28), r24);
    MemoryInline::FlatWrite32((r29 + 32), r0);
    MemoryInline::FlatWrite8((r29 + 36), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite32((r29 + 40), r24);
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081BAFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32(r29, r25);
    MemoryInline::FlatWrite32((r29 + 44), r24);
}

loc_8081BB04:
{
}

loc_8081BB08:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8081BB80;
    }
}

loc_8081BB0C:
{
    r0 = (r27 + -4);
    MemoryInline::FlatWrite32(r21, r0);
    MemoryInline::FlatWrite32((r21 + 4), r29);
    goto loc_8081BB80;
}

loc_8081BB1C:
{
    r3 = 48;
    ctx->lr = 0x8081BB24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BB28:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081BB60;
    }
}

loc_8081BB30:
{
    r0 = MemoryInline::FlatRead32((r22 + -32752));
    MemoryInline::FlatWriteRam32(r3, r23);
    MemoryInline::FlatWriteRam8((r3 + 24), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam32((r3 + 28), r24);
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    MemoryInline::FlatWriteRam8((r3 + 36), static_cast<uint8_t>(r24));
    MemoryInline::FlatWriteRam32((r3 + 40), r24);
    r12 = MemoryInline::FlatRead32((r23 + 12));
    ctr = r12;
    ctx->lr = 0x8081BB58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32(r29, r25);
    MemoryInline::FlatWriteRam32((r29 + 44), r24);
}

loc_8081BB60:
{
    r3 = 16;
    ctx->lr = 0x8081BB68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BB6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081BB7C;
    }
}

loc_8081BB70:
{
    r0 = (r27 + -4);
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
}

loc_8081BB7C:
{
    r21 = r3;
}

loc_8081BB80:
{
    r4 = r21;
    r3 = (r28 + 24);
    // inline leaf 0x80839B30 (28 guest instruction(s))
}

loc_inl1_0x80839B30:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x80839B38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80839B68;
    }
}

loc_inl1_0x80839B3C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80839B30;
}

loc_inl1_0x80839B68:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_80839B30:
{
    // end of inlined leaf 0x80839B30
    r4 = MemoryInline::FlatRead32((r22 + -32752));
    r21 = (r27 + -4);
    r3 = r29;
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r22 + -32752), r0);
    r4 = r21;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8081BBB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081BBC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081BBE4;
}

loc_8081BBD0:
{
}

loc_8081BBD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8081BBE0;
    }
}

loc_8081BBD8:
{
    r0 = 1;
    goto loc_8081BBF0;
}

loc_8081BBE0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8081BBE4:
{
}

loc_8081BBE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081BBD0;
    }
}

loc_8081BBEC:
{
    r0 = 0;
}

loc_8081BBF0:
{
}

loc_8081BBF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081BC00;
    }
}

loc_8081BBF8:
{
    r0 = r21;
    goto loc_8081BC04;
}

loc_8081BC00:
{
    r0 = 0;
}

loc_8081BC04:
{
}

loc_8081BC08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081BC24;
    }
}

loc_8081BC0C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8081BC24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BC24:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081BC38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081BC54;
}

loc_8081BC40:
{
}

loc_8081BC44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8081BC50;
    }
}

loc_8081BC48:
{
    r0 = 1;
    goto loc_8081BC60;
}

loc_8081BC50:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8081BC54:
{
}

loc_8081BC58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081BC40;
    }
}

loc_8081BC5C:
{
    r0 = 0;
}

loc_8081BC60:
{
}

loc_8081BC64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081BC70;
    }
}

loc_8081BC68:
{
    r0 = r21;
    goto loc_8081BC74;
}

loc_8081BC70:
{
    r0 = 0;
}

loc_8081BC74:
{
}

loc_8081BC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081BC94;
    }
}

loc_8081BC7C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8081BC94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BC94:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8081BCACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = (r21 + 16);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x8081BCC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r27 = MemoryInline::FlatRead32(r27);
}

loc_8081BCC8:
{
}

loc_8081BCCC:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r26))) {
        goto loc_8081BA9C;
    }
}

loc_8081BCD0:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081BA50 func_8081BA50 preserves=true fpr_mask=0x00000000
