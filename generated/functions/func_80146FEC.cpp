#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80146FEC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80146FECu);
    goto loc_80146FEC;

loc_80146FEC:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r4 = (r4 + 3624);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147004:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014701C;
    }
}

loc_80147008:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80147010:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014701C;
    }
}

loc_80147014:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8014701C:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147028:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147040;
    }
}

loc_8014702C:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80147034:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147040;
    }
}

loc_80147038:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147040:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8014704C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147064;
    }
}

loc_80147050:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80147058:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147064;
    }
}

loc_8014705C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147064:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147070:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147088;
    }
}

loc_80147074:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8014707C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147088;
    }
}

loc_80147080:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147088:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147094:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801470AC;
    }
}

loc_80147098:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801470A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801470AC;
    }
}

loc_801470A4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801470AC:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_801470B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801470D0;
    }
}

loc_801470BC:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801470C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801470D0;
    }
}

loc_801470C8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801470D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80146FEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80146FEC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80146FEC func_80146FEC preserves=true fpr_mask=0x00000000
