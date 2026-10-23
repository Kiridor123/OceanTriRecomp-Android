#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A1508_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_800A1508;

loc_800A1508:
{
    r0 = MemoryInline::FlatRead8((r3 + 228));
}

loc_800A1510:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A155C;
    }
}

loc_800A1514:
{
    r6 = MemoryInline::FlatRead8((r3 + 150));
    r5 = 3;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = ~(r0 | r0);
    r0 = (r0 & 255);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite8((r3 + 150), static_cast<uint8_t>(r0));
    r6 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r5 = (r0 & 3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r3 + 150), static_cast<uint8_t>(r0));
}

loc_800A155C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 228), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_800A1508(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800A1508_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A1508 func_800A1508 preserves=true fpr_mask=0x00000000
