#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80820360(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80820360u);
    goto loc_80820360;

loc_80820360:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0x80870000u;
    r30 = 0x80840000u;
    r26 = r3;
    r28 = 0;
    r31 = (r31 + -32200);
    r30 = (r30 + 24300);
    r29 = 0;
}

loc_80820390:
{
    r3 = MemoryInline::FlatRead32((r26 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808203B0u;
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
    r12 = MemoryInline::FlatRead32(r3);
    r27 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808203C4u;
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
    goto loc_808203DC;
}

loc_808203C8:
{
}

loc_808203CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_808203D8;
    }
}

loc_808203D0:
{
    r0 = 1;
    goto loc_808203E8;
}

loc_808203D8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808203DC:
{
}

loc_808203E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808203C8;
    }
}

loc_808203E4:
{
    r0 = 0;
}

loc_808203E8:
{
}

loc_808203EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808203F4;
    }
}

loc_808203F0:
{
    goto loc_808203F8;
}

loc_808203F4:
{
    r27 = 0;
}

loc_808203F8:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = (r29 + r26);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r3 * 24);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r3 = r4;
}

loc_80820418:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80820420:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(34))) {
        goto loc_80820430;
    }
}

loc_80820424:
{
    r3 = (r3 + 2);
    r5 = (r5 + 1);
    goto loc_80820418;
}

loc_80820430:
{
    r12 = MemoryInline::FlatRead32(r27);
    r6 = (r5 & 65535);
    r3 = r27;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8082044Cu;
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
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_80820458:
{
    r30 = (r30 + 4);
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_80820390;
    }
}

loc_80820460:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
// RECOMP_REGISTRATION base 0x80820360 func_80820360 preserves=true fpr_mask=0x00000000
