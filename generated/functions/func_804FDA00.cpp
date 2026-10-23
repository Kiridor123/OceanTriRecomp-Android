#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBB20(CpuContext* ctx);
extern "C" void func_804CBB20_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_804CBDF0(CpuContext* ctx);
extern "C" uint64_t func_804CBDF0_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_804CBB20_statefree(uint32_t);

extern "C" uint64_t func_804FDA00_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804FDA00;

loc_804FDA00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = 0x80760000u;
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r25 = r6;
    r31 = (r31 + 3936);
    r27 = 0;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r26 = MemoryInline::FlatRead8((r31 + 1800));
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804FDA44:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(3))) {
        goto loc_804FDB30;
    }
}

loc_804FDA48:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_804FDA54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804FDA88;
    }
}

loc_804FDA58:
{
    r0 = MemoryInline::FlatRead8((r31 + 13));
}

loc_804FDA60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804FDA88;
    }
}

loc_804FDA64:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_804FDA6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804FDA88;
    }
}

loc_804FDA70:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_804FDA78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_804FDA88;
    }
}

loc_804FDA7C:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = 0;
    goto loc_804FDA90;
}

loc_804FDA88:
{
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_14C2 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_14C2;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
}

loc_804FDA90:
{
}

loc_804FDA94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804FDB30;
    }
}

loc_804FDA98:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = (0 - r25);
    r7 = 1;
    r0 = (r0 | r25);
    r5 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r4 = 50;
    r0 = 200;
    r27 = r3;
    MemoryInline::FlatWrite8((r13 + -14027), static_cast<uint8_t>(r30));
    r3 = (r31 + 1808);
    MemoryInline::FlatWriteRam8((r31 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r31 + 1768), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 1769), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r31 + 1767), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r31 + 1766), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r31 + 1864), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r31 + 1866), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804CBB20u) && KnownTranslatedCpuCall<0x804CBB20u>::kAvailable && !KnownTranslatedCpuCall<0x804CBB20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804CBB20u>()) {
        func_804CBB20_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CBB20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = 0x80000000u;
    r9 = 0x80500000u;
    r0 = MemoryInline::FlatRead32((r5 + 248));
    r6 = 274857984;
    r5 = r3;
    r9 = (r9 + -18240);
    r3 = (r6 + 19923);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r6 = r4;
    r3 = (r31 + 1808);
    r7 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r8 = (r0 * 20);
    ctx->lr = 0x804FDB24u;
    if constexpr (KnownRegArgsCpuCall<0x804CBDF0u>(&func_804CBDF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_804CBDF0_2346 = func_804CBDF0_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBDF0_2346);
        r4 = static_cast<uint32_t>(regargs_result_804CBDF0_2346 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CBDF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_2813 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_2813;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 1;
}

loc_804FDB30:
{
    r11 = (r1 + 48);
    r3 = r27;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FDA00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FDA00_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FDA00 func_804FDA00 preserves=true fpr_mask=0x00000000
