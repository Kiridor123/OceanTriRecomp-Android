#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8015D4F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8015D4F0;

loc_8015D4F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r26 = 0;
    r3 = 0x805A0000u;
    r25 = (r3 + 20464);
    r24 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = 0x806A0000u;
    r29 = (r3 + 31072);
    r28 = 0;
    r22 = 1;
}

loc_8015D53C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8015D544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015D5F4;
    }
}

loc_8015D548:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_8015D550:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8015D5F4;
    }
}

loc_8015D554:
{
    r3 = MemoryInline::FlatRead8((r23 + 481));
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_8015D560:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8015D5F4;
    }
}

loc_8015D564:
{
    r27 = 0;
    r31 = (r1 + 8);
    r30 = r25;
    goto loc_8015D5E8;
}

loc_8015D574:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8015D57C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D5DC;
    }
}

loc_8015D580:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_8015D588:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8015D5DC;
    }
}

loc_8015D58C:
{
    r3 = MemoryInline::FlatRead8((r30 + 1));
}

loc_8015D594:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8015D5A4;
    }
}

loc_8015D598:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8015D5A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8015D5DC;
    }
}

loc_8015D5A4:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r22));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (r26 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_8015D5C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D5DC;
    }
}

loc_8015D5CC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r25_addr_2 = (r25 + r0);
    r24 = MemoryInline::FlatRead8(r25_addr_2);
    r26 = (r26 + 1);
    goto loc_8015D5F4;
}

loc_8015D5DC:
{
    r31 = (r31 + 1);
    r30 = (r30 + 2);
    r27 = (r27 + 1);
}

loc_8015D5E8:
{
    r3 = MemoryInline::FlatRead8(r30);
}

loc_8015D5F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015D574;
    }
}

loc_8015D5F4:
{
    r28 = (r28 + 1);
    r29 = (r29 + 68);
}

loc_8015D600:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_8015D53C;
    }
}

loc_8015D604:
{
    r3 = r24;
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8015D4F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8015D4F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015D4F0 func_8015D4F0 preserves=true fpr_mask=0x00000000
