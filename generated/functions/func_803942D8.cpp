#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803942D8_ra700_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r8, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[8] = arg_r8;
    ctx->gpr[9] = arg_r9;
    ctx->gpr[10] = arg_r10;

    goto loc_803942D8;

loc_803942D8:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r3));
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 606), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 588), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 586), static_cast<uint16_t>(r31));
    r0 = 4;
    MemoryInline::FlatWrite16((r30 + 594), static_cast<uint16_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 608), static_cast<uint8_t>(r0));
}

loc_803946F8:
{
    r3 = 0x80390000u;
    r3 = (r3 + 21856);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80049240_63E = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_63E);
        r4 = static_cast<uint32_t>(regargs_result_80049240_63E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803942D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803942D8_ra700_0_18_0(ctx, ctx->gpr[8], ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xC0000702 gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803942D8 func_803942D8 preserves=true fpr_mask=0x00000000
