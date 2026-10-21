#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80385108_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80385108u);
    goto loc_80385108;

loc_80385108:
{
    r4 = 0x806C0000u;
    r4 = (r4 + 30944);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8038511C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80385134;
    }
}

loc_80385120:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80385128:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80385134;
    }
}

loc_8038512C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385134:
{
    r3 = MemoryInline::FlatRead8((r4 + 13));
}

loc_8038513C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80385154;
    }
}

loc_80385140:
{
    r3 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80385148:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80385154;
    }
}

loc_8038514C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385154:
{
    r3 = MemoryInline::FlatRead8((r4 + 25));
}

loc_8038515C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80385174;
    }
}

loc_80385160:
{
    r3 = MemoryInline::FlatRead8((r4 + 26));
}

loc_80385168:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80385174;
    }
}

loc_8038516C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385174:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80385108(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80385108_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385108 func_80385108 preserves=true fpr_mask=0x00000000
