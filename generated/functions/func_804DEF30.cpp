#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);
extern "C" void func_804DE9C0(CpuContext* ctx);
extern "C" uint64_t func_804DE9C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804DEF30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r27_adde_left_0 = 0;
    uint32_t r27_adde_left_1 = 0;
    uint32_t r27_adde_left_2 = 0;
    uint32_t r27_adde_left_3 = 0;
    uint32_t r27_ca_0 = 0;
    uint32_t r27_ca_1 = 0;
    uint32_t r27_ca_2 = 0;
    uint32_t r27_ca_3 = 0;
    uint32_t r28_addc_left_0 = 0;
    uint32_t r28_addc_left_1 = 0;
    uint32_t r28_addc_left_2 = 0;
    uint32_t r28_addc_left_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
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
    uint32_t xer = ctx->xer;

    goto loc_804DEF30;

loc_804DEF30:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r31 = 0x80760000u;
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r11 = (r11_rot_0 & -32);
    r31 = (r31 + -25912);
    r21 = r3;
    r0 = (r31 + 0);
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    r29 = (r0 + r11);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32(r29);
    r30 = r3;
}

loc_804DEF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_804DEF9C;
    }
}

loc_804DEF8C:
{
    r3 = 0x80630000u;
    r0 = MemoryInline::FlatRead32((r3 + -22368));
}

loc_804DEF98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r21))) {
        goto loc_804DEFAC;
    }
}

loc_804DEF9C:
{
    r3 = r30;
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
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804DF084;
}

loc_804DEFAC:
{
    ctx->lr = 0x804DEFB0u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_12F5 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_12F5);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_12F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = (r28 | r27);
    r8 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DEFC8;
    }
}

loc_804DEFBC:
{
    r28 = r4;
    r27 = r8;
    goto loc_804DEFE4;
}

loc_804DEFC8:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r0 = (r31 + 128);
    r6 = (r0 + r5);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32(r6);
    r28_addc_left_1 = r28;
    r28 = (r28_addc_left_1 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r28_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r27_adde_left_1 = r27;
    r27_ca_1 = (xer >> 29) & 1u;
    r27 = (r27_adde_left_1 + r0);
    r27 = (r27 + r27_ca_1);
}

loc_804DEFE4:
{
    r0 = (r3 ^ -2147483648);
    r5 = (r27 ^ -2147483648);
    r3 = (r4 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r5_not_0 = ~(r5);
    r5_ca_0 = (xer >> 29) & 1u;
    r5 = (r5_not_0 + r0);
    r5 = (r5 + r5_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_1 = ~(r0);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r0);
    r5 = (r5 + r5_ca_1);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DF024;
    }
}

loc_804DF000:
{
    r3 = (r21 * 48);
    r0 = (r31 + 192);
    r6 = (r28 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r7 = 0x804E0000u;
    r3 = (r0 + r3);
    r5_not_2 = ~(r8);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r27);
    r5 = (r5 + r5_ca_2);
    r7 = (r7 + -4448);
    ctx->lr = 0x804DF020u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804CBD80_1FD5 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_1FD5);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_1FD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    goto loc_804DF058;
}

loc_804DF024:
{
    r3 = r21;
    r4 = r22;
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    ctx->lr = 0x804DF040u;
    if constexpr (KnownRegArgsCpuCall<0x804DE9C0u>(&func_804DE9C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804DE9C0_260E = func_804DE9C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DE9C0_260E);
        r4 = static_cast<uint32_t>(regargs_result_804DE9C0_260E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DE9C0u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_804DF044:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DF058;
    }
}

loc_804DF048:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
    goto loc_804DF084;
}

loc_804DF058:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r29, r21);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r29 + 4), r22);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r29 + 8), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r29 + 12), r24);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r29 + 16), r25);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r29 + 20), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r29 + 28), r28);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r29 + 24), r27);
    }
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
}

loc_804DF084:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DEF30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DEF30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DEF30 func_804DEF30 preserves=true fpr_mask=0x00000000
