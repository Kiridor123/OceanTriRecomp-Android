#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469184(CpuContext* ctx);
extern "C" uint32_t func_80469184_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804699BC(CpuContext* ctx);
extern "C" uint64_t func_804699BC_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_8046BF5C_rac8_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
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
    ctx->gpr[7] = arg_r7;

    goto loc_8046BF5C;

loc_8046BF5C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    // inline leaf 0x8046D5D4 (6 guest instruction(s))
    r4 = 0x80700000u;
    r0 = 1;
    r4 = (r4 + -27496);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r4 + 152), r0);
    // end of inlined leaf 0x8046D5D4
}

loc_8046BF74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046BF94;
    }
}

loc_8046BF78:
{
}

loc_8046BF7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1796))) {
        goto loc_8046BF9C;
    }
}

loc_8046BF80:
{
}

loc_8046BF84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1797))) {
        goto loc_8046BFA4;
    }
}

loc_8046BF88:
{
}

loc_8046BF8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1798))) {
        goto loc_8046BFAC;
    }
}

loc_8046BF90:
{
    goto loc_8046BFB4;
}

loc_8046BF94:
{
    r31 = 0;
    goto loc_8046BFB8;
}

loc_8046BF9C:
{
    r31 = 33;
    goto loc_8046BFB8;
}

loc_8046BFA4:
{
    r31 = 34;
    goto loc_8046BFB8;
}

loc_8046BFAC:
{
    r31 = 32;
    goto loc_8046BFB8;
}

loc_8046BFB4:
{
    r31 = 1;
}

loc_8046BFB8:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_B05 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_B05;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r5 = (r3 + 1);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BFFCu;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_FA3 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_FA3);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_FA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return r3;
}

}

extern "C" void func_8046BF5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8046BF5C_rac8_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002FCF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046BF5C func_8046BF5C preserves=true fpr_mask=0x00000000
