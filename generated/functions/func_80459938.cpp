#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574EC(CpuContext* ctx);
extern "C" uint64_t func_804574EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457710(CpuContext* ctx);
extern "C" uint64_t func_80457710_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80459938_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80459938;

loc_80459938:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    r31 = r5;
    r30 = r6;
    r29 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    goto loc_804599B0;
}

loc_8045996C:
{
    r3 = r31;
    r4 = r30;
    r6 = 10;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80457710_639 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_639);
        r4 = static_cast<uint32_t>(regargs_result_80457710_639 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r8 = MemoryInline::FlatRead8((r29 + 4));
    r3 = r31;
    r6 = 10;
    r5 = 0;
    r7 = (r29 + r8);
    r0 = (r8 + 1);
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r4));
    r4 = r30;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804574EC_AF8 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_AF8);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_AF8 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r30 = r4;
    r31 = r3;
}

loc_804599B0:
{
    r0 = (r30 | r31);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045996C;
    }
}

loc_804599B8:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r4 = (r29 + 5);
    r3 = (r29 + r0);
    r3 = (r3 + 5);
    goto loc_804599E0;
}

loc_804599CC:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
}

loc_804599E0:
{
    r3 = (r3 + -1);
}

loc_804599E8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_804599CC;
    }
}

loc_804599EC:
{
    r3 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80459938(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80459938_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FA gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80459938 func_80459938 preserves=true fpr_mask=0x00000000
