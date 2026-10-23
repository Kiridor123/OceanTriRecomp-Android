#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8026956C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8026956C;

loc_8026956C:
{
}

loc_80269570:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026957C;
    }
}

loc_80269574:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8026957C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80269584:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80269590;
    }
}

loc_80269588:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80269590:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 * 332);
    r5 = (r5 + r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 156));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8026956C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8026956C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026956C func_8026956C preserves=true fpr_mask=0x00000000
