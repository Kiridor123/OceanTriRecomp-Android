#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9664(CpuContext* ctx);
extern "C" uint32_t func_801E9664_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E9970(CpuContext* ctx);
extern "C" uint64_t func_801E9970_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802FB5B0(CpuContext* ctx);
extern "C" uint32_t func_802FB5B0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801E96A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_801E96A4;

loc_801E96A4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r30 = r3;
    r3 = 0x805C0000u;
    r31 = (r3 + -32184);
    r3 = 0;
    r4 = 0x80660000u;
    r7 = (r4 + -19148);
    r6 = r3;
    r5 = r3;
    r4 = r3;
    r0 = 17;
    ctr = r0;
}

loc_801E96E4:
{
    r8 = (r7 + r3);
    MemoryInline::FlatWrite16((r8 + 50), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r8 + 52), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r8 + 54), static_cast<uint16_t>(r4));
    r3 = (r3 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E96E4;
    }
}

loc_801E96FC:
{
    r3 = 0x805C0000u;
    r7 = (r3 + -20844);
    r8 = 0;
    r3 = 0x80660000u;
    r4 = (r3 + -19148);
    r0 = 0;
    goto loc_801E9744;
}

loc_801E9718:
{
    r5 = (r8 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r3 - r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r5 = (r4 + r3);
    MemoryInline::FlatWrite16((r5 + 50), static_cast<uint16_t>(r6));
    r3 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::FlatWrite16((r5 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 54), static_cast<uint16_t>(r0));
    r8 = (r8 + 1);
    r7 = (r7 + 6);
}

loc_801E9744:
{
    r6 = MemoryInline::FlatRead16(r7);
}

loc_801E974C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801E9718;
    }
}

loc_801E9750:
{
    r3 = 0x805C0000u;
    r6 = (r3 + -20776);
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    goto loc_801E9794;
}

loc_801E9764:
{
    r4 = (r8 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r0 - r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 50), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r6 + 2));
    MemoryInline::FlatWrite16((r4 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 4));
    MemoryInline::FlatWrite16((r4 + 54), static_cast<uint16_t>(r0));
    r8 = (r8 + 1);
    r6 = (r6 + 8);
}

loc_801E9794:
{
    r5 = MemoryInline::FlatRead16(r6);
}

loc_801E979C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801E9764;
    }
}

loc_801E97A0:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 12);
    r4 = 0;
    r5 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 10;
    ctx->lr = 0x801E97C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_801E97CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E97D8;
    }
}

loc_801E97D0:
{
    r28 = 0;
    goto loc_801E9808;
}

loc_801E97D8:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r0 = (r4 - r0);
    r28 = (r0 & 255);
}

loc_801E9808:
{
    r3 = 0;
    ctx->lr = 0x801E9810u;
    if constexpr (KnownRegArgsCpuCall<0x802FB5B0u>(&func_802FB5B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FB5B0_1EF7 = func_802FB5B0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FB5B0_1EF7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802FB5B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = (r3 & 255);
    r27 = 0;
    r25 = 0;
    r29 = (r1 + 12);
    goto loc_801E9864;
}

loc_801E9824:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_801E982C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801E985C;
    }
}

loc_801E9830:
{
}

loc_801E9834:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r26))) {
        goto loc_801E985C;
    }
}

loc_801E9838:
{
    r3 = r30;
    r4 = 2;
    r5 = (r25 & 255);
    if constexpr (KnownRegArgsCpuCall<0x801E9664u>(&func_801E9664)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_801E9664_23EB = func_801E9664_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801E9664_23EB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801E9664u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_801E984C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E985C;
    }
}

loc_801E9850:
{
    r0 = (r27 & 255);
    r29_addr_2 = (r29 + r0);
    MemoryInline::FlatWrite8(r29_addr_2, static_cast<uint8_t>(r25));
    r27 = (r27 + 1);
}

loc_801E985C:
{
    r25 = (r25 + 1);
    r31 = (r31 + 4);
}

loc_801E9864:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801E986C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_801E9824;
    }
}

loc_801E9870:
{
    r30 = 0;
    r29 = (r1 + 8);
    goto loc_801E9890;
}

loc_801E987C:
{
    r3 = (r1 + 12);
    ctx->lr = 0x801E9884u;
    if constexpr (KnownRegArgsCpuCall<0x801E9970u>(&func_801E9970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801E9970_29EC = func_801E9970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E9970_29EC);
        r4 = static_cast<uint32_t>(regargs_result_801E9970_29EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801E9970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r3));
    r29 = (r29 + 1);
    r30 = (r30 + 1);
}

loc_801E9890:
{
}

loc_801E9894:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r28))) {
        goto loc_801E987C;
    }
}

loc_801E9898:
{
    r3 = 0x80660000u;
    r4 = (r3 + -19148);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r1 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 30), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 30), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 31), static_cast<uint8_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 32), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 33), static_cast<uint8_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r1 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 34), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 35), static_cast<uint8_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 37), static_cast<uint8_t>(r3));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E96A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E96A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E96A4 func_801E96A4 preserves=true fpr_mask=0x00000000
