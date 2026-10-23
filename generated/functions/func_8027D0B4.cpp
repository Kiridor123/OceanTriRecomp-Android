#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027D0B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_8027D0B4;

loc_8027D0B4:
{
    r9 = 0;
    r0 = MemoryAlias::FlatRead8((r3 + 873));
}

loc_8027D0C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027D0CC;
    }
}

loc_8027D0C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027D0CC:
{
    r0 = MemoryAlias::FlatRead32((r3 + 868));
    r0 = (r0 & -536870905);
}

loc_8027D0D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027D130;
    }
}

loc_8027D0DC:
{
    r8 = 0;
    r6 = 0;
    r4 = 0x806B0000u;
    r5 = (r4 + -9016);
    r0 = 10;
    ctr = r0;
}

loc_8027D0F4:
{
    r0 = MemoryAlias::FlatRead8((r3 + 8));
    r7 = (r0 * 264);
    r0 = (r6 + r7);
    r4 = (r5 + r0);
    r0 = MemoryAlias::FlatRead8((r4 + 20));
}

loc_8027D10C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027D124;
    }
}

loc_8027D110:
{
    r3 = (r5 + r7);
    r0 = (r8 * 24);
    r3 = (r3 + r0);
    r9 = MemoryAlias::FlatRead8((r3 + 20));
    goto loc_8027D130;
}

loc_8027D124:
{
    r6 = (r6 + 24);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027D0F4;
    }
}

loc_8027D130:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027D0B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027D0B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027D0B4 func_8027D0B4 preserves=true fpr_mask=0x00000000
