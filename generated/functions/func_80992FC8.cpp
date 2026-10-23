#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80992FC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80992FC8;

loc_80992FC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80990000u;
    r31 = (r3 + 14612);
    goto loc_80992FF0;
}

loc_80992FE4:
{
    ctr = r12;
    ctx->lr = 0x80992FECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_80992FF0:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_80992FF8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80992FE4;
    }
}

loc_80992FFC:
{
    r3 = 0x80980000u;
    r0 = (r3 + -9900);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 27960), r0);
    r3 = 0x80990000u;
    r0 = (r3 + 13424);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 27816), r0);
    r3 = 0x80440000u;
    r0 = (r3 + -14492);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28656), r0);
    r3 = 0x80990000u;
    r0 = (r3 + -6136);
    r4 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r4 + -31480), r0);
    r3 = 0x80990000u;
    r0 = (r3 + 6772);
    r4 = (r4 + -31480);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = 0x80990000u;
    r0 = (r3 + 11556);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0x80990000u;
    r0 = (r3 + 11876);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    r3 = 0x80980000u;
    r0 = (r3 + -11716);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 29112), r0);
    r3 = 0x80990000u;
    r0 = (r3 + -10504);
    r3 = (r4 + 29112);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r3 = 0x80990000u;
    r0 = (r3 + 18608);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29160), r0);
    r3 = 0x809A0000u;
    r0 = (r3 + 1112);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29120), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3 = 0x809B0000u;
    r3 = (r3 + -31280);
    r3_addr_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29124), r0);
    r0 = 0;
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29128), r0);
    r3 = 0x809B0000u;
    r3 = (r3 + -31256);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29132), r0);
    r3 = 0x809B0000u;
    r3 = (r3 + -31232);
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29136), r0);
    r3 = 0x809B0000u;
    r3 = (r3 + -31208);
    r3_addr_3 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29144), r0);
    r3 = 0x809B0000u;
    r3 = (r3 + -31184);
    r3_addr_4 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29148), r0);
    r3 = 0x809B0000u;
    r3 = (r3 + -31136);
    r3_addr_5 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29152), r0);
    r3 = 0x809A0000u;
    r0 = (r3 + 1224);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29156), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80992FC8 func_80992FC8 preserves=true fpr_mask=0x00000000
