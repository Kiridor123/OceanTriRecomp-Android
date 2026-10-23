#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A0BA4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804A0BA4;

loc_804A0BA4:
{
    r6 = MemoryInline::FlatRead16((r3 + 8));
    r3 = (r3 + 12);
    r7 = 0;
    goto loc_804A0BD0;
}

loc_804A0BB4:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
}

loc_804A0BBC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804A0BC8;
    }
}

loc_804A0BC0:
{
}

loc_804A0BC4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_return;
    }
}

loc_804A0BC8:
{
    r7 = (r7 + 1);
    r3 = (r3 + 12);
}

loc_804A0BD0:
{
    r0 = (r7 & 65535);
}

loc_804A0BD8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_804A0BB4;
    }
}

loc_804A0BDC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_804A0BA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A0BA4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A0BA4 func_804A0BA4 preserves=true fpr_mask=0x00000000
