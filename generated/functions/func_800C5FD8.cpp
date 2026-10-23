#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6040(CpuContext* ctx);
extern "C" uint32_t func_800C6040_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800C5FD8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800C5FD8;

loc_800C5FD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x800C60B8 (4 guest instruction(s))
    r4 = 0x80590000u;
    r0 = (r4 + 20976);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x800C60B8
    r3 = 0x80590000u;
    r0 = (r3 + 20952);
    MemoryInline::FlatWrite32(r29, r0);
    r30 = (r29 + 4);
    r31 = (r29 + 148);
}

loc_800C600C:
{
    r3 = r30;
    ctx->lr = 0x800C6014u;
    if constexpr (KnownRegArgsCpuCall<0x800C6040u>(&func_800C6040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800C6040_517 = func_800C6040_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800C6040_517;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800C6040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 48);
}

loc_800C601C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_800C600C;
    }
}

loc_800C6020:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_800C5FD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800C5FD8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C5FD8 func_800C5FD8 preserves=true fpr_mask=0x00000000
