#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801F35A0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_801F35A0;

loc_801F35A0:
{
    r7 = 0;
    r8 = 0;
    goto loc_801F35C4;
}

loc_801F35AC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_801F35B4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_801F35BC;
    }
}

loc_801F35B8:
{
    r8 = r6;
}

loc_801F35BC:
{
    r7 = (r7 + 1);
    r3 = (r3 + 2);
}

loc_801F35C4:
{
    r6 = MemoryInline::FlatRead16(r3);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_801F35CC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_801F35AC;
    }
}

loc_801F35D0:
{
}

loc_801F35D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801F35DC;
    }
}

loc_801F35D8:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r8));
}

loc_801F35DC:
{
}

loc_801F35E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801F35E4:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_801F35A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801F35A0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F35A0 func_801F35A0 preserves=true fpr_mask=0x00000000
