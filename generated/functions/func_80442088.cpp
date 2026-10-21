#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80442088(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80442088u);
    goto loc_80442088;

loc_80442088:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806E0000u;
    r4 = (r4 + -30960);
    r5 = MemoryInline::FlatRead32((r4 + 84));
    r5 = (r5 + 8);
    r6 = 0;
    r0 = 3413;
    ctr = r0;
}

loc_804420B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r5);
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 1));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 2));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 3));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 4));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 5));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 6));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 7));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r5 + 8));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r5 + 9));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r5 + 10));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r5 + 11));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r5 + 12));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r5 + 13));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r5 + 14));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r5 + 15));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r5 + 16));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r5 + 17));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r5 + 18));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r5 + 19));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r5 + 20));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r5 + 21));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r5 + 22));
    r6 = (r6 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r5 + 23));
    r6 = (r6 + r0);
    r5 = (r5 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804420B0;
    }
}

loc_80442178:
{
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80442184:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r6))) {
        goto loc_80442190;
    }
}

loc_80442188:
{
    r3 = 0;
    goto loc_804421C0;
}

loc_80442190:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80442198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804421BC;
    }
}

loc_8044219C:
{
    r0 = (r3 & 255);
    r0 = (r0 * 24576);
    r3 = (r4 + r0);
    r3 = (r3 + 72);
    r4 = 24576;
    ctx->lr = 0x804421B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80049F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    r3 = 1;
    goto loc_804421C0;
}

loc_804421BC:
{
    r3 = 0;
}

loc_804421C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80442088 func_80442088 preserves=true fpr_mask=0x00000000
