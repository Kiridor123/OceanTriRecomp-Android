#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064D44(CpuContext* ctx);
extern "C" uint32_t func_80064D44_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80064C88_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80064C88u);
    goto loc_80064C88;

loc_80064C88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 12);
    r4 = (r4 + 20);
    r5 = (r31 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 12);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r31 + 56));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = r30;
    r4 = (r1 + 12);
    ctx->lr = 0x80064CE8u;
    if constexpr (KnownRegArgsCpuCall<0x80064D44u>(&func_80064D44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80064D44_6C3 = func_80064D44_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064D44_6C3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80064D44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A7CCu>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 16);
}

loc_80064D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80064D0C;
    }
}

loc_80064D04:
{
    r3 = r30;
    // inline leaf 0x80064C58 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C58
}

loc_80064D0C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 32);
}

loc_80064D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80064D24;
    }
}

loc_80064D1C:
{
    r3 = r30;
    // inline leaf 0x80064C48 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C48
}

loc_80064D24:
{
    r3 = r30;
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C38
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80064C88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80064C88_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80064C88 func_80064C88 preserves=true fpr_mask=0x00000000
