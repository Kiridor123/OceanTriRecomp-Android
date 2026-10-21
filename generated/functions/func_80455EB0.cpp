#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80455F54(CpuContext* ctx);
extern "C" void func_80455F54_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80455F54_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_80455EB0_ra148_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x80455EB0u);
    goto loc_80455EB0;

loc_80455EB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r3 + 104);
    r4 = (r31 + 65536);
    r4 = (r4 + -15917);
    r5 = 11;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 72);
    r4 = (r31 + 65536);
    r4 = (r4 + -15906);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 8);
    r4 = (r31 + 65536);
    r4 = (r4 + -15864);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80455F54u) && KnownTranslatedCpuCall<0x80455F54u>::kAvailable && !KnownTranslatedCpuCall<0x80455F54u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80455F54u>()) {
        const auto state_free_result_80455F54_7B1 = func_80455F54_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_80455F54_7B1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80455F54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -15872));
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = MemoryInline::FlatRead8((r3 + -15868));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 115), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + -15800));
    MemoryInline::FlatWrite32((r30 + 120), r0);
    r0 = MemoryInline::FlatRead32((r3 + -15796));
    MemoryInline::FlatWrite32((r30 + 124), r0);
    r0 = MemoryInline::FlatRead32((r3 + -15792));
    MemoryInline::FlatWrite32((r30 + 128), r0);
    r0 = MemoryInline::FlatRead32((r3 + -15788));
    MemoryInline::FlatWrite32((r30 + 132), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80455EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80455EB0_ra148_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80455EB0 func_80455EB0 preserves=true fpr_mask=0x00000000
