#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804575D8(CpuContext* ctx);
extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804CBB30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addc_left_1 = 0;
    uint32_t r4_addc_left_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_ca_5 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r4_not_5 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_ca_5 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_not_5 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_not_1 = 0;
    uint32_t r7_not_2 = 0;
    uint32_t r7_not_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804CBB30u);
    goto loc_804CBB30;

loc_804CBB30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r29 = 0;
    r8 = MemoryInline::FlatRead32((r3 + 28));
    r30 = r3;
    r0 = (r29 ^ -2147483648);
    r4 = (r4 ^ -2147483648);
    r3 = (r29 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r31 = r7;
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_1 = ~(r0);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r0);
    r4 = (r4 + r4_ca_1);
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CBBEC;
    }
}

loc_804CBB74:
{
    ctx->lr = 0x804CBB78u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_12D9 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_12D9);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_12D9 >> 32);
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
    r28 = MemoryInline::FlatRead32((r30 + 32));
    r7 = (r3 ^ -2147483648);
    r27 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r28 ^ -2147483648);
    r5 = r28;
    r6 = (r27 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r7_not_1 = ~(r7);
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r7_not_1 + r0);
    r7 = (r7 + r7_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r7_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_not_2 = ~(r0);
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r7_not_2 + r0);
    r7 = (r7 + r7_ca_2);
    r6 = r27;
    r7 = (0 - r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804CBBEC;
    }
}

loc_804CBBA4:
{
    r26 = MemoryInline::FlatRead32((r30 + 24));
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r25 = MemoryInline::FlatRead32((r30 + 28));
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r28);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    r5 = r26;
    r6 = r25;
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->xer = xer;
        const auto regargs_result_804575D8_1C43 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_1C43);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_1C43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        xer = ctx->xer;
    }
    r0 = 1;
    r4_addc_left_1 = r4;
    r4 = (r4_addc_left_1 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r4)) >> 32));
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r3 + r29);
    r5 = (r5 + r5_ca_1);
    r3 = (r26 * r4);
    r4 = (r25 * r4);
    r3 = (r0 + r3);
    r0 = (r25 * r5);
    r6 = (r27 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r27)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r3 + r0);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r28 + r0);
    r5 = (r5 + r5_ca_2);
}

loc_804CBBEC:
{
    MemoryInline::FlatWrite32(r30, r31);
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWrite32((r30 + 12), r6);
    MemoryInline::FlatWrite32((r30 + 8), r5);
    r7 = MemoryInline::FlatRead32((r13 + -15120));
    goto loc_804CBCC4;
}

loc_804CBC04:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
    r5 = MemoryInline::FlatRead32((r7 + 12));
    r4 = (r3 ^ -2147483648);
    r3 = (r6 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_3 = ~(r4);
    r4_ca_3 = (xer >> 29) & 1u;
    r4 = (r4_not_3 + r0);
    r4 = (r4 + r4_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_4 = ~(r0);
    r4_ca_4 = (xer >> 29) & 1u;
    r4 = (r4_not_4 + r0);
    r4 = (r4 + r4_ca_4);
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CBCC0;
    }
}

loc_804CBC24:
{
    r0 = MemoryInline::FlatRead32((r7 + 16));
    MemoryInline::FlatWrite32((r30 + 16), r0);
    MemoryInline::FlatWrite32((r7 + 16), r30);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWrite32((r30 + 20), r7);
}

loc_804CBC3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CBC48;
    }
}

loc_804CBC40:
{
    MemoryInline::FlatWrite32((r3 + 20), r30);
    goto loc_804CBD68;
}

loc_804CBC48:
{
    MemoryInline::FlatWrite32((r13 + -15120), r30);
    ctx->lr = 0x804CBC50u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_2B94 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_2B94);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_2B94 >> 32);
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
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r6 = (r7 ^ -2147483648);
    r8 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r3);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r5);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r5);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r5);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CBC8C;
    }
}

loc_804CBC80:
{
    r3 = 0;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBD68;
}

loc_804CBC8C:
{
    r4 = 0x80000000u;
    r3 = (r7 ^ -2147483648);
    r0 = (r8 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_3 = ~(r3);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r5);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_4 = ~(r5);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r5);
    r3 = (r3 + r3_ca_4);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CBCB4;
    }
}

loc_804CBCA8:
{
    r3 = r8;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBD68;
}

loc_804CBCB4:
{
    r3 = (r4 + -1);
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBD68;
}

loc_804CBCC0:
{
    r7 = MemoryInline::FlatRead32((r7 + 20));
}

loc_804CBCC4:
{
}

loc_804CBCC8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804CBC04;
    }
}

loc_804CBCCC:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r31);
    r3 = (r13 + -15120);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r30);
}

loc_804CBCE4:
{
    MemoryInline::FlatWrite32((r30 + 16), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CBCF4;
    }
}

loc_804CBCEC:
{
    MemoryInline::FlatWrite32((r4 + 20), r30);
    goto loc_804CBD68;
}

loc_804CBCF4:
{
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32((r13 + -15120), r30);
    ctx->lr = 0x804CBD00u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_3D1E = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_3D1E);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_3D1E >> 32);
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
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r6 = (r31 ^ -2147483648);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r7 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r3);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_2);
    r5 = (r0 ^ -2147483648);
    r0 = (r7 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r6_not_3 = ~(r6);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r6_not_3 + r5);
    r6 = (r6 + r6_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_4 = ~(r5);
    r6_ca_4 = (xer >> 29) & 1u;
    r6 = (r6_not_4 + r5);
    r6 = (r6 + r6_ca_4);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CBD38;
    }
}

loc_804CBD2C:
{
    r3 = 0;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBD68;
}

loc_804CBD38:
{
    r4 = 0x80000000u;
    r3 = (r31 ^ -2147483648);
    r0 = (r7 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_5 = ~(r3);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r5);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_6 = ~(r5);
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r3_not_6 + r5);
    r3 = (r3 + r3_ca_6);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CBD60;
    }
}

loc_804CBD54:
{
    r3 = r7;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBD68;
}

loc_804CBD60:
{
    r3 = (r4 + -1);
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
}

loc_804CBD68:
{
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CBB30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CBB30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CBB30 func_804CBB30 preserves=true fpr_mask=0x00000000
