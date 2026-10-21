#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2C60(CpuContext* ctx);
extern "C" uint32_t func_804C2C60_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804C2D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C2D60u);
    goto loc_804C2D60;

loc_804C2D60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EB60u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C2D7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2E5C;
    }
}

loc_804C2D80:
{
    r0 = MemoryInline::FlatRead32((r13 + -15228));
}

loc_804C2D88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C2E5C;
    }
}

loc_804C2D8C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80471FD0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0x80750000u;
    r4 = 0x80750000u;
    r5 = (r5 + -20360);
    MemoryInline::FlatWrite32((r13 + -15224), r3);
    r4 = (r4 + -9608);
    r25 = 0;
    MemoryInline::FlatWrite32((r13 + -15232), r5);
    r26 = 0;
    r27 = 0;
    r28 = 1342177280;
    MemoryInline::FlatWrite32((r13 + -15216), r4);
    r29 = -960;
    r30 = 64;
    r31 = 127;
    goto loc_804C2E44;
}

loc_804C2DCC:
{
    r3 = MemoryInline::FlatRead32((r13 + -15232));
    r3_addr_2 = (r3 + r26);
    MemoryInline::FlatWrite32(r3_addr_2, r27);
    r0 = MemoryInline::FlatRead32((r13 + -15232));
    r3 = (r0 + r26);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 106u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4), r28);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 8), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 16), r29);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 20), r29);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 32), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 28), r31);
    }
    MemoryInline::WriteResolved16(guest_range_1, 104u, (r3 + 108), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 100u, (r3 + 104), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 96u, (r3 + 100), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 92u, (r3 + 96), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 88u, (r3 + 92), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 84u, (r3 + 88), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 80u, (r3 + 84), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 76u, (r3 + 80), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 72u, (r3 + 76), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 68u, (r3 + 72), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 64u, (r3 + 68), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r3 + 64), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 56u, (r3 + 60), static_cast<uint16_t>(r27));
    if constexpr (KnownRegArgsCpuCall<0x804C2C60u>(&func_804C2C60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804C2C60_147C = func_804C2C60_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804C2C60_147C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804C2C60u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = r25;
    // inline leaf 0x804C6230 (22 guest instruction(s))
    r4 = (r3 * 68);
    r5 = MemoryInline::FlatRead32((r13 + -15216));
    r3 = 0;
    r4_addr_2 = (r4 + r5);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4_addr_2, 0, 66u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r4_addr_2, r3);
    r4 = r4_addr_2;
    r0 = -960;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 64u, (r4 + 64), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 60u, (r4 + 60), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 56u, (r4 + 56), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 52u, (r4 + 52), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 48u, (r4 + 48), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 44u, (r4 + 44), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 40u, (r4 + 40), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_2, 36u, (r4 + 36), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804C6230
    r26 = (r26 + 112);
    r25 = (r25 + 1);
}

loc_804C2E44:
{
    r0 = MemoryInline::FlatRead32((r13 + -15224));
}

loc_804C2E4C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r0))) {
        goto loc_804C2DCC;
    }
}

loc_804C2E50:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15220), r0);
    MemoryInline::FlatWrite32((r13 + -15228), r0);
}

loc_804C2E5C:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2D60 func_804C2D60 preserves=true fpr_mask=0x00000000
