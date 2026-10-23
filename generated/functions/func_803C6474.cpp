#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004C068(CpuContext* ctx);
extern "C" uint32_t func_8004C068_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80359338(CpuContext* ctx);
extern "C" uint64_t func_80359338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C6474_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803C6474;

loc_803C6474:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r30 = r4;
    r31 = r5;
    r27 = r6;
    r28 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r29 = (r0 * r5);
    r3 = MemoryInline::FlatRead16(r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    ctx->lr = 0x803C64BCu;
    if constexpr (KnownRegArgsCpuCall<0x80359338u>(&func_80359338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359338_AA8 = func_80359338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80359338_AA8);
        r4 = static_cast<uint32_t>(regargs_result_80359338_AA8 >> 32);
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
        InvokeDirectCpu<0x80359338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C64C0:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r3))) {
        goto loc_803C6558;
    }
}

loc_803C64C4:
{
    r28 = (r28 | 128);
    r29 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_803C64D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803C64F8;
    }
}

loc_803C64D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C64E0u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_FF4 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_FF4;
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
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 384);
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_130D = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_130D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r29 = (r3 & 65535);
    goto loc_803C6548;
}

loc_803C64F8:
{
    r3 = MemoryInline::FlatRead16(r30);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803C6508:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803C6530;
    }
}

loc_803C650C:
{
    r3 = MemoryInline::FlatRead32((r26 + 484));
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_803C6518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803C6530;
    }
}

loc_803C651C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 352);
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_1B9A = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_1B9A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r29 = (r3 & 65535);
}

loc_803C6530:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C6538u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_1E8B = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_1E8B;
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
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_2157 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_2157;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
    r29 = (r29 + r0);
}

loc_803C6548:
{
}

loc_803C654C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803C6558;
    }
}

loc_803C6550:
{
    r0 = (r28 | 2);
    r28 = (r0 & 65535);
}

loc_803C6558:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r0 * r31);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_803C656C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_803C6578;
    }
}

loc_803C6570:
{
    r0 = (r28 | 4);
    r28 = (r0 & 65535);
}

loc_803C6578:
{
    r3 = MemoryInline::FlatRead16((r30 + 2));
    ctx->lr = 0x803C6580u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_26B4 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_26B4);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_26B4 >> 32);
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
}

loc_803C6584:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r31))) {
        goto loc_803C6590;
    }
}

loc_803C6588:
{
    r0 = (r28 | 8);
    r28 = (r0 & 65535);
}

loc_803C6590:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x803C659Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_2B66 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_2B66);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_2B66 >> 32);
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
}

loc_803C65A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r31))) {
        goto loc_803C65AC;
    }
}

loc_803C65A4:
{
    r0 = (r28 | 8);
    r28 = (r0 & 65535);
}

loc_803C65AC:
{
    r3 = r28;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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

extern "C" void func_803C6474(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C6474_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C6474 func_803C6474 preserves=true fpr_mask=0x00000000
