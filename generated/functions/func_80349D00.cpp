#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DE560(CpuContext* ctx);
extern "C" uint64_t func_802DE560_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802DFB30(CpuContext* ctx);
extern "C" uint32_t func_802DFB30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80349D00_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80349D00;

loc_80349D00:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r30 = r4;
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r23 = (r4 * r0);
    r25 = 0;
    r31 = 0;
    // inline leaf 0x8029F86C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3 = MemoryInline::FlatRead32((r3 + 1876));
    // end of inlined leaf 0x8029F86C
    r26 = r3;
    r24 = 0;
    r27 = 1;
    r28 = 0;
}

loc_80349D44:
{
    r3 = MemoryInline::FlatRead8(r26);
    ctx->lr = 0x80349D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x802DE560u>(&func_802DE560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DE560_97B = func_802DE560_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802DE560_97B);
        r4 = static_cast<uint32_t>(regargs_result_802DE560_97B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DE560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80349D50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80349DAC;
    }
}

loc_80349D54:
{
}

loc_80349D58:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(r25))) {
        goto loc_80349DA8;
    }
}

loc_80349D5C:
{
    r3 = (r25 - r23);
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80349D68:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80349DA8;
    }
}

loc_80349D6C:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead8(r26);
    ctx->lr = 0x80349D78u;
    if constexpr (KnownRegArgsCpuCall<0x802DFB30u>(&func_802DFB30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DFB30_EB0 = func_802DFB30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802DFB30_EB0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802DFB30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite32((r30 + 8), r3);
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (r0 - r31);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349DA8:
{
    r25 = (r25 + 1);
}

loc_80349DAC:
{
    r24 = (r24 + 1);
    r26 = (r26 + 4);
}

loc_80349DB8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(35))) {
        goto loc_80349D44;
    }
}

loc_80349DBC:
{
}

loc_80349DC0:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80349DEC;
    }
}

loc_80349DC4:
{
    r28 = 0;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r28));
    r3 = 0;
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl2_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F6A8;
    }
}

loc_inl2_0x8029F6A4:
{
    r3 = 0;
}

loc_inl2_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl2_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349DEC:
{
    r28 = 0;
    goto loc_80349E18;
}

loc_80349DF4:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r28));
    r3 = 0;
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl3_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F6A8;
    }
}

loc_inl3_0x8029F6A4:
{
    r3 = 0;
}

loc_inl3_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_inl3_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349E18:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80349E20:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80349DF4;
    }
}

loc_80349E24:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80349D00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80349D00_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80349D00 func_80349D00 preserves=true fpr_mask=0x00000000
