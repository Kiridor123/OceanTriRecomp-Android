#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802C26C8(CpuContext* ctx);
extern "C" uint32_t func_802C26C8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802C26FC(CpuContext* ctx);
extern "C" uint64_t func_802C26FC_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802C2730(CpuContext* ctx);
extern "C" uint32_t func_802C2730_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802C2634_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802C2634;

loc_802C2634:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = (r3 + 4);
    r31 = (r3 + 324);
}

loc_802C265C:
{
    r3 = r30;
    ctx->lr = 0x802C2664u;
    if constexpr (KnownRegArgsCpuCall<0x802C2730u>(&func_802C2730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C2730_54E = func_802C2730_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802C2730_54E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802C2730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 32);
}

loc_802C266C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802C265C;
    }
}

loc_802C2670:
{
    r30 = (r28 + 328);
    r29 = (r28 + 4008);
}

loc_802C2678:
{
    r3 = r30;
    ctx->lr = 0x802C2680u;
    if constexpr (KnownRegArgsCpuCall<0x802C26FCu>(&func_802C26FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C26FC_884 = func_802C26FC_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C26FC_884);
        r4 = static_cast<uint32_t>(regargs_result_802C26FC_884 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802C26FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 368);
}

loc_802C2688:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r29))) {
        goto loc_802C2678;
    }
}

loc_802C268C:
{
    r31 = (r28 + 4096);
}

loc_802C2690:
{
    r3 = r29;
    ctx->lr = 0x802C2698u;
    if constexpr (KnownRegArgsCpuCall<0x802C26C8u>(&func_802C26C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C26C8_C8F = func_802C26C8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802C26C8_C8F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802C26C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = (r29 + 44);
}

loc_802C26A0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_802C2690;
    }
}

loc_802C26A4:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802C2634(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C2634_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2634 func_802C2634 preserves=true fpr_mask=0x00000000
