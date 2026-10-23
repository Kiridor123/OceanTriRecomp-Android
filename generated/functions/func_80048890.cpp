#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80048890;

loc_80048890:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0;
    r30 = (r13 + -17840);
    r31 = -1;
    r28 = 2;
}

loc_800488BC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 0;
    r5 = 18560;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0;
    ctr = r28;
}

loc_800488D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r31));
    r4 = (r4 + 16);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3_addr_4 = (r3 + r4);
    MemoryInline::FlatWrite16(r3_addr_4, static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r31));
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800488D4;
    }
}

loc_80048998:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_800489A4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_800488BC;
    }
}

loc_800489A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80048890 func_80048890 preserves=true fpr_mask=0x00000000
