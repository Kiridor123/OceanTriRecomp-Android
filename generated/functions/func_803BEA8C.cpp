#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BEA8C_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x803BEA8Cu);
    goto loc_803BEA8C;

loc_803BEA8C:
{
    r0 = (r3 & 255);
    r4 = 0x80660000u;
    r4 = (r4 + -19184);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead8(r4_addr_0);
    r4 = 0x80600000u;
    r4 = (r4 + -29464);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_803BEAAC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_803BEAB4;
    }
}

loc_803BEAB0:
{
    r5 = r0;
}

loc_803BEAB4:
{
    r0 = (r3 & 255);
}

loc_803BEABC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803BEAC8;
    }
}

loc_803BEAC0:
{
    r0 = (r5 ^ 1);
    r5 = (r0 & 255);
}

loc_803BEAC8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803BEA8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BEA8C_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEA8C func_803BEA8C preserves=true fpr_mask=0x00000000
