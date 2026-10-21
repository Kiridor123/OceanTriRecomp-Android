#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D4C0(CpuContext* ctx);
extern "C" uint32_t func_8004D4C0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021AD30(CpuContext* ctx);
extern "C" uint32_t func_8021AD30_ra58_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021AD78_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021AD78u);
    goto loc_8021AD78;

loc_8021AD78:
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
    r27 = r4;
    r29 = 0;
    r30 = 0;
    r3 = 0x805C0000u;
    r31 = (r3 + -25120);
}

loc_8021ADA4:
{
    r28 = MemoryInline::FlatRead32(r31);
}

loc_8021ADAC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8021ADE0;
    }
}

loc_8021ADB0:
{
    goto loc_8021ADD4;
}

loc_8021ADB4:
{
    r3 = (r30 & 255);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8004D4C0u>(&func_8004D4C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D4C0_793 = func_8004D4C0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004D4C0_793;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D4C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8021ADC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021ADD0;
    }
}

loc_8021ADC8:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8021ADD0:
{
    r28 = (r28 + 2);
}

loc_8021ADD4:
{
    r4 = MemoryInline::FlatRead16(r28);
}

loc_8021ADDC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_8021ADB4;
    }
}

loc_8021ADE0:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_8021ADEC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(16))) {
        goto loc_8021ADA4;
    }
}

loc_8021ADF0:
{
}

loc_8021ADF4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(13))) {
        goto loc_8021AE04;
    }
}

loc_8021ADF8:
{
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    if constexpr (KnownRegArgsCpuCall<0x8021AD30u>(&func_8021AD30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021AD30_D74 = func_8021AD30_ra58_0_10_0(ctx, r3, r4, r6);
        r4 = regargs_result_8021AD30_D74;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021AD30u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8021AE04:
{
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

extern "C" void func_8021AD78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021AD78_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021AD78 func_8021AD78 preserves=true fpr_mask=0x00000000
