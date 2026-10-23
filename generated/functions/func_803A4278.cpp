#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800D9868(CpuContext* ctx);
extern "C" uint64_t func_800D9868_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A426C(CpuContext* ctx);
extern "C" uint32_t func_803A426C_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803A4278_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_803A4278;

loc_803A4278:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = (r3 + 436);
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 428), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 404));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
    r4 = (r0 * 12);
    r3 = 0x805F0000u;
    r0 = (r3 + 9784);
    r3 = (r1 + 8);
    r4 = (r0 + r4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_932 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_932;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
    r3 = (r30 + 380);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r30 + 368);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + 396));
    MemoryInline::FlatWrite32((r30 + 424), r0);
    r3 = r31;
    r4 = (r30 + 368);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 13), static_cast<uint8_t>(r0));
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x803A426Cu>(&func_803A426C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803A426C_DDD = func_803A426C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_803A426C_DDD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803A426Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x80385478 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16928));
    // end of inlined leaf 0x80385478
    r5 = r3;
    r3 = 10;
    r4 = r30;
    ctx->lr = 0x803A4320u;
    if constexpr (KnownRegArgsCpuCall<0x800D9868u>(&func_800D9868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D9868_1103 = func_800D9868_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D9868_1103);
        r4 = static_cast<uint32_t>(regargs_result_800D9868_1103 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800D9868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r30 + 500), r3);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A4278(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A4278_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020CA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A4278 func_803A4278 preserves=true fpr_mask=0x00000000
