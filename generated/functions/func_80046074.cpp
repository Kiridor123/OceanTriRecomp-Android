#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80046074_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80046074u);
    goto loc_80046074;

loc_80046074:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 220), 0, 184u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 220));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r3 + 356));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 224));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r3 + 360));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r3 + 332));
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f8.d = PpcFmulsInline(f8.d, f0.d);
    r4 = (r3 + 240);
    r0 = (r3 + 288);
}

loc_800460C4:
{
    r5 = MemoryInline::FlatRead8((r4 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_800460D0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800461FC;
    }
}

loc_800460D4:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r3 + 388));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80046104:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004613C;
    }
}

loc_8004610C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r3 + 396));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80046114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004613C;
    }
}

loc_8004611C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r3 + 392));
    SetCRFloatResident(cr, 0, f6.d, f1.d);
}

loc_80046124:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004613C;
    }
}

loc_8004612C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r3 + 400));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_80046134:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800461A0;
    }
}

loc_8004613C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r3 + 388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046148:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800461FC;
    }
}

loc_8004614C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r3 + 396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046154:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800461FC;
    }
}

loc_80046158:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r3 + 392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800461FC;
    }
}

loc_80046168:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r3 + 400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80046170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800461FC;
    }
}

loc_80046174:
{
    r3 = (r3 + 300);
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = (r31 + 288);
    r4 = (r1 + 16);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 296), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 297), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_8004620C;
}

loc_800461A0:
{
    SetCRFloatResident(cr, 0, f5.d, f3.d);
}

loc_800461A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800461D0;
    }
}

loc_800461AC:
{
    SetCRFloatResident(cr, 0, f5.d, f2.d);
}

loc_800461B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800461D0;
    }
}

loc_800461B8:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_800461BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800461D0;
    }
}

loc_800461C4:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800461C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800461FC;
    }
}

loc_800461D0:
{
    r3 = (r3 + 288);
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = (r31 + 300);
    r4 = (r1 + 8);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 308), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 309), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_8004620C;
}

loc_800461FC:
{
    r4 = (r4 + 12);
}

loc_80046204:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_800460C4;
    }
}

loc_80046208:
{
    r3 = 0;
}

loc_8004620C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80046074(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80046074_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80046074 func_80046074 preserves=true fpr_mask=0x00000000
