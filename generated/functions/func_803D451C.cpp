#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803D451C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803D451C;

loc_803D451C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r0 * 2340);
    r3 = (r3 + 65536);
    r31 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5032));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18700));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803D4558:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803D46DC;
    }
}

loc_803D455C:
{
    MemoryInline::FlatWriteFloat32((r31 + 18700), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18684));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D4570:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D45C0;
    }
}

loc_803D4574:
{
    MemoryInline::FlatWriteFloat32((r31 + 18684), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18688));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4968));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 18688), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18688));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -21748));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D4594:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D45A0;
    }
}

loc_803D4598:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -21748));
    MemoryInline::FlatWriteFloat32((r31 + 18688), f0.d);
}

loc_803D45A0:
{
    r3 = MemoryInline::FlatRead32((r31 + 18692));
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r31 + 18692), r0);
    r0 = MemoryInline::FlatRead32((r31 + 18692));
}

loc_803D45B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1024))) {
        goto loc_803D45C0;
    }
}

loc_803D45B8:
{
    r0 = 1024;
    MemoryInline::FlatWrite32((r31 + 18692), r0);
}

loc_803D45C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 18696));
}

loc_803D45C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D460C;
    }
}

loc_803D45CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 18696), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18676));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 18688));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4964));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 18688), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 18680));
    r3 = MemoryInline::FlatRead32((r31 + 18692));
    r0 = (r3 - r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r31 + 18692), r0);
}

loc_803D460C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18688));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 18676));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_803D4618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D4674;
    }
}

loc_803D461C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5000));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803D4628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D4634;
    }
}

loc_803D462C:
{
    MemoryInline::FlatWriteFloat32((r31 + 18676), f1.d);
    goto loc_803D4648;
}

loc_803D4634:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4976));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 18676), f0.d);
}

loc_803D4648:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 1;
    r5 = 0x80600000u;
    r5 = (r5 + -21100);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18676));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D4674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_803D4674:
{
    r3 = MemoryInline::FlatRead32((r31 + 18692));
    r4 = MemoryInline::FlatRead32((r31 + 18680));
}

loc_803D4680:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_803D46DC;
    }
}

loc_803D4684:
{
    r0 = (r3 + -32);
}

loc_803D468C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_803D4698;
    }
}

loc_803D4690:
{
    MemoryInline::FlatWrite32((r31 + 18680), r3);
    goto loc_803D46B0;
}

loc_803D4698:
{
    r3 = (r3 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 18680), r0);
}

loc_803D46B0:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 1;
    r5 = 0x80600000u;
    r5 = (r5 + -21040);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r7 = MemoryInline::FlatRead32((r31 + 18680));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D46DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_803D46DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D451C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D451C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D451C func_803D451C preserves=true fpr_mask=0x00000000
