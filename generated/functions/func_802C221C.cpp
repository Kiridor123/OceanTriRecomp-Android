#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BFC80(CpuContext* ctx);
extern "C" uint64_t func_802BFC80_ra38_1e2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802BFF24(CpuContext* ctx);
extern "C" uint64_t func_802BFF24_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802C221C_ra98_1ea_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7, double arg_f1, double arg_f3, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[7] = arg_r7;

    goto loc_802C221C;

loc_802C221C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = 0x806C0000u;
    r3 = (r3 + -6272);
    r4 = r30;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802C2250u;
    if constexpr (KnownRegArgsCpuCall<0x802BFC80u>(&func_802BFC80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        const auto regargs_result_802BFC80_690 = func_802BFC80_ra38_1e2_18_0(ctx, r3, r4, r5, f1.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFC80_690);
        r4 = static_cast<uint32_t>(regargs_result_802BFC80_690 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802BFC80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802C2254:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C2278;
    }
}

loc_802C2258:
{
    r4 = r30;
    ctx->lr = 0x802C2260u;
    if constexpr (KnownRegArgsCpuCall<0x802BFF24u>(&func_802BFF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        const auto regargs_result_802BFF24_CE0 = func_802BFF24_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFF24_CE0);
        r4 = static_cast<uint32_t>(regargs_result_802BFF24_CE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802BFF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = 1;
    goto loc_802C227C;
}

loc_802C2278:
{
    r3 = 0;
}

loc_802C227C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C221C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C221C_ra98_1ea_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000239E gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80003FEB fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C221C func_802C221C preserves=true fpr_mask=0x00000000
