#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804516B4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804516B4u);
    goto loc_804516B4;

loc_804516B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_804516C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80451718;
    }
}

loc_804516C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804516D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_804516DC;
    }
}

loc_804516D8:
{
    r4 = 1;
}

loc_804516DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 117));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804516E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_804516F0;
    }
}

loc_804516EC:
{
    r4 = (r4 + 1);
}

loc_804516F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 118));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804516FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80451704;
    }
}

loc_80451700:
{
    r4 = (r4 + 1);
}

loc_80451704:
{
    r0 = MemoryInline::FlatRead8((r3 + 119));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80451710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80451718;
    }
}

loc_80451714:
{
    r4 = (r4 + 1);
}

loc_80451718:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804516B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804516B4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804516B4 func_804516B4 preserves=true fpr_mask=0x00000000
