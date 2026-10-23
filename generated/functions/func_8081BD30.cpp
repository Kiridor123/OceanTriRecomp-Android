#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081BD30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8081BD30;

loc_8081BD30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = MemoryInline::FlatRead32((r4 + 4));
    r26 = r3;
    r30 = (r4 + 4);
    r29 = 0x80870000u;
    goto loc_8081BE2C;
}

loc_8081BD58:
{
    r3 = (r26 + 24);
    r4 = 0;
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl1_0x80839DA0:
{
}

loc_inl1_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80839DB0;
    }
}

loc_inl1_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80839DA0;
}

loc_inl1_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r27 = r3;
    r28 = (r31 + -4);
    goto loc_8081BD8C;
}

loc_8081BD70:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8081BD78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r28))) {
        goto loc_8081BD94;
    }
}

loc_8081BD7C:
{
    r4 = r27;
    r3 = (r26 + 24);
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl2_0x80839DA0:
{
}

loc_inl2_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80839DB0;
    }
}

loc_inl2_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_80839DA0;
}

loc_inl2_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r27 = r3;
}

loc_8081BD8C:
{
}

loc_8081BD90:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8081BD70;
    }
}

loc_8081BD94:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8081BDACu;
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
    r4 = r27;
    r3 = (r26 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839D30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r3 = MemoryInline::FlatRead32((r29 + -32752));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r29 + -32752), r0);
    r3 = MemoryInline::FlatRead32((r26 + 20));
}

loc_8081BDCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081BDE8;
    }
}

loc_8081BDD0:
{
    r4 = MemoryInline::FlatRead32((r27 + 4));
    ctx->lr = 0x8081BDD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r26 + 20));
    r4 = r27;
    ctx->lr = 0x8081BDE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081BE10;
}

loc_8081BDE8:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
}

loc_8081BDF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081BE08;
    }
}

loc_8081BDF4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8081BE08u;
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
}

loc_8081BE08:
{
    r3 = r27;
    ctx->lr = 0x8081BE10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081BE10:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r4 = (r31 + 12);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8081BE28u;
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
    r31 = MemoryInline::FlatRead32(r31);
}

loc_8081BE2C:
{
}

loc_8081BE30:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r30))) {
        goto loc_8081BD58;
    }
}

loc_8081BE34:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081BD30 func_8081BD30 preserves=true fpr_mask=0x00000000
