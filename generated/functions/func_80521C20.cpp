#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805219C0(CpuContext* ctx);
extern "C" void func_805219C0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80521C20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80521C20;

loc_80521C20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & -196609);
}

loc_80521C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80521C54;
    }
}

loc_80521C3C:
{
    r4 = 0x80770000u;
    r0 = 10;
    r4 = (r4 + -25352);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80521D94;
}

loc_80521C54:
{
    r5 = (r3 & 196608);
    r0 = (r5 + -196608);
}

loc_80521C60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80521C7C;
    }
}

loc_80521C64:
{
    r4 = 0x80770000u;
    r0 = 10;
    r4 = (r4 + -25352);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80521D94;
}

loc_80521C7C:
{
    r5 = (r3 & 65536);
}

loc_80521C80:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80521C9C;
    }
}

loc_80521C84:
{
    r3 = 0x80770000u;
    r3 = (r3 + -25352);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 65536);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    goto loc_80521CB0;
}

loc_80521C9C:
{
    r3 = 0x80770000u;
    r3 = (r3 + -25352);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -65537);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
}

loc_80521CB0:
{
    r7 = 0x80770000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80521CB8:
{
    r3 = MemoryInline::FlatRead32((r7 + -25352));
    r6 = (r7 + -25352);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + 12), r0);
    r5 = (r6 + 72);
    r3 = (r3 | 1);
    MemoryInline::FlatWriteRam32((r6 + 8), r5);
    MemoryInline::FlatWriteRam32((r7 + -25352), r3);
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521CF0;
    }
}

loc_80521CE0:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 | 65536);
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
    goto loc_80521CFC;
}

loc_80521CF0:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 & -65537);
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
}

loc_80521CFC:
{
    r11 = 0x80770000u;
    r9 = 0x80520000u;
    r11 = (r11 + -25352);
    r8 = 0x80520000u;
    r10 = 0;
    r7 = 0x80520000u;
    r6 = 0x80520000u;
    r5 = 0x80520000u;
    r3 = 0x80520000u;
    r9 = (r9 + 7600);
    r8 = (r8 + 8048);
    r7 = (r7 + 8656);
    r6 = (r6 + 8720);
    r5 = (r5 + 8848);
    r3 = (r3 + 8864);
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 24), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + 24), r4);
    r31 = (r11 + 72);
    r30 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + 32), r10);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + 60), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + 40), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + 44), r7);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + 56), r3);
    }
}

loc_80521D6C:
{
    r3 = r31;
    r4 = 0;
    r5 = 6272;
    if constexpr (KnownRegArgsCpuCall<0x805219C0u>(&func_805219C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        func_805219C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        InvokeDirectCpu<0x805219C0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    r30 = (r30 + 1);
    r31 = (r31 + 6272);
}

loc_80521D88:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(26))) {
        goto loc_80521D6C;
    }
}

loc_80521D8C:
{
    // inline leaf 0x80522300 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13616), r0);
    // end of inlined leaf 0x80522300
    r3 = 0;
}

loc_80521D94:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80521C20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80521C20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80521C20 func_80521C20 preserves=true fpr_mask=0x00000000
