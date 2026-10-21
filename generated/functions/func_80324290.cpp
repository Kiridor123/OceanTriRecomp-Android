#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DA214(CpuContext* ctx);
extern "C" uint32_t func_802DA214_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DFD38(CpuContext* ctx);
extern "C" uint64_t func_802DFD38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80324290_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80324290u);
    goto loc_80324290;

loc_80324290:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
}

loc_803242A4:
{
    r3 = (r31 & 255);
    r4 = 0;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
    r31 = (r31 + 1);
}

loc_803242B8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(10))) {
        goto loc_803242A4;
    }
}

loc_803242BC:
{
    ctx->lr = 0x803242C0u;
    if constexpr (KnownRegArgsCpuCall<0x802DFD38u>(&func_802DFD38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DFD38_5FE = func_802DFD38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DFD38_5FE);
        r4 = static_cast<uint32_t>(regargs_result_802DFD38_5FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DFD38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x803242C4u;
    if constexpr (KnownRegArgsCpuCall<0x802DA214u>(&func_802DA214)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA214_908 = func_802DA214_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802DA214_908;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802DA214u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80324290(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80324290_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80324290 func_80324290 preserves=true fpr_mask=0x00000000
