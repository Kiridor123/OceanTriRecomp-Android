#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C09C(CpuContext* ctx);
extern "C" uint64_t func_8004C09C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035FC94(CpuContext* ctx);
extern "C" uint64_t func_8035FC94_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_803609A8_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_803609A8;

loc_803609A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 516));
    r4 = r31;
    ctx->lr = 0x803609C8u;
    if constexpr (KnownRegArgsCpuCall<0x8035FC94u>(&func_8035FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8035FC94_4DE = func_8035FC94_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8035FC94_4DE);
        r4 = static_cast<uint32_t>(regargs_result_8035FC94_4DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035FC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 340));
}

loc_803609D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803609E0;
    }
}

loc_803609D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 516));
    // inline leaf 0x80275518 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80275518
    goto loc_803609F4;
}

loc_803609E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_803609E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803609F4;
    }
}

loc_803609EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 516));
    // inline leaf 0x80275518 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80275518
}

loc_803609F4:
{
    r3 = MemoryInline::FlatRead32((r31 + 516));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80360A00u;
    if constexpr (KnownRegArgsCpuCall<0x8004C09Cu>(&func_8004C09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C09C_BEE = func_8004C09C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C09C_BEE);
        r4 = static_cast<uint32_t>(regargs_result_8004C09C_BEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803609A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803609A8_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020EB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803609A8 func_803609A8 preserves=true fpr_mask=0x00000000
