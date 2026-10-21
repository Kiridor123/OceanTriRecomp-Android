#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80225DB8_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80225DB8u);
    goto loc_80225DB8;

loc_80225DB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 2;
    r5 = MemoryInline::FlatRead32((r3 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80225DDC:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
    r5 = (r0 & 255);
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1030));
}

loc_80225DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225E70;
    }
}

loc_80225DF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225E40;
    }
}

loc_80225DF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_80225DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225EAC;
    }
}

loc_80225E00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225E1C;
    }
}

loc_80225E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1003));
}

loc_80225E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225E88;
    }
}

loc_80225E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225F80;
    }
}

loc_80225E10:
{
}

loc_80225E14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1002))) {
        goto loc_80225E70;
    }
}

loc_80225E18:
{
    goto loc_80225F80;
}

loc_80225E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1017));
}

loc_80225E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225EF4;
    }
}

loc_80225E24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225E34;
    }
}

loc_80225E28:
{
}

loc_80225E2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1016))) {
        goto loc_80225ED0;
    }
}

loc_80225E30:
{
    goto loc_80225F80;
}

loc_80225E34:
{
}

loc_80225E38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1019))) {
        goto loc_80225F80;
    }
}

loc_80225E3C:
{
    goto loc_80225E70;
}

loc_80225E40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80225E44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225F54;
    }
}

loc_80225E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225E64;
    }
}

loc_80225E4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1052));
}

loc_80225E50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225F30;
    }
}

loc_80225E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225F80;
    }
}

loc_80225E58:
{
}

loc_80225E5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1051))) {
        goto loc_80225F18;
    }
}

loc_80225E60:
{
    goto loc_80225F80;
}

loc_80225E64:
{
}

loc_80225E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1160))) {
        goto loc_80225F78;
    }
}

loc_80225E6C:
{
    goto loc_80225F80;
}

loc_80225E70:
{
}

loc_80225E74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80225E80;
    }
}

loc_80225E78:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225E80:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225E88:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15720));
    ctx->lr = 0x80225E94u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_123E = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_123E);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_123E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225E98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225EA4;
    }
}

loc_80225E9C:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225EA4:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225EAC:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15716));
    ctx->lr = 0x80225EB8u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_1892 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_1892);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_1892 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225EBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225EC8;
    }
}

loc_80225EC0:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225EC8:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225ED0:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15784));
    ctx->lr = 0x80225EDCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_1EE6 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_1EE6);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_1EE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225EE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225EEC;
    }
}

loc_80225EE4:
{
    r31 = 0;
    goto loc_80225F94;
}

loc_80225EEC:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225EF4:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15712));
    ctx->lr = 0x80225F00u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_253A = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_253A);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_253A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225F04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225F10;
    }
}

loc_80225F08:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225F10:
{
    r31 = 0;
    goto loc_80225F94;
}

loc_80225F18:
{
}

loc_80225F1C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80225F28;
    }
}

loc_80225F20:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225F28:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225F30:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15772));
    ctx->lr = 0x80225F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_2C84 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_2C84);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_2C84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225F40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225F4C;
    }
}

loc_80225F44:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225F4C:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225F54:
{
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15764));
    ctx->lr = 0x80225F60u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_32D8 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_32D8);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_32D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225F64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225F70;
    }
}

loc_80225F68:
{
    r31 = 2;
    goto loc_80225F94;
}

loc_80225F70:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225F78:
{
    r31 = 1;
    goto loc_80225F94;
}

loc_80225F80:
{
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80225F8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80225F94;
    }
}

loc_80225F90:
{
    r31 = 1;
}

loc_80225F94:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80225DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80225DB8_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80225DB8 func_80225DB8 preserves=true fpr_mask=0x00000000
