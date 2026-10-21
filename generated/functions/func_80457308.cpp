#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80457308_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80457308u);
    goto loc_80457308;

loc_80457308:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_8045731C:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80457320:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80457324:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80457328:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_return;
    }
}

loc_8045732C:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_return;
    }
}

loc_80457330:
{
    r3 = 0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

loc_return:
{
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80457308(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80457308_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000C8 gpr_write=0x000000E8 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457308 func_80457308 preserves=true fpr_mask=0x00000000
