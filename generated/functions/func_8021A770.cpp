#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800538E0(CpuContext* ctx);
extern "C" void func_800538E0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800539C4(CpuContext* ctx);
extern "C" void func_800539C4_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021A6C8(CpuContext* ctx);
extern "C" uint64_t func_8021A6C8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_800538E0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800539C4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void func_800538E0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021A770_ra700_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r8, uint32_t arg_r9, uint32_t arg_r10, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[8] = arg_r8;
    ctx->gpr[9] = arg_r9;
    ctx->gpr[10] = arg_r10;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8021A770;

loc_8021A770:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 14);
    r4 = (r1 + 12);
    r5 = (r1 + 10);
    r6 = (r1 + 8);
    ctx->lr = 0x8021A790u;
    if constexpr (KnownRegArgsCpuCall<0x8021A6C8u>(&func_8021A6C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021A6C8_8C1 = func_8021A6C8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8021A6C8_8C1);
        r4 = static_cast<uint32_t>(regargs_result_8021A6C8_8C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8021A6C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 3;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl0_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl0_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl0_0x800538AC;
    }
}

loc_inl0_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl0_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800538B0;
    }
}

loc_inl0_0x800538A8:
{
    goto loc_inl0_cont_80053870;
}

loc_inl0_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl0_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 8));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800538E0u) && KnownTranslatedCpuCall<0x800538E0u>::kAvailable && !KnownTranslatedCpuCall<0x800538E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800538E0u>()) {
        func_800538E0_statefree_v0(r3, r4, r5, r6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800538E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
    }
    r4 = 0x805C0000u;
    r3 = MemoryInline::FlatRead32((r4 + -22936));
    r6 = (r4 + -22936);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::FlatRead32((r6 + 12));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800539C4u) && KnownTranslatedCpuCall<0x800539C4u>::kAvailable && !KnownTranslatedCpuCall<0x800539C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800539C4u>()) {
        const auto state_free_result_800539C4_179B = func_800539C4_statefree(r3, r4, r5, r6);
        r0 = static_cast<uint32_t>(state_free_result_800539C4_179B[0]);
        r7 = static_cast<uint32_t>(state_free_result_800539C4_179B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800539C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
    }
    ctx->lr = 0x8021A7D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021A770(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021A770_ra700_1fe_18_0(ctx, ctx->gpr[8], ctx->gpr[9], ctx->gpr[10], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F06 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021A770 func_8021A770 preserves=true fpr_mask=0x00000000
