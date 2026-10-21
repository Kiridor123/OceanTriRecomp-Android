#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080B74(CpuContext* ctx);
extern "C" void func_80080B74_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801E28C8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801E28C8u);
    goto loc_801E28C8;

loc_801E28C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r30 = 0;
    r31 = r29;
    goto loc_801E292C;
}

loc_801E28F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r28 = MemoryInline::FlatRead32((r3 + 280));
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r29 + 36));
    // inline leaf 0x800E2614 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 284), r4);
    // end of inlined leaf 0x800E2614
    r3 = r28;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x80080B74u>(&func_80080B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_80080B74_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80080B74u>(ctx);
        r0 = ctx->gpr[0];
    }
    r3 = r28;
    r4 = 0;
    // inline leaf 0x800E32C8 (3 guest instruction(s))
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r3 + 290), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800E32C8
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_801E292C:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_801E2934:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_801E28F8;
    }
}

loc_801E2938:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E28C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E28C8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E28C8 func_801E28C8 preserves=true fpr_mask=0x00000000
