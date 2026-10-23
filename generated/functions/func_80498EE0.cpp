#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80498EE0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_80498EE0;

loc_80498EE0:
{
    r4 = 0x80740000u;
    r0 = 2;
    r4 = (r4 + -5120);
    r5 = 0;
    r4 = (r4 + 1616);
    ctr = r0;
}

loc_80498EF8:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80498F00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80498F18;
    }
}

loc_80498F04:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80498F0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80498F18;
    }
}

loc_80498F10:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80498F18:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
}

loc_80498F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80498F3C;
    }
}

loc_80498F28:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80498F30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80498F3C;
    }
}

loc_80498F34:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80498F3C:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
}

loc_80498F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80498F60;
    }
}

loc_80498F4C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80498F54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80498F60;
    }
}

loc_80498F58:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80498F60:
{
    r4 = (r4 + 44);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
}

loc_80498F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80498F84;
    }
}

loc_80498F70:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80498F78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80498F84;
    }
}

loc_80498F7C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80498F84:
{
    r5 = (r5 + 1);
    r4 = (r4 + 44);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80498EF8;
    }
}

loc_80498F90:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80498EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80498EE0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80498EE0 func_80498EE0 preserves=true fpr_mask=0x00000000
