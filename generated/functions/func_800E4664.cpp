#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4664_rae0_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;

    goto loc_800E4664;

loc_800E4664:
{
    r7 = 0;
}

loc_800E46A0:
{
    r0 = (r5 & 255);
}

loc_800E46A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E46C0;
    }
}

loc_800E46AC:
{
}

loc_800E46B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800E46C8;
    }
}

loc_800E46B4:
{
}

loc_800E46B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800E46D0;
    }
}

loc_800E46BC:
{
    goto loc_800E46D8;
}

loc_800E46C0:
{
    r3 = 0;
    goto loc_800E46DC;
}

loc_800E46C8:
{
    r3 = 1;
    goto loc_800E46DC;
}

loc_800E46D0:
{
    r3 = 3;
    goto loc_800E46DC;
}

loc_800E46D8:
{
    r3 = 1;
}

loc_800E46DC:
{
    r4 = r6;
    r5 = r7;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

extern "C" void func_800E4664(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800E4664_rae0_0_0_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7]);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FE7 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E4664 func_800E4664 preserves=true fpr_mask=0x00000000
