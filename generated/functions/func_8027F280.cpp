#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F158(CpuContext* ctx);
extern "C" uint64_t func_8027F158_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027F180(CpuContext* ctx);
extern "C" uint32_t func_8027F180_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8027F280_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8027F280u);
    goto loc_8027F280;

loc_8027F280:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    ctx->lr = 0x8027F2A4u;
    if constexpr (KnownRegArgsCpuCall<0x8027F180u>(&func_8027F180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        const auto regargs_result_8027F180_672 = func_8027F180_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F180_672;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027F180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = (r3 & 255);
}

loc_8027F2AC:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_8027F2B8;
    }
}

loc_8027F2B0:
{
    r3 = 0;
    goto loc_8027F31C;
}

loc_8027F2B8:
{
    r30 = 0;
    r31 = 0;
    goto loc_8027F2FC;
}

loc_8027F2C4:
{
    r3 = MemoryInline::FlatRead16((r28 + 6));
}

loc_8027F2CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027F2F4;
    }
}

loc_8027F2D0:
{
    ctx->lr = 0x8027F2D4u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027F158_B31 = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_B31);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_B31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8027F2DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027F2E8;
    }
}

loc_8027F2E0:
{
}

loc_8027F2E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027F2EC;
    }
}

loc_8027F2E8:
{
    r3 = 1;
}

loc_8027F2EC:
{
    r0 = (r3 & 255);
    r30 = (r30 + r0);
}

loc_8027F2F4:
{
    r28 = (r28 + 2);
    r31 = (r31 + 1);
}

loc_8027F2FC:
{
}

loc_8027F300:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r29))) {
        goto loc_8027F2C4;
    }
}

loc_8027F304:
{
    r0 = (r29 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    r0 = (r29 - r30);
    r3 = (r0 & ~r3);
}

loc_8027F31C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_8027F280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027F280_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000002B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027F280 func_8027F280 preserves=true fpr_mask=0x00000000
