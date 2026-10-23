#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F2A80_ra18_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_800F2A80;

loc_800F2A80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29960));
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29976));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800F2AB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F2AC0;
    }
}

loc_800F2ABC:
{
    f1.d = f0.d;
}

loc_800F2AC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800F2AC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F2AD0;
    }
}

loc_800F2ACC:
{
    f1.d = f0.d;
}

loc_800F2AD0:
{
    r3 = (r4 & 255);
    // inline leaf 0x800E496C (9 guest instruction(s))
}

loc_inl0_0x800E496C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800E4974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800E497C;
    }
}

loc_inl0_0x800E4978:
{
    MemoryInline::FlatWriteFloat32((r13 + -17504), f1.d);
}

loc_inl0_0x800E497C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800E4984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800E4988:
{
    MemoryInline::FlatWriteFloat32((r13 + -17488), f1.d);
    goto loc_inl0_cont_800E496C;
}

loc_inl0_return:
{
}

loc_inl0_cont_800E496C:
{
    // end of inlined leaf 0x800E496C
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_800F2A80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F2A80_ra18_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000201E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F2A80 func_800F2A80 preserves=true fpr_mask=0x00000000
