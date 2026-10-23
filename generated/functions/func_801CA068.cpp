#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801CA068_ra188_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    uint32_t cr = ctx->cr;

    goto loc_801CA068;

loc_801CA068:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801CA088:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA0B0;
    }
}

loc_801CA08C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18572));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 808), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -18568));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801CA0A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801CA0D0;
    }
}

loc_801CA0A8:
{
    MemoryInline::FlatWriteFloat32((r30 + 808), f0.d);
    goto loc_801CA0D0;
}

loc_801CA0B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -18572));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 808), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801CA0C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CA0D0;
    }
}

loc_801CA0CC:
{
    MemoryInline::FlatWriteFloat32((r30 + 808), f0.d);
}

loc_801CA0D0:
{
    r3 = (r30 + 36);
    r4 = 3;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA0E4u;
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r30 + 36);
    r4 = 3;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA10Cu;
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
    r3 = (r30 + 36);
    r4 = 1;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA120u;
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r30 + 36);
    r4 = 1;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA148u;
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
    r31 = 0;
    r3 = MemoryInline::FlatRead8((r30 + 480));
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
    r0 = (r3 & 255);
}

loc_801CA15C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801CA178;
    }
}

loc_801CA160:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801CA168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801CA174;
    }
}

loc_801CA16C:
{
}

loc_801CA170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801CA178;
    }
}

loc_801CA174:
{
    r31 = 1;
}

loc_801CA178:
{
    r3 = (r30 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA18Cu;
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
}

loc_801CA190:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_801CA1A0;
    }
}

loc_801CA194:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801CA1A8;
}

loc_801CA1A0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_801CA1A8:
{
    r3 = (r30 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801CA1BCu;
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

extern "C" void func_801CA068(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801CA068_ra188_2_8_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003F8F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CA068 func_801CA068 preserves=true fpr_mask=0x00000000
