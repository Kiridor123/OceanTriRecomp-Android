#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082FEF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8082FEF0;

loc_8082FEF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = MemoryInline::FlatRead32((r3 + 28));
    r26 = r3;
    r27 = r4;
    r30 = (r3 + 28);
    r29 = 0;
    goto loc_8082FF50;
}

loc_8082FF1C:
{
}

loc_8082FF20:
{
    r28 = r31;
    r31 = MemoryInline::FlatRead32(r31);
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8082FF38;
    }
}

loc_8082FF2C:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
}

loc_8082FF34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_8082FF50;
    }
}

loc_8082FF38:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r3 = (r26 + 24);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r28 + 8), r29);
    MemoryInline::FlatWrite16((r28 + 12), static_cast<uint16_t>(r29));
}

loc_8082FF50:
{
}

loc_8082FF54:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r30))) {
        goto loc_8082FF1C;
    }
}

loc_8082FF58:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082FEF0 func_8082FEF0 preserves=true fpr_mask=0x00000000
