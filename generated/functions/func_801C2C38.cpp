#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_801C2C38_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_801C2C38;

loc_801C2C38:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x801C2C50u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801359B4_449 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_449);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_449 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19124));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 812), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19120));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801C2C6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C2C78;
    }
}

loc_801C2C70:
{
    MemoryInline::FlatWriteFloat32((r31 + 812), f0.d);
    goto loc_801C2C88;
}

loc_801C2C78:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19116));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801C2C80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2C88;
    }
}

loc_801C2C84:
{
    MemoryInline::FlatWriteFloat32((r31 + 812), f0.d);
}

loc_801C2C88:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801C2C38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801C2C38_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C2C38 func_801C2C38 preserves=true fpr_mask=0x00000000
