#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801434A0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    goto loc_801434A0;

loc_801434A0:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 31072);
    r4 = 0;
    r0 = 16;
    ctr = r0;
}

loc_801434B4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801434BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801434C0:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801434CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801434D0:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801434DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801434E0:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801434EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801434F0:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801434FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143500:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8014350C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143510:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8014351C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143520:
{
    r3 = (r3 + 68);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8014352C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143530:
{
    r4 = (r4 + 7);
    r3 = (r3 + 68);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801434B4;
    }
}

loc_8014353C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801434A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801434A0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801434A0 func_801434A0 preserves=true fpr_mask=0x00000000
