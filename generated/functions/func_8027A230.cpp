#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027A230_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[3].d = arg_f3;

    MKW_GUEST_ENTER(0x8027A230u);
    goto loc_8027A230;

loc_8027A230:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027A254:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A2E8;
    }
}

loc_8027A258:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -169);
}

loc_8027A264:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027A288;
    }
}

loc_8027A268:
{
    r0 = (r3 + -172);
}

loc_8027A270:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027A288;
    }
}

loc_8027A274:
{
}

loc_8027A278:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(171))) {
        goto loc_8027A2D8;
    }
}

loc_8027A27C:
{
}

loc_8027A280:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(174))) {
        goto loc_8027A2D8;
    }
}

loc_8027A284:
{
    goto loc_8027A2E8;
}

loc_8027A288:
{
}

loc_8027A28C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8027A2D0;
    }
}

loc_8027A290:
{
    r3 = r30;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_8027A2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(314))) {
        goto loc_8027A2AC;
    }
}

loc_8027A2A4:
{
}

loc_8027A2A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(365))) {
        goto loc_8027A2E8;
    }
}

loc_8027A2AC:
{
    r3 = r30;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14772));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    ctx->lr = 0x8027A2C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_8027A2C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027A2E8;
    }
}

loc_8027A2C8:
{
    r31 = 1;
    goto loc_8027A2E8;
}

loc_8027A2D0:
{
    r31 = 1;
    goto loc_8027A2E8;
}

loc_8027A2D8:
{
    r0 = (r4 + -1);
}

loc_8027A2E0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027A2E8;
    }
}

loc_8027A2E4:
{
    r31 = 1;
}

loc_8027A2E8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027A230(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027A230_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027A230 func_8027A230 preserves=true fpr_mask=0x00000000
