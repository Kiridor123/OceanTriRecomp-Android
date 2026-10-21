#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021D238_ra20_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8021D238u);
    goto loc_8021D238;

loc_8021D238:
{
    r3 = 0x806B0000u;
    r5 = (r3 + -13296);
    r0 = MemoryInline::FlatRead8((r5 + 9));
    r0 = (r0 & 2);
}

loc_8021D24C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021D258;
    }
}

loc_8021D250:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8021D258:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r4 = MH3_TickLoad(r4, 2149700184);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r4);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r5 + 32), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 28), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8021D238(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021D238_ra20_0_8_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000020 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021D238 func_8021D238 preserves=true fpr_mask=0x00000000
