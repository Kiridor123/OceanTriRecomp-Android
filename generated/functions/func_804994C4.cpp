#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804994C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804994C4;

loc_804994C4:
{
    r4 = 0x80740000u;
    r4 = (r4 + -5120);
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804994D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804994EC;
    }
}

loc_804994D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804994E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_804994EC;
    }
}

loc_804994E4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804994EC:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804994F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049950C;
    }
}

loc_804994F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80499500:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8049950C;
    }
}

loc_80499504:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049950C:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80499514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049952C;
    }
}

loc_80499518:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80499520:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8049952C;
    }
}

loc_80499524:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049952C:
{
    r4 = (r4 + 92);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80499534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049954C;
    }
}

loc_80499538:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80499540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8049954C;
    }
}

loc_80499544:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049954C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804994C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804994C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804994C4 func_804994C4 preserves=true fpr_mask=0x00000000
