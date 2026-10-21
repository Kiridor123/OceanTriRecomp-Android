#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804D7090_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_ca_0 = 0;
    uint32_t r3_not_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D7090u);
    goto loc_804D7090;

loc_804D7090:
{
    r0 = MemoryInline::FlatRead32((r13 + -14880));
    r3 = MemoryInline::FlatRead32((r13 + -14876));
    r0 = (r3 | r0);
    r3 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_0 = ~(r3);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r0);
    r3 = (r3 + r3_ca_0);
    ctx->gpr[0] = r0;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_804D7090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D7090_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D7090 func_804D7090 preserves=true fpr_mask=0x00000000
