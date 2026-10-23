#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A240(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8082A240;

loc_8082A240:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8082A248:
{
    MemoryInline::FlatWrite32(r3, r0);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_return;
    }
}

loc_8082A250:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082A240 func_8082A240 preserves=true fpr_mask=0x00000000
