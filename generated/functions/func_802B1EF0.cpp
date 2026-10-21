#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802B1EF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802B1EF0u);
    goto loc_802B1EF0;

loc_802B1EF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = 0;
    r29 = 0;
    r30 = 255;
    r31 = 2;
}

loc_802B1F34:
{
    r4 = MemoryInline::FlatRead8(r27);
}

loc_802B1F3C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802B2018;
    }
}

loc_802B1F40:
{
    r3 = r26;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r4 = 0;
    ctr = r31;
}

loc_802B1F54:
{
    r0 = (r28 & 255);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B1F64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B1F70;
    }
}

loc_802B1F68:
{
    r28 = (r28 + 1);
    goto loc_802B1F80;
}

loc_802B1F70:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8((r3 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 11950), static_cast<uint8_t>(r30));
    goto loc_802B2018;
}

loc_802B1F80:
{
    r4 = (r4 + 1);
    r0 = (r28 & 255);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B1F94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B1FA0;
    }
}

loc_802B1F98:
{
    r28 = (r28 + 1);
    goto loc_802B1FB0;
}

loc_802B1FA0:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8((r3 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 11950), static_cast<uint8_t>(r30));
    goto loc_802B2018;
}

loc_802B1FB0:
{
    r4 = (r4 + 1);
    r0 = (r28 & 255);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B1FC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B1FD0;
    }
}

loc_802B1FC8:
{
    r28 = (r28 + 1);
    goto loc_802B1FE0;
}

loc_802B1FD0:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8((r3 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 11950), static_cast<uint8_t>(r30));
    goto loc_802B2018;
}

loc_802B1FE0:
{
    r4 = (r4 + 1);
    r0 = (r28 & 255);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B1FF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B2000;
    }
}

loc_802B1FF8:
{
    r28 = (r28 + 1);
    goto loc_802B2010;
}

loc_802B2000:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8((r3 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 11950), static_cast<uint8_t>(r30));
    goto loc_802B2018;
}

loc_802B2010:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802B1F54;
    }
}

loc_802B2018:
{
    r29 = (r29 + 1);
    r27 = (r27 + 1);
}

loc_802B2024:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(2))) {
        goto loc_802B1F34;
    }
}

loc_802B2028:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B1EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B1EF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B1EF0 func_802B1EF0 preserves=true fpr_mask=0x00000000
