#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803C18CC_ra148_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803C18CC;

loc_803C18CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 236), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r4 + 16138));
    MemoryInline::FlatWrite16((r3 + 238), static_cast<uint16_t>(r0));
    r3 = (r3 + 240);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 16636);
    r5 = 5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C18CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C18CC_ra148_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C18CC func_803C18CC preserves=true fpr_mask=0x00000000
