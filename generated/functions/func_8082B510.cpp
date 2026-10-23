#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082B510(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8082B510;

loc_8082B510:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r12 = MemoryInline::FlatRead32(r3);
    r26 = 0x80870000u;
    r27 = r3;
    r24 = r4;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r26 = (r26 + -32200);
    ctr = r12;
    ctx->lr = 0x8082B544u;
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
    goto loc_8082B55C;
}

loc_8082B548:
{
}

loc_8082B54C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_8082B558;
    }
}

loc_8082B550:
{
    r0 = 1;
    goto loc_8082B568;
}

loc_8082B558:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082B55C:
{
}

loc_8082B560:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082B548;
    }
}

loc_8082B564:
{
    r0 = 0;
}

loc_8082B568:
{
}

loc_8082B56C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082B578;
    }
}

loc_8082B570:
{
    r3 = r27;
    goto loc_8082B57C;
}

loc_8082B578:
{
    r3 = 0;
}

loc_8082B57C:
{
}

loc_8082B580:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082B588;
    }
}

loc_8082B584:
{
    MemoryInline::FlatWrite32((r3 + 244), r24);
}

loc_8082B588:
{
    r25 = 0x80870000u;
    r31 = MemoryInline::FlatRead32((r27 + 20));
    r28 = (r27 + 20);
    r25 = (r25 + -32200);
    goto loc_8082B690;
}

loc_8082B59C:
{
    r26 = (r31 + -4);
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082B5B4u;
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
    goto loc_8082B5CC;
}

loc_8082B5B8:
{
}

loc_8082B5BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r25))) {
        goto loc_8082B5C8;
    }
}

loc_8082B5C0:
{
    r0 = 1;
    goto loc_8082B5D8;
}

loc_8082B5C8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082B5CC:
{
}

loc_8082B5D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082B5B8;
    }
}

loc_8082B5D4:
{
    r0 = 0;
}

loc_8082B5D8:
{
}

loc_8082B5DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082B5E8;
    }
}

loc_8082B5E0:
{
    r3 = r26;
    goto loc_8082B5EC;
}

loc_8082B5E8:
{
    r3 = 0;
}

loc_8082B5EC:
{
}

loc_8082B5F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082B5F8;
    }
}

loc_8082B5F4:
{
    MemoryInline::FlatWrite32((r3 + 244), r24);
}

loc_8082B5F8:
{
    r30 = MemoryInline::FlatRead32((r26 + 20));
    r27 = (r26 + 20);
    goto loc_8082B684;
}

loc_8082B604:
{
    r26 = (r30 + -4);
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082B61Cu;
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
    goto loc_8082B634;
}

loc_8082B620:
{
}

loc_8082B624:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r25))) {
        goto loc_8082B630;
    }
}

loc_8082B628:
{
    r0 = 1;
    goto loc_8082B640;
}

loc_8082B630:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082B634:
{
}

loc_8082B638:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082B620;
    }
}

loc_8082B63C:
{
    r0 = 0;
}

loc_8082B640:
{
}

loc_8082B644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082B650;
    }
}

loc_8082B648:
{
    r3 = r26;
    goto loc_8082B654;
}

loc_8082B650:
{
    r3 = 0;
}

loc_8082B654:
{
}

loc_8082B658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082B660;
    }
}

loc_8082B65C:
{
    MemoryInline::FlatWrite32((r3 + 244), r24);
}

loc_8082B660:
{
    r26 = (r26 + 20);
    r29 = MemoryInline::FlatRead32(r26);
    goto loc_8082B678;
}

loc_8082B668:
{
    r4 = r24;
    r3 = (r29 + -4);
    ctx->lr = 0x8082B674u;
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
    r29 = MemoryInline::FlatRead32(r29);
}

loc_8082B678:
{
}

loc_8082B67C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r26))) {
        goto loc_8082B668;
    }
}

loc_8082B680:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_8082B684:
{
}

loc_8082B688:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r27))) {
        goto loc_8082B604;
    }
}

loc_8082B68C:
{
    r31 = MemoryInline::FlatRead32(r31);
}

loc_8082B690:
{
}

loc_8082B694:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r28))) {
        goto loc_8082B59C;
    }
}

loc_8082B698:
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
// RECOMP_REGISTRATION base 0x8082B510 func_8082B510 preserves=true fpr_mask=0x00000000
