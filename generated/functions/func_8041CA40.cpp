#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041D638(CpuContext* ctx);
extern "C" uint64_t func_8041D638_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8041CA40_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8041CA40;

loc_8041CA40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 120), static_cast<uint8_t>(r31));
    r3 = (r3 + 20);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 52);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 68);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 84);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 88);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r30 + 17516), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 17517), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 17518), static_cast<uint8_t>(r31));
    r0 = 11000;
    MemoryInline::FlatWrite16((r30 + 17538), static_cast<uint16_t>(r0));
    r3 = (r30 + 36);
    r4 = 3;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8041CADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(75))) {
        goto loc_8041CAE8;
    }
}

loc_8041CAE0:
{
    r3 = r30;
    ctx->lr = 0x8041CAE8u;
    if constexpr (KnownRegArgsCpuCall<0x8041D638u>(&func_8041D638)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8041D638_B5E = func_8041D638_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8041D638_B5E);
        r4 = static_cast<uint32_t>(regargs_result_8041D638_B5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8041D638u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8041CAE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_8041CA40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041CA40_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000CA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041CA40 func_8041CA40 preserves=true fpr_mask=0x00000000
