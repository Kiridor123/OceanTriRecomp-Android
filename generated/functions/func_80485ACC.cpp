#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80485ACC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80485ACCu);
    goto loc_80485ACC;

loc_80485ACC:
{
    r3 = 0x80740000u;
    r0 = 2;
    r3 = (r3 + -17608);
    r4 = 0;
    r3 = (r3 + 5860);
    ctr = r0;
}

loc_80485AE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_80485AEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485AF8;
    }
}

loc_80485AF0:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485AF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 54));
    r4 = (r4 + 1);
}

loc_80485B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485B10;
    }
}

loc_80485B08:
{
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485B10:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r4 + 1);
}

loc_80485B1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485B28;
    }
}

loc_80485B20:
{
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485B28:
{
    r0 = MemoryInline::FlatRead8((r3 + 110));
    r4 = (r4 + 1);
}

loc_80485B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485B40;
    }
}

loc_80485B38:
{
    r3 = (r3 + 92);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485B40:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r4 = (r4 + 1);
}

loc_80485B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485B58;
    }
}

loc_80485B50:
{
    r3 = (r3 + 120);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485B58:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r4 = (r4 + 1);
}

loc_80485B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485B70;
    }
}

loc_80485B68:
{
    r3 = (r3 + 148);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485B70:
{
    r4 = (r4 + 1);
    r3 = (r3 + 168);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80485AE4;
    }
}

loc_80485B7C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80485ACC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80485ACC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80485ACC func_80485ACC preserves=true fpr_mask=0x00000000
