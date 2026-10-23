#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804FC870_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804FC870;

loc_804FC870:
{
    r4 = MemoryInline::FlatRead32((r13 + -14048));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -14044), static_cast<uint8_t>(r0));
}

loc_804FC880:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804FC898;
    }
}

loc_804FC884:
{
}

loc_804FC888:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_804FC8B0;
    }
}

loc_804FC88C:
{
}

loc_804FC890:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_804FC8C8;
    }
}

loc_804FC894:
{
    goto loc_804FC8E4;
}

loc_804FC898:
{
}

loc_804FC89C:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FC8A8;
    }
}

loc_804FC8A4:
{
    r0 = (r4 + 1);
}

loc_804FC8A8:
{
    MemoryInline::FlatWrite32((r13 + -14048), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804FC8B0:
{
}

loc_804FC8B4:
{
    r0 = 5;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FC8C0;
    }
}

loc_804FC8BC:
{
    r0 = (r4 + 1);
}

loc_804FC8C0:
{
    MemoryInline::FlatWrite32((r13 + -14048), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804FC8C8:
{
    r0 = (r3 + -262144);
    r3 = 5;
}

loc_804FC8D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(45056))) {
        goto loc_804FC8DC;
    }
}

loc_804FC8D8:
{
    r3 = (r4 + 1);
}

loc_804FC8DC:
{
    MemoryInline::FlatWrite32((r13 + -14048), r3);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804FC8E4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -14048), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FC870(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FC870_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804FC870 func_804FC870 preserves=true fpr_mask=0x00000000
