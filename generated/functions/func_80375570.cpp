#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80375570_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_80375570;

loc_80375570:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80375578:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_8037559C;
    }
}

loc_8037557C:
{
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_80375584:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8037559C;
    }
}

loc_80375588:
{
    r0 = MemoryInline::FlatRead8((r3 + 2401));
}

loc_80375590:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(30))) {
        goto loc_8037559C;
    }
}

loc_80375594:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8037559C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80375570(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80375570_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80375570 func_80375570 preserves=true fpr_mask=0x00000000
