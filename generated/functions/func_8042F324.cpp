#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042F324_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    goto loc_8042F324;

loc_8042F324:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 1348), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1350), static_cast<uint16_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 + r4);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r9 = 0;
    r0 = (r10 * 304);
    r4 = (r3 + r0);
    r6 = (r4 + 1376);
    r7 = r3;
    r5 = 1;
    r0 = 5;
    ctr = r0;
}

loc_8042F370:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = MemoryInline::FlatRead16((r3 + 1348));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8042F37C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_8042F380:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 41));
    MemoryInline::FlatWrite8((r8 + 1361), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r6 + 285));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r8 + 1356), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 36));
    MemoryInline::FlatWrite16((r7 + 1366), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 1350));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 1350), static_cast<uint16_t>(r0));
    r6 = (r6 + 304);
    r10 = (r10 + 1);
    r7 = (r7 + 2);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8042F370;
    }
}

loc_8042F3D0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8042F324(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042F324_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000006F8 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042F324 func_8042F324 preserves=true fpr_mask=0x00000000
