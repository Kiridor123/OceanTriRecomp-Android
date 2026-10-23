#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DD690(CpuContext* ctx);
extern "C" uint64_t func_804DD690_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_804DD890_ra1c0_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804DD890;

loc_804DD890:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (r13 + -19712);
    r4 = (r13 + -14784);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x804DD690u>(&func_804DD690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804DD690_488 = func_804DD690_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DD690_488);
        r4 = static_cast<uint32_t>(regargs_result_804DD690_488 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DD690u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804DD8B0:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DD8BC;
    }
}

loc_804DD8B8:
{
    r3 = (r13 + -14784);
}

loc_804DD8BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804DD890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804DD890_ra1c0_0_8_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FC2 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DD890 func_804DD890 preserves=true fpr_mask=0x00000000
