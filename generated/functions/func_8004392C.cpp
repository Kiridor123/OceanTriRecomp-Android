#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004392C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_8004392C;

loc_8004392C:
{
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80043944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004395C;
    }
}

loc_80043948:
{
}

loc_8004394C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80043964;
    }
}

loc_80043950:
{
}

loc_80043954:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8004396C;
    }
}

loc_80043958:
{
    goto loc_80043974;
}

loc_8004395C:
{
    r3 = MemoryInline::FlatRead16((r3 + 206));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_80043964:
{
    r3 = MemoryInline::FlatRead16((r3 + 256));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_8004396C:
{
    r3 = MemoryInline::FlatRead16((r3 + 218));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_80043974:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8004392C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004392C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004392C func_8004392C preserves=true fpr_mask=0x00000000
