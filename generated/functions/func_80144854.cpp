#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80136C38(CpuContext* ctx);
extern "C" uint32_t func_80136C38_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80144854_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80144854;

loc_80144854:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = (r4 & 255);
}

loc_8014487C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80144938;
    }
}

loc_80144880:
{
    ctx->lr = 0x80144884u;
    if constexpr (KnownRegArgsCpuCall<0x80136C38u>(&func_80136C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_80136C38_51D = func_80136C38_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80136C38_51D;
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
        InvokeDirectCpu<0x80136C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r0 = (r30 & 255);
    r0 = (r0 * 1304);
    r3 = (r3 + r0);
    r30 = (r3 + 876);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_80144928;
}

loc_801448B4:
{
    r6 = 0;
    r5 = MemoryInline::FlatRead8((r30 + 1));
    ctr = r5;
}

loc_801448C4:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_801448E8;
    }
}

loc_801448C8:
{
    r0 = (r6 & 255);
    r0 = (r0 * 52);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801448DC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80144924;
    }
}

loc_801448E0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801448C8;
    }
}

loc_801448E8:
{
}

loc_801448EC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(25))) {
        goto loc_80144938;
    }
}

loc_801448F0:
{
    r0 = (r5 * 52);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 * 52);
    r5 = (r30 + r0);
    r5 = (r5 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
}

loc_80144924:
{
    r31 = (r31 + 12);
}

loc_80144928:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = (r4 + 65536);
}

loc_80144934:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801448B4;
    }
}

loc_80144938:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80144854(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80144854_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80144854 func_80144854 preserves=true fpr_mask=0x00000000
