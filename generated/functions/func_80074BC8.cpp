#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074948(CpuContext* ctx);
extern "C" uint64_t func_80074948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074D9C(CpuContext* ctx);
extern "C" uint32_t func_80074D9C_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80074BC8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80074BC8u);
    goto loc_80074BC8;

loc_80074BC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80074BEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80074C0C;
    }
}

loc_80074BF0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 226;
    r5 = 0x80590000u;
    r5 = (r5 + -5080);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074C0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80074C0C:
{
    r3 = r31;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80074C18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074D84;
    }
}

loc_80074C1C:
{
    r3 = r31;
    ctx->lr = 0x80074C24u;
    if constexpr (KnownRegArgsCpuCall<0x80074948u>(&func_80074948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074948_B68 = func_80074948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074948_B68);
        r4 = static_cast<uint32_t>(regargs_result_80074948_B68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80074C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074C48;
    }
}

loc_80074C34:
{
}

loc_80074C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80074CC0;
    }
}

loc_80074C3C:
{
}

loc_80074C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80074D18;
    }
}

loc_80074C44:
{
    goto loc_80074D84;
}

loc_80074C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 1);
}

loc_80074C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074C80;
    }
}

loc_80074C58:
{
    r3 = (r30 + 4);
    r4 = (r31 + 128);
    // inline leaf 0x80074D9C (16 guest instruction(s))
}

loc_inl2_0x80074D9C:
{
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl2_0x80074DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x80074DD0;
    }
}

loc_inl2_0x80074DB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl2_0x80074DBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x80074DD0;
    }
}

loc_inl2_0x80074DC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl2_0x80074DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80074DD4;
    }
}

loc_inl2_0x80074DD0:
{
    r0 = 1;
}

loc_inl2_0x80074DD4:
{
    r3 = r0;
}

loc_inl2_cont_80074D9C:
{
    // end of inlined leaf 0x80074D9C
}

loc_80074C68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80074C80;
    }
}

loc_80074C6C:
{
    r3 = (r30 + 16);
    r4 = (r31 + 140);
    // inline leaf 0x80074D9C (16 guest instruction(s))
}

loc_inl3_0x80074D9C:
{
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl3_0x80074DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x80074DD0;
    }
}

loc_inl3_0x80074DB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl3_0x80074DBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x80074DD0;
    }
}

loc_inl3_0x80074DC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl3_0x80074DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80074DD4;
    }
}

loc_inl3_0x80074DD0:
{
    r0 = 1;
}

loc_inl3_0x80074DD4:
{
    r3 = r0;
}

loc_inl3_cont_80074D9C:
{
    // end of inlined leaf 0x80074D9C
}

loc_80074C7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074D84;
    }
}

loc_80074C80:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -8);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r3 = (r31 + 128);
    r4 = (r30 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 140);
    r4 = (r30 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    goto loc_80074D84;
}

loc_80074CC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 2);
}

loc_80074CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074CE4;
    }
}

loc_80074CD0:
{
    r3 = (r30 + 28);
    r4 = (r31 + 152);
    if constexpr (KnownRegArgsCpuCall<0x80074D9Cu>(&func_80074D9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80074D9C_1E99 = func_80074D9C_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_80074D9C_1E99;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80074D9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80074CE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074D84;
    }
}

loc_80074CE4:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -8);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r3 = (r31 + 152);
    r4 = (r30 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    goto loc_80074D84;
}

loc_80074D18:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 4);
}

loc_80074D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80074D4C;
    }
}

loc_80074D28:
{
    r3 = (r30 + 16);
    r4 = (r31 + 140);
    if constexpr (KnownRegArgsCpuCall<0x80074D9Cu>(&func_80074D9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80074D9C_2535 = func_80074D9C_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_80074D9C_2535;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80074D9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80074D38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80074D4C;
    }
}

loc_80074D3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80074D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80074D84;
    }
}

loc_80074D4C:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -8);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r3 = (r31 + 140);
    r4 = (r30 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 164), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r31 + 112), r0);
}

loc_80074D84:
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

extern "C" void func_80074BC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80074BC8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80074BC8 func_80074BC8 preserves=true fpr_mask=0x00000000
