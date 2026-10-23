#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E3C0(CpuContext* ctx);
extern "C" uint64_t func_8046E3C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081DC90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081DC90;

loc_8081DC90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = MemoryInline::FlatRead8((r3 + 492));
    r26 = r3;
    r27 = r4;
    r28 = r5;
}

loc_8081DCB8:
{
    r29 = r6;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081DD10;
    }
}

loc_8081DCC0:
{
    r4 = r28;
    r5 = (r1 + 8);
    r3 = (r3 + 464);
    if constexpr (KnownRegArgsCpuCall<0x8046E3C0u>(&func_8046E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046E3C0_6A0 = func_8046E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E3C0_6A0);
        r4 = static_cast<uint32_t>(regargs_result_8046E3C0_6A0 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 8);
    // inline leaf 0x8046E860 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8046E860
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x8046E880 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8046E880
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x8046E890 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8046E890
    r3 = (r27 * 104);
    r0 = 0;
    r3 = (r26 + r3);
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 88), r28);
    MemoryInline::FlatWrite32((r3 + 84), r31);
    MemoryInline::FlatWrite8((r3 + 93), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite32((r3 + 80), r30);
}

loc_8081DD10:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081DC90 func_8081DC90 preserves=true fpr_mask=0x00000000
