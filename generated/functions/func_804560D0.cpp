#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456268(CpuContext* ctx);
extern "C" uint64_t func_80456268_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_804560D0_ra68_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[6] = arg_r6;

    goto loc_804560D0;

loc_804560D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2640));
}

loc_804560F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80456124;
    }
}

loc_804560F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2642));
}

loc_80456100:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80456110;
    }
}

loc_80456104:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 31120), static_cast<uint8_t>(r0));
    goto loc_80456118;
}

loc_80456110:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 31120), static_cast<uint8_t>(r0));
}

loc_80456118:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 31121), static_cast<uint8_t>(r0));
    goto loc_80456130;
}

loc_80456124:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 31120), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 31121), static_cast<uint8_t>(r0));
}

loc_80456130:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = MemoryInline::FlatRead8((r31 + 31120));
    // inline leaf 0x80417770 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 28114), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80417770
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = MemoryInline::FlatRead8((r31 + 31121));
    // inline leaf 0x80417760 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 28113), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80417760
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2640));
    ctx->lr = 0x80456158u;
    if constexpr (KnownRegArgsCpuCall<0x80456268u>(&func_80456268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456268_CFA = func_80456268_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456268_CFA);
        r4 = static_cast<uint32_t>(regargs_result_80456268_CFA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80456268u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_804560D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804560D0_ra68_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000027EA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804560D0 func_804560D0 preserves=true fpr_mask=0x00000000
