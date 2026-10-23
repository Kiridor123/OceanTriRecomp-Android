#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082438(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80082438;

loc_80082438:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 228));
}

loc_80082464:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_800824D0;
    }
}

loc_80082468:
{
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 220));
    r3_addr_0 = (r3 + r31);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = r30;
    r4 = 65536;
    r4 = (r4 + 3);
    r5 = 0;
    r6 = r28;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80082498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_800824B4;
}

loc_8008249C:
{
    r0 = MemoryInline::FlatRead32((r28 + 220));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r3, r0);
    r31 = (r31 + 4);
    r29 = (r29 + 1);
}

loc_800824B4:
{
    r3 = MemoryInline::FlatRead32((r28 + 228));
    r0 = (r3 + -1);
}

loc_800824C0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_8008249C;
    }
}

loc_800824C4:
{
    MemoryInline::FlatWrite32((r28 + 228), r0);
    r3 = r30;
    goto loc_800824D4;
}

loc_800824D0:
{
    r3 = 0;
}

loc_800824D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80082438 func_80082438 preserves=true fpr_mask=0x00000000
