#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8015C8F4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8015C8F4u);
    goto loc_8015C8F4;

loc_8015C8F4:
{
    r7 = (r3 & 255);
    r6 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_8015C900:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015C91C;
    }
}

loc_8015C904:
{
    r0 = (r5 & 255);
    r0 = (r7 + r0);
}

loc_8015C910:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_8015C93C;
    }
}

loc_8015C914:
{
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

loc_8015C91C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015C93C;
    }
}

loc_8015C920:
{
    r0 = (r5 & 255);
    r0 = (r6 + r0);
}

loc_8015C92C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_8015C93C;
    }
}

loc_8015C930:
{
    r0 = (r3 - r5);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

loc_8015C93C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8015C8F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8015C8F4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015C8F4 func_8015C8F4 preserves=true fpr_mask=0x00000000
