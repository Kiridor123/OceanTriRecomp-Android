#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D6598_ra18_8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_802D6598;

loc_802D6598:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x802D65ACu;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803AB08C_4D5 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_4D5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802D65B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802D661C;
    }
}

loc_802D65B4:
{
    r3 = 0x806C0000u;
    r31 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_802D65C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D661C;
    }
}

loc_802D65C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 369));
}

loc_802D65D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802D661C;
    }
}

loc_802D65D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1085));
}

loc_802D65DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D661C;
    }
}

loc_802D65E0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 1085), static_cast<uint8_t>(r0));
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    ctx->lr = 0x802D65F8u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050F58_B92 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_B92);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_B92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D6600:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D6614;
    }
}

loc_802D6608:
{
    r0 = 600;
    MemoryInline::FlatWriteRam16((r31 + 1086), static_cast<uint16_t>(r0));
    goto loc_802D661C;
}

loc_802D6614:
{
    r0 = 300;
    MemoryInline::FlatWriteRam16((r31 + 1086), static_cast<uint16_t>(r0));
}

loc_802D661C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D6598(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D6598_ra18_8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000009 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D6598 func_802D6598 preserves=true fpr_mask=0x00000000
