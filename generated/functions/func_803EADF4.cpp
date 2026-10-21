#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EADF4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x803EADF4u);
    goto loc_803EADF4;

loc_803EADF4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
}

loc_803EAE1C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(99))) {
        goto loc_803EAE28;
    }
}

loc_803EAE20:
{
    r3 = -1;
    goto loc_803EAE88;
}

loc_803EAE28:
{
}

loc_803EAE2C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803EAE38;
    }
}

loc_803EAE30:
{
    r3 = -2;
    goto loc_803EAE88;
}

loc_803EAE38:
{
    r4 = (r4 * 260);
    r6 = (r3 + r4);
    r0 = MemoryInline::FlatRead16((r5 + 316));
    MemoryInline::FlatWrite32((r6 + 22876), r0);
    r0 = MemoryInline::FlatRead32((r6 + 22876));
}

loc_803EAE50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(256))) {
        goto loc_803EAE5C;
    }
}

loc_803EAE54:
{
    r0 = 256;
    MemoryInline::FlatWrite32((r6 + 22876), r0);
}

loc_803EAE5C:
{
    r3 = (r3 + r4);
    r3 = (r3 + 22880);
    r4 = (r5 + 60);
    r5 = MemoryInline::FlatRead32((r6 + 22876));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r31 + 56));
    r3 = (r29 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + -16660), r4);
    r3 = 1;
}

loc_803EAE88:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EADF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EADF4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EADF4 func_803EADF4 preserves=true fpr_mask=0x00000000
