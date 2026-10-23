#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012342C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_8012342C;

loc_8012342C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 2272));
    r5 = MemoryInline::FlatRead8((r4 + 18));
    r0 = (r5 + -2);
}

loc_80123454:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801234BC;
    }
}

loc_80123458:
{
    r0 = (r5 + -7);
}

loc_80123460:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801234BC;
    }
}

loc_80123464:
{
}

loc_80123468:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80123480;
    }
}

loc_8012346C:
{
}

loc_80123470:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80123524;
    }
}

loc_80123474:
{
}

loc_80123478:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(5))) {
        goto loc_8012355C;
    }
}

loc_8012347C:
{
    goto loc_8012358C;
}

loc_80123480:
{
    r4 = MemoryInline::FlatRead32((r4 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    MemoryInline::FlatWriteFloat32((r3 + 784), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80123498:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801234A0;
    }
}

loc_8012349C:
{
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
}

loc_801234A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    MemoryInline::FlatWriteFloat32((r3 + 792), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 796), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 800), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 804), f1.d);
    goto loc_8012358C;
}

loc_801234BC:
{
    r31 = MemoryInline::FlatRead32((r4 + 20));
}

loc_801234C4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8012358C;
    }
}

loc_801234C8:
{
    r3 = r30;
    // inline leaf 0x8013545C (8 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r3 + 784), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 792), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 796), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 800), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 804), f0.d);
    // end of inlined leaf 0x8013545C
    r3 = (r30 + 784);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 796);
    r4 = (r31 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 2272));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_801234F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80123518;
    }
}

loc_801234F8:
{
    r3 = r30;
    ctx->lr = 0x80123500u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801359B4_10B3 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_10B3);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_10B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r30 + 784);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = r30;
    ctx->lr = 0x80123510u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801359B4_15B0 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_15B0);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_15B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r30 + 796);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_80123518:
{
    r0 = MemoryInline::FlatRead32((r30 + 448));
    MemoryInline::FlatWrite32((r30 + 2296), r0);
    goto loc_8012358C;
}

loc_80123524:
{
    r31 = MemoryInline::FlatRead32((r4 + 20));
    // inline leaf 0x80135448 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r3 + 784), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 792), f0.d);
    // end of inlined leaf 0x80135448
    f1.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 788), f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012354C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012358C;
    }
}

loc_80123554:
{
    MemoryInline::FlatWriteFloat32((r30 + 788), f0.d);
    goto loc_8012358C;
}

loc_8012355C:
{
    r31 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80123564:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8012358C;
    }
}

loc_80123568:
{
    // inline leaf 0x8013545C (8 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r3 + 784), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 788), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 792), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 796), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 800), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 804), f0.d);
    // end of inlined leaf 0x8013545C
    r3 = (r30 + 784);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 796);
    r4 = (r31 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + 448));
    MemoryInline::FlatWrite32((r30 + 2296), r0);
}

loc_8012358C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012342C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012342C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012342C func_8012342C preserves=true fpr_mask=0x00000000
