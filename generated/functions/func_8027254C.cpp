#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027254C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_8027254C;

loc_8027254C:
{
    r0 = (r7 & 65535);
}

loc_80272554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80272558:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80272560:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_return;
    }
}

loc_80272564:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_0, static_cast<uint8_t>(r9));
    r0 = MemoryInline::FlatRead8(r6);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_0, static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027254C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027254C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027254C func_8027254C preserves=true fpr_mask=0x00000000
