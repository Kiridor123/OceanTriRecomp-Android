#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077E98(CpuContext* ctx);
extern "C" uint32_t func_80077E98_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80077E98_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007E860_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    goto loc_8007E860;

loc_8007E860:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    ctx->lr = 0x8007E88Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80077E98u) && KnownTranslatedCpuCall<0x80077E98u>::kAvailable && !KnownTranslatedCpuCall<0x80077E98u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80077E98u>()) {
        const auto state_free_result_80077E98_807 = func_80077E98_statefree(r1, r3, r4, 0x8007E88Cu);
        r0 = static_cast<uint32_t>(state_free_result_80077E98_807[0]);
        r1 = static_cast<uint32_t>(state_free_result_80077E98_807[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80077E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r27 + 328));
}

loc_8007E8A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E8F4;
    }
}

loc_8007E8A4:
{
    r28 = 0;
    r31 = 0;
    r30 = 1;
    goto loc_8007E8EC;
}

loc_8007E8B4:
{
    r3 = (r1 + 16);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80078968u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8007E8D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007E8E0;
    }
}

loc_8007E8D4:
{
    r3 = MemoryInline::FlatRead32((r27 + 328));
    r3_addr_2 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r30));
    goto loc_8007E8E8;
}

loc_8007E8E0:
{
    r3 = MemoryInline::FlatRead32((r27 + 328));
    r3_addr_3 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r31));
}

loc_8007E8E8:
{
    r28 = (r28 + 1);
}

loc_8007E8EC:
{
}

loc_8007E8F0:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8007E8B4;
    }
}

loc_8007E8F4:
{
    r0 = MemoryInline::FlatRead32((r27 + 316));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r27 + 316), r0);
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007E860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007E860_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007E860 func_8007E860 preserves=true fpr_mask=0x00000000
