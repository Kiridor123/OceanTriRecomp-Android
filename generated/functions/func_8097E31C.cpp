#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097E31C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8097E31Cu);
    goto loc_8097E31C;

loc_8097E31C:
{
    r3 = 0x80660000u;
    r5 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r5 + 2320));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2321));
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4311), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097E31C func_8097E31C preserves=true fpr_mask=0x00000000
