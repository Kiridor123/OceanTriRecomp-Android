#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027FCD4(CpuContext* ctx);
extern "C" uint64_t func_8027FCD4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027FCE8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027FCE8;

loc_8027FCE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + -1);
}

loc_8027FD08:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_8027FD30;
    }
}

loc_8027FD0C:
{
    ctx->lr = 0x8027FD10u;
    if constexpr (KnownRegArgsCpuCall<0x8027FCD4u>(&func_8027FCD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027FCD4_450 = func_8027FCD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FCD4_450);
        r4 = static_cast<uint32_t>(regargs_result_8027FCD4_450 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027FCD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 & 255);
}

loc_8027FD1C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8027FD28;
    }
}

loc_8027FD20:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    goto loc_8027FD30;
}

loc_8027FD28:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_8027FD30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027FCE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027FCE8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027FCE8 func_8027FCE8 preserves=true fpr_mask=0x00000000
