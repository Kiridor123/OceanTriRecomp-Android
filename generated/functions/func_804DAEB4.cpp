#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DAEB4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x804DAEB4u);
    goto loc_804DAEB4;

loc_804DAEB4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r4;
    r25 = r3;
    r5 = r26;
    r31 = 0;
    goto loc_804DAF04;
}

loc_804DAEDC:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & -16);
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r4 + r0);
    r4 = (r31 & -268435456);
}

loc_804DAEF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804DAF00;
    }
}

loc_804DAEF8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    r31 = (r31 ^ r0);
}

loc_804DAF00:
{
    r31 = (r31 & ~r4);
}

loc_804DAF04:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DAEDC;
    }
}

loc_804DAF10:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r29 = 0;
    r30 = MemoryInline::FlatRead32((r3 + 64));
    r27 = -1;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r3 = (r3_rot_0 & 268435455);
}

loc_804DAF24:
{
    r28 = (r3 + -1);
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_804DAF8C;
    }
}

loc_804DAF2C:
{
    r3 = -1;
    goto loc_804DB08C;
}

loc_804DAF38:
{
    r4 = (r29 + r28);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -16);
    r3 = (r30 + r0);
    r4 = (static_cast<int32_t>(r4) >> 1);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_804DAF50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804DAF6C;
    }
}

loc_804DAF54:
{
}

loc_804DAF58:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r4))) {
        goto loc_804DAF64;
    }
}

loc_804DAF5C:
{
    r27 = r28;
    goto loc_804DAF8C;
}

loc_804DAF64:
{
    r29 = r4;
    goto loc_804DAF8C;
}

loc_804DAF6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DAF88;
    }
}

loc_804DAF70:
{
}

loc_804DAF74:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r4))) {
        goto loc_804DAF80;
    }
}

loc_804DAF78:
{
    r27 = r29;
    goto loc_804DAF8C;
}

loc_804DAF80:
{
    r28 = r4;
    goto loc_804DAF8C;
}

loc_804DAF88:
{
    r27 = r4;
}

loc_804DAF8C:
{
}

loc_804DAF90:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(-1))) {
        goto loc_804DAF38;
    }
}

loc_804DAF94:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r3 = (r30 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_804DAFA4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_804DAFB0;
    }
}

loc_804DAFA8:
{
    r3 = -1;
    goto loc_804DB08C;
}

loc_804DAFB0:
{
    r30_addr_1 = (r30 + r4);
    r4 = MemoryInline::FlatRead32(r30_addr_1);
    r3 = r26;
    r0 = MemoryInline::FlatRead32((r25 + 72));
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DAFC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DAFD4;
    }
}

loc_804DAFCC:
{
    r3 = r27;
    goto loc_804DB08C;
}

loc_804DAFD4:
{
    r24 = (r27 + 1);
    goto loc_804DB020;
}

loc_804DAFDC:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & -16);
    r3 = (r30 + r5);
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_804DAFEC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_804DB018;
    }
}

loc_804DAFF0:
{
    r4 = MemoryInline::FlatRead32((r25 + 64));
    r3 = r26;
    r0 = MemoryInline::FlatRead32((r25 + 72));
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DB00C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DB01C;
    }
}

loc_804DB010:
{
    r3 = r24;
    goto loc_804DB08C;
}

loc_804DB018:
{
    r24 = (r28 + 1);
}

loc_804DB01C:
{
    r24 = (r24 + 1);
}

loc_804DB020:
{
}

loc_804DB024:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r28))) {
        goto loc_804DAFDC;
    }
}

loc_804DB028:
{
    r24 = (r27 + -1);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r27 = (r27_rot_1 & -16);
    r28 = (r30 + r27);
    goto loc_804DB080;
}

loc_804DB038:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_804DB040:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_804DB06C;
    }
}

loc_804DB044:
{
    r4 = MemoryInline::FlatRead32((r25 + 64));
    r3 = r26;
    r0 = MemoryInline::FlatRead32((r25 + 72));
    r4_addr_5 = (r4 + r27);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DB060:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DB074;
    }
}

loc_804DB064:
{
    r3 = r24;
    goto loc_804DB08C;
}

loc_804DB06C:
{
    r3 = -1;
    goto loc_804DB08C;
}

loc_804DB074:
{
    r28 = (r28 + -16);
    r24 = (r24 + -1);
    r27 = (r27 + -16);
}

loc_804DB080:
{
}

loc_804DB084:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r29))) {
        goto loc_804DB038;
    }
}

loc_804DB088:
{
    r3 = -1;
}

loc_804DB08C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DAEB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DAEB4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DAEB4 func_804DAEB4 preserves=true fpr_mask=0x00000000
