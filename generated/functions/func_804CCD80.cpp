#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CCD80_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_dcbz_0 = 0;
    uint32_t r3_addr_dcbz_1 = 0;
    uint32_t r3_addr_dcbz_2 = 0;
    uint32_t r3_addr_dcbz_al_0 = 0;
    uint32_t r3_addr_dcbz_al_1 = 0;
    uint32_t r3_addr_dcbz_al_2 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    goto loc_804CCD80;

loc_804CCD80:
{
}

loc_804CCD84:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_return;
    }
}

loc_804CCD88:
{
    r5 = (r3 & 31);
    r4 = (r4 + r5);
    r4 = (r4 + 31);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    ctr = r4;
}

loc_804CCD9C:
{
    r3_addr_dcbz_2 = r3;
    r3_addr_dcbz_al_2 = (r3_addr_dcbz_2 & -32);
    memset_zero_32(r3_addr_dcbz_al_2);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CCD9C;
    }
}

loc_804CCDA8:
{
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CCD80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CCD80_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CCD80 func_804CCD80 preserves=true fpr_mask=0x00000000
