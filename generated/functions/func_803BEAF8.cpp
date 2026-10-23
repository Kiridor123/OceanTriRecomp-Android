#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2A20(CpuContext* ctx);
extern "C" uint64_t func_800F2A20_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_800F2A6C(CpuContext* ctx);
extern "C" uint64_t func_800F2A6C_ra8_2_18_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_803BEAF8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803BEAF8;

loc_803BEAF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = r5;
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 2224));
}

loc_803BEB24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BEB9C;
    }
}

loc_803BEB28:
{
    r3 = (r3 & 255);
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl0_0x8004D1B0:
{
}

loc_inl0_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004D1C0;
    }
}

loc_inl0_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl0_0x8004D1C4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
}

loc_803BEB34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803BEB9C;
    }
}

loc_803BEB38:
{
    r0 = (r30 & 255);
    r4 = 0x80600000u;
    r4 = (r4 + -29464);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    r0 = (r31 & 255);
}

loc_803BEB50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_803BEB58;
    }
}

loc_803BEB54:
{
    r31 = r4;
}

loc_803BEB58:
{
    r0 = (r30 & 255);
}

loc_803BEB60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803BEB6C;
    }
}

loc_803BEB64:
{
    r0 = (r31 ^ 1);
    r31 = (r0 & 255);
}

loc_803BEB6C:
{
    r0 = (r30 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r31));
}

loc_803BEB7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_803BEB88;
    }
}

loc_803BEB80:
{
    r3 = (r31 & 255);
    ctx->lr = 0x803BEB88u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A20u>(&func_800F2A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F2A20_E2A = func_800F2A20_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A20_E2A);
        r4 = static_cast<uint32_t>(regargs_result_800F2A20_E2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F2A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_803BEB88:
{
    r0 = (r30 & 255);
}

loc_803BEB90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803BEB9C;
    }
}

loc_803BEB94:
{
    r3 = (r31 & 255);
    ctx->lr = 0x803BEB9Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F2A6Cu>(&func_800F2A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F2A6C_127F = func_800F2A6C_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A6C_127F);
        r4 = static_cast<uint32_t>(regargs_result_800F2A6C_127F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F2A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_803BEB9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BEAF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BEAF8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEAF8 func_803BEAF8 preserves=true fpr_mask=0x00000000
