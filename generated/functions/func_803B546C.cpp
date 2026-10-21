#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803B546C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803B546Cu);
    goto loc_803B546C;

loc_803B546C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    ctx->lr = 0x803B548Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CF2E4_382 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_382;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803B5490:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B549C;
    }
}

loc_803B5494:
{
    r3 = 0;
    goto loc_803B5510;
}

loc_803B549C:
{
}

loc_803B54A0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803B54B4;
    }
}

loc_803B54A4:
{
    // inline leaf 0x803B33F8 (7 guest instruction(s))
}

loc_inl0_0x803B33F8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl0_0x803B3408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803B340C:
{
    r3 = 0;
    goto loc_inl0_cont_803B33F8;
}

loc_inl0_return:
{
}

loc_inl0_cont_803B33F8:
{
    // end of inlined leaf 0x803B33F8
    r30 = r3;
}

loc_803B54B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B550C;
    }
}

loc_803B54B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 784));
    r0 = (r3 & 2);
}

loc_803B54C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B54CC;
    }
}

loc_803B54C4:
{
    r31 = 1;
    goto loc_803B550C;
}

loc_803B54CC:
{
    r0 = (r3 & 8);
}

loc_803B54D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B54E0;
    }
}

loc_803B54D8:
{
    r31 = 9;
    goto loc_803B550C;
}

loc_803B54E0:
{
    r0 = (r3 & 5);
}

loc_803B54E4:
{
}

loc_803B54E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803B54F4;
    }
}

loc_803B54EC:
{
    r31 = 2;
    goto loc_803B550C;
}

loc_803B54F4:
{
}

loc_803B54F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B5500;
    }
}

loc_803B54FC:
{
    r31 = 3;
}

loc_803B5500:
{
}

loc_803B5504:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803B550C;
    }
}

loc_803B5508:
{
    r31 = 4;
}

loc_803B550C:
{
    r3 = r31;
}

loc_803B5510:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803B546C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B546C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B546C func_803B546C preserves=true fpr_mask=0x00000000
