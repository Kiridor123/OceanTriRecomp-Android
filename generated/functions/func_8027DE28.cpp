#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027DE28_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027DE28;

loc_8027DE28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027DE4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027DE58;
    }
}

loc_8027DE50:
{
    r3 = 0;
    goto loc_8027DED4;
}

loc_8027DE58:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8027DE60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027DED0;
    }
}

loc_8027DE64:
{
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r3 + -63);
}

loc_8027DE70:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027DE94;
    }
}

loc_8027DE74:
{
    r0 = (r3 + -66);
}

loc_8027DE7C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027DEB8;
    }
}

loc_8027DE80:
{
}

loc_8027DE84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(65))) {
        goto loc_8027DE9C;
    }
}

loc_8027DE88:
{
}

loc_8027DE8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(154))) {
        goto loc_8027DE9C;
    }
}

loc_8027DE90:
{
    goto loc_8027DED0;
}

loc_8027DE94:
{
    r3 = 1;
    goto loc_8027DED4;
}

loc_8027DE9C:
{
    r0 = (r31 & 255);
}

loc_8027DEA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8027DEB0;
    }
}

loc_8027DEA8:
{
    r3 = 0;
    goto loc_8027DED4;
}

loc_8027DEB0:
{
    r3 = 1;
    goto loc_8027DED4;
}

loc_8027DEB8:
{
    r4 = (r31 & 255);
    r3 = (1 - r4);
    r0 = (r4 + -1);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_8027DED4;
}

loc_8027DED0:
{
    r3 = 0;
}

loc_8027DED4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027DE28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027DE28_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027DE28 func_8027DE28 preserves=true fpr_mask=0x00000000
