#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE400(CpuContext* ctx);
extern "C" uint32_t func_802BE400_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802EF690_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802EF690u);
    goto loc_802EF690;

loc_802EF690:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0;
    ctx->lr = 0x802EF6ACu;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_40D = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_40D);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_40D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802EF6B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EF6BC;
    }
}

loc_802EF6B4:
{
    r3 = 0;
    goto loc_802EF700;
}

loc_802EF6BC:
{
    ctx->lr = 0x802EF6C0u;
    if constexpr (KnownRegArgsCpuCall<0x802BE400u>(&func_802BE400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BE400_783 = func_802BE400_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE400_783;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BE400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802EF6C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EF6D0;
    }
}

loc_802EF6C8:
{
    r3 = 0;
    goto loc_802EF700;
}

loc_802EF6D0:
{
    r0 = MemoryInline::FlatRead8((r31 + 996));
}

loc_802EF6D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EF6E4;
    }
}

loc_802EF6DC:
{
}

loc_802EF6E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_802EF6FC;
    }
}

loc_802EF6E4:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_802EF6F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802EF6FC;
    }
}

loc_802EF6F4:
{
    r3 = 1;
    goto loc_802EF700;
}

loc_802EF6FC:
{
    r3 = 0;
}

loc_802EF700:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EF690(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EF690_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802EF690 func_802EF690 preserves=true fpr_mask=0x00000000
