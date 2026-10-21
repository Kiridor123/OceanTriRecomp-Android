#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803BCD9C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803BCD9Cu);
    goto loc_803BCD9C;

loc_803BCD9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r0 = (r4 & 255);
}

loc_803BCDC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BCE80;
    }
}

loc_803BCDC4:
{
    r31 = 0;
    r4 = 0x806D0000u;
    r4 = (r4 + 20216);
    r0 = 8;
    ctr = r0;
}

loc_803BCDD8:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_803BCDE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803BCDFC;
    }
}

loc_803BCDE4:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_803BCDEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BCDFC;
    }
}

loc_803BCDF0:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_803BCDF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803BCEDC;
    }
}

loc_803BCDFC:
{
    r31 = (r31 + 1);
    r5 = MemoryInline::FlatRead32((r4 + 4));
}

loc_803BCE08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803BCE24;
    }
}

loc_803BCE0C:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_803BCE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BCE24;
    }
}

loc_803BCE18:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_803BCE20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803BCEDC;
    }
}

loc_803BCE24:
{
    r31 = (r31 + 1);
    r5 = MemoryInline::FlatRead32((r4 + 8));
}

loc_803BCE30:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803BCE4C;
    }
}

loc_803BCE34:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_803BCE3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BCE4C;
    }
}

loc_803BCE40:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_803BCE48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803BCEDC;
    }
}

loc_803BCE4C:
{
    r31 = (r31 + 1);
    r5 = MemoryInline::FlatRead32((r4 + 12));
}

loc_803BCE58:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803BCE74;
    }
}

loc_803BCE5C:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_803BCE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BCE74;
    }
}

loc_803BCE68:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_803BCE70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803BCEDC;
    }
}

loc_803BCE74:
{
    r4 = (r4 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BCDD8;
    }
}

loc_803BCE80:
{
    r31 = 0;
    r4 = 0x806D0000u;
    r4 = (r4 + 20216);
    r0 = 32;
    ctr = r0;
}

loc_803BCE94:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_803BCE9C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803BCFB0;
    }
}

loc_803BCEA0:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_803BCEA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BCFB0;
    }
}

loc_803BCEAC:
{
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r27 = (r27_rot_1 & -4);
    r4 = 0x806D0000u;
    r28 = (r4 + 20216);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r28_addr_1 = (r28 + r27);
    r4 = MemoryInline::FlatRead32(r28_addr_1);
    // inline leaf 0x800E2614 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 284), r4);
    // end of inlined leaf 0x800E2614
    r0 = 1;
    r28_addr_2 = (r28 + r27);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r28_addr_3 = (r28 + r27);
    r3 = MemoryInline::FlatRead32(r28_addr_3);
    MemoryInline::FlatWrite32((r3 + 8), r29);
    MemoryInline::FlatWrite8((r29 + 452), static_cast<uint8_t>(r30));
}

loc_803BCEDC:
{
    r0 = MemoryInline::FlatRead8((r29 + 452));
}

loc_803BCEE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BCF6C;
    }
}

loc_803BCEE8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806D0000u;
    r3 = (r3 + 20216);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r4 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r4 + 1);
    r4 = (r0 & 255);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803BCF14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 439), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 438), static_cast<uint8_t>(r3));
    r0 = 6144;
    MemoryInline::FlatWrite16((r29 + 436), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r29 + 412), r3);
    MemoryInline::FlatWrite32((r29 + 416), r3);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_803BCF50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BCFBC;
    }
}

loc_803BCF54:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 420), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 438), static_cast<uint8_t>(r0));
    goto loc_803BCFBC;
}

loc_803BCF6C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x806D0000u;
    r3 = (r3 + 20216);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = MemoryInline::FlatRead8((r29 + 5));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803BCF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 1024;
    MemoryInline::FlatWrite16((r29 + 436), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 412), r0);
    MemoryInline::FlatWrite32((r29 + 416), r0);
    MemoryInline::FlatWrite32((r29 + 420), r0);
    MemoryInline::FlatWrite32((r29 + 432), r0);
    goto loc_803BCFBC;
}

loc_803BCFB0:
{
    r4 = (r4 + 4);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BCE94;
    }
}

loc_803BCFBC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BCD9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BCD9C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BCD9C func_803BCD9C preserves=true fpr_mask=0x00000000
