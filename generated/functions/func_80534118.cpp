#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80534118_ra38_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_80534184_loc_0 = 0;
    uint32_t addr_lfsx_805341CC_loc_0 = 0;
    uint32_t addr_lfsx_80534218_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80534118u);
    goto loc_80534118;

loc_80534118:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
}

loc_80534128:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8053413C;
    }
}

loc_8053412C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534134:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534144;
    }
}

loc_8053413C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_805342C4;
}

loc_80534144:
{
    r0 = (r4 * 12);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534154:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534164;
    }
}

loc_8053415C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + -8));
    goto loc_805342C4;
}

loc_80534164:
{
    r7 = (r4 + -1);
    r6 = 0;
    goto loc_805341AC;
}

loc_80534170:
{
    r5 = (r6 + r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r5);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r5 * 12);
    addr_lfsx_80534184_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80534184_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053418C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_80534198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805341A0;
    }
}

loc_8053419C:
{
    r7 = r5;
}

loc_805341A0:
{
}

loc_805341A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805341AC;
    }
}

loc_805341A8:
{
    r6 = r5;
}

loc_805341AC:
{
    r0 = (r7 + -1);
}

loc_805341B4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_805341C0;
    }
}

loc_805341B8:
{
}

loc_805341BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r7))) {
        goto loc_80534170;
    }
}

loc_805341C0:
{
    r5 = (r7 * 12);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1200));
    r0 = 0;
    addr_lfsx_805341CC_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_805341CC_loc_0);
    r8 = (r3 + r5);
    r5 = (r6 * 12);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = (r3 + r5);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805341E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805341F8;
    }
}

loc_805341E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1196));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805341F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805341F8;
    }
}

loc_805341F4:
{
    r0 = 1;
}

loc_805341F8:
{
}

loc_805341FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534238;
    }
}

loc_80534200:
{
    r0 = (r4 + -1);
}

loc_80534208:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0))) {
        goto loc_80534230;
    }
}

loc_8053420C:
{
    r0 = (r7 + 1);
    f1.d = MemoryInline::FlatReadFloat32(r8);
    r0 = (r0 * 12);
    addr_lfsx_80534218_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80534218_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534220:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534230;
    }
}

loc_80534224:
{
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_805342C4;
}

loc_80534230:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    goto loc_805342C4;
}

loc_80534238:
{
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -1192));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -1188));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1184));
    f2.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1180));
    f8.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f9.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f10.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f11.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f12.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = PpcFmulsInline(f12.d, f5.d);
    f3.d = PpcFmulsInline(f4.d, f12.d);
    f13.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f31.d = PpcFmulsInline(f13.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f12.d));
    f1.d = PpcFmulsInline(f4.d, f31.d);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f2.d = PpcFmulsInline(f10.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = PpcFmulsInline(f9.d, f0.d);
    f3.d = PpcFmulsInline(f11.d, f5.d);
    f1.d = PpcFmulsInline(f8.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_805342C4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80534118(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80534118_ra38_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001EB gpr_return=0x00000008 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80534118 func_80534118 preserves=true fpr_mask=0x00000000
