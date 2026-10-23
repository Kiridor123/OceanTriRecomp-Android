#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80141AB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80141AB0;

loc_80141AB0:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r5 = (r3 + 304);
    r6 = 0;
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80141ACC:
{
    r4 = MemoryInline::FlatRead16((r5 + 16));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80141AD4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80141AF0;
    }
}

loc_80141AD8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r5 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141AE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141AF0;
    }
}

loc_80141AEC:
{
    MemoryInline::FlatWrite16((r5 + 16), static_cast<uint16_t>(r3));
}

loc_80141AF0:
{
    r4 = MemoryInline::FlatRead16((r5 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80141AF8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80141B14;
    }
}

loc_80141AFC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r5 + 36), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141B0C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141B14;
    }
}

loc_80141B10:
{
    MemoryInline::FlatWrite16((r5 + 36), static_cast<uint16_t>(r3));
}

loc_80141B14:
{
    r4 = MemoryInline::FlatRead16((r5 + 56));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80141B1C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80141B38;
    }
}

loc_80141B20:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r5 + 56), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141B30:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141B38;
    }
}

loc_80141B34:
{
    MemoryInline::FlatWrite16((r5 + 56), static_cast<uint16_t>(r3));
}

loc_80141B38:
{
    r4 = MemoryInline::FlatRead16((r5 + 76));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80141B40:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80141B5C;
    }
}

loc_80141B44:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r5 + 76), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141B54:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141B5C;
    }
}

loc_80141B58:
{
    MemoryInline::FlatWrite16((r5 + 76), static_cast<uint16_t>(r3));
}

loc_80141B5C:
{
    r4 = MemoryInline::FlatRead16((r5 + 96));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80141B64:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80141B80;
    }
}

loc_80141B68:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r5 + 96), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141B78:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141B80;
    }
}

loc_80141B7C:
{
    MemoryInline::FlatWrite16((r5 + 96), static_cast<uint16_t>(r3));
}

loc_80141B80:
{
    r6 = (r6 + 4);
    r5 = (r5 + 100);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80141ACC;
    }
}

loc_80141B8C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80141AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80141AB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141AB0 func_80141AB0 preserves=true fpr_mask=0x00000000
