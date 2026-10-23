#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80296B28(CpuContext* ctx);
extern "C" uint64_t func_80296B28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80296BA4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_80296BA4;

loc_80296BA4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80296BD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80296BE4;
    }
}

loc_80296BDC:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296BE4:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296BE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296C5C;
    }
}

loc_80296BEC:
{
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_76A = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_76A);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_76A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296BFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80296C08;
    }
}

loc_80296C00:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296C08:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_CB3 = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_CB3);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_CB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296C20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80296C2C;
    }
}

loc_80296C24:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296C2C:
{
    r3 = r30;
    r4 = r28;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_11FC = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_11FC);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_11FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296C44:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r3 = (r0 & 255);
    goto loc_80296CC4;
}

loc_80296C5C:
{
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_1801 = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_1801);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_1801 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296C6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296C78;
    }
}

loc_80296C70:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296C78:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_1D4D = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_1D4D);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_1D4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296C90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296C9C;
    }
}

loc_80296C94:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296C9C:
{
    r3 = r30;
    r4 = r28;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80296B28u>(&func_80296B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296B28_2299 = func_80296B28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80296B28_2299);
        r4 = static_cast<uint32_t>(regargs_result_80296B28_2299 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296CB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296CC0;
    }
}

loc_80296CB8:
{
    r3 = 0;
    goto loc_80296CC4;
}

loc_80296CC0:
{
    r3 = 2;
}

loc_80296CC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80296BA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80296BA4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80296BA4 func_80296BA4 preserves=true fpr_mask=0x00000000
