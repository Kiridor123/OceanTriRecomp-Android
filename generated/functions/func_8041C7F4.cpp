#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041C7F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8041C7F4;

loc_8041C7F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 291));
}

loc_8041C7FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8041C80C;
    }
}

loc_8041C800:
{
    r0 = MemoryInline::FlatRead8((r3 + 290));
}

loc_8041C808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041C81C;
    }
}

loc_8041C80C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 294), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8041C81C:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
}

loc_8041C824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041C830;
    }
}

loc_8041C828:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 289), static_cast<uint8_t>(r0));
}

loc_8041C830:
{
    r3 = MemoryInline::FlatRead8((r3 + 288));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041C7F4 func_8041C7F4 preserves=true fpr_mask=0x00000000
