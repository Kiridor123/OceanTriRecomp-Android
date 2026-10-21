#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80045960_ra38_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80045960u);
    goto loc_80045960;

loc_80045960:
{
    r5 = (r4 + 36);
}

loc_80045964:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045970:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_800459C8;
    }
}

loc_80045974:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045980:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800459BC;
    }
}

loc_80045988:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045990:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800459BC;
    }
}

loc_80045998:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800459A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800459BC;
    }
}

loc_800459AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800459B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800459C8;
    }
}

loc_800459BC:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
}

loc_800459C8:
{
    r5 = (r5 + -12);
}

loc_800459D0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80045964;
    }
}

loc_800459D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_80045960(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80045960_ra38_2_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045960 func_80045960 preserves=true fpr_mask=0x00000000
