#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004E538_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8004E538;

loc_8004E538:
{
    r0 = (r4 & 255);
}

loc_8004E540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004E58C;
    }
}

loc_8004E544:
{
    r4 = 0;
    r0 = 41;
    ctr = r0;
}

loc_8004E550:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_8004E558:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8004E57C;
    }
}

loc_8004E55C:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead16((r6 + 15296));
}

loc_8004E56C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_8004E578;
    }
}

loc_8004E570:
{
}

loc_8004E574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004E57C;
    }
}

loc_8004E578:
{
    MemoryInline::FlatWrite16((r6 + 15296), static_cast<uint16_t>(r5));
}

loc_8004E57C:
{
    r4 = (r4 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004E550;
    }
}

loc_8004E588:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004E58C:
{
    r4 = 0;
    r0 = 41;
    ctr = r0;
}

loc_8004E598:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_8004E5A0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8004E5BC;
    }
}

loc_8004E5A4:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead16((r6 + 15298));
}

loc_8004E5B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8004E5BC;
    }
}

loc_8004E5B8:
{
    MemoryInline::FlatWrite16((r6 + 15298), static_cast<uint16_t>(r5));
}

loc_8004E5BC:
{
    r4 = (r4 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004E598;
    }
}

loc_8004E5C8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004E538(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004E538_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004E538 func_8004E538 preserves=true fpr_mask=0x00000000
