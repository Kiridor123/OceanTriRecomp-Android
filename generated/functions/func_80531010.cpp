#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80531010(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_80531010;

loc_80531010:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r5 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f8.d = std::fabs(f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f9.d = std::fabs(f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 20));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_80531044:
{
    f10.d = std::fabs(f4.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f11.d = std::fabs(f5.d);
    f12.d = std::fabs(f6.d);
    f13.d = std::fabs(f7.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053109C;
    }
}

loc_80531060:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_80531064:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053109C;
    }
}

loc_8053106C:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_80531070:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053109C;
    }
}

loc_80531078:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8053107C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053109C;
    }
}

loc_80531084:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_80531088:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053109C;
    }
}

loc_80531090:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_80531094:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80531130;
    }
}

loc_8053109C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1264));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
}

loc_805310A4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_805310AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_805311D8;
    }
}

loc_805310B0:
{
    f8.d = PpcFmulsInline(f8.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_805310C0:
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
    r5 = (r5 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_805310F0:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_805310F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_805310FC:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_80531100:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_80531108:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8053110C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_80531114:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_80531118:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_80531120:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_80531124:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805310A4;
    }
}

loc_8053112C:
{
    goto loc_805311D8;
}

loc_80531130:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1264));
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_80531138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_8053113C:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_80531140:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_80531144:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_80531148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_8053114C:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_80531150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_80531154:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_80531158:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_8053115C:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_80531160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_80531164:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1248));
}

loc_80531168:
{
    f8.d = PpcFmulsInline(f8.d, f0.d);
    r5 = (r5 + -1);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_8053117C:
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
        goto loc_805311D8;
    }
}

loc_805311A4:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_805311A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_805311AC:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_805311B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_805311B4:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_805311B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_805311BC:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_805311C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_805311C4:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_805311C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805311D8;
    }
}

loc_805311CC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_805311D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-17))) {
        goto loc_80531168;
    }
}

loc_805311D8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r4 = (r1 + 8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f7.d);
    ctx->lr = 0x805311FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
// RECOMP_REGISTRATION base 0x80531010 func_80531010 preserves=true fpr_mask=0x00000000
