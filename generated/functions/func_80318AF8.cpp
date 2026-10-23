#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80318AF8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80318AF8;

loc_80318AF8:
{
    r0 = (r20 & 255);
    r0 = (r0 & 16);
}

loc_80318B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318B40;
    }
}

loc_80318B08:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80318B18:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80318B40;
    }
}

loc_80318B1C:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r28;
    r6 = 0;
    r7 = 0;
    r8 = (r1 + 8);
    ctx->lr = 0x80318B38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = r3;
    r22 = 1;
}

loc_80318B40:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r31;
    r6 = 0;
    r7 = 0;
    r8 = (r1 + 8);
    ctx->lr = 0x80318B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = r3;
    r25 = (r25 | 1);
}

loc_80318DC4:
{
    r0 = (r25 & 255);
    r0 = (r0 & 1);
}

loc_80318DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E50;
    }
}

loc_80318DD4:
{
    r3 = (r20 & 255);
    r0 = (r3 & 8);
}

loc_80318DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E18;
    }
}

loc_80318DE4:
{
    r0 = (r3 & 1);
}

loc_80318DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E18;
    }
}

loc_80318DF0:
{
}

loc_80318DF4:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_80318E18;
    }
}

loc_80318DF8:
{
    r3 = (r23 & 255);
    r0 = (r24 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80318E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80318E18;
    }
}

loc_80318E08:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80318E14;
    }
}

loc_80318E10:
{
    r0 = 2;
}

loc_80318E14:
{
    r25 = (r25 | r0);
}

loc_80318E18:
{
    r0 = (r20 & 255);
    r0 = (r0 & 4);
}

loc_80318E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E4C;
    }
}

loc_80318E28:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80318E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80318E40;
    }
}

loc_80318E34:
{
}

loc_80318E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80318E48;
    }
}

loc_80318E3C:
{
    goto loc_80318E4C;
}

loc_80318E40:
{
    r25 = (r25 | 8);
    goto loc_80318E4C;
}

loc_80318E48:
{
    r25 = (r25 | 16);
}

loc_80318E4C:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r24));
}

loc_80318E50:
{
    r3 = r25;
    r11 = (r1 + 80);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80318AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80318AF8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x93FC3FFF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80318AF8 func_80318AF8 preserves=true fpr_mask=0x00000000
