#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082ECB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8082ECB0;

loc_8082ECB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 8160);
    r28 = r5;
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r31 = (r3 + r0);
    r3 = r31;
    ctx->lr = 0x8082ECE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B8B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = r3;
    r3 = r31;
    ctx->lr = 0x8082ECF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B8B20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
    r29 = r3;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r31, r0);
    r3 = r31;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 4));
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r28 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r28 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r28 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    ctx->lr = 0x8082ED40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B8A40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r31;
    r4 = r30;
    r5 = r29;
    ctx->lr = 0x8082ED50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B8A10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082ECB0 func_8082ECB0 preserves=true fpr_mask=0x00000000
