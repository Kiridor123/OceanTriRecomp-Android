#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082C370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8082C370u);
    goto loc_8082C370;

loc_8082C370:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r5 = 0x80840000u;
    r5 = (r5 + 18584);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f8.d = std::fabs(f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f9.d = std::fabs(f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r6 = 0;
    f6.d = MemoryInline::FlatReadFloat32((r4 + 16));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_8082C3A8:
{
    f7.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f10.d = std::fabs(f4.d);
    f11.d = std::fabs(f5.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f12.d = std::fabs(f6.d);
    f13.d = std::fabs(f7.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C404;
    }
}

loc_8082C3C8:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_8082C3CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C404;
    }
}

loc_8082C3D4:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_8082C3D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C404;
    }
}

loc_8082C3E0:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8082C3E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C404;
    }
}

loc_8082C3EC:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_8082C3F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C404;
    }
}

loc_8082C3F8:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_8082C3FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082C49C;
    }
}

loc_8082C404:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    // nop
}

loc_8082C410:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8082C418:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_8082C544;
    }
}

loc_8082C41C:
{
    f8.d = PpcFmulsInline(f8.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_8082C42C:
{
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f6.d = PpcFmulsInline(f6.d, f1.d);
    f7.d = PpcFmulsInline(f7.d, f1.d);
    f9.d = PpcFmulsInline(f9.d, f1.d);
    f10.d = PpcFmulsInline(f10.d, f1.d);
    f11.d = PpcFmulsInline(f11.d, f1.d);
    f12.d = PpcFmulsInline(f12.d, f1.d);
    f13.d = PpcFmulsInline(f13.d, f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C45C:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_8082C460:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C468:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_8082C46C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C474:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8082C478:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C480:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_8082C484:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C48C:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_8082C490:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C410;
    }
}

loc_8082C498:
{
    goto loc_8082C544;
}

loc_8082C49C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_8082C4A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4A8:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8082C4AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4B0:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_8082C4B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4B8:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_8082C4BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4C0:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_8082C4C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4C8:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_8082C4CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C4D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
}

loc_8082C4D4:
{
    f8.d = PpcFmulsInline(f8.d, f0.d);
    r6 = (r6 + -1);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_8082C4E8:
{
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PpcFmulsInline(f6.d, f0.d);
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f11.d = PpcFmulsInline(f11.d, f0.d);
    f12.d = PpcFmulsInline(f12.d, f0.d);
    f13.d = PpcFmulsInline(f13.d, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C510:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8082C514:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C518:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_8082C51C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C520:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_8082C524:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C528:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_8082C52C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C530:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_8082C534:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082C544;
    }
}

loc_8082C538:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8082C540:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-17))) {
        goto loc_8082C4D4;
    }
}

loc_8082C544:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r4 = (r1 + 8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f7.d);
    ctx->lr = 0x8082C568u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B95F0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082C370 func_8082C370 preserves=true fpr_mask=0x00000000
