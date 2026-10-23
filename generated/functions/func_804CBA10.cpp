#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CBA10_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CBA10;

loc_804CBA10:
{
    r0 = MemoryInline::FlatRead32((r13 + -15192));
    r3 = 0x80000000u;
    r6 = (r3 + 12692);
}

loc_804CBA20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CBA2C;
    }
}

loc_804CBA24:
{
    r6 = MemoryInline::FlatRead32((r13 + -20128));
    goto loc_804CBA60;
}

loc_804CBA2C:
{
    r3 = MemoryInline::FlatRead8((r3 + 12692));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804CBA38:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_804CBA58;
    }
}

loc_804CBA3C:
{
}

loc_804CBA40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_804CBA4C;
    }
}

loc_804CBA44:
{
}

loc_804CBA48:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_804CBA58;
    }
}

loc_804CBA4C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804CBA54:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_804CBA60;
    }
}

loc_804CBA58:
{
    r3 = 0x80000000u;
    r6 = (r3 + 12672);
}

loc_804CBA60:
{
    r0 = MemoryInline::FlatRead8(r6);
    r5 = (r13 + -15152);
    MemoryInline::FlatWrite8((r13 + -15152), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r3 = (r13 + -15152);
    r4 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_804CBA10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CBA10_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CBA10 func_804CBA10 preserves=true fpr_mask=0x00000000
