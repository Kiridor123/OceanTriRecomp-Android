#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8031C3F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8031C3F4;

loc_8031C3F4:
{
    r0 = (r4 & 65535);
    r0 = (r0 & 16);
}

loc_8031C400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C418;
    }
}

loc_8031C404:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    goto loc_8031C464;
}

loc_8031C418:
{
    r0 = (r5 & 65535);
    r0 = (r0 & 16);
}

loc_8031C424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C45C;
    }
}

loc_8031C428:
{
    r4 = MemoryInline::FlatRead8((r3 + 23));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031C440:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8031C464;
    }
}

loc_8031C444:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8031C45C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
}

loc_8031C464:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031C3F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031C3F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031C3F4 func_8031C3F4 preserves=true fpr_mask=0x00000000
