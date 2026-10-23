#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8027E184_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027E184;

loc_8027E184:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0;
    ctx->lr = 0x8027E1A0u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027BCAC_35E = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_35E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8027E1A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027E1B0;
    }
}

loc_8027E1A8:
{
    r3 = 0;
    goto loc_8027E208;
}

loc_8027E1B0:
{
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r3 + -8);
}

loc_8027E1BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027E1CC;
    }
}

loc_8027E1C0:
{
}

loc_8027E1C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027E1D4;
    }
}

loc_8027E1C8:
{
    goto loc_8027E1F0;
}

loc_8027E1CC:
{
    r3 = 0;
    goto loc_8027E208;
}

loc_8027E1D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_8027E1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_8027E1E8;
    }
}

loc_8027E1E0:
{
}

loc_8027E1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(110))) {
        goto loc_8027E1F0;
    }
}

loc_8027E1E8:
{
    r3 = 0;
    goto loc_8027E208;
}

loc_8027E1F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027E1F8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8027E204;
    }
}

loc_8027E1FC:
{
    r3 = 0;
    goto loc_8027E208;
}

loc_8027E204:
{
    r3 = 1;
}

loc_8027E208:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8027E184(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027E184_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E184 func_8027E184 preserves=true fpr_mask=0x00000000
