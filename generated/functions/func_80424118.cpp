#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804210D0(CpuContext* ctx);
extern "C" uint32_t func_804210D0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80422E28(CpuContext* ctx);
extern "C" uint32_t func_80422E28_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80424118_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
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
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80424118u);
    goto loc_80424118;

loc_80424118:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r6;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r7 = (r6 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r0 = (r6 ^ r0);
    r0 = (r7 ^ r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r7 = (r6 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r0 = (r6 ^ r0);
    r0 = (r7 ^ r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 11));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r7 = (r6 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_2 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r0 = (r6 ^ r0);
    r0 = (r7 ^ r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 15));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r7 = (r6 ^ r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 12));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 13));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r0 = (r6 ^ r0);
    r0 = (r7 ^ r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_804241E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(128))) {
        goto loc_804241F8;
    }
}

loc_804241E4:
{
}

loc_804241E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(192))) {
        goto loc_80424208;
    }
}

loc_804241EC:
{
}

loc_804241F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(256))) {
        goto loc_80424208;
    }
}

loc_804241F4:
{
    goto loc_80424214;
}

loc_804241F8:
{
    r3 = r5;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804210D0u>(&func_804210D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804210D0_1539 = func_804210D0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_804210D0_1539;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804210D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_80424214;
}

loc_80424208:
{
    r3 = r5;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80422E28u>(&func_80422E28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80422E28_18E1 = func_80422E28_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80422E28_18E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80422E28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80424214:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_10 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_14 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_16 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 20));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 20));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 20));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_19 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 20));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80424118(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80424118_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80424118 func_80424118 preserves=true fpr_mask=0x00000000
