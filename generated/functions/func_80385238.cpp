#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80385238_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80385238u);
    goto loc_80385238;

loc_80385238:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 28424);
    r4 = 0;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8038524C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80385258;
    }
}

loc_80385250:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385258:
{
    r4 = 1;
    r3 = (r3 + 504);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80385268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80385274;
    }
}

loc_8038526C:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385274:
{
    r4 = 2;
    r3 = (r3 + 504);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80385284:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80385290;
    }
}

loc_80385288:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80385290:
{
    r4 = 3;
    r3 = (r3 + 504);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803852A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803852AC;
    }
}

loc_803852A4:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803852AC:
{
    r4 = 4;
    r3 = (r3 + 504);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803852BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803852C8;
    }
}

loc_803852C0:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803852C8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80385238(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80385238_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385238 func_80385238 preserves=true fpr_mask=0x00000000
