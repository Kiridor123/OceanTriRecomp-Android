#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F158(CpuContext* ctx);
extern "C" uint64_t func_8027F158_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027F180(CpuContext* ctx);
extern "C" uint32_t func_8027F180_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F280(CpuContext* ctx);
extern "C" uint32_t func_8027F280_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027F390_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8027F390;

loc_8027F390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    ctx->lr = 0x8027F3B4u;
    if constexpr (KnownRegArgsCpuCall<0x8027F280u>(&func_8027F280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F280_58E = func_8027F280_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F280_58E;
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
        InvokeDirectCpu<0x8027F280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r3 = (r30 & 65535);
    ctx->lr = 0x8027F3C0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_88E = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_88E);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_88E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8027F3C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r31))) {
        goto loc_8027F414;
    }
}

loc_8027F3CC:
{
    r3 = r29;
    ctx->lr = 0x8027F3D4u;
    if constexpr (KnownRegArgsCpuCall<0x8027F180u>(&func_8027F180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F180_C29 = func_8027F180_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F180_C29;
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
        InvokeDirectCpu<0x8027F180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    r4 = 0;
    r3 = r29;
    ctr = r0;
}

loc_8027F3E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027F414;
    }
}

loc_8027F3EC:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_8027F3F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027F408;
    }
}

loc_8027F3F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r30));
    goto loc_8027F414;
}

loc_8027F408:
{
    r3 = (r3 + 2);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027F3EC;
    }
}

loc_8027F414:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027F390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027F390_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027F390 func_8027F390 preserves=true fpr_mask=0x00000000
