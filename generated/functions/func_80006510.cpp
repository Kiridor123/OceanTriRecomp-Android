#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800065F0(CpuContext* ctx);
extern "C" uint64_t func_800065F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80006510_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80006510;

loc_80006510:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0x80000000u;
    r29 = (r29 + 26148);
}

loc_80006530:
{
    r30 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80006538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80006570;
    }
}

loc_8000653C:
{
    r4 = MemoryInline::FlatRead32(r29);
    r31 = MemoryInline::FlatRead32((r29 + 4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80006568;
    }
}

loc_80006548:
{
}

loc_8000654C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r4))) {
        goto loc_80006568;
    }
}

loc_80006550:
{
    r3 = r31;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800065F0u>(&func_800065F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800065F0_82C = func_800065F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800065F0_82C);
        r4 = static_cast<uint32_t>(regargs_result_800065F0_82C >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800065F0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80006568:
{
    r29 = (r29 + 12);
    goto loc_80006530;
}

loc_80006570:
{
    r29 = 0x80000000u;
    r29 = (r29 + 26280);
}

loc_80006578:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80006580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000659C;
    }
}

loc_80006584:
{
    r3 = MemoryInline::FlatRead32(r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80006594;
    }
}

loc_8000658C:
{
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80006594:
{
    r29 = (r29 + 8);
    goto loc_80006578;
}

loc_8000659C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80006510(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80006510_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80006510 func_80006510 preserves=true fpr_mask=0x00000000
