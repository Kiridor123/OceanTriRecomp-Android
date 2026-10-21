#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004CA04_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004CA04u);
    goto loc_8004CA04;

loc_8004CA04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = (r4 & 65535);
    r0 = (r0 * 12);
    r6 = (r3 + r0);
    r7 = (r6 + 3584);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8004CA38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8004CB1C;
    }
}

loc_8004CA3C:
{
    r6 = 0x80580000u;
    r6 = (r6 + 7428);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_0);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8004CA54u:
        goto loc_8004CA54;
        break;
    case 0x8004CA5Cu:
        goto loc_8004CA5C;
        break;
    case 0x8004CA64u:
        goto loc_8004CA64;
        break;
    case 0x8004CA6Cu:
        goto loc_8004CA6C;
        break;
    case 0x8004CA74u:
        goto loc_8004CA74;
        break;
    case 0x8004CA7Cu:
        goto loc_8004CA7C;
        break;
    case 0x8004CA84u:
        goto loc_8004CA84;
        break;
    case 0x8004CA8Cu:
        goto loc_8004CA8C;
        break;
    case 0x8004CAC4u:
        goto loc_8004CAC4;
        break;
    case 0x8004CB0Cu:
        goto loc_8004CB0C;
        break;
    case 0x8004CB14u:
        goto loc_8004CB14;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8004CA54:
{
    r3 = 0;
    goto loc_8004CB28;
}

loc_8004CA5C:
{
    MemoryInline::FlatWrite16((r3 + 146), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA64:
{
    MemoryInline::FlatWrite16((r3 + 148), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA6C:
{
    MemoryInline::FlatWrite16((r3 + 150), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA74:
{
    MemoryInline::FlatWrite16((r3 + 152), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA7C:
{
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA84:
{
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CA8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 140));
    r0 = (r0 * 12);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3584));
}

loc_8004CAA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8004CAAC;
    }
}

loc_8004CAA4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_8004CAAC:
{
    MemoryInline::FlatWrite16((r3 + 140), static_cast<uint16_t>(r4));
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 142), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r0));
    goto loc_8004CB24;
}

loc_8004CAC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 140));
    r0 = (r0 * 12);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3584));
}

loc_8004CAD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8004CAE4;
    }
}

loc_8004CADC:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_8004CAE4:
{
    MemoryInline::FlatWrite16((r3 + 140), static_cast<uint16_t>(r4));
    r3 = r7;
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl0_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl0_0x8027F13C;
    }
}

loc_inl0_0x8027F134:
{
    r3 = 0;
    goto loc_inl0_cont_8027F128;
}

loc_inl0_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_8004CAF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004CB24;
    }
}

loc_8004CAF8:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 142), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 144), static_cast<uint16_t>(r0));
    goto loc_8004CB24;
}

loc_8004CB0C:
{
    MemoryInline::FlatWrite16((r3 + 142), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CB14:
{
    MemoryInline::FlatWrite16((r3 + 144), static_cast<uint16_t>(r4));
    goto loc_8004CB24;
}

loc_8004CB1C:
{
    r3 = 0;
    goto loc_8004CB28;
}

loc_8004CB24:
{
    r3 = 1;
}

loc_8004CB28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004CA04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004CA04_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000DB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004CA04 func_8004CA04 preserves=true fpr_mask=0x00000000
