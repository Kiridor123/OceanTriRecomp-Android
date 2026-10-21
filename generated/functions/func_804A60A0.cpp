#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A60A0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804A60A0u);
    goto loc_804A60A0;

loc_804A60A0:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -15800));
}

loc_804A60B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A60E4;
    }
}

loc_804A60BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
}

loc_804A60C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A60D4;
    }
}

loc_804A60C8:
{
    MemoryInline::FlatWrite32((r13 + -15800), r3);
    MemoryInline::FlatWrite32((r3 + 60), r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A60D4:
{
    MemoryInline::FlatWrite32((r13 + -15796), r4);
    MemoryInline::FlatWrite32((r13 + -15804), r4);
    MemoryInline::FlatWrite32((r13 + -15800), r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A60E4:
{
    r0 = MemoryInline::FlatRead32((r13 + -15804));
}

loc_804A60EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A6108;
    }
}

loc_804A60F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r13 + -15804), r3);
    MemoryInline::FlatWrite32((r3 + 56), r4);
    r0 = MemoryInline::FlatRead32((r13 + -15800));
    MemoryInline::FlatWrite32((r13 + -15796), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A6108:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r13 + -15796), r0);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r4 + 56), r0);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r4 + 60), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A60A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A60A0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A60A0 func_804A60A0 preserves=true fpr_mask=0x00000000
