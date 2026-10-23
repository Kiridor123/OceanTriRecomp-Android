#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80828794_loc_0 = 0;
    uint32_t addr_lfsx_808287DC_loc_0 = 0;
    uint32_t addr_lfsx_80828828_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80828720;

loc_80828720:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
}

loc_80828730:
{
    r6 = 0x80840000u;
    r6 = (r6 + 18520);
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8082874C;
    }
}

loc_8082873C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828744:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80828754;
    }
}

loc_8082874C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_808288D4;
}

loc_80828754:
{
    r0 = (r4 * 12);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828764:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80828774;
    }
}

loc_8082876C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + -8));
    goto loc_808288D4;
}

loc_80828774:
{
    r8 = (r4 + -1);
    r7 = 0;
    goto loc_808287BC;
}

loc_80828780:
{
    r5 = (r7 + r8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r5);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r5 * 12);
    addr_lfsx_80828794_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80828794_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8082879C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_808287A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808287B0;
    }
}

loc_808287AC:
{
    r8 = r5;
}

loc_808287B0:
{
}

loc_808287B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808287BC;
    }
}

loc_808287B8:
{
    r7 = r5;
}

loc_808287BC:
{
    r0 = (r8 + -1);
}

loc_808287C4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_808287D0;
    }
}

loc_808287C8:
{
}

loc_808287CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r8))) {
        goto loc_80828780;
    }
}

loc_808287D0:
{
    r5 = (r8 * 12);
    f0.d = MemoryInline::FlatReadFloat32(r6);
    r0 = 0;
    addr_lfsx_808287DC_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_808287DC_loc_0);
    r9 = (r3 + r5);
    r5 = (r7 * 12);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = (r3 + r5);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_808287F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80828808;
    }
}

loc_808287F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80828800:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80828808;
    }
}

loc_80828804:
{
    r0 = 1;
}

loc_80828808:
{
}

loc_8082880C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80828848;
    }
}

loc_80828810:
{
    r0 = (r4 + -1);
}

loc_80828818:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80828840;
    }
}

loc_8082881C:
{
    r0 = (r8 + 1);
    f1.d = MemoryInline::FlatReadFloat32(r9);
    r0 = (r0 * 12);
    addr_lfsx_80828828_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80828828_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80828840;
    }
}

loc_80828834:
{
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_808288D4;
}

loc_80828840:
{
    f1.d = MemoryInline::FlatReadFloat32((r9 + 4));
    goto loc_808288D4;
}

loc_80828848:
{
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f2.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f8.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f9.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f10.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f11.d = MemoryInline::FlatReadFloat32((r9 + 8));
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

loc_808288D4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003EB gpr_return=0x00000008 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828720 func_80828720 preserves=true fpr_mask=0x00000000
