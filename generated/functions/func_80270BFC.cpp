#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80270BFC_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80270BFC;

loc_80270BFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 964));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -14904), 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80270C10;
    }
}

loc_80270C0C:
{
    MemoryInline::FlatWriteFloat32((r3 + 964), f0.d);
}

loc_80270C10:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 968));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80270C24;
    }
}

loc_80270C20:
{
    MemoryInline::FlatWriteFloat32((r3 + 968), f0.d);
}

loc_80270C24:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 972));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80270C38;
    }
}

loc_80270C34:
{
    MemoryInline::FlatWriteFloat32((r3 + 972), f0.d);
}

loc_80270C38:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 976));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80270C4C;
    }
}

loc_80270C48:
{
    MemoryInline::FlatWriteFloat32((r3 + 976), f0.d);
}

loc_80270C4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 980));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80270C60;
    }
}

loc_80270C5C:
{
    MemoryInline::FlatWriteFloat32((r3 + 980), f0.d);
}

loc_80270C60:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 964));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80270C74;
    }
}

loc_80270C70:
{
    MemoryInline::FlatWriteFloat32((r3 + 964), f0.d);
}

loc_80270C74:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 968));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80270C88;
    }
}

loc_80270C84:
{
    MemoryInline::FlatWriteFloat32((r3 + 968), f0.d);
}

loc_80270C88:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 972));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270C94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80270C9C;
    }
}

loc_80270C98:
{
    MemoryInline::FlatWriteFloat32((r3 + 972), f0.d);
}

loc_80270C9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 976));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270CA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80270CB0;
    }
}

loc_80270CAC:
{
    MemoryInline::FlatWriteFloat32((r3 + 976), f0.d);
}

loc_80270CB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 980));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80270CBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80270CC0:
{
    MemoryInline::FlatWriteFloat32((r3 + 980), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_80270BFC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80270BFC_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80270BFC func_80270BFC preserves=true fpr_mask=0x00000000
