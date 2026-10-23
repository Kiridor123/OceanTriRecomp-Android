#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803BDF70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803BDF70;

loc_803BDF70:
{
    r7 = MemoryInline::FlatRead32((r13 + -16840));
    r8 = MemoryInline::FlatRead32((r7 + 28));
    r10 = 0;
    r9 = 0;
    goto loc_803BE044;
}

loc_803BDF84:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_803BDF8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BE03C;
    }
}

loc_803BDF90:
{
    r6 = MemoryInline::FlatRead8((r8 + 4));
    r0 = (r3 & 255);
}

loc_803BDF9C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_803BE03C;
    }
}

loc_803BDFA0:
{
    r6 = MemoryInline::FlatRead8((r8 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_803BDFAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BDFBC;
    }
}

loc_803BDFB0:
{
    r0 = MemoryInline::FlatRead8((r8 + 8));
}

loc_803BDFB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803BE03C;
    }
}

loc_803BDFBC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_803BDFC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803BDFE0;
    }
}

loc_803BDFC8:
{
    r0 = MemoryInline::FlatRead8((r8 + 8));
}

loc_803BDFD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803BE03C;
    }
}

loc_803BDFD4:
{
    r0 = MemoryInline::FlatRead8((r8 + 9));
}

loc_803BDFDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE03C;
    }
}

loc_803BDFE0:
{
    r6 = MemoryInline::FlatRead8((r8 + 5));
}

loc_803BDFE8:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(1))) {
        goto loc_803BE00C;
    }
}

loc_803BDFEC:
{
    r0 = (r6 + 252);
    r0 = (r0 & 255);
}

loc_803BDFF8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803BE00C;
    }
}

loc_803BDFFC:
{
    r0 = (r6 + 242);
    r0 = (r0 & 255);
}

loc_803BE008:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803BE03C;
    }
}

loc_803BE00C:
{
}

loc_803BE010:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803BE038;
    }
}

loc_803BE014:
{
    r0 = (r9 & 255);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    r10 = (r10 + 1);
    r0 = (r5 & 255);
}

loc_803BE02C:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_803BE03C;
    }
}

loc_803BE030:
{
    r3 = (r10 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803BE038:
{
    r10 = (r10 + 1);
}

loc_803BE03C:
{
    r8 = (r8 + 548);
    r9 = (r9 + 1);
}

loc_803BE044:
{
    r0 = MemoryInline::FlatRead32((r7 + 32));
}

loc_803BE04C:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_803BDF84;
    }
}

loc_803BE050:
{
    r3 = (r10 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BDF70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BDF70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002779 gpr_write=0x000007D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BDF70 func_803BDF70 preserves=true fpr_mask=0x00000000
