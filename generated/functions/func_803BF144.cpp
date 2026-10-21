#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803BF144_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803BF144u);
    goto loc_803BF144;

loc_803BF144:
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
    r4 = 0x806C0000u;
    r4 = (r4 + 6576);
    r30 = MemoryInline::FlatRead16((r3 + 4));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
}

loc_803BF16C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_803BF178;
    }
}

loc_803BF170:
{
    r3 = 0;
    goto loc_803BF1E4;
}

loc_803BF178:
{
    r27 = (r4 + 296);
    r28 = 0;
    r29 = 1;
    r31 = (r4 + 292);
}

loc_803BF188:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BF194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BF1CC;
    }
}

loc_803BF198:
{
    r3 = (r26 + 31);
    r4 = r27;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_857 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_857);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_857 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803BF1AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BF1BC;
    }
}

loc_803BF1B0:
{
    MemoryInline::FlatWrite16((r26 + 12), static_cast<uint16_t>(r28));
    r3 = (r27 + 32);
    goto loc_803BF1E4;
}

loc_803BF1BC:
{
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_803BF1C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r30))) {
        goto loc_803BF1E0;
    }
}

loc_803BF1CC:
{
    r31 = (r31 + 288);
    r29 = (r29 + 1);
    r27 = (r27 + 288);
}

loc_803BF1DC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_803BF188;
    }
}

loc_803BF1E0:
{
    r3 = 0;
}

loc_803BF1E4:
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

extern "C" void func_803BF144(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BF144_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BF144 func_803BF144 preserves=true fpr_mask=0x00000000
