#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801E9970_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_801E9970;

loc_801E9970:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = 0;
    goto loc_801E9998;
}

loc_801E9990:
{
    r30 = (r30 + 1);
    r3 = (r3 + 1);
}

loc_801E9998:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801E99A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E9990;
    }
}

loc_801E99A4:
{
}

loc_801E99A8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801E9AD8;
    }
}

loc_801E99AC:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r30));
    r0 = (r0 * r30);
    r0 = (r3 - r0);
    r7 = (r0 & 255);
    r31_addr_0 = (r31 + r7);
    r3 = MemoryInline::FlatRead8(r31_addr_0);
}

loc_801E99D0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(13))) {
        goto loc_801E9ADC;
    }
}

loc_801E99D4:
{
    r6 = (13 - r7);
}

loc_801E99DC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_801E9AB0;
    }
}

loc_801E99E0:
{
    r4 = 0;
    r5 = 0;
    r0 = 0;
}

loc_801E99F0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(14))) {
        goto loc_801E99F8;
    }
}

loc_801E99F4:
{
    r0 = 1;
}

loc_801E99F8:
{
}

loc_801E99FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E9A10;
    }
}

loc_801E9A00:
{
    r0 = (r7 + -2147483648);
}

loc_801E9A08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801E9A10;
    }
}

loc_801E9A0C:
{
    r5 = 1;
}

loc_801E9A10:
{
}

loc_801E9A14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E9A48;
    }
}

loc_801E9A18:
{
    r5 = 1;
    r0 = (0 - r7);
    r0 = (r0 & -2147483648);
}

loc_801E9A28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E9A3C;
    }
}

loc_801E9A2C:
{
    r0 = (r6 & -2147483648);
}

loc_801E9A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E9A3C;
    }
}

loc_801E9A38:
{
    r5 = 0;
}

loc_801E9A3C:
{
}

loc_801E9A40:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E9A48;
    }
}

loc_801E9A44:
{
    r4 = 1;
}

loc_801E9A48:
{
}

loc_801E9A4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E9AB0;
    }
}

loc_801E9A50:
{
    r0 = (12 - r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_801E9A60:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(5))) {
        goto loc_801E9AB0;
    }
}

loc_801E9A64:
{
    r4 = (r31 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E9A64;
    }
}

loc_801E9AB0:
{
    r0 = (13 - r7);
    ctr = r0;
}

loc_801E9ABC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(13))) {
        goto loc_801E9ADC;
    }
}

loc_801E9AC0:
{
    r4 = (r31 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E9AC0;
    }
}

loc_801E9AD4:
{
    goto loc_801E9ADC;
}

loc_801E9AD8:
{
    r3 = 0;
}

loc_801E9ADC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E9970(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E9970_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E9970 func_801E9970 preserves=true fpr_mask=0x00000000
