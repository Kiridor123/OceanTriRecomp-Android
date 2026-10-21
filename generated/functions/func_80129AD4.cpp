#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012CFF4(CpuContext* ctx);
extern "C" uint64_t func_8012CFF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80135B28(CpuContext* ctx);
extern "C" uint64_t func_80135B28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80129AD4u);
    goto loc_80129AD4;

loc_80129AD4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r24 = r4;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r22 = r3;
    r26 = 0;
    r0 = MemoryInline::FlatRead16((r23 + 514));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80129B14:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80129B40;
    }
}

loc_80129B18:
{
    r3 = r23;
    // inline leaf 0x80133860 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2066));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80133860
}

loc_80129B24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80129B34;
    }
}

loc_80129B28:
{
    r0 = 450;
    MemoryInline::FlatWrite16((r23 + 514), static_cast<uint16_t>(r0));
    goto loc_80129B3C;
}

loc_80129B34:
{
    r0 = 900;
    MemoryInline::FlatWrite16((r23 + 514), static_cast<uint16_t>(r0));
}

loc_80129B3C:
{
    r26 = 1;
}

loc_80129B40:
{
    r3 = MemoryInline::FlatRead8((r23 + 2224));
}

loc_80129B48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80129B54;
    }
}

loc_80129B4C:
{
    r0 = (r26 + 1);
    r26 = (r0 & 255);
}

loc_80129B54:
{
}

loc_80129B58:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80129D84;
    }
}

loc_80129B5C:
{
}

loc_80129B60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80129B6C;
    }
}

loc_80129B64:
{
    r3 = 1;
    goto loc_80129B74;
}

loc_80129B6C:
{
    r3 = r23;
    // inline leaf 0x80133860 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2066));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80133860
}

loc_80129B74:
{
    r25 = r3;
    r28 = 0;
}

loc_80129B80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80129BB0;
    }
}

loc_80129B84:
{
    r0 = MemoryInline::FlatRead8((r23 + 1085));
}

loc_80129B8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80129BB0;
    }
}

loc_80129B90:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 508), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r23 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r23 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80129D88;
}

loc_80129BB0:
{
    r27 = 0;
    r3 = r23;
    ctx->lr = 0x80129BBCu;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80135B28_1A6E = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_1A6E);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_1A6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
    r29 = 0;
    r22 = (r22 & 65535);
    goto loc_80129C50;
}

loc_80129BCC:
{
    r3 = MemoryInline::FlatRead8((r23 + 2));
    r0 = (r29 & 65535);
}

loc_80129BD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80129C48;
    }
}

loc_80129BDC:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80129BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129C48;
    }
}

loc_80129BE8:
{
    r3 = MemoryInline::FlatRead8((r30 + 481));
    r0 = MemoryInline::FlatRead8((r23 + 481));
}

loc_80129BF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80129C48;
    }
}

loc_80129BF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 485));
}

loc_80129C00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80129C48;
    }
}

loc_80129C04:
{
}

loc_80129C08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80129C48;
    }
}

loc_80129C0C:
{
    r3 = r23;
    r4 = MemoryInline::FlatRead8((r30 + 3));
    ctx->lr = 0x80129C18u;
    if constexpr (KnownRegArgsCpuCall<0x8012CFF4u>(&func_8012CFF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012CFF4_21C0 = func_8012CFF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012CFF4_21C0);
        r4 = static_cast<uint32_t>(regargs_result_8012CFF4_21C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012CFF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80129C1C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80129C48;
    }
}

loc_80129C20:
{
    r3 = r30;
    ctx->lr = 0x80129C28u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80135B28_256B = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_256B);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_256B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80129C34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129C40;
    }
}

loc_80129C38:
{
    r27 = 2;
    goto loc_80129C5C;
}

loc_80129C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80129C48;
    }
}

loc_80129C44:
{
    r27 = 1;
}

loc_80129C48:
{
    r29 = (r29 + 1);
    r30 = (r30 + 2840);
}

loc_80129C50:
{
    r0 = (r29 & 65535);
}

loc_80129C58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_80129BCC;
    }
}

loc_80129C5C:
{
    r29 = 0;
    r3 = 1374420992;
    r30 = (r3 + -31457);
    goto loc_80129D78;
}

loc_80129C6C:
{
}

loc_80129C70:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_80129C8C;
    }
}

loc_80129C74:
{
}

loc_80129C78:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(2))) {
        goto loc_80129CA4;
    }
}

loc_80129C7C:
{
}

loc_80129C80:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_80129CB4;
    }
}

loc_80129C84:
{
    r28 = 20;
    goto loc_80129CB4;
}

loc_80129C8C:
{
}

loc_80129C90:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_80129C9C;
    }
}

loc_80129C94:
{
    r28 = 50;
    goto loc_80129CB4;
}

loc_80129C9C:
{
    r28 = 20;
    goto loc_80129CB4;
}

loc_80129CA4:
{
}

loc_80129CA8:
{
    r28 = 40;
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_80129CB4;
    }
}

loc_80129CB0:
{
    r28 = 80;
}

loc_80129CB4:
{
    r3 = r23;
    // inline leaf 0x80133860 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2066));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80133860
}

loc_80129CC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80129D04;
    }
}

loc_80129CC4:
{
    r3 = MemoryInline::FlatRead16((r23 + 2068));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 & 8);
}

loc_80129CD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129CDC;
    }
}

loc_80129CD4:
{
    r28 = (r28 + 50);
    goto loc_80129D04;
}

loc_80129CDC:
{
    r0 = (r3 & 2);
}

loc_80129CE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129CF0;
    }
}

loc_80129CE8:
{
    r28 = (r28 + 30);
    goto loc_80129D04;
}

loc_80129CF0:
{
    r0 = (r3 & 4);
}

loc_80129CF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129D04;
    }
}

loc_80129CFC:
{
    r0 = (r28 + 20);
    r28 = (r0 & 65535);
}

loc_80129D04:
{
    r0 = (r28 & 65535);
}

loc_80129D0C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(100))) {
        goto loc_80129D14;
    }
}

loc_80129D10:
{
    r28 = 100;
}

loc_80129D14:
{
    r4 = (r24 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r3 = (r4 - r0);
    r0 = (r28 & 65535);
}

loc_80129D38:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80129D5C;
    }
}

loc_80129D3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 508), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r23 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r23 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80129D88;
}

loc_80129D5C:
{
    r3 = r23;
    // inline leaf 0x80133860 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2066));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x80133860
    r25 = r3;
    r0 = (r24 & 65535);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r24 = (r0 & 65535);
    r29 = (r29 + 1);
}

loc_80129D78:
{
    r0 = (r29 & 65535);
}

loc_80129D80:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r26))) {
        goto loc_80129C6C;
    }
}

loc_80129D84:
{
    r3 = 0;
}

loc_80129D88:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80129AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80129AD4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80129AD4 func_80129AD4 preserves=true fpr_mask=0x00000000
