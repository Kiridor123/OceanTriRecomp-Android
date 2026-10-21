#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801DF35C_ra188_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801DF35Cu);
    goto loc_801DF35C;

loc_801DF35C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801DF380:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DF3A8;
    }
}

loc_801DF384:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 832));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17220));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 832), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17216));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DF39C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DF3C8;
    }
}

loc_801DF3A0:
{
    MemoryInline::FlatWriteFloat32((r29 + 832), f0.d);
    goto loc_801DF3C8;
}

loc_801DF3A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 832));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17220));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 832), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17828));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DF3C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DF3C8;
    }
}

loc_801DF3C4:
{
    MemoryInline::FlatWriteFloat32((r29 + 832), f0.d);
}

loc_801DF3C8:
{
    r30 = 0;
    r3 = MemoryInline::FlatRead8((r29 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r31 = r3;
    r0 = (r3 & 255);
}

loc_801DF3E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801DF3FC;
    }
}

loc_801DF3E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_801DF3EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801DF3F8;
    }
}

loc_801DF3F0:
{
}

loc_801DF3F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801DF3FC;
    }
}

loc_801DF3F8:
{
    r30 = 1;
}

loc_801DF3FC:
{
}

loc_801DF400:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_801DF438;
    }
}

loc_801DF404:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17800));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 832));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17464));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17216));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DF420:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DF428;
    }
}

loc_801DF424:
{
    f1.d = f0.d;
}

loc_801DF428:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r30 = fctiwzword0;
    goto loc_801DF448;
}

loc_801DF438:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 832));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r30 = fctiwzword1;
}

loc_801DF448:
{
    r3 = (r29 + 36);
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r30));
    r3 = (r29 + 36);
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r29 + 36);
    r4 = 1;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r30));
    r3 = (r29 + 36);
    r4 = 1;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF4A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r29 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF4B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r30));
    r3 = (r29 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF4CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r29 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF4E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r29;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801357AC
}

loc_801DF4F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DF570;
    }
}

loc_801DF4F4:
{
    r3 = 0;
    r0 = (r31 & 255);
}

loc_801DF500:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801DF51C;
    }
}

loc_801DF504:
{
    r0 = MemoryInline::FlatRead8((r29 + 1166));
}

loc_801DF50C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801DF518;
    }
}

loc_801DF510:
{
}

loc_801DF514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801DF51C;
    }
}

loc_801DF518:
{
    r3 = 1;
}

loc_801DF51C:
{
}

loc_801DF520:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DF558;
    }
}

loc_801DF524:
{
    r3 = MemoryInline::FlatRead8((r1 + 11));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -17664));
    stackword5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17212));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DF548:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DF574;
    }
}

loc_801DF54C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801DF574;
}

loc_801DF558:
{
    r3 = MemoryInline::FlatRead8((r1 + 11));
}

loc_801DF560:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801DF574;
    }
}

loc_801DF564:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801DF574;
}

loc_801DF570:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r30));
}

loc_801DF574:
{
    r3 = (r29 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801DF588u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801DF35C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801DF35C_ra188_2_8_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003F8F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801DF35C func_801DF35C preserves=true fpr_mask=0x00000000
