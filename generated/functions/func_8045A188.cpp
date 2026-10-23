#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045A188_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_8045A188;

loc_8045A188:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8045A190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045A1A8;
    }
}

loc_8045A194:
{
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A1A8:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
}

loc_8045A1B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045A1BC;
    }
}

loc_8045A1B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A1BC:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8045A1C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_8045A270;
    }
}

loc_8045A1CC:
{
    r7 = MemoryInline::FlatRead8((r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r9 = r7;
}

loc_8045A1DC:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_8045A1E4;
    }
}

loc_8045A1E0:
{
    r9 = r0;
}

loc_8045A1E4:
{
    r8 = 0;
    ctr = r9;
}

loc_8045A1F0:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_8045A22C;
    }
}

loc_8045A1F4:
{
    r6 = (r4 + r8);
    r5 = (r3 + r8);
    r6 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8045A208:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8045A214;
    }
}

loc_8045A20C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A214:
{
}

loc_8045A218:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_8045A224;
    }
}

loc_8045A21C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A224:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A1F4;
    }
}

loc_8045A22C:
{
}

loc_8045A230:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r7))) {
        goto loc_8045A268;
    }
}

loc_8045A234:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r3 - r8);
    ctr = r0;
}

loc_8045A244:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r3))) {
        goto loc_8045A268;
    }
}

loc_8045A248:
{
    r3 = (r4 + r8);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8045A254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A260;
    }
}

loc_8045A258:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A260:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A248;
    }
}

loc_8045A268:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_8045A270:
{
    r0 = (r5 ^ r0);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r5);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8045A188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045A188_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045A188 func_8045A188 preserves=true fpr_mask=0x00000000
