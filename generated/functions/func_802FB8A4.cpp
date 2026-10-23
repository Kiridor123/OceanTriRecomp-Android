#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB5B0(CpuContext* ctx);
extern "C" uint32_t func_802FB5B0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802FB8A4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;

    goto loc_802FB8A4;

loc_802FB8A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 6;
    ctx->lr = 0x802FB8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_802FB8BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FB914;
    }
}

loc_802FB8C0:
{
    r3 = 0;
    ctx->lr = 0x802FB8C8u;
    if constexpr (KnownRegArgsCpuCall<0x802FB5B0u>(&func_802FB5B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FB5B0_484 = func_802FB5B0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FB5B0_484;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802FB5B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 65535);
}

loc_802FB8D0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_802FB8F4;
    }
}

loc_802FB8D4:
{
    r0 = (r3 + -2);
}

loc_802FB8DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802FB8FC;
    }
}

loc_802FB8E0:
{
}

loc_802FB8E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_802FB904;
    }
}

loc_802FB8E8:
{
}

loc_802FB8EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_802FB90C;
    }
}

loc_802FB8F0:
{
    goto loc_802FB914;
}

loc_802FB8F4:
{
    r3 = 1;
    goto loc_802FB918;
}

loc_802FB8FC:
{
    r3 = 2;
    goto loc_802FB918;
}

loc_802FB904:
{
    r3 = 3;
    goto loc_802FB918;
}

loc_802FB90C:
{
    r3 = 4;
    goto loc_802FB918;
}

loc_802FB914:
{
    r3 = 0;
}

loc_802FB918:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802FB8A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802FB8A4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FB8A4 func_802FB8A4 preserves=true fpr_mask=0x00000000
