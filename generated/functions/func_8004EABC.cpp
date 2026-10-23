#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EB58(CpuContext* ctx);
extern "C" void func_8004EB58_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004EB58_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8004EABC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8004EABC;

loc_8004EABC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = (r3 + 16504);
    r0 = 8;
    ctr = r0;
}

loc_8004EAE8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8004EAF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004EB04;
    }
}

loc_8004EAF4:
{
    r3 = r4;
    r4 = r29;
    // inline leaf 0x8004EB58 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8004EB58
    goto loc_8004EB3C;
}

loc_8004EB04:
{
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004EAE8;
    }
}

loc_8004EB0C:
{
    r31 = (r3 + 16504);
    r30 = 0;
}

loc_8004EB14:
{
    r3 = r31;
    r4 = (r31 + 16);
    // inline leaf 0x8004EB58 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8004EB58
    r30 = (r30 + 1);
    r31 = (r31 + 16);
}

loc_8004EB2C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(7))) {
        goto loc_8004EB14;
    }
}

loc_8004EB30:
{
    r3 = r31;
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004EB58u) && KnownTranslatedCpuCall<0x8004EB58u>::kAvailable && !KnownTranslatedCpuCall<0x8004EB58u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004EB58u>()) {
        const auto state_free_result_8004EB58_C72 = func_8004EB58_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004EB58_C72[0]);
        r5 = static_cast<uint32_t>(state_free_result_8004EB58_C72[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004EB58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        ctr = ctx->ctr;
    }
}

loc_8004EB3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004EABC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004EABC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004EABC func_8004EABC preserves=true fpr_mask=0x00000000
