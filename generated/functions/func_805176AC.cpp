#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805176AC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_805176AC;

loc_805176AC:
{
}

loc_805176B0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(10))) {
        goto loc_805176BC;
    }
}

loc_805176B4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805176BC:
{
    r5 = 0;
    r6 = 0;
    ctr = r4;
}

loc_805176CC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80517744;
    }
}

loc_805176D0:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_805176D8:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805176F0;
    }
}

loc_805176E0:
{
}

loc_805176E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_80517744;
    }
}

loc_805176E8:
{
}

loc_805176EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80517744;
    }
}

loc_805176F0:
{
}

loc_805176F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80517700;
    }
}

loc_805176F8:
{
}

loc_805176FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_8051773C;
    }
}

loc_80517700:
{
}

loc_80517704:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(48))) {
        goto loc_80517710;
    }
}

loc_80517708:
{
}

loc_8051770C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(57))) {
        goto loc_80517718;
    }
}

loc_80517710:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517718:
{
    r0 = (r5 * 10);
    r7 = r5;
    r6 = 1;
    r4 = (r4 + r0);
    r5 = (r4 + -48);
}

loc_80517730:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r5))) {
        goto loc_8051773C;
    }
}

loc_80517734:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8051773C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805176D0;
    }
}

loc_80517744:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805176AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805176AC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805176AC func_805176AC preserves=true fpr_mask=0x00000000
