#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085470(CpuContext* ctx);
extern "C" uint64_t func_80085470_ra608_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80085BD0(CpuContext* ctx);
extern "C" uint32_t func_80085BD0_ra8_6_8_0(CpuContext*, uint32_t, double, double);
extern "C" void func_80088818(CpuContext* ctx);
extern "C" uint32_t func_80088818_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80088C08(CpuContext* ctx);
extern "C" void func_80088C08_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80088C18(CpuContext* ctx);
extern "C" uint64_t func_80088C18_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80088C8C(CpuContext* ctx);
extern "C" uint32_t func_80088C8C_ra188_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80088D8C(CpuContext* ctx);
extern "C" uint32_t func_80088D8C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80088DD4(CpuContext* ctx);
extern "C" uint32_t func_80088DD4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80088E1C(CpuContext* ctx);
extern "C" uint64_t func_80088E1C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80088C08_statefree(uint32_t);
extern "C" uint64_t func_80088D8C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80088DD4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80088D8C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80088DD4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80088B34_ra1c0_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r8 = arg_r8;
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80088B34;

loc_80088B34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r13 + -17712);
    // inline leaf 0x80088E7C (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80088E7C
    r3 = 0x80680000u;
    r3 = (r3 + 21248);
    // inline leaf 0x80088E54 (10 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r4));
    r0 = 2;
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    // end of inlined leaf 0x80088E54
    r3 = 0x80680000u;
    r3 = (r3 + 21260);
    ctx->lr = 0x80088B60u;
    if constexpr (KnownRegArgsCpuCall<0x80088E1Cu>(&func_80088E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80088E1C_EB4 = func_80088E1C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80088E1C_EB4);
        r4 = static_cast<uint32_t>(regargs_result_80088E1C_EB4 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80088E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0x80680000u;
    r3 = (r3 + 21376);
    // inline leaf 0x80088E10 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 256), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80088E10
    r3 = 0x80680000u;
    r3 = (r3 + 21664);
    // inline leaf 0x80088E04 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 96), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80088E04
    r3 = 0x80680000u;
    r3 = (r3 + 21764);
    ctx->lr = 0x80088B84u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80088DD4u) && KnownTranslatedCpuCall<0x80088DD4u>::kAvailable && !KnownTranslatedCpuCall<0x80088DD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80088DD4u>()) {
        const auto state_free_result_80088DD4_14CD = func_80088DD4_statefree_v0(r1, r3, r31, 0x80088B84u);
        r1 = static_cast<uint32_t>(state_free_result_80088DD4_14CD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80088DD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r13 + -17708);
    // inline leaf 0x80088DC8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80088DC8
    r3 = (r13 + -17704);
    // inline leaf 0x80088DBC (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80088DBC
    r3 = 0x80680000u;
    r3 = (r3 + 21776);
    ctx->lr = 0x80088BA0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80088D8Cu) && KnownTranslatedCpuCall<0x80088D8Cu>::kAvailable && !KnownTranslatedCpuCall<0x80088D8Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80088D8Cu>()) {
        const auto state_free_result_80088D8C_1C0E = func_80088D8C_statefree_v0(r1, r3, r31, 0x80088BA0u);
        r1 = static_cast<uint32_t>(state_free_result_80088D8C_1C0E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80088D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r13 + -17700);
    // inline leaf 0x80088D80 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80088D80
    r3 = 0x80680000u;
    r3 = (r3 + 21808);
    // inline leaf 0x80088D6C (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x80088D6C
    r3 = 0x80680000u;
    r3 = (r3 + 21856);
    if constexpr (KnownRegArgsCpuCall<0x80088C8Cu>(&func_80088C8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80088C8C_2338 = func_80088C8C_ra188_0_10_0(ctx, r3, r7, r8);
        r4 = regargs_result_80088C8C_2338;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80088C8Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = 0x80680000u;
    r3 = (r3 + 23904);
    ctx->lr = 0x80088BCCu;
    if constexpr (KnownRegArgsCpuCall<0x80088C18u>(&func_80088C18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80088C18_26B3 = func_80088C18_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088C18_26B3);
        r4 = static_cast<uint32_t>(regargs_result_80088C18_26B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80088C18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80680000u;
    r3 = (r3 + 25448);
    ctx->lr = 0x80088BD8u;
    if constexpr (KnownRegArgsCpuCall<0x80085470u>(&func_80085470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80085470_2A3C = func_80085470_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80085470_2A3C);
        r4 = static_cast<uint32_t>(regargs_result_80085470_2A3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80085470u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
    ctx->lr = 0x80088BE4u;
    if constexpr (KnownRegArgsCpuCall<0x80085BD0u>(&func_80085BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80085BD0_3194 = func_80085BD0_ra8_6_8_0(ctx, r3, f1.d, f2.d);
        r3 = regargs_result_80085BD0_3194;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80085BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = (r13 + -17688);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80088C08u) && KnownTranslatedCpuCall<0x80088C08u>::kAvailable && !KnownTranslatedCpuCall<0x80088C08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80088C08u>()) {
        func_80088C08_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80088C08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x80690000u;
    r3 = (r3 + -22520);
    ctx->lr = 0x80088BF8u;
    if constexpr (KnownRegArgsCpuCall<0x80088818u>(&func_80088818)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80088818_3A09 = func_80088818_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80088818_3A09;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80088818u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80088B34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80088B34_ra1c0_1fe_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FC6 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80088B34 func_80088B34 preserves=true fpr_mask=0x00000000
