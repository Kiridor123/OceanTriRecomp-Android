#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021E4E8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021E4E8u);
    goto loc_8021E4E8;

loc_8021E4E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004DDD8u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
}

loc_8021E508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E514;
    }
}

loc_8021E50C:
{
    r3 = 0;
    goto loc_8021E588;
}

loc_8021E514:
{
    r0 = (r31 & 255);
}

loc_8021E51C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E534;
    }
}

loc_8021E520:
{
}

loc_8021E524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8021E54C;
    }
}

loc_8021E528:
{
}

loc_8021E52C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8021E564;
    }
}

loc_8021E530:
{
    goto loc_8021E57C;
}

loc_8021E534:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18509));
}

loc_8021E540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E584;
    }
}

loc_8021E544:
{
    r3 = 0;
    goto loc_8021E588;
}

loc_8021E54C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18509));
}

loc_8021E558:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8021E584;
    }
}

loc_8021E55C:
{
    r3 = 0;
    goto loc_8021E588;
}

loc_8021E564:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18509));
}

loc_8021E570:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8021E584;
    }
}

loc_8021E574:
{
    r3 = 0;
    goto loc_8021E588;
}

loc_8021E57C:
{
    r3 = 0;
    goto loc_8021E588;
}

loc_8021E584:
{
    r3 = 1;
}

loc_8021E588:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8021E4E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021E4E8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021E4E8 func_8021E4E8 preserves=true fpr_mask=0x00000000
