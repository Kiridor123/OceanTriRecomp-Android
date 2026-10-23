#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80141E20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80141E20;

loc_80141E20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r30 = r5;
    r27 = r6;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = 0;
    r0 = (r30 & 255);
    r31 = (r0 & 1);
    r0 = (r29 & 65535);
    ctr = r0;
}

loc_80141E70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80141EF8;
    }
}

loc_80141E74:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80141E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141EF0;
    }
}

loc_80141E80:
{
}

loc_80141E84:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80141E98;
    }
}

loc_80141E88:
{
    r4 = (r26 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_80141E94:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80141EF0;
    }
}

loc_80141E98:
{
    r0 = (r27 & 255);
}

loc_80141EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141EB4;
    }
}

loc_80141EA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 1);
}

loc_80141EB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141EF0;
    }
}

loc_80141EB4:
{
    r0 = (r27 & 255);
}

loc_80141EBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80141ED0;
    }
}

loc_80141EC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 1);
}

loc_80141ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141EF0;
    }
}

loc_80141ED0:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_80141ED8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80141EF0;
    }
}

loc_80141EDC:
{
    r4 = (r25 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 28));
}

loc_80141EE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80141EF0;
    }
}

loc_80141EEC:
{
    r28 = (r28 + 1);
}

loc_80141EF0:
{
    r3 = (r3 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80141E74;
    }
}

loc_80141EF8:
{
    r3 = 0x806A0000u;
    r29 = (r3 + 31072);
    r30 = 0;
}

loc_80141F04:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80141F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141FA4;
    }
}

loc_80141F10:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80141F18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80141FA4;
    }
}

loc_80141F1C:
{
}

loc_80141F20:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80141F34;
    }
}

loc_80141F24:
{
    r3 = (r26 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_80141F30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141FA4;
    }
}

loc_80141F34:
{
    r0 = (r27 & 255);
}

loc_80141F3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141F5C;
    }
}

loc_80141F40:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r4 = MemoryInline::FlatRead8((r29 + 3));
    ctx->lr = 0x80141F4Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80140C64u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_80141F58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141FA4;
    }
}

loc_80141F5C:
{
    r0 = (r27 & 255);
}

loc_80141F64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80141F84;
    }
}

loc_80141F68:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r4 = MemoryInline::FlatRead8((r29 + 3));
    ctx->lr = 0x80141F74u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80140C64u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_80141F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141FA4;
    }
}

loc_80141F84:
{
    r0 = MemoryInline::FlatRead8((r29 + 12));
}

loc_80141F8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80141FA4;
    }
}

loc_80141F90:
{
    r3 = (r25 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 24));
}

loc_80141F9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141FA4;
    }
}

loc_80141FA0:
{
    r28 = (r28 + 1);
}

loc_80141FA4:
{
    r30 = (r30 + 1);
    r29 = (r29 + 68);
}

loc_80141FB0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(128))) {
        goto loc_80141F04;
    }
}

loc_80141FB4:
{
    r3 = r28;
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80141E20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80141E20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141E20 func_80141E20 preserves=true fpr_mask=0x00000000
