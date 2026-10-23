#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D9F0C(CpuContext* ctx);
extern "C" uint64_t func_800D9F0C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8035FA54_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_8035FA54;

loc_8035FA54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8035FA70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8035FAE4;
    }
}

loc_8035FA74:
{
    r4 = MemoryInline::FlatRead8((r3 + 486));
}

loc_8035FA7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8035FA98;
    }
}

loc_8035FA80:
{
}

loc_8035FA84:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(5))) {
        goto loc_8035FA98;
    }
}

loc_8035FA88:
{
    r0 = (r4 + 200);
    r0 = (r0 & 255);
}

loc_8035FA94:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8035FAE4;
    }
}

loc_8035FA98:
{
    r0 = MemoryInline::FlatRead8((r3 + 812));
}

loc_8035FAA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8035FAE4;
    }
}

loc_8035FAA4:
{
    r3 = (r3 + 392);
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r5 = 67;
    ctx->lr = 0x8035FAB4u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80112240_8F0 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_8F0);
        r4 = static_cast<uint32_t>(regargs_result_80112240_8F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80112240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_8035FAC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8035FADC;
    }
}

loc_8035FAC8:
{
    r3 = MemoryInline::FlatRead32((r31 + 2836));
    r4 = 1;
    r5 = 2;
    r6 = (r31 + 392);
    ctx->lr = 0x8035FADCu;
    if constexpr (KnownRegArgsCpuCall<0x800D9F0Cu>(&func_800D9F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D9F0C_F29 = func_800D9F0C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D9F0C_F29);
        r4 = static_cast<uint32_t>(regargs_result_800D9F0C_F29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800D9F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_8035FADC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 812), static_cast<uint8_t>(r0));
}

loc_8035FAE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035FA54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035FA54_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035FA54 func_8035FA54 preserves=true fpr_mask=0x00000000
