#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80452590_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80452590;

loc_80452590:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r29 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = (r3 + -1);
}

loc_804525C0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_804525CC;
    }
}

loc_804525C4:
{
    r3 = 0;
    goto loc_80452654;
}

loc_804525CC:
{
    r27 = 0;
    r26 = 0;
    r28 = 0;
    r30 = (r29 + 1640);
    r31 = 40;
    goto loc_80452644;
}

loc_804525E4:
{
    r0 = MemoryInline::FlatRead32((r30 + 60));
}

loc_804525EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r22))) {
        goto loc_8045263C;
    }
}

loc_804525F0:
{
}

loc_804525F4:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r24))) {
        goto loc_80452600;
    }
}

loc_804525F8:
{
    r27 = (r27 + 1);
    goto loc_8045263C;
}

loc_80452600:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32(r23, r0);
    r0 = MemoryInline::FlatRead32((r30 + 44));
    MemoryInline::FlatWrite32((r23 + 4), r0);
    MemoryInline::FlatWrite16((r23 + 8), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 10), static_cast<uint16_t>(r0));
    r3 = (r23 + 12);
    r4 = (r30 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_B95 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_B95;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r26 = (r26 + 1);
}

loc_80452634:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r25))) {
        goto loc_80452650;
    }
}

loc_80452638:
{
    r23 = (r23 + 44);
}

loc_8045263C:
{
    r30 = (r30 + 64);
    r28 = (r28 + 1);
}

loc_80452644:
{
    r0 = MemoryInline::FlatRead32((r29 + 1632));
}

loc_8045264C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_804525E4;
    }
}

loc_80452650:
{
    r3 = r26;
}

loc_80452654:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80452590(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80452590_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80452590 func_80452590 preserves=true fpr_mask=0x00000000
