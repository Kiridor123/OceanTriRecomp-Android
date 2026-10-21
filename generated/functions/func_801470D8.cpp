#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801470D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x801470D8u);
    goto loc_801470D8;

loc_801470D8:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r4 = (r4 + 3624);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_801470F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80147108;
    }
}

loc_801470F4:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801470FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147108;
    }
}

loc_80147100:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147108:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147114:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8014712C;
    }
}

loc_80147118:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80147120:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014712C;
    }
}

loc_80147124:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8014712C:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147138:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80147150;
    }
}

loc_8014713C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80147144:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147150;
    }
}

loc_80147148:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147150:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8014715C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80147174;
    }
}

loc_80147160:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80147168:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147174;
    }
}

loc_8014716C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147174:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80147180:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80147198;
    }
}

loc_80147184:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8014718C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147198;
    }
}

loc_80147190:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147198:
{
    r4 = (r4 + 20);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_801471A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801471BC;
    }
}

loc_801471A8:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801471B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801471BC;
    }
}

loc_801471B4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801471BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801470D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801470D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801470D8 func_801470D8 preserves=true fpr_mask=0x00000000
