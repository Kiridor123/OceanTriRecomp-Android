#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B4FA4(CpuContext* ctx);
extern "C" uint32_t func_803B4FA4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8031F840_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8031F840;

loc_8031F840:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r30 = r5;
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 26), r0);
    }
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r31 = 0;
    r28 = (r1 + 8);
    goto loc_8031F8CC;
}

loc_8031F89C:
{
    ctx->lr = 0x8031F8A0u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803B1F10_12BD = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_12BD);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_12BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8031F8A4u;
    if constexpr (KnownRegArgsCpuCall<0x803B4FA4u>(&func_803B4FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4FA4_16F4 = func_803B4FA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4FA4_16F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B4FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8031F8A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8031F8C8;
    }
}

loc_8031F8AC:
{
    r0 = MemoryInline::FlatRead16(r27);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r28 = (r28 + 2);
    r31 = (r31 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8031F8C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_8031F8D8;
    }
}

loc_8031F8C8:
{
    r27 = (r27 + 2);
}

loc_8031F8CC:
{
    r3 = MemoryInline::FlatRead16(r27);
}

loc_8031F8D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031F89C;
    }
}

loc_8031F8D8:
{
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8031F8E0:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_8031FBD0;
    }
}

loc_8031F8E4:
{
    r27 = 0;
    r29 = (r1 + 8);
    goto loc_8031F900;
}

loc_8031F8F0:
{
    r3 = MemoryInline::FlatRead16(r29);
    ctx->lr = 0x8031F8F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_8031F900:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_8031F908:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r28))) {
        goto loc_8031F8F0;
    }
}

loc_8031F90C:
{
    r4 = 9;
}

loc_8031F914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8031F92C;
    }
}

loc_8031F918:
{
}

loc_8031F91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8031F934;
    }
}

loc_8031F920:
{
}

loc_8031F924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8031F93C;
    }
}

loc_8031F928:
{
    goto loc_8031F940;
}

loc_8031F92C:
{
    r4 = 10;
    goto loc_8031F940;
}

loc_8031F934:
{
    r4 = 11;
    goto loc_8031F940;
}

loc_8031F93C:
{
    r4 = 12;
}

loc_8031F940:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 54));
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
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r28 = r3;
    r3 = (r3 & 65535);
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl2_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r29 = r3;
    r3 = (r3 & 65535);
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

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r4 = (r29 & 65535);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r0 = (r0 * r5);
    r10 = (r4 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r1 + 8);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = (r28 & 65535);
    r0 = (r0 & 1);
}

loc_8031F9A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031FBD0;
    }
}

loc_8031F9A4:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_8031F9AC:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8031FB98;
    }
}

loc_8031F9B0:
{
    r11 = (r31 - r6);
    r7 = (r31 + -8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
}

loc_8031F9C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8031FB58;
    }
}

loc_8031F9C4:
{
    r8 = 0;
    r4 = 0;
    r9 = 0;
    r0 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8031F9E4;
    }
}

loc_8031F9D8:
{
}

loc_8031F9DC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(32766))) {
        goto loc_8031F9E4;
    }
}

loc_8031F9E0:
{
    r0 = 1;
}

loc_8031F9E4:
{
}

loc_8031F9E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031F9FC;
    }
}

loc_8031F9EC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
}

loc_8031F9F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(32766))) {
        goto loc_8031F9FC;
    }
}

loc_8031F9F8:
{
    r9 = 1;
}

loc_8031F9FC:
{
}

loc_8031FA00:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8031FA14;
    }
}

loc_8031FA04:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
}

loc_8031FA0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-32768))) {
        goto loc_8031FA14;
    }
}

loc_8031FA10:
{
    r4 = 1;
}

loc_8031FA14:
{
}

loc_8031FA18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031FA60;
    }
}

loc_8031FA1C:
{
    r5 = 1;
    r0 = (r31 & -32768);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (0 - r0);
    r0 = (r0 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8031FA3C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8031FA54;
    }
}

loc_8031FA40:
{
    r0 = (r11 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8031FA4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8031FA54;
    }
}

loc_8031FA50:
{
    r5 = 0;
}

loc_8031FA54:
{
}

loc_8031FA58:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031FA60;
    }
}

loc_8031FA5C:
{
    r8 = 1;
}

loc_8031FA60:
{
}

loc_8031FA64:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8031FB58;
    }
}

loc_8031FA68:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r5 = (r1 + 8);
    r5 = (r5 + r0);
    r4 = r5;
    r0 = (r1 + 8);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7 = (r8 + 7);
    r7 = (r7 - r6);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
    ctr = r7;
}

loc_8031FA94:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r8))) {
        goto loc_8031FB58;
    }
}

loc_8031FA98:
{
    r7 = MemoryInline::FlatRead16((r5 + 2));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r7));
    r7 = (r6 + 1);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r7));
    r7 = (r6 + 2);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r7));
    r7 = (r6 + 3);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r7));
    r7 = (r6 + 4);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_6 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r7));
    r7 = (r6 + 5);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r7));
    r7 = (r6 + 6);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_8 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r7));
    r7 = (r6 + 7);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_9 & -2);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), static_cast<uint16_t>(r7));
    r5 = (r5 + 16);
    r4 = (r4 + 16);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8031FA98;
    }
}

loc_8031FB58:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r8 = (r1 + 8);
    r8 = (r8 + r0);
    r7 = r8;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = (r4 - r5);
    ctr = r0;
}

loc_8031FB7C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_8031FB98;
    }
}

loc_8031FB80:
{
    r0 = MemoryInline::FlatRead16((r8 + 2));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r8 = (r8 + 2);
    r7 = (r7 + 2);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8031FB80;
    }
}

loc_8031FB98:
{
    r4 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r5 = (r1 + 8);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite16(r5_addr_1, static_cast<uint16_t>(r4));
    r4 = (r3 & 65535);
    r0 = (r31 + -1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_2);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_8031FBD0:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031F840(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031F840_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031F840 func_8031F840 preserves=true fpr_mask=0x00000000
