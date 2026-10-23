#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804979D4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804979D4;

loc_804979D4:
{
    r4 = 0x80740000u;
    r4 = (r4 + -5120);
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804979E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804979FC;
    }
}

loc_804979E8:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
}

loc_804979F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804979FC;
    }
}

loc_804979F4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804979FC:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80497A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80497A1C;
    }
}

loc_80497A08:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
}

loc_80497A10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80497A1C;
    }
}

loc_80497A14:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80497A1C:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80497A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80497A3C;
    }
}

loc_80497A28:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
}

loc_80497A30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80497A3C;
    }
}

loc_80497A34:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80497A3C:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80497A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80497A5C;
    }
}

loc_80497A48:
{
    r0 = MemoryInline::FlatRead16((r4 + 40));
}

loc_80497A50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80497A5C;
    }
}

loc_80497A54:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80497A5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804979D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804979D4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804979D4 func_804979D4 preserves=true fpr_mask=0x00000000
