#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80291A60(CpuContext* ctx);
extern "C" uint64_t func_80291A60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8025F4DC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_8025F4DC;

loc_8025F4DC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r3 = (r1 + 12);
    ctx->lr = 0x8025F4F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_574 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_574;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r4 = (r31 + 60);
    r5 = (r31 + 1444);
    r6 = (r1 + 8);
    r7 = -6;
    ctx->lr = 0x8025F510u;
    if constexpr (KnownRegArgsCpuCall<0x80291A60u>(&func_80291A60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80291A60_8BD = func_80291A60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80291A60_8BD);
        r4 = static_cast<uint32_t>(regargs_result_80291A60_8BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291A60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8025F514:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8025F52C;
    }
}

loc_8025F518:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_8025F5D8;
}

loc_8025F52C:
{
    r3 = r31;
    r4 = (r31 + 60);
    r5 = (r31 + 1444);
    r6 = (r1 + 8);
    r7 = 1;
    ctx->lr = 0x8025F544u;
    if constexpr (KnownRegArgsCpuCall<0x80291A60u>(&func_80291A60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80291A60_109F = func_80291A60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80291A60_109F);
        r4 = static_cast<uint32_t>(regargs_result_80291A60_109F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291A60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8025F548:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8025F5D8;
    }
}

loc_8025F54C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r31 + 60);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    r7 = 4;
    ctx->lr = 0x8025F574u;
    if constexpr (KnownRegArgsCpuCall<0x80291A60u>(&func_80291A60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80291A60_1852 = func_80291A60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80291A60_1852);
        r4 = static_cast<uint32_t>(regargs_result_80291A60_1852 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291A60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8025F578:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8025F5D0;
    }
}

loc_8025F57C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 100), f2.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 116), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8025F59C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8025F5A8;
    }
}

loc_8025F5A4:
{
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
}

loc_8025F5A8:
{
    r3 = r31;
    // inline leaf 0x80278878 (18 guest instruction(s))
}

loc_inl0_0x80278878:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl0_0x80278880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802788B8;
    }
}

loc_inl0_0x80278884:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl0_0x80278898:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x802788B8;
    }
}

loc_inl0_0x802788A0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl0_0x802788A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x802788B8;
    }
}

loc_inl0_0x802788B0:
{
    r3 = 1;
    goto loc_inl0_cont_80278878;
}

loc_inl0_0x802788B8:
{
    r3 = 0;
}

loc_inl0_cont_80278878:
{
    // end of inlined leaf 0x80278878
}

loc_8025F5B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F5C4;
    }
}

loc_8025F5B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 117), static_cast<uint8_t>(r0));
    goto loc_8025F5D8;
}

loc_8025F5C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 117), static_cast<uint8_t>(r0));
    goto loc_8025F5D8;
}

loc_8025F5D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 116), static_cast<uint8_t>(r0));
}

loc_8025F5D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025F4DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025F4DC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025F4DC func_8025F4DC preserves=true fpr_mask=0x00000000
