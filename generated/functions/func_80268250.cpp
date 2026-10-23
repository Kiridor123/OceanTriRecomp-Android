#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80268250_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80268250;

loc_80268250:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
    r10 = MemoryInline::FlatRead32((r3 + 12));
    r9 = MemoryInline::FlatRead32((r3 + 16));
    r8 = 0;
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 11;
    goto loc_802682B0;
}

loc_80268270:
{
    r3 = MemoryInline::FlatRead8(r10);
}

loc_80268278:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802682A4;
    }
}

loc_8026827C:
{
    r7 = 0;
    r3 = r9;
    ctr = r0;
}

loc_80268288:
{
    r4 = MemoryInline::FlatRead8(r3);
}

loc_80268290:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80268298;
    }
}

loc_80268294:
{
    r8 = (r8 + 1);
}

loc_80268298:
{
    r7 = (r7 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80268288;
    }
}

loc_802682A4:
{
    r6 = (r6 + 1);
    r10 = (r10 + 2848);
    r9 = (r9 + 332);
}

loc_802682B0:
{
}

loc_802682B4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_80268270;
    }
}

loc_802682B8:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80268250(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80268250_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027D9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80268250 func_80268250 preserves=true fpr_mask=0x00000000
