#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801262DC(CpuContext* ctx);
extern "C" uint64_t func_801262DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80358688_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80358688;

loc_80358688:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f31.d);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r31 & 255);
}

loc_803586B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803586F0;
    }
}

loc_803586BC:
{
}

loc_803586C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803586F8;
    }
}

loc_803586C4:
{
}

loc_803586C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80358718;
    }
}

loc_803586CC:
{
}

loc_803586D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80358738;
    }
}

loc_803586D4:
{
}

loc_803586D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80358770;
    }
}

loc_803586DC:
{
}

loc_803586E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80358784;
    }
}

loc_803586E4:
{
}

loc_803586E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803587EC;
    }
}

loc_803586EC:
{
    goto loc_80358800;
}

loc_803586F0:
{
    r3 = MemoryInline::FlatRead8((r30 + 484));
    goto loc_80358804;
}

loc_803586F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 484));
}

loc_80358700:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80358800;
    }
}

loc_80358704:
{
    r0 = MemoryInline::FlatRead16((r30 + 814));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8035870C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_80358710:
{
    r3 = 1;
    goto loc_80358804;
}

loc_80358718:
{
    r0 = MemoryInline::FlatRead8((r30 + 484));
}

loc_80358720:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80358800;
    }
}

loc_80358724:
{
    r0 = MemoryInline::FlatRead16((r30 + 812));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8035872C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_80358730:
{
    r3 = 1;
    goto loc_80358804;
}

loc_80358738:
{
    r0 = MemoryInline::FlatRead8((r30 + 484));
}

loc_80358740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_80358744:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_80358758:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_80358800;
    }
}

loc_8035875C:
{
    r0 = MemoryInline::FlatRead16((r30 + 816));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80358764:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_80358768:
{
    r3 = 1;
    goto loc_80358804;
}

loc_80358770:
{
    r0 = MemoryInline::FlatRead16((r30 + 818));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80358778:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_8035877C:
{
    r3 = 1;
    goto loc_80358804;
}

loc_80358784:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 481));
    r0 = (r0 & 15);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x803587A0u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801262DC_14A3 = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_14A3);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_14A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x803587ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 481));
    r0 = (r0 & 15);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r0 | 1);
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x803587D0u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801262DC_1B19 = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_1B19);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_1B19 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r30 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x803587DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_803587E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80358800;
    }
}

loc_803587E4:
{
    r3 = 1;
    goto loc_80358804;
}

loc_803587EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 810));
}

loc_803587F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80358800;
    }
}

loc_803587F8:
{
    r3 = 1;
    goto loc_80358804;
}

loc_80358800:
{
    r3 = 0;
}

loc_80358804:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80358688(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80358688_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80358688 func_80358688 preserves=true fpr_mask=0x00000000
