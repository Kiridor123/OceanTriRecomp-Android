#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802AFAE0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802AFAE0;

loc_802AFAE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r0 = (r0 * 1488);
    r4 = (r4 + r0);
    r28 = (r4 + 36);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r3));
    r30 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r28 + 1432), r30);
    r0 = 255;
    MemoryInline::FlatWrite8((r28 + 1428), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1429), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1484), static_cast<uint8_t>(r30));
    r27 = 0;
    r29 = (r28 + 4);
    r31 = -1;
}

loc_802AFB38:
{
    r3 = r29;
    ctx->lr = 0x802AFB40u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E05C4_70C = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_70C);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_70C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r28 + 1452), r31);
    MemoryInline::FlatWrite32((r28 + 1436), r30);
    r29 = (r29 + 356);
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_802AFB58:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_802AFB38;
    }
}

loc_802AFB5C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_802AFAE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AFAE0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AFAE0 func_802AFAE0 preserves=true fpr_mask=0x00000000
