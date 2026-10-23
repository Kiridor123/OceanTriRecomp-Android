#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2F80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800D2F80;

loc_800D2F80:
{
    r3 = 0x80660000u;
    r5 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r5 + 2196));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r5 + 2196), r4);
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 268435455);
    r0 = (r0 * 30);
    r0 = (r4 - r0);
}

loc_800D2FB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800D2FB4:
{
    r3 = MemoryInline::FlatRead32((r5 + 2192));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r5 + 2192), r4);
    r3 = 35979264;
    r0 = (r3 + 20735);
}

loc_800D2FCC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_800D2FD0:
{
    MemoryInline::FlatWriteRam32((r5 + 2192), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D2F80 func_800D2F80 preserves=true fpr_mask=0x00000000
