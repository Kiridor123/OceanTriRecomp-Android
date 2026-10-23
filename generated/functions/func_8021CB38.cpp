#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021BDAC(CpuContext* ctx);
extern "C" uint32_t func_8021BDAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8021CB38_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8021CB38;

loc_8021CB38:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -544), 0, 552u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 548u, (r1 + 548), r0);
    r11 = (r1 + 544);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 512;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 0;
    r29 = MemoryInline::FlatRead32(r26);
    r27 = 0;
    r31 = r29;
    r30 = (r1 + 8);
    goto loc_8021CBA0;
}

loc_8021CB78:
{
    r3 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x8021CB80u;
    if constexpr (KnownRegArgsCpuCall<0x8021BDACu>(&func_8021BDAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021BDAC_853 = func_8021BDAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021BDAC_853;
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
        InvokeDirectCpu<0x8021BDACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8021CB84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021CB98;
    }
}

loc_8021CB88:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    MemoryInline::FlatWrite32(r30, r0);
    r30 = (r30 + 4);
    r28 = (r28 + 1);
}

loc_8021CB98:
{
    r31 = (r31 + 8);
    r27 = (r27 + 1);
}

loc_8021CBA0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = MemoryInline::FlatRead16((r26 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021CBAC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021CB78;
    }
}

loc_8021CBB0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_8021CBB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021CBC4;
    }
}

loc_8021CBBC:
{
    r0 = 0;
    goto loc_8021CBE4;
}

loc_8021CBC4:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_800CEF20_F19 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_F19;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = (r3 & 65535);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021CBE4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r1 + 8);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r11 = (r1 + 544);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021CB38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021CB38_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000205B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021CB38 func_8021CB38 preserves=true fpr_mask=0x00000000
