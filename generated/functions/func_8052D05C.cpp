#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8052D05C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8052D05C;

loc_8052D05C:
{
    r5 = MemoryInline::FlatRead16(r4);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_8052D068:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8052D074;
    }
}

loc_8052D06C:
{
    r0 = 0;
    goto loc_8052D084;
}

loc_8052D074:
{
}

loc_8052D078:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_8052D084;
    }
}

loc_8052D080:
{
    r0 = r5;
}

loc_8052D084:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_8052D090:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8052D09C;
    }
}

loc_8052D094:
{
    r0 = 0;
    goto loc_8052D0AC;
}

loc_8052D09C:
{
}

loc_8052D0A0:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_8052D0AC;
    }
}

loc_8052D0A8:
{
    r0 = r5;
}

loc_8052D0AC:
{
    r5 = MemoryInline::FlatRead16((r4 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_8052D0B8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8052D0C4;
    }
}

loc_8052D0BC:
{
    r0 = 0;
    goto loc_8052D0D4;
}

loc_8052D0C4:
{
}

loc_8052D0C8:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_8052D0D4;
    }
}

loc_8052D0D0:
{
    r0 = r5;
}

loc_8052D0D4:
{
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_8052D0E0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8052D0EC;
    }
}

loc_8052D0E4:
{
    r0 = 0;
    goto loc_8052D0FC;
}

loc_8052D0EC:
{
}

loc_8052D0F0:
{
    r0 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_8052D0FC;
    }
}

loc_8052D0F8:
{
    r0 = r4;
}

loc_8052D0FC:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r3, r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8052D05C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8052D05C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052D05C func_8052D05C preserves=true fpr_mask=0x00000000
