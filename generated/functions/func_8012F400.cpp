#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130390(CpuContext* ctx);
extern "C" uint64_t func_80130390_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8012F400_ra8_4_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_8012F400;

loc_8012F400:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_8012F41C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012F440;
    }
}

loc_8012F420:
{
    ctx->lr = 0x8012F424u;
    if constexpr (KnownRegArgsCpuCall<0x80130390u>(&func_80130390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80130390_4F6 = func_80130390_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80130390_4F6);
        r4 = static_cast<uint32_t>(regargs_result_80130390_4F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f2.d = MemoryInline::FlatReadFloat32((r31 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28112));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8012F434:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012F440;
    }
}

loc_8012F438:
{
    r3 = 1;
    goto loc_8012F444;
}

loc_8012F440:
{
    r3 = 0;
}

loc_8012F444:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8012F400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012F400_ra8_4_8_0(ctx, ctx->gpr[3], ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F400 func_8012F400 preserves=true fpr_mask=0x00000000
