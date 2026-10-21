#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80502518_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80502518u);
    goto loc_80502518;

loc_80502518:
{
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead8(r7);
    r0 = (r6 & 128);
}

loc_80502524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80502538;
    }
}

loc_80502528:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80502588;
}

loc_80502538:
{
    r0 = (r6 & 224);
}

loc_80502540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(192))) {
        goto loc_80502564;
    }
}

loc_80502544:
{
    r4 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r0 = (r4 + 2);
    r4 = (r5 & 63);
    MemoryInline::FlatWrite32(r3, r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r4_mrot_1 = (r4_rot_1 & 1984);
    r4_mdest_1 = (r4 & -1985);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r6 = r4;
    goto loc_80502588;
}

loc_80502564:
{
    r4 = MemoryInline::FlatRead32(r3);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r5 = (r5_rot_1 & 126976);
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r7 = MemoryInline::FlatRead8((r7 + 2));
    r0 = (r4 + 3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r5_mrot_1 = (r5_rot_2 & 4032);
    r5_mdest_1 = (r5 & -4033);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r5_mrot_2 = (r7 & 63);
    r5_mdest_2 = (r5 & -64);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite32(r3, r0);
    r6 = (r5 & 65535);
}

loc_80502588:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_80502518(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80502518_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000E8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80502518 func_80502518 preserves=true fpr_mask=0x00000000
