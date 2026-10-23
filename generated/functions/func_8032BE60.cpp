#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8032BE60_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;

    goto loc_8032BE60;

loc_8032BE60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_8032BE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032BEB4;
    }
}

loc_8032BE80:
{
}

loc_8032BE84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8032BEDC;
    }
}

loc_8032BE88:
{
}

loc_8032BE8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8032BEFC;
    }
}

loc_8032BE90:
{
}

loc_8032BE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8032BF1C;
    }
}

loc_8032BE98:
{
}

loc_8032BE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8032BF34;
    }
}

loc_8032BEA0:
{
}

loc_8032BEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8032BFA4;
    }
}

loc_8032BEA8:
{
}

loc_8032BEAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8032BFD4;
    }
}

loc_8032BEB0:
{
    goto loc_8032BFE8;
}

loc_8032BEB4:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8032BEBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8032BED4;
    }
}

loc_8032BEC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 487));
}

loc_8032BEC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032BED4;
    }
}

loc_8032BECC:
{
    r3 = 1;
    goto loc_8032BFEC;
}

loc_8032BED4:
{
    r3 = 0;
    goto loc_8032BFEC;
}

loc_8032BEDC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10960));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8032BEE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    r3 = (r0 & 255);
    goto loc_8032BFEC;
}

loc_8032BEFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8032BF08:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    goto loc_8032BFEC;
}

loc_8032BF1C:
{
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 4096);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_8032BFEC;
}

loc_8032BF34:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 10));
    ctx->lr = 0x8032BF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    ctx->lr = 0x8032BF4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8032BF50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8032BF9C;
    }
}

loc_8032BF54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8032BF60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8032BF78;
    }
}

loc_8032BF68:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 392));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8032BF70:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8032BF94;
    }
}

loc_8032BF78:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8032BF84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8032BF9C;
    }
}

loc_8032BF88:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 392));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8032BF90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8032BF9C;
    }
}

loc_8032BF94:
{
    r3 = 1;
    goto loc_8032BFEC;
}

loc_8032BF9C:
{
    r3 = 0;
    goto loc_8032BFEC;
}

loc_8032BFA4:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 10));
    ctx->lr = 0x8032BFB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    ctx->lr = 0x8032BFBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8032BFC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8032BFCC;
    }
}

loc_8032BFC4:
{
    r3 = MemoryInline::FlatRead8((r3 + 54));
    goto loc_8032BFEC;
}

loc_8032BFCC:
{
    r3 = 0;
    goto loc_8032BFEC;
}

loc_8032BFD4:
{
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_8032BFEC;
}

loc_8032BFE8:
{
    r3 = 0;
}

loc_8032BFEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8032BE60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8032BE60_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8032BE60 func_8032BE60 preserves=true fpr_mask=0x00000000
