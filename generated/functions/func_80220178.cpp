#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80220178_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80220178;

loc_80220178:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r4 + 18012));
}

loc_80220184:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220190;
    }
}

loc_80220188:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 18012), static_cast<uint8_t>(r0));
}

loc_80220190:
{
    r4 = (r4 + 18012);
    r3 = MemoryInline::FlatRead8((r4 + 8));
}

loc_8022019C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802201A8;
    }
}

loc_802201A0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
}

loc_802201A8:
{
    r3 = MemoryInline::FlatRead8((r4 + 16));
}

loc_802201B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802201B4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80220178(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220178_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220178 func_80220178 preserves=true fpr_mask=0x00000000
