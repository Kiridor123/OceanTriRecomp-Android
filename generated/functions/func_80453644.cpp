#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80453644_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80453644u);
    goto loc_80453644;

loc_80453644:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8045364C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80453658;
    }
}

loc_80453650:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return r4;
}

loc_80453658:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16188));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80453668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80453678;
    }
}

loc_8045366C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80453678;
    }
}

loc_80453670:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return r4;
}

loc_80453678:
{
    r3 = (r4 + 65536);
    r3 = (r3 + -16188);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_80453644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80453644_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002010 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453644 func_80453644 preserves=true fpr_mask=0x00000000
