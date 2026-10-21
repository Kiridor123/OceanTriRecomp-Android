#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804523EC(CpuContext* ctx);
extern "C" uint64_t func_804523EC_ra18_1c_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80453AAC_ra18_1c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x80453AACu);
    goto loc_80453AAC;

loc_80453AAC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453AB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80453AC0;
    }
}

loc_80453AB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -4360));
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453AC0:
{
    r3 = (r3 + 65536);
    r3 = (r3 + -31268);
    if constexpr (KnownRegArgsCpuCall<0x804523ECu>(&func_804523EC)) {
        ctx->fpr[1] = f1;
        const auto regargs_result_804523EC_523 = func_804523EC_ra18_1c_18_0(ctx, r3, r4, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804523EC_523);
        r4 = static_cast<uint32_t>(regargs_result_804523EC_523 >> 32);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804523ECu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80453AAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80453AAC_ra18_1c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001D fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453AAC func_80453AAC preserves=true fpr_mask=0x00000000
