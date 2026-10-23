#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008952C(CpuContext* ctx);
extern "C" uint64_t func_8008952C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80089598_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80089598;

loc_80089598:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    ctx->lr = 0x800895B0u;
    if constexpr (KnownRegArgsCpuCall<0x8008952Cu>(&func_8008952C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8008952C_3FC = func_8008952C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008952C_3FC);
        r4 = static_cast<uint32_t>(regargs_result_8008952C_3FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8008952Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = 0;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 8));
}

loc_800895C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800895D4;
    }
}

loc_800895C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_800895CC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_800895D4;
    }
}

loc_800895D0:
{
    r5 = 1;
}

loc_800895D4:
{
}

loc_800895D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800895E8;
    }
}

loc_800895DC:
{
}

loc_800895E0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_800895E8;
    }
}

loc_800895E4:
{
    r4 = 1;
}

loc_800895E8:
{
}

loc_800895EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80089604;
    }
}

loc_800895F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r4 = (r31 * r0);
    r0 = (r3 + r6);
    r3 = (r4 + r0);
    goto loc_80089608;
}

loc_80089604:
{
    r3 = 0;
}

loc_80089608:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80089598(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80089598_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80089598 func_80089598 preserves=true fpr_mask=0x00000000
