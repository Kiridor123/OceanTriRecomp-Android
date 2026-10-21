#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80127100_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80127100u);
    goto loc_80127100;

loc_80127100:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r5 & 255);
}

loc_80127110:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_80127140;
    }
}

loc_80127114:
{
    r4 = (r4 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = r0;
}

loc_80127124:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80127158;
    }
}

loc_80127128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80127130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_80127134:
{
    r3 = (r3 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80127128;
    }
}

loc_8012713C:
{
    goto loc_80127158;
}

loc_80127140:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80127148:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80127158;
    }
}

loc_8012714C:
{
    r0 = (r5 * 12);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80127158:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80127100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80127100_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80127100 func_80127100 preserves=true fpr_mask=0x00000000
