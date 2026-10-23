#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082BEA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8082BEA0;

loc_8082BEA0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = MemoryInline::FlatRead32((r3 + 16));
    r24 = 0x80870000u;
    r31 = r4;
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r24 = (r24 + -32200);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082BED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8082BEF4;
}

loc_8082BEE0:
{
}

loc_8082BEE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r24))) {
        goto loc_8082BEF0;
    }
}

loc_8082BEE8:
{
    r0 = 1;
    goto loc_8082BF00;
}

loc_8082BEF0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082BEF4:
{
}

loc_8082BEF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082BEE0;
    }
}

loc_8082BEFC:
{
    r0 = 0;
}

loc_8082BF00:
{
}

loc_8082BF04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082BF10;
    }
}

loc_8082BF08:
{
    r3 = r25;
    goto loc_8082BF14;
}

loc_8082BF10:
{
    r3 = 0;
}

loc_8082BF14:
{
}

loc_8082BF18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082BF20;
    }
}

loc_8082BF1C:
{
    MemoryInline::FlatWrite32((r3 + 244), r31);
}

loc_8082BF20:
{
    r24 = 0x80870000u;
    r30 = MemoryInline::FlatRead32((r25 + 20));
    r27 = (r25 + 20);
    r24 = (r24 + -32200);
    goto loc_8082C028;
}

loc_8082BF34:
{
    r25 = (r30 + -4);
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082BF4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8082BF64;
}

loc_8082BF50:
{
}

loc_8082BF54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r24))) {
        goto loc_8082BF60;
    }
}

loc_8082BF58:
{
    r0 = 1;
    goto loc_8082BF70;
}

loc_8082BF60:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082BF64:
{
}

loc_8082BF68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082BF50;
    }
}

loc_8082BF6C:
{
    r0 = 0;
}

loc_8082BF70:
{
}

loc_8082BF74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082BF80;
    }
}

loc_8082BF78:
{
    r3 = r25;
    goto loc_8082BF84;
}

loc_8082BF80:
{
    r3 = 0;
}

loc_8082BF84:
{
}

loc_8082BF88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082BF90;
    }
}

loc_8082BF8C:
{
    MemoryInline::FlatWrite32((r3 + 244), r31);
}

loc_8082BF90:
{
    r29 = MemoryInline::FlatRead32((r25 + 20));
    r26 = (r25 + 20);
    goto loc_8082C01C;
}

loc_8082BF9C:
{
    r25 = (r29 + -4);
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082BFB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8082BFCC;
}

loc_8082BFB8:
{
}

loc_8082BFBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r24))) {
        goto loc_8082BFC8;
    }
}

loc_8082BFC0:
{
    r0 = 1;
    goto loc_8082BFD8;
}

loc_8082BFC8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082BFCC:
{
}

loc_8082BFD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082BFB8;
    }
}

loc_8082BFD4:
{
    r0 = 0;
}

loc_8082BFD8:
{
}

loc_8082BFDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082BFE8;
    }
}

loc_8082BFE0:
{
    r3 = r25;
    goto loc_8082BFEC;
}

loc_8082BFE8:
{
    r3 = 0;
}

loc_8082BFEC:
{
}

loc_8082BFF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082BFF8;
    }
}

loc_8082BFF4:
{
    MemoryInline::FlatWrite32((r3 + 244), r31);
}

loc_8082BFF8:
{
    r25 = (r25 + 20);
    r28 = MemoryInline::FlatRead32(r25);
    goto loc_8082C010;
}

loc_8082C000:
{
    r4 = r31;
    r3 = (r28 + -4);
    ctx->lr = 0x8082C00Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082B510u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r28 = MemoryInline::FlatRead32(r28);
}

loc_8082C010:
{
}

loc_8082C014:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r25))) {
        goto loc_8082C000;
    }
}

loc_8082C018:
{
    r29 = MemoryInline::FlatRead32(r29);
}

loc_8082C01C:
{
}

loc_8082C020:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r26))) {
        goto loc_8082BF9C;
    }
}

loc_8082C024:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_8082C028:
{
}

loc_8082C02C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r27))) {
        goto loc_8082BF34;
    }
}

loc_8082C030:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082BEA0 func_8082BEA0 preserves=true fpr_mask=0x00000000
