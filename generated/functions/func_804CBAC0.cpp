#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D2870(CpuContext* ctx);
extern "C" uint32_t func_804D2870_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804CBAC0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CBAC0;

loc_804CBAC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 8;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804CB880 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -15176));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    // end of inlined leaf 0x804CB880
    r4 = 0x804D0000u;
    r4 = (r4 + -15920);
}

loc_804CBAE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r4))) {
        goto loc_804CBB08;
    }
}

loc_804CBAE4:
{
    r3 = (r13 + -15120);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 8;
    MemoryInline::FlatWrite32((r13 + -15120), r0);
    // inline leaf 0x804CB860 (5 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r13 + -15176));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r5_addr_1 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_1);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r4);
    // end of inlined leaf 0x804CB860
    r3 = 0x80620000u;
    r3 = (r3 + -13944);
    if constexpr (KnownRegArgsCpuCall<0x804D2870u>(&func_804D2870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D2870_901 = func_804D2870_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D2870_901;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D2870u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804CBB08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CBAC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CBAC0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CBAC0 func_804CBAC0 preserves=true fpr_mask=0x00000000
