#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AAFB8(CpuContext* ctx);
extern "C" uint64_t func_801AAFB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801AFCDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801AFCDCu);
    goto loc_801AFCDC;

loc_801AFCDC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 52));
}

loc_801AFCF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801AFD00;
    }
}

loc_801AFCFC:
{
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_801AFD00:
{
    r0 = (r4 & 255);
}

loc_801AFD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AFD20;
    }
}

loc_801AFD0C:
{
}

loc_801AFD10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AFD60;
    }
}

loc_801AFD14:
{
}

loc_801AFD18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AFD60;
    }
}

loc_801AFD1C:
{
    goto loc_801AFE10;
}

loc_801AFD20:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_801AFD28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AFE10;
    }
}

loc_801AFD2C:
{
    r3 = MemoryInline::FlatRead16((r3 + 22));
    ctx->lr = 0x801AFD34u;
    if constexpr (KnownRegArgsCpuCall<0x801AAFB8u>(&func_801AAFB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801AAFB8_788 = func_801AAFB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801AAFB8_788);
        r4 = static_cast<uint32_t>(regargs_result_801AAFB8_788 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801AAFB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFD3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801AFD4C;
    }
}

loc_801AFD40:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801AFE10;
}

loc_801AFD4C:
{
}

loc_801AFD50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801AFE10;
    }
}

loc_801AFD54:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801AFE10;
}

loc_801AFD60:
{
    r3 = MemoryInline::FlatRead16((r3 + 22));
    ctx->lr = 0x801AFD68u;
    if constexpr (KnownRegArgsCpuCall<0x801AAFB8u>(&func_801AAFB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801AAFB8_CFC = func_801AAFB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801AAFB8_CFC);
        r4 = static_cast<uint32_t>(regargs_result_801AAFB8_CFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801AAFB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFD70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801AFD80;
    }
}

loc_801AFD74:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_801AFD90;
}

loc_801AFD80:
{
}

loc_801AFD84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801AFD90;
    }
}

loc_801AFD88:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_801AFD90:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r4 = MemoryInline::FlatRead8((r31 + 3));
    ctx->lr = 0x801AFD9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 9));
    ctx->lr = 0x801AFDA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_801AFDAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AFE10;
    }
}

loc_801AFDB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 21));
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_801AFDC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AFDD8;
    }
}

loc_801AFDCC:
{
}

loc_801AFDD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AFDE4;
    }
}

loc_801AFDD4:
{
    goto loc_801AFE08;
}

loc_801AFDD8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r0));
    goto loc_801AFE10;
}

loc_801AFDE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_801AFDEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AFDFC;
    }
}

loc_801AFDF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r0));
    goto loc_801AFE10;
}

loc_801AFDFC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r0));
    goto loc_801AFE10;
}

loc_801AFE08:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r0));
}

loc_801AFE10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801AFCDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801AFCDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AFCDC func_801AFCDC preserves=true fpr_mask=0x00000000
