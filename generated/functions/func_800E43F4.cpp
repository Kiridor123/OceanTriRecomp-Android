#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E43F4_ra38_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800E43F4u);
    goto loc_800E43F4;

loc_800E43F4:
{
    r0 = (r5 & 255);
}

loc_800E43F8:
{
    r6 = MemoryInline::FlatRead32(r3);
}

loc_800E4400:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800E4410;
    }
}

loc_800E4404:
{
    r5 = (r6 & 1);
}

loc_800E440C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800E4420;
    }
}

loc_800E4410:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_800E4420:
{
    r5 = (r6 & -2);
}

loc_800E4428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E4434;
    }
}

loc_800E442C:
{
    r7 = 1;
    goto loc_800E444C;
}

loc_800E4434:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E4440:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r7 = cr;
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & 1);
}

loc_800E444C:
{
}

loc_800E4450:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800E4464;
    }
}

loc_800E4454:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_800E4464:
{
    r3 = r5;
    goto loc_800E43F8;
}

}

extern "C" void func_800E43F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E43F4_ra38_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E43F4 func_800E43F4 preserves=true fpr_mask=0x00000000
