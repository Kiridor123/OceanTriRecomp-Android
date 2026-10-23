#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081BED0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8081BED0;

loc_8081BED0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = 0x80870000u;
    r26 = r3;
    r27 = r4;
    r28 = 0;
    r29 = (r29 + -32272);
    goto loc_8081BF7C;
}

loc_8081BEFC:
{
    r3 = (r26 + 24);
    r4 = (r28 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839DE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081BF24u;
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
    goto loc_8081BF3C;
}

loc_8081BF28:
{
}

loc_8081BF2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_8081BF38;
    }
}

loc_8081BF30:
{
    r0 = 1;
    goto loc_8081BF48;
}

loc_8081BF38:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8081BF3C:
{
}

loc_8081BF40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081BF28;
    }
}

loc_8081BF44:
{
    r0 = 0;
}

loc_8081BF48:
{
}

loc_8081BF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081BF54;
    }
}

loc_8081BF50:
{
    goto loc_8081BF58;
}

loc_8081BF54:
{
    r30 = 0;
}

loc_8081BF58:
{
}

loc_8081BF5C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8081BF78;
    }
}

loc_8081BF60:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = r27;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8081BF78u;
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

loc_8081BF78:
{
    r28 = (r28 + 1);
}

loc_8081BF7C:
{
    r0 = MemoryInline::FlatRead16((r26 + 16));
}

loc_8081BF84:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_8081BEFC;
    }
}

loc_8081BF88:
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
// RECOMP_REGISTRATION base 0x8081BED0 func_8081BED0 preserves=true fpr_mask=0x00000000
