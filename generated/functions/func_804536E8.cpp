#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804536E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804536E8u);
    goto loc_804536E8;

loc_804536E8:
{
    r5 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = 0;
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r4 + 348), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 349), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 350), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 352), static_cast<uint8_t>(r0));
}

loc_8045370C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80453710:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24592));
    r0 = (r0 & 1);
}

loc_80453720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045372C;
    }
}

loc_80453724:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 348), static_cast<uint8_t>(r0));
}

loc_8045372C:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24592));
    r0 = (r0 & 2);
}

loc_8045373C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453750;
    }
}

loc_80453740:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 349), static_cast<uint8_t>(r0));
}

loc_80453750:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24592));
    r0 = (r0 & 4);
}

loc_80453760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453774;
    }
}

loc_80453764:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 350), static_cast<uint8_t>(r0));
}

loc_80453774:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24592));
    r0 = (r0 & 8);
}

loc_80453784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453798;
    }
}

loc_80453788:
{
    r0 = 1;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 352), static_cast<uint8_t>(r0));
}

loc_80453798:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 351));
}

loc_804537A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804537AC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 348), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 349), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 350), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 352), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804536E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804536E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804536E8 func_804536E8 preserves=true fpr_mask=0x00000000
