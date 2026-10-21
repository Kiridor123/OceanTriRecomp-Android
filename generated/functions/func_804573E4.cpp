#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804573E4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x804573E4u);
    goto loc_804573E4;

loc_804573E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r11 + -64), f24.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r11 + -56), f25.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r11 + -48), f26.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r11 + -40), f27.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r11 + -32), f28.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r11 + -24), f29.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r11 + -16), f30.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r11 + -8), f31.d);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000800 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0xFF000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804573E4 func_804573E4 preserves=true fpr_mask=0x00000000
