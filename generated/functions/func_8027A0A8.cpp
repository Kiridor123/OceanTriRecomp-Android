#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027A0A8_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8027A0A8;

loc_8027A0A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1512));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8027A0BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8027A0D8;
    }
}

loc_8027A0C0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027A0C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8192))) {
        goto loc_return;
    }
}

loc_8027A0CC:
{
    r0 = 8192;
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_8027A0D8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027A0E0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-8192))) {
        goto loc_return;
    }
}

loc_8027A0E4:
{
    r0 = -8192;
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_8027A0A8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8027A0A8_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027A0A8 func_8027A0A8 preserves=true fpr_mask=0x00000000
