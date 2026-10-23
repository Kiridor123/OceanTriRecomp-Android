#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047B278(CpuContext* ctx);
extern "C" uint32_t func_8047B278_ra58_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047DB14_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8047DB14;

loc_8047DB14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_8047DB2C:
{
    r30 = r4;
    r31 = r5;
    r26 = r6;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047DC04;
    }
}

loc_8047DB3C:
{
    r3 = 0x80740000u;
    r27 = 0;
    r29 = (r3 + -18476);
    goto loc_8047DBF4;
}

loc_8047DB4C:
{
    r0 = (r27 & 255);
    r4 = r26;
    r28 = (r0 * 11);
    r3 = (r29 + r28);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_7EA = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_7EA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047DB64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047DBF0;
    }
}

loc_8047DB68:
{
    r3 = (r29 + r28);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r7 = 1;
    r6 = MemoryInline::FlatRead32((r13 + -20704));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    goto loc_8047DBE0;
}

loc_8047DB84:
{
    r3 = (r7 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5 = (r0 - r3);
    r3 = (r6 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8047DB9C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_8047DBA8;
    }
}

loc_8047DBA0:
{
}

loc_8047DBA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8047DBDC;
    }
}

loc_8047DBA8:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8047DBB0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8047DBDC;
    }
}

loc_8047DBB4:
{
    r3 = 0x80740000u;
    r4 = (r6 + r5);
    r3 = (r3 + -18476);
    r4 = MemoryInline::FlatRead8((r4 + 2));
    r3 = (r3 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8047DBD0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8047DC04;
    }
}

loc_8047DBD4:
{
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    goto loc_8047DC04;
}

loc_8047DBDC:
{
    r7 = (r7 + 1);
}

loc_8047DBE0:
{
    r0 = (r7 & 255);
}

loc_8047DBE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_8047DB84;
    }
}

loc_8047DBEC:
{
    goto loc_8047DC04;
}

loc_8047DBF0:
{
    r27 = (r27 + 1);
}

loc_8047DBF4:
{
    r0 = MemoryInline::FlatRead8((r29 + 77));
    r3 = (r27 & 255);
}

loc_8047DC00:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047DB4C;
    }
}

loc_8047DC04:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047DB14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047DB14_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047DB14 func_8047DB14 preserves=true fpr_mask=0x00000000
