#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005246C(CpuContext* ctx);
extern "C" uint32_t func_8005246C_ra38_e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8010A3F8_ra18_c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_8010A3F8;

loc_8010A3F8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r4 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8010A418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8010A448;
    }
}

loc_8010A41C:
{
}

loc_8010A420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_8010A454;
    }
}

loc_8010A424:
{
}

loc_8010A428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_8010A454;
    }
}

loc_8010A42C:
{
}

loc_8010A430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_8010A460;
    }
}

loc_8010A434:
{
}

loc_8010A438:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_8010A46C;
    }
}

loc_8010A43C:
{
}

loc_8010A440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(29))) {
        goto loc_8010A478;
    }
}

loc_8010A444:
{
    goto loc_8010A480;
}

loc_8010A448:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -2520);
    goto loc_8010A480;
}

loc_8010A454:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -2392);
    goto loc_8010A480;
}

loc_8010A460:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -2264);
    goto loc_8010A480;
}

loc_8010A46C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -2184);
    goto loc_8010A480;
}

loc_8010A478:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -2072);
}

loc_8010A480:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29400));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005246Cu>(&func_8005246C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8005246C_D3B = func_8005246C_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_8005246C_D3B;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005246Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r31 + 42), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite8((r31 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010A3F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010A3F8_ra18_c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000000C fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8010A3F8 func_8010A3F8 preserves=true fpr_mask=0x00000000
