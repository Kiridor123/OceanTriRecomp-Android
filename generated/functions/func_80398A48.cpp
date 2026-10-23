#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80398A48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80398A48;

loc_80398A48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r3 = (r3 + 772);
    r5 = 0;
    r0 = 8;
    ctr = r0;
}

loc_80398A70:
{
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398A78:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398A94;
    }
}

loc_80398A7C:
{
    r0 = (r31 & 65535);
}

loc_80398A84:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80398A8C;
    }
}

loc_80398A88:
{
    goto loc_80398B44;
}

loc_80398A8C:
{
    r0 = (r4 & 65535);
    r31 = (r31 - r0);
}

loc_80398A94:
{
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398AA0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398ABC;
    }
}

loc_80398AA4:
{
    r0 = (r31 & 65535);
}

loc_80398AAC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80398AB4;
    }
}

loc_80398AB0:
{
    goto loc_80398B44;
}

loc_80398AB4:
{
    r0 = (r4 & 65535);
    r31 = (r31 - r0);
}

loc_80398ABC:
{
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398AC8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398AE4;
    }
}

loc_80398ACC:
{
    r0 = (r31 & 65535);
}

loc_80398AD4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80398ADC;
    }
}

loc_80398AD8:
{
    goto loc_80398B44;
}

loc_80398ADC:
{
    r0 = (r4 & 65535);
    r31 = (r31 - r0);
}

loc_80398AE4:
{
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398AF0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398B0C;
    }
}

loc_80398AF4:
{
    r0 = (r31 & 65535);
}

loc_80398AFC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80398B04;
    }
}

loc_80398B00:
{
    goto loc_80398B44;
}

loc_80398B04:
{
    r0 = (r4 & 65535);
    r31 = (r31 - r0);
}

loc_80398B0C:
{
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398B18:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398B34;
    }
}

loc_80398B1C:
{
    r0 = (r31 & 65535);
}

loc_80398B24:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80398B2C;
    }
}

loc_80398B28:
{
    goto loc_80398B44;
}

loc_80398B2C:
{
    r0 = (r4 & 65535);
    r31 = (r31 - r0);
}

loc_80398B34:
{
    r5 = (r5 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80398A70;
    }
}

loc_80398B40:
{
    r3 = 0;
}

loc_80398B44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80398A48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80398A48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80398A48 func_80398A48 preserves=true fpr_mask=0x00000000
