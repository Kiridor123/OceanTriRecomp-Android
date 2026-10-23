#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8053EBA8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053EBA8;

loc_8053EBA8:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8053EBB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053EBEC;
    }
}

loc_8053EBB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053EBCC;
    }
}

loc_8053EBBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053EBC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053EBDC;
    }
}

loc_8053EBC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053EBE4;
    }
}

loc_8053EBC8:
{
    goto loc_8053EC04;
}

loc_8053EBCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053EBD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053EBFC;
    }
}

loc_8053EBD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053EC04;
    }
}

loc_8053EBD8:
{
    goto loc_8053EBF4;
}

loc_8053EBDC:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8053EBE4:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8053EBEC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8053EBF4:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8053EBFC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8053EC04:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8053EBA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8053EBA8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053EBA8 func_8053EBA8 preserves=true fpr_mask=0x00000000
