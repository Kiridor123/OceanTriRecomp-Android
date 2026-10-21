#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004C068(CpuContext* ctx);
extern "C" uint32_t func_8004C068_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8039CD80(CpuContext* ctx);
extern "C" uint64_t func_8039CD80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8039CE18_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8039CE18u);
    goto loc_8039CE18;

loc_8039CE18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r25 = r4;
    r26 = r5;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r28 = r3;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r29 = r3;
    r30 = 0;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    r3 = (r27 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl3_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F758;
    }
}

loc_inl3_0x8029F754:
{
    r3 = 0;
}

loc_inl3_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl3_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r31 = r3;
    r3 = (r27 & 65535);
    ctx->lr = 0x8039CE64u;
    if constexpr (KnownRegArgsCpuCall<0x8039CD80u>(&func_8039CD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039CD80_B43 = func_8039CD80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8039CD80_B43);
        r4 = static_cast<uint32_t>(regargs_result_8039CD80_B43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8039CD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8039CE6C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039CEB4;
    }
}

loc_8039CE70:
{
    r4 = MemoryInline::FlatRead8((r31 + 3));
}

loc_8039CE78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8039CE88;
    }
}

loc_8039CE7C:
{
    r27 = 1;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    goto loc_8039CF1C;
}

loc_8039CE88:
{
    r0 = (r4 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
}

loc_8039CE9C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8039CEA8;
    }
}

loc_8039CEA0:
{
    r27 = 2;
    goto loc_8039CF1C;
}

loc_8039CEA8:
{
    r27 = 0;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r25));
    goto loc_8039CF1C;
}

loc_8039CEB4:
{
    r27 = 3;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8039CEC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8039CEFC;
    }
}

loc_8039CEC8:
{
    r3 = r28;
    ctx->lr = 0x8039CED0u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_134A = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_134A);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_134A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039CED4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8039CEFC;
    }
}

loc_8039CED8:
{
    r3 = (r29 + 436);
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_16E4 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_16E4;
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
}

loc_8039CEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039CEFC;
    }
}

loc_8039CEF0:
{
    r27 = 0;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r25));
    goto loc_8039CF1C;
}

loc_8039CEFC:
{
    r3 = (r29 + 340);
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_1A61 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_1A61;
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
}

loc_8039CF10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039CF1C;
    }
}

loc_8039CF14:
{
    r27 = 0;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r25));
}

loc_8039CF1C:
{
    r3 = r27;
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
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039CE18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039CE18_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039CE18 func_8039CE18 preserves=true fpr_mask=0x00000000
