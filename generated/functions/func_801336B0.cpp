#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F400(CpuContext* ctx);
extern "C" uint32_t func_8012F400_ra8_4_8_0(CpuContext*, uint32_t, double);

extern "C" uint32_t func_801336B0_ra8_4_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    PPC_FPR f2; f2.d = arg_f2;

    MKW_GUEST_ENTER(0x801336B0u);
    goto loc_801336B0;

loc_801336B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801336C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(40))) {
        goto loc_801336D0;
    }
}

loc_801336C8:
{
    r3 = 0;
    goto loc_801336F4;
}

loc_801336D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_801336D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801336F0;
    }
}

loc_801336DC:
{
    ctx->lr = 0x801336E0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F400u>(&func_8012F400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F400_500 = func_8012F400_ra8_4_8_0(ctx, r3, f2.d);
        r3 = regargs_result_8012F400_500;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012F400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f2 = ctx->fpr[2];
    }
}

loc_801336E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801336F0;
    }
}

loc_801336E8:
{
    r3 = 0;
    goto loc_801336F4;
}

loc_801336F0:
{
    r3 = 1;
}

loc_801336F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[2] = f2;
    return r3;
}

}

extern "C" void func_801336B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801336B0_ra8_4_8_0(ctx, ctx->gpr[3], ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801336B0 func_801336B0 preserves=true fpr_mask=0x00000000
