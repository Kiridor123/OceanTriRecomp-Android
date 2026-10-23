#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F943C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800F943C;

loc_800F943C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r28 = r4;
    r24 = r5;
    r29 = r6;
    r30 = r7;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = 0;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_800F9480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F9490;
    }
}

loc_800F9484:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F948C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F94E0;
    }
}

loc_800F9490:
{
    r0 = (r24 & 2);
}

loc_800F9498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F95F0;
    }
}

loc_800F949C:
{
    r25 = 0;
    goto loc_800F94D4;
}

loc_800F94A4:
{
    r3 = MemoryInline::FlatRead32(r28);
}

loc_800F94AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F94CC;
    }
}

loc_800F94B0:
{
    r4 = MemoryInline::FlatRead32((r3 + 280));
    r3 = MemoryInline::FlatRead32((r3 + 268));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800F94C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F94CC;
    }
}

loc_800F94C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    ctx->lr = 0x800F94CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
}

loc_800F94CC:
{
    r28 = (r28 + 4);
    r25 = (r25 + 1);
}

loc_800F94D4:
{
}

loc_800F94D8:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r29))) {
        goto loc_800F94A4;
    }
}

loc_800F94DC:
{
    goto loc_800F95F0;
}

loc_800F94E0:
{
    r0 = (r24 & 4);
}

loc_800F94E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F94F0;
    }
}

loc_800F94EC:
{
    r31 = (r31 | 8);
}

loc_800F94F0:
{
    r0 = (r24 & 8);
}

loc_800F94F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F9504;
    }
}

loc_800F94FC:
{
    r0 = (r31 | 1024);
    r31 = (r0 & 65535);
}

loc_800F9504:
{
    r0 = (r24 & 16);
}

loc_800F950C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F9518;
    }
}

loc_800F9510:
{
    r0 = (r31 | 2048);
    r31 = (r0 & 65535);
}

loc_800F9518:
{
    r0 = (r24 & 1);
}

loc_800F9520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F9570;
    }
}

loc_800F9524:
{
    r25 = 0;
    r26 = r28;
    goto loc_800F9568;
}

loc_800F9530:
{
    r3 = MemoryInline::FlatRead32(r26);
}

loc_800F9538:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9560;
    }
}

loc_800F953C:
{
    ctx->lr = 0x800F9540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800FA4B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r3 = 1;
    r4 = 1;
    r5 = MemoryInline::FlatRead32(r26);
    r6 = 2;
    r7 = (r31 & 65535);
    r8 = r30;
    r9 = 0;
    ctx->lr = 0x800F9560u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800E3BF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
}

loc_800F9560:
{
    r26 = (r26 + 4);
    r25 = (r25 + 1);
}

loc_800F9568:
{
}

loc_800F956C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r29))) {
        goto loc_800F9530;
    }
}

loc_800F9570:
{
    r0 = (r24 & 2);
}

loc_800F9578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F95F0;
    }
}

loc_800F957C:
{
    r26 = 0;
    goto loc_800F95E8;
}

loc_800F9584:
{
    r4 = MemoryInline::FlatRead32(r28);
}

loc_800F958C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F95E0;
    }
}

loc_800F9590:
{
    r5 = MemoryInline::FlatRead32((r4 + 280));
    r3 = MemoryInline::FlatRead32((r4 + 268));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800F95A0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_800F95E0;
    }
}

loc_800F95A4:
{
    r3 = r27;
    ctx->lr = 0x800F95ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800FA638u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r5 = MemoryInline::FlatRead32(r28);
    r3 = 1;
    r4 = MemoryInline::FlatRead8((r5 + 53));
    r5 = MemoryInline::FlatRead32((r5 + 280));
    r6 = 0;
    r7 = (r31 & 65535);
    r8 = r30;
    r9 = 0;
    ctx->lr = 0x800F95D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800E3BF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead32((r4 + 280));
    ctx->lr = 0x800F95E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
}

loc_800F95E0:
{
    r28 = (r28 + 4);
    r26 = (r26 + 1);
}

loc_800F95E8:
{
}

loc_800F95EC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r29))) {
        goto loc_800F9584;
    }
}

loc_800F95F0:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F943C func_800F943C preserves=true fpr_mask=0x00000000
