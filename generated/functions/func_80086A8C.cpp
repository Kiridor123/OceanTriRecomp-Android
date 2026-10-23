#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800867D4(CpuContext* ctx);
extern "C" uint32_t func_800867D4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80086A8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80086A8C;

loc_80086A8C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x8006E718 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8006E718
}

loc_80086AB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80086AE8;
    }
}

loc_80086AB4:
{
    r30 = 0x80680000u;
    r3 = (r30 + 21248);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80086810u>(ctx);
    r3 = (r13 + -17712);
    ctx->lr = 0x80086AC8u;
    if constexpr (KnownRegArgsCpuCall<0x800867D4u>(&func_800867D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800867D4_64D = func_800867D4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800867D4_64D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800867D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r3 = (r30 + 21248);
    // inline leaf 0x80086B04 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 3));
    // end of inlined leaf 0x80086B04
    r0 = r3;
    r3 = r29;
    r4 = (r0 & 255);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80096634u>(ctx);
}

loc_80086AE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80086A8C func_80086A8C preserves=true fpr_mask=0x00000000
