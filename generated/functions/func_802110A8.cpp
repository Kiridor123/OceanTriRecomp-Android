#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B02C(CpuContext* ctx);
extern "C" uint64_t func_8004B02C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80359030(CpuContext* ctx);
extern "C" uint64_t func_80359030_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802110A8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802110A8;

loc_802110A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = r4;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r27 = (r27_rot_0 & -8);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    r3 = (r3 + 324);
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802110EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8021113C;
    }
}

loc_802110F0:
{
    r29 = 0;
    r28 = r30;
}

loc_802110F8:
{
    r4 = (r27 + r29);
}

loc_80211100:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(24))) {
        goto loc_80211128;
    }
}

loc_80211104:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8021110Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004B02Cu>(&func_8004B02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004B02C_990 = func_8004B02C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B02C_990);
        r4 = static_cast<uint32_t>(regargs_result_8004B02C_990 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 65535);
    MemoryInline::FlatWrite16((r28 + 324), static_cast<uint16_t>(r3));
    ctx->lr = 0x80211118u;
    if constexpr (KnownRegArgsCpuCall<0x80359030u>(&func_80359030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359030_D11 = func_80359030_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80359030_D11);
        r4 = static_cast<uint32_t>(regargs_result_80359030_D11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80359030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r28 + 328), r3);
    r3 = MemoryInline::FlatRead16((r30 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
}

loc_80211128:
{
    r28 = (r28 + 12);
    r29 = (r29 + 1);
}

loc_80211134:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_802110F8;
    }
}

loc_80211138:
{
    goto loc_80211180;
}

loc_8021113C:
{
    r27 = 0;
    r29 = 0;
    r28 = r30;
}

loc_80211148:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead16((r3 + 352));
    MemoryInline::FlatWrite16((r28 + 324), static_cast<uint16_t>(r3));
    ctx->lr = 0x8021115Cu;
    if constexpr (KnownRegArgsCpuCall<0x80359030u>(&func_80359030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359030_12E1 = func_80359030_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80359030_12E1);
        r4 = static_cast<uint32_t>(regargs_result_80359030_12E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80359030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r28 + 328), r3);
    r3 = MemoryInline::FlatRead16((r30 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
    r29 = (r29 + 4);
    r28 = (r28 + 12);
    r27 = (r27 + 1);
}

loc_8021117C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(8))) {
        goto loc_80211148;
    }
}

loc_80211180:
{
    r3 = MemoryInline::FlatRead16((r30 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021118C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8021119C;
    }
}

loc_80211190:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
}

loc_8021119C:
{
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r31));
    r3 = 24;
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 60));
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_802111BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802111CC;
    }
}

loc_802111C0:
{
    r3 = MemoryInline::FlatRead16((r30 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
}

loc_802111CC:
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
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802110A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802110A8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802110A8 func_802110A8 preserves=true fpr_mask=0x00000000
