#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045740C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8045740C;

loc_8045740C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -136), 0, 136u, true, false);
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r11 + -136));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r11 + -128));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r11 + -120));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r11 + -112));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r11 + -104));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r11 + -96));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r11 + -88));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r11 + -80));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r11 + -72));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r11 + -64));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r11 + -56));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r11 + -48));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r11 + -40));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r11 + -32));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r11 + -24));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 120u, (r11 + -16));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 128u, (r11 + -8));
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000800 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0xFFFF8000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045740C func_8045740C preserves=true fpr_mask=0x00000000
