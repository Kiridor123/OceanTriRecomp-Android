#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80533BE0(CpuContext* ctx);
extern "C" uint32_t func_80533BE0_ra38_6_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80530CD4_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80530CD4u);
    goto loc_80530CD4;

loc_80530CD4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80530CE0:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 0;
    r31 = r6;
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80530D54;
    }
}

loc_80530D0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80530D1C;
    }
}

loc_80530D10:
{
}

loc_80530D14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80530D28;
    }
}

loc_80530D18:
{
    goto loc_80530D9C;
}

loc_80530D1C:
{
}

loc_80530D20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(8))) {
        goto loc_80530D54;
    }
}

loc_80530D24:
{
    goto loc_80530D9C;
}

loc_80530D28:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r1 + 24);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80533BE0u>(&func_80533BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80533BE0_87F = func_80533BE0_ra38_6_10_0(ctx, r3, r4, r5, f1.d, f2.d);
        r4 = regargs_result_80533BE0_87F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80533BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_80530D9C;
}

loc_80530D54:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r1 + 16);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80533BE0u>(&func_80533BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80533BE0_E53 = func_80533BE0_ra38_6_10_0(ctx, r3, r4, r5, f1.d, f2.d);
        r4 = regargs_result_80533BE0_E53;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80533BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r4 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80533BE0u>(&func_80533BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80533BE0_138E = func_80533BE0_ra38_6_10_0(ctx, r3, r4, r5, f1.d, f2.d);
        r4 = regargs_result_80533BE0_138E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80533BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_80530D9C:
{
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r3 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80530CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80530CD4_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80530CD4 func_80530CD4 preserves=true fpr_mask=0x00000000
