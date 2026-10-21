#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8031C950_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8031C950u);
    goto loc_8031C950;

loc_8031C950:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8031C960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C970;
    }
}

loc_8031C964:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    goto loc_8031C98C;
}

loc_8031C970:
{
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031C980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8031C98C;
    }
}

loc_8031C984:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_8031C98C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8031C950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8031C950_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031C950 func_8031C950 preserves=true fpr_mask=0x00000000
