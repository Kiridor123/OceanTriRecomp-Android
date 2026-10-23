#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A0B48_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t ctr = ctx->ctr;

    goto loc_804A0B48;

loc_804A0B48:
{
    r5 = 0x80740000u;
    r0 = 664;
    r5 = (r5 + -2048);
    r4 = MemoryInline::FlatRead16((r5 + 4642));
    r6 = (r5 + 4644);
    r4 = (r4 * 664);
    r4 = (r5 + r4);
    r5 = (r4 + 4644);
    r4 = (r5 + 663);
    r4 = (r4 - r6);
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
}

loc_804A0B7C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_804A0B9C;
    }
}

loc_804A0B80:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_804A0B88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A0B94;
    }
}

loc_804A0B8C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_804A0B94:
{
    r6 = (r6 + 664);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0B80;
    }
}

loc_804A0B9C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804A0B48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A0B48_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A0B48 func_804A0B48 preserves=true fpr_mask=0x00000000
