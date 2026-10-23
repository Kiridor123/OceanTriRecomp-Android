#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A5140_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804A5140;

loc_804A5140:
{
    r4 = 0x80000000u;
    r3 = 0x804A0000u;
    r0 = (r4 + 64);
    MemoryInline::FlatWrite32((r13 + -15840), r0);
    r3 = (r3 + 20928);
    r3 = (r3 + -2147483648);
    MemoryInline::FlatWriteRam32((r4 + 72), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15836), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A5140(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A5140_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A5140 func_804A5140 preserves=true fpr_mask=0x00000000
