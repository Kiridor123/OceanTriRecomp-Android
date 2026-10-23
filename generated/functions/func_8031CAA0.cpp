#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8031CAA0_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8031CAA0;

loc_8031CAA0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8031CAA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031CAC4;
    }
}

loc_8031CAAC:
{
    r4 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8031CAB4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031CAD8;
    }
}

loc_8031CAB8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_8031CAD8;
}

loc_8031CAC4:
{
    r4 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8031CACC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_8031CAD8;
    }
}

loc_8031CAD0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
}

loc_8031CAD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_8031CAE0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031CAFC;
    }
}

loc_8031CAE4:
{
    r4 = MemoryInline::FlatRead8((r3 + 33));
}

loc_8031CAEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031CB10;
    }
}

loc_8031CAF0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    goto loc_8031CB10;
}

loc_8031CAFC:
{
    r4 = MemoryInline::FlatRead8((r3 + 33));
}

loc_8031CB04:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_8031CB10;
    }
}

loc_8031CB08:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
}

loc_8031CB10:
{
    r4 = MemoryInline::FlatRead8((r3 + 34));
}

loc_8031CB18:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_8031CB1C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8031CAA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8031CAA0_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031CAA0 func_8031CAA0 preserves=true fpr_mask=0x00000000
