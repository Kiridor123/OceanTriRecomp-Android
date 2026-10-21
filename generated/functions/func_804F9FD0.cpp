#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804F9FD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804F9FD0u);
    goto loc_804F9FD0;

loc_804F9FD0:
{
    r4 = 0x80760000u;
    r0 = 2;
    r5 = 0;
    r4 = (r4 + 3880);
    ctr = r0;
    // nop
}

loc_804F9FE8:
{
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_804F9FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804F9FF8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
}

loc_804FA004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA008:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
}

loc_804FA014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA018:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
}

loc_804FA024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA028:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
}

loc_804FA034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA038:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
}

loc_804FA044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA048:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
}

loc_804FA054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA058:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
}

loc_804FA064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FA078;
    }
}

loc_804FA068:
{
    r3 = (r3 + 16);
    r4 = (r4 + 16);
    r5 = (r5 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F9FE8;
    }
}

loc_804FA078:
{
    r3 = 0x80760000u;
    r0 = 0;
    r3 = (r3 + 3880);
    MemoryInline::FlatWriteRam16((r3 + 32), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F9FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F9FD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804F9FD0 func_804F9FD0 preserves=true fpr_mask=0x00000000
