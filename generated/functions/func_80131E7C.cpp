#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80131E7C_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80131E7Cu);
    goto loc_80131E7C;

loc_80131E7C:
{
    r0 = MemoryInline::FlatRead8((r3 + 488));
}

loc_80131E84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80131E88:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_80131E90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80131E98;
    }
}

loc_80131E94:
{
    ctx->gpr[0] = r0;
    return r4;
}

loc_80131E98:
{
    r4 = MemoryInline::FlatRead16((r3 + 2242));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736664);
}

loc_80131EA0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80131EAC;
    }
}

loc_80131EA4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2242), static_cast<uint16_t>(r0));
}

loc_80131EAC:
{
    r4 = MemoryInline::FlatRead16((r3 + 2244));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736684);
}

loc_80131EB4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80131EC0;
    }
}

loc_80131EB8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2244), static_cast<uint16_t>(r0));
}

loc_80131EC0:
{
    r4 = MemoryInline::FlatRead16((r3 + 2246));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736704);
}

loc_80131EC8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80131ECC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2246), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80131E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80131E7C_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80131E7C func_80131E7C preserves=true fpr_mask=0x00000000
