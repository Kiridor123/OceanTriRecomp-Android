#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CEF7C(CpuContext* ctx);
extern "C" uint32_t func_800CEF7C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803C5CC8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x803C5CC8u);
    goto loc_803C5CC8;

loc_803C5CC8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r26 = r4;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 148), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 150), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 152), static_cast<uint16_t>(r0));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r25 = MemoryInline::FlatRead16((r3 + 60));
    r24 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r29 = (r0 * 73);
    goto loc_803C5D20;
}

loc_803C5D10:
{
    r3 = (r25 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r25 = r3;
    r24 = (r24 + 1);
}

loc_803C5D20:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
}

loc_803C5D28:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r29))) {
        goto loc_803C5D10;
    }
}

loc_803C5D2C:
{
    r3 = (r28 + 154);
    r4 = 0;
    r5 = 200;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r3 = 0x80600000u;
    r3 = (r3 + -27304);
    r3_addr_0 = (r3 + r30);
    r29 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = (r25 & 65535);
    r4 = 1431633920;
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r3 - r0);
    r24 = (r0 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl2_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF8C;
    }
}

loc_inl2_0x800CEF88:
{
    r0 = 1;
}

loc_inl2_0x800CEF8C:
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
}

loc_inl2_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004DDD8u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
}

loc_803C5D88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803C5DA4;
    }
}

loc_803C5D8C:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 1);
}

loc_803C5D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C5DA4;
    }
}

loc_803C5D9C:
{
    r0 = (r24 + 3);
    r24 = (r0 & 65535);
}

loc_803C5DA4:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r24 = (r0 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r29_addr_0 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_0);
    MemoryInline::FlatWrite16((r28 + 108), static_cast<uint16_t>(r0));
    r0 = (r24 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r29_addr_1 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_1);
    MemoryInline::FlatWrite16((r28 + 110), static_cast<uint16_t>(r0));
    r0 = (r24 + 2);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_2);
    MemoryInline::FlatWrite16((r28 + 112), static_cast<uint16_t>(r0));
    r0 = (r24 + 3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r29_addr_3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_3);
    MemoryInline::FlatWrite16((r28 + 114), static_cast<uint16_t>(r0));
    r3 = (r28 + 154);
    r4 = 0;
    r5 = 200;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80600000u;
    r3 = (r3 + -27292);
    r3_addr_1 = (r3 + r30);
    r4 = MemoryInline::FlatRead32(r3_addr_1);
    r29 = 0;
    r3 = r28;
    goto loc_803C5E20;
}

loc_803C5E10:
{
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r29 = (r29 + 1);
    r4 = (r4 + 2);
}

loc_803C5E20:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803C5E28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C5E10;
    }
}

loc_803C5E2C:
{
    r3 = (r31 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl3_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl3_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF8C;
    }
}

loc_inl3_0x800CEF88:
{
    r0 = 1;
}

loc_inl3_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_10 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r25 = r3;
    r26 = 0;
    r30 = r28;
    r31 = r28;
}

loc_803C5E44:
{
    r3 = (r25 & 65535);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r24 = (r0 & 65535);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r27 = (r28 + r0);
    r27 = (r27 + 154);
    r0 = MemoryInline::FlatRead16(r27);
    MemoryInline::FlatWrite16((r30 + 116), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x800CEF7Cu>(&func_800CEF7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_800CEF7C_272F = func_800CEF7C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CEF7C_272F;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CEF7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r25 = r3;
    r5 = (r24 + 1);
    r3 = r27;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r4 = (r28 + r0);
    r4 = (r4 + 154);
    r0 = (100 - r5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r30 + 116));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C5EA4u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_2C1A = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_2C1A);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_2C1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r31 + 128), r3);
    r29 = (r29 + -1);
    r30 = (r30 + 2);
    r31 = (r31 + 4);
    r26 = (r26 + 1);
}

loc_803C5EBC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(5))) {
        goto loc_803C5E44;
    }
}

loc_803C5EC0:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C5CC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C5CC8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C5CC8 func_803C5CC8 preserves=true fpr_mask=0x00000000
