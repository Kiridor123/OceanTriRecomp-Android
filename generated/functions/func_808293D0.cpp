#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E410(CpuContext* ctx);
extern "C" uint64_t func_8046E410_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046E8A0(CpuContext* ctx);
extern "C" uint64_t func_8046E8A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_808293D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_808293D0;

loc_808293D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = -1;
    if constexpr (KnownRegArgsCpuCall<0x8046E410u>(&func_8046E410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E410_888 = func_8046E410_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E410_888);
        r4 = static_cast<uint32_t>(regargs_result_8046E410_888 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_80829404:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_808294B4;
    }
}

loc_80829408:
{
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x80829414u;
    if constexpr (KnownRegArgsCpuCall<0x8046E8A0u>(&func_8046E8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E8A0_D71 = func_8046E8A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E8A0_D71);
        r4 = static_cast<uint32_t>(regargs_result_8046E8A0_D71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E8A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_80829418:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808294B4;
    }
}

loc_8082941C:
{
}

loc_80829420:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80829438;
    }
}

loc_80829424:
{
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x80829430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808292F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = r3;
    goto loc_808294A4;
}

loc_80829438:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 65535);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 16777215);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = r26;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x8046E410u>(&func_8046E410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E410_17A4 = func_8046E410_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E410_17A4);
        r4 = static_cast<uint32_t>(regargs_result_8046E410_17A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_8082946C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_808294A4;
    }
}

loc_80829470:
{
    r3 = r26;
    r4 = (r1 + 8);
    ctx->lr = 0x8082947Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046E8A0u>(&func_8046E8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E8A0_1C95 = func_8046E8A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E8A0_1C95);
        r4 = static_cast<uint32_t>(regargs_result_8046E8A0_1C95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E8A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_80829480:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808294A4;
    }
}

loc_80829484:
{
    r3 = r26;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8046E410u>(&func_8046E410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E410_2164 = func_8046E410_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E410_2164);
        r4 = static_cast<uint32_t>(regargs_result_8046E410_2164 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r4 = 0x80840000u;
    r31 = r3;
    r3 = r26;
    r4 = (r4 + 25244);
    ctx->lr = 0x808294A4u;
    if constexpr (KnownRegArgsCpuCall<0x8046E8A0u>(&func_8046E8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E8A0_25EB = func_8046E8A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E8A0_25EB);
        r4 = static_cast<uint32_t>(regargs_result_8046E8A0_25EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E8A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_808294A4:
{
    r4 = 0x80840000u;
    r3 = r26;
    r4 = (r4 + 25244);
    ctx->lr = 0x808294B4u;
    if constexpr (KnownRegArgsCpuCall<0x8046E8A0u>(&func_8046E8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8046E8A0_2A7A = func_8046E8A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E8A0_2A7A);
        r4 = static_cast<uint32_t>(regargs_result_8046E8A0_2A7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8046E8A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_808294B4:
{
}

loc_808294B8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-1))) {
        goto loc_808294FC;
    }
}

loc_808294BC:
{
    r3 = r26;
    r4 = r31;
    r5 = (r1 + 16);
    // inline leaf 0x8046E3C0 (20 guest instruction(s))
}

loc_inl1_0x8046E3C0:
{
}

loc_inl1_0x8046E3C4:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x8046E3E8;
    }
}

loc_inl1_0x8046E3CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl1_0x8046E3D4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8046E3E8;
    }
}

loc_inl1_0x8046E3D8:
{
    r4 = (r4 * 12);
    r6_addr_1 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r0 & -16777216);
}

loc_inl1_0x8046E3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8046E3F0;
    }
}

loc_inl1_0x8046E3E8:
{
    r3 = 0;
    goto loc_inl1_cont_8046E3C0;
}

loc_inl1_0x8046E3F0:
{
    MemoryInline::FlatWriteRam32(r5, r3);
    r4 = (r6 + r4);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r5 + 8), r0);
}

loc_inl1_cont_8046E3C0:
{
    // end of inlined leaf 0x8046E3C0
    r3 = (r1 + 16);
    // inline leaf 0x8046E860 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8046E860
}

loc_808294D8:
{
    r31 = r3;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_808294EC;
    }
}

loc_808294E0:
{
    r3 = (r1 + 16);
    // inline leaf 0x8046E880 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8046E880
    MemoryInline::FlatWrite32(r30, r3);
}

loc_808294EC:
{
    r3 = (r1 + 16);
    // inline leaf 0x8046E890 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8046E890
    r3 = r31;
    goto loc_80829500;
}

loc_808294FC:
{
    r3 = 0;
}

loc_80829500:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808293D0 func_808293D0 preserves=true fpr_mask=0x00000000
