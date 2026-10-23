#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B780(CpuContext* ctx);
extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B7EC(CpuContext* ctx);
extern "C" uint32_t func_8005B7EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" void func_80987ACC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_80987ACC;

loc_80987ACC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = 24;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl0_0x8005B714:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl0_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20580), r4);
    goto loc_inl0_cont_8005B714;
}

loc_inl0_return:
{
}

loc_inl0_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r3 = (r3 + 62);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = (r4 + 3);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl1_0x8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl1_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    goto loc_inl1_cont_8005B780;
}

loc_inl1_return:
{
}

loc_inl1_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 673120256;
    r3 = (r3 + 4095);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B7EC_B8A = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_B8A;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    ctx->lr = 0x80987B24u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005BAB4_D64 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_D64);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_D64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r3 = (r3 + 60);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = (r4 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B780_121E = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_121E;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r3 = -455540736;
    r3 = (r3 + -16641);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B7EC_1437 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1437;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    ctx->lr = 0x80987B4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005BAB4_1613 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_1613);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_1613 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FE gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80987ACC func_80987ACC preserves=true fpr_mask=0x00000000
