#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804513B0(CpuContext* ctx);
extern "C" uint64_t func_804513B0_rae0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_804515A0_ra68_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804515A0;

loc_804515A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_804515C0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804515CC;
    }
}

loc_804515C4:
{
    r3 = 0;
    goto loc_80451654;
}

loc_804515CC:
{
    ctx->lr = 0x804515D0u;
    if constexpr (KnownRegArgsCpuCall<0x804513B0u>(&func_804513B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804513B0_705 = func_804513B0_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804513B0_705);
        r4 = static_cast<uint32_t>(regargs_result_804513B0_705 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x804513B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_804515D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804515E0;
    }
}

loc_804515D8:
{
    r3 = 0;
    goto loc_80451654;
}

loc_804515E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
}

loc_804515E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80451650;
    }
}

loc_804515EC:
{
    r3 = (r30 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 116));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804515FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80451608;
    }
}

loc_80451600:
{
    r3 = 1;
    goto loc_80451654;
}

loc_80451608:
{
    r0 = MemoryInline::FlatRead8((r31 + 117));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80451614:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80451620;
    }
}

loc_80451618:
{
    r3 = 1;
    goto loc_80451654;
}

loc_80451620:
{
    r0 = MemoryInline::FlatRead8((r31 + 118));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045162C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80451638;
    }
}

loc_80451630:
{
    r3 = 1;
    goto loc_80451654;
}

loc_80451638:
{
    r0 = MemoryInline::FlatRead8((r31 + 119));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80451644:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80451650;
    }
}

loc_80451648:
{
    r3 = 1;
    goto loc_80451654;
}

loc_80451650:
{
    r3 = 0;
}

loc_80451654:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

extern "C" void func_804515A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804515A0_ra68_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002FEF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804515A0 func_804515A0 preserves=true fpr_mask=0x00000000
