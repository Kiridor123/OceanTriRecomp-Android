#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AAFEC(CpuContext* ctx);
extern "C" uint64_t func_803AAFEC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800FE0C8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800FE0C8u);
    goto loc_800FE0C8;

loc_800FE0C8:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    ctx->lr = 0x800FE0D0u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_3FD = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_3FD);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_3FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800FE0D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FE0E8;
    }
}

loc_800FE0DC:
{
    r3 = 1768;
    r4 = 7;
    goto loc_800FE0F0;
}

loc_800FE0E8:
{
    r3 = 1766;
    r4 = 9;
}

loc_800FE0F0:
{
    r5 = 120;
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
}

loc_800FE8E8:
{
    MemoryInline::FlatWrite32(r29, r4);
    MemoryInline::FlatWrite32((r29 + 208), r3);
    MemoryInline::FlatWrite32((r29 + 212), r5);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 124), r0);
    MemoryInline::FlatWrite32((r29 + 2256), r0);
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r28));
    r3 = r30;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + -5812);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + -5728);
    MemoryInline::FlatWrite32((r30 + 52), r0);
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

extern "C" void func_800FE0C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FE0C8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF000001B gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FE0C8 func_800FE0C8 preserves=true fpr_mask=0x00000000
