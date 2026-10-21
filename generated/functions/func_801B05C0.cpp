#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B0508(CpuContext* ctx);
extern "C" uint64_t func_801B0508_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801B0564(CpuContext* ctx);
extern "C" uint64_t func_801B0564_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801B05C0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801B05C0u);
    goto loc_801B05C0;

loc_801B05C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 818));
}

loc_801B05DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B05FC;
    }
}

loc_801B05E0:
{
}

loc_801B05E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801B0630;
    }
}

loc_801B05E8:
{
}

loc_801B05EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801B0664;
    }
}

loc_801B05F0:
{
}

loc_801B05F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801B0694;
    }
}

loc_801B05F8:
{
    goto loc_801B06C0;
}

loc_801B05FC:
{
    r4 = MemoryInline::FlatRead8((r3 + 1889));
    r0 = (r4 & 16);
}

loc_801B0608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B0618;
    }
}

loc_801B060C:
{
    r0 = (r4 & 31);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 1889), static_cast<uint8_t>(r0));
}

loc_801B0618:
{
    r0 = MemoryInline::FlatRead8((r3 + 1890));
}

loc_801B0620:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B06C0;
    }
}

loc_801B0624:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 818), static_cast<uint8_t>(r0));
    goto loc_801B06C0;
}

loc_801B0630:
{
    r4 = MemoryInline::FlatRead8((r3 + 1889));
    r0 = (r4 & 64);
}

loc_801B063C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B064C;
    }
}

loc_801B0640:
{
    r0 = (r4 & 79);
}

loc_801B0644:
{
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 1889), static_cast<uint8_t>(r0));
}

loc_801B064C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1890));
}

loc_801B0654:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B06C0;
    }
}

loc_801B0658:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 818), static_cast<uint8_t>(r0));
    goto loc_801B06C0;
}

loc_801B0664:
{
    if constexpr (KnownRegArgsCpuCall<0x801B0564u>(&func_801B0564)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801B0564_B77 = func_801B0564_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801B0564_B77);
        r4 = static_cast<uint32_t>(regargs_result_801B0564_B77 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801B0564u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801B066C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B06C0;
    }
}

loc_801B0670:
{
    r0 = MemoryInline::FlatRead8((r31 + 1890));
}

loc_801B0678:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B0688;
    }
}

loc_801B067C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 818), static_cast<uint8_t>(r0));
    goto loc_801B06C0;
}

loc_801B0688:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 818), static_cast<uint8_t>(r0));
    goto loc_801B06C0;
}

loc_801B0694:
{
    if constexpr (KnownRegArgsCpuCall<0x801B0508u>(&func_801B0508)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801B0508_101A = func_801B0508_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801B0508_101A);
        r4 = static_cast<uint32_t>(regargs_result_801B0508_101A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801B0508u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801B069C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B06C0;
    }
}

loc_801B06A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1890));
}

loc_801B06A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B06B8;
    }
}

loc_801B06AC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 818), static_cast<uint8_t>(r0));
    goto loc_801B06C0;
}

loc_801B06B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 818), static_cast<uint8_t>(r0));
}

loc_801B06C0:
{
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = (r3 & 65535);
    r0 = (r3 + -105);
}

loc_801B06D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_801B0714;
    }
}

loc_801B06D8:
{
    r0 = (r3 + -100);
}

loc_801B06E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_801B0714;
    }
}

loc_801B06E4:
{
}

loc_801B06E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(20))) {
        goto loc_801B0700;
    }
}

loc_801B06EC:
{
}

loc_801B06F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(30))) {
        goto loc_801B0700;
    }
}

loc_801B06F4:
{
}

loc_801B06F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(39))) {
        goto loc_801B0714;
    }
}

loc_801B06FC:
{
    goto loc_801B0724;
}

loc_801B0700:
{
    r0 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r0 & 79);
}

loc_801B0708:
{
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
    goto loc_801B0724;
}

loc_801B0714:
{
    r0 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r0 & 143);
}

loc_801B071C:
{
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
}

loc_801B0724:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B05C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B05C0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B05C0 func_801B05C0 preserves=true fpr_mask=0x00000000
