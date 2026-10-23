#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8046EEE0;

loc_8046EEE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80700000u;
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r4 + -26256));
}

loc_8046EF14:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8046EF20;
    }
}

loc_8046EF18:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRam32((r4 + -26256), r0);
}

loc_8046EF20:
{
}

loc_8046EF24:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8046EFE0;
    }
}

loc_8046EF28:
{
    r3 = 0x80700000u;
    r4 = 0x80700000u;
    r3 = (r3 + -26256);
    r0 = (r27 + -1);
    r4 = (r4 + -26128);
    r5 = (r3 + 4);
    r3 = 0;
    r6 = (r4 + 4);
    ctr = r0;
}

loc_8046EF50:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(1))) {
        goto loc_8046EFE0;
    }
}

loc_8046EF54:
{
    // nop
}

loc_8046EF58:
{
    r0 = MemoryInline::FlatRead32(r5);
    r30 = 0;
}

loc_8046EF64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046EF9C;
    }
}

loc_8046EF68:
{
    r7 = MemoryInline::FlatRead32(r6);
}

loc_8046EF70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_8046EF84;
    }
}

loc_8046EF74:
{
    MemoryInline::FlatWrite32(r6, r3);
    r30 = r0;
    MemoryInline::FlatWrite32(r5, r3);
    goto loc_8046EF9C;
}

loc_8046EF84:
{
}

loc_8046EF88:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8046EF9C;
    }
}

loc_8046EF8C:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
    r30 = r7;
    MemoryInline::FlatWrite32(r6, r4);
    MemoryInline::FlatWrite32(r4, r3);
}

loc_8046EF9C:
{
}

loc_8046EFA0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8046EFD4;
    }
}

loc_8046EFA4:
{
    r0 = MemoryInline::FlatRead16((r30 + 56));
}

loc_8046EFAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8046EFB8;
    }
}

loc_8046EFB0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_8046EFB8:
{
    r12 = MemoryInline::FlatRead32((r30 + 16));
}

loc_8046EFC0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8046EFE0;
    }
}

loc_8046EFC4:
{
    r3 = r30;
    ctr = r12;
    ctx->lr = 0x8046EFD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8046EFE0;
}

loc_8046EFD4:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046EF58;
    }
}

loc_8046EFE0:
{
}

loc_8046EFE4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8046F040;
    }
}

loc_8046EFE8:
{
    r4 = 0x80700000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4 = (r4 + -26256);
    r0 = 0;
    r4_addr_1 = (r4 + r5);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32(r30, r3);
}

loc_8046F004:
{
    MemoryInline::FlatWrite32((r30 + 4), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046F01C;
    }
}

loc_8046F00C:
{
    r4_addr_2 = (r4 + r5);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r4_addr_3 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_3, r30);
    goto loc_8046F02C;
}

loc_8046F01C:
{
    r3 = 0x80700000u;
    r4_addr_4 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_4, r30);
    r3 = (r3 + -26128);
    r3_addr_1 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_1, r30);
}

loc_8046F02C:
{
    MemoryInline::FlatWrite32((r30 + 12), r27);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 16), r28);
    MemoryInline::FlatWrite32((r30 + 20), r29);
    // inline leaf 0x804718B0 (16 guest instruction(s))
    r4 = 413663232;
    r5 = 0;
    r0 = (r4 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 290u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 56), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 108), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 198u, (r3 + 226), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 206u, (r3 + 234), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 226u, (r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 288u, (r3 + 316), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 278u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 278u, (r3 + 306), r5);
        MemoryInline::WriteResolved16(guest_range_0, 280u, (r3 + 308), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 282u, (r3 + 310), r5);
        MemoryInline::WriteResolved16(guest_range_0, 284u, (r3 + 312), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 286u, (r3 + 314), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x804718B0
}

loc_8046F040:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 32);
    r3 = r30;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046EEE0 func_8046EEE0 preserves=true fpr_mask=0x00000000
