#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808312F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_808312F0;

loc_808312F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = (r3 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808292B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
}

loc_80831320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80831330;
    }
}

loc_80831324:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
}

loc_80831330:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
}

loc_80831338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80831354;
    }
}

loc_8083133C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r27;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80831354u;
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

loc_80831354:
{
}

loc_80831358:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80831390;
    }
}

loc_8083135C:
{
    r30 = (r30 + 20);
    r31 = MemoryInline::FlatRead32(r30);
    goto loc_80831388;
}

loc_80831364:
{
    r12 = MemoryInline::FlatRead32((r31 + -4));
    r3 = (r31 + -4);
    r4 = r27;
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    r6 = r29;
    ctr = r12;
    ctx->lr = 0x80831384u;
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
    r31 = MemoryInline::FlatRead32(r31);
}

loc_80831388:
{
}

loc_8083138C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r30))) {
        goto loc_80831364;
    }
}

loc_80831390:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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
// RECOMP_REGISTRATION base 0x808312F0 func_808312F0 preserves=true fpr_mask=0x00000000
