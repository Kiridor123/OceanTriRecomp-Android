#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80520A1C(CpuContext* ctx);
extern "C" uint64_t func_80520A1C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050C190_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8050C190;

loc_8050C190:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8050C19C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r31 = r6;
    r30 = r5;
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8050C1D0;
    }
}

loc_8050C1C8:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8050C1D0:
{
}

loc_8050C1D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8050C1E4;
    }
}

loc_8050C1D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8050C1E4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 8);
    r4 = 1;
    r6 = 0;
    r5 = 0;
    ctx->lr = 0x8050C200u;
    if constexpr (KnownRegArgsCpuCall<0x80520A1Cu>(&func_80520A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80520A1C_97D = func_80520A1C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520A1C_97D);
        r4 = static_cast<uint32_t>(regargs_result_80520A1C_97D >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80520A1Cu>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8050C204:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8050C210;
    }
}

loc_8050C208:
{
    r3 = -1;
    goto loc_8050C29C;
}

loc_8050C210:
{
}

loc_8050C214:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8050C23C;
    }
}

loc_8050C218:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8050C234;
    }
}

loc_8050C21C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 65);
}

loc_8050C224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C234;
    }
}

loc_8050C228:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8050C23C;
}

loc_8050C234:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8050C23C:
{
}

loc_8050C240:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8050C26C;
    }
}

loc_8050C244:
{
}

loc_8050C248:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8050C264;
    }
}

loc_8050C24C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 8);
}

loc_8050C254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C264;
    }
}

loc_8050C258:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8050C26C;
}

loc_8050C264:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8050C26C:
{
}

loc_8050C270:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8050C29C;
    }
}

loc_8050C274:
{
}

loc_8050C278:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8050C294;
    }
}

loc_8050C27C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 32);
}

loc_8050C284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C294;
    }
}

loc_8050C288:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8050C29C;
}

loc_8050C294:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8050C29C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050C190(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050C190_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050C190 func_8050C190 preserves=true fpr_mask=0x00000000
