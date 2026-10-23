#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EAAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EAAB8;

loc_800EAAB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
}

loc_800EAADC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800EAB5C;
    }
}

loc_800EAAE0:
{
}

loc_800EAAE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_800EAB5C;
    }
}

loc_800EAAE8:
{
}

loc_800EAAEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-3))) {
        goto loc_800EAB5C;
    }
}

loc_800EAAF0:
{
    r28 = MemoryInline::FlatRead32((r4 + 44));
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 176));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 176), r0);
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r31));
    r29 = MemoryInline::FlatRead8((r3 + 169));
    r3 = r28;
    r0 = 65536;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    r3 = r28;
    r0 = 8192;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 169));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 169), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_800EAB4C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800EAB54;
    }
}

loc_800EAB50:
{
    MemoryInline::FlatWrite8((r30 + 169), static_cast<uint8_t>(r31));
}

loc_800EAB54:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 214), static_cast<uint8_t>(r0));
}

loc_800EAB5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EAAB8 func_800EAAB8 preserves=true fpr_mask=0x00000000
