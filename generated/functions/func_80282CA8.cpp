#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027CB80(CpuContext* ctx);
extern "C" uint64_t func_8027CB80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80282CA8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80282CA8;

loc_80282CA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1381));
}

loc_80282CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80282D18;
    }
}

loc_80282CC8:
{
    ctx->lr = 0x80282CCCu;
    if constexpr (KnownRegArgsCpuCall<0x8027CB80u>(&func_8027CB80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027CB80_44E = func_8027CB80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027CB80_44E);
        r4 = static_cast<uint32_t>(regargs_result_8027CB80_44E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027CB80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r3 + -3);
}

loc_80282CD8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80282D04;
    }
}

loc_80282CDC:
{
}

loc_80282CE0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_80282D10;
    }
}

loc_80282CE4:
{
}

loc_80282CE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80282CF8;
    }
}

loc_80282CEC:
{
}

loc_80282CF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80282D10;
    }
}

loc_80282CF4:
{
    goto loc_80282D18;
}

loc_80282CF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1381), static_cast<uint8_t>(r0));
    goto loc_80282D18;
}

loc_80282D04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1381), static_cast<uint8_t>(r0));
    goto loc_80282D18;
}

loc_80282D10:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1381), static_cast<uint8_t>(r0));
}

loc_80282D18:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80282CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80282CA8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80282CA8 func_80282CA8 preserves=true fpr_mask=0x00000000
