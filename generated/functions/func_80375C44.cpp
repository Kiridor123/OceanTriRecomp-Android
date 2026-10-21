#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80375C44_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80375C44u);
    goto loc_80375C44;

loc_80375C44:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80375C4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80375C6C;
    }
}

loc_80375C50:
{
}

loc_80375C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_80375C74;
    }
}

loc_80375C58:
{
}

loc_80375C5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_80375C80;
    }
}

loc_80375C60:
{
}

loc_80375C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-4))) {
        goto loc_80375C8C;
    }
}

loc_80375C68:
{
    goto loc_80375C98;
}

loc_80375C6C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80375C74:
{
    r3 = MemoryInline::FlatRead32((r13 + -17168));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[0] = r0;
    return r3;
}

loc_80375C80:
{
    r3 = MemoryInline::FlatRead32((r13 + -17168));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    return r3;
}

loc_80375C8C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17168));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[0] = r0;
    return r3;
}

loc_80375C98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80375C44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80375C44_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80375C44 func_80375C44 preserves=true fpr_mask=0x00000000
