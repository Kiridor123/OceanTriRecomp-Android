#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802CB90C(CpuContext* ctx);
extern "C" uint64_t func_802CB90C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802CCF64(CpuContext* ctx);
extern "C" uint64_t func_802CCF64_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_802CDA80_ra38_ce_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f6, double arg_f7)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;

    goto loc_802CDA80;

loc_802CDA80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 905));
}

loc_802CDA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CDB08;
    }
}

loc_802CDAA0:
{
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802CDAA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDAC0;
    }
}

loc_802CDAAC:
{
    r4 = MemoryInline::FlatRead8((r31 + 420));
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802CDABC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802CDB08;
    }
}

loc_802CDAC0:
{
    r0 = MemoryInline::FlatRead8((r31 + 460));
}

loc_802CDAC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CDAE0;
    }
}

loc_802CDACC:
{
}

loc_802CDAD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802CDAEC;
    }
}

loc_802CDAD4:
{
}

loc_802CDAD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802CDAFC;
    }
}

loc_802CDADC:
{
    goto loc_802CDB08;
}

loc_802CDAE0:
{
    r3 = r31;
    ctx->lr = 0x802CDAE8u;
    if constexpr (KnownRegArgsCpuCall<0x802CB90Cu>(&func_802CB90C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CB90C_B98 = func_802CB90C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802CB90C_B98);
        r4 = static_cast<uint32_t>(regargs_result_802CB90C_B98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802CB90Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_802CDB08;
}

loc_802CDAEC:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802CDAF8u;
    if constexpr (KnownRegArgsCpuCall<0x802CCF64u>(&func_802CCF64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CCF64_EAA = func_802CCF64_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802CCF64_EAA);
        r4 = static_cast<uint32_t>(regargs_result_802CCF64_EAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        InvokeDirectCpu<0x802CCF64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    goto loc_802CDB08;
}

loc_802CDAFC:
{
    r3 = (r31 + 432);
    r4 = (r31 + 1108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802CDB08:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CDA80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CDA80_ra38_ce_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE00030CE fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CDA80 func_802CDA80 preserves=true fpr_mask=0x00000000
