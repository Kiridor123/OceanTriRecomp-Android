#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80383F70_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80383F70;

loc_80383F70:
{
    r8 = -1;
    r6 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80383F7C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(96))) {
        goto loc_80384004;
    }
}

loc_80383F80:
{
    r5 = (r6 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r5 - r0);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 + r7);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80383FA0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_80383FAC;
    }
}

loc_80383FA4:
{
    r0 = (r8 - r6);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80383FAC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80383FB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80383FD8;
    }
}

loc_80383FB8:
{
    r8 = (r8 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80383FC8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80383FEC;
    }
}

loc_80383FCC:
{
    r0 = (r3 + -1);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80383FEC;
}

loc_80383FD8:
{
    r8 = (r8 + r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80383FE4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r6))) {
        goto loc_80383FEC;
    }
}

loc_80383FE8:
{
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_80383FEC:
{
    r8 = (r8 - r7);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80383FF8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80384060;
    }
}

loc_80383FFC:
{
    r8 = (r8 + r6);
    goto loc_80384060;
}

loc_80384004:
{
    r5 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8038400C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_8038403C;
    }
}

loc_80384010:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 + r4);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80384020:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r5))) {
        goto loc_8038402C;
    }
}

loc_80384024:
{
    r8 = r5;
    goto loc_80384060;
}

loc_8038402C:
{
}

loc_80384030:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_80384060;
    }
}

loc_80384034:
{
    r8 = r6;
    goto loc_80384060;
}

loc_8038403C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80384044:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80384060;
    }
}

loc_80384048:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 + r4);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80384058:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_80384060;
    }
}

loc_8038405C:
{
    r8 = r6;
}

loc_80384060:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_80383F70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80383F70_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80383F70 func_80383F70 preserves=true fpr_mask=0x00000000
