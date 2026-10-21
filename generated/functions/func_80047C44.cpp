#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80047C44_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80047C44u);
    goto loc_80047C44;

loc_80047C44:
{
    r4 = 0x80670000u;
    r6 = (r4 + -18072);
    r0 = (r3 & 255);
    r5 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 1110));
}

loc_80047C5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80047CA4;
    }
}

loc_80047C60:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r5 + 1110), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1110));
}

loc_80047C70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047C90;
    }
}

loc_80047C74:
{
    r4 = MemoryInline::FlatRead8((r5 + 1096));
}

loc_80047C7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80047C90;
    }
}

loc_80047C80:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r5 + 1096), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryInline::FlatWrite8((r5 + 1110), static_cast<uint8_t>(r0));
}

loc_80047C90:
{
    r4 = 1;
    r0 = (r3 & 255);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite8((r3 + 1200), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80047CA4:
{
    r3 = MemoryInline::FlatRead8((r5 + 1096));
}

loc_80047CAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80047CB0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r5 + 1096), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryInline::FlatWrite8((r5 + 1110), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r5 + 1200), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80047C44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80047C44_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80047C44 func_80047C44 preserves=true fpr_mask=0x00000000
