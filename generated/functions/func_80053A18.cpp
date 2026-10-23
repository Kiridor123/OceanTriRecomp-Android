#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80053A18_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80053A18;

loc_80053A18:
{
    r0 = 0;
    r4 = 0x80670000u;
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 216), r0);
    MemoryInline::FlatWriteRam32((r4 + 212), r0);
    r0 = MemoryInline::FlatRead8((r4 + 868));
}

loc_80053A34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053A80;
    }
}

loc_80053A38:
{
    r0 = (r3 & 65535);
}

loc_80053A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80053A60;
    }
}

loc_80053A44:
{
}

loc_80053A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80053A60;
    }
}

loc_80053A4C:
{
}

loc_80053A50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80053A60;
    }
}

loc_80053A54:
{
}

loc_80053A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80053A74;
    }
}

loc_80053A5C:
{
    goto loc_80053AE0;
}

loc_80053A60:
{
    r0 = 1;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam32((r3 + 212), r0);
    goto loc_80053AE0;
}

loc_80053A74:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + 216), r0);
    goto loc_80053AE0;
}

loc_80053A80:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -10);
}

loc_80053A8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80053ABC;
    }
}

loc_80053A90:
{
}

loc_80053A94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(21))) {
        goto loc_80053ABC;
    }
}

loc_80053A98:
{
}

loc_80053A9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(24))) {
        goto loc_80053ABC;
    }
}

loc_80053AA0:
{
}

loc_80053AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(26))) {
        goto loc_80053ABC;
    }
}

loc_80053AA8:
{
}

loc_80053AAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_80053AD0;
    }
}

loc_80053AB0:
{
}

loc_80053AB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(22))) {
        goto loc_80053AD0;
    }
}

loc_80053AB8:
{
    goto loc_80053AE0;
}

loc_80053ABC:
{
    r0 = 1;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam32((r3 + 212), r0);
    goto loc_80053AE0;
}

loc_80053AD0:
{
    r0 = 1;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam32((r3 + 216), r0);
}

loc_80053AE0:
{
    r3 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r3 + -12896));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam32((r3 + -12896), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80053A18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80053A18_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053A18 func_80053A18 preserves=true fpr_mask=0x00000000
