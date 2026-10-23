#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003F78C(CpuContext* ctx);
extern "C" uint64_t func_8003F78C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8003F684_ra1c0_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
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
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    goto loc_8003F684;

loc_8003F684:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804CC6E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC6E0
    r31 = r3;
    // inline leaf 0x804CC6B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6B0
    r0 = 0x80810000u;
    r4 = 0x80660000u;
    MemoryInline::FlatWriteRam32((r4 + -22016), r0);
    r4 = (r4 + -22016);
    MemoryInline::FlatWriteRam32((r4 + 4), r31);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    r3 = 0x80E30000u;
    r0 = (r3 + -14848);
    MemoryInline::FlatWrite32((r13 + -18112), r0);
    r3 = 0x80EB0000u;
    r3 = (r3 + -14848);
    MemoryInline::FlatWrite32((r13 + -18096), r3);
    r3 = (r3 + 655360);
    r0 = (r3 + 20480);
    r3 = (r13 + -18096);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1966080;
    r4 = (r3 + -2048);
    MemoryInline::FlatWrite32((r13 + -18068), r4);
    r3 = 0x80C50000u;
    r3 = (r3 + -12800);
    MemoryInline::FlatWrite32((r13 + -18036), r3);
    r5 = 4;
    ctx->lr = 0x8003F700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x804C27A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r4 = r3;
    MemoryInline::FlatWrite32((r13 + -18072), r3);
    r3 = 0x80660000u;
    r3 = (r3 + -22080);
    r5 = 8;
    // inline leaf 0x804C2B20 (7 guest instruction(s))
    r6 = (r2 + -2096);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r6);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x804C2B20
    r3 = 4456448;
    r0 = (r3 + -12800);
    MemoryInline::FlatWrite32((r13 + -18032), r0);
    r3 = 0x81700000u;
    // inline leaf 0x804CC740 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -20112), r3);
    // end of inlined leaf 0x804CC740
    // inline leaf 0x804CC6E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC6E0
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r31 = r3;
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r4 = 0x80660000u;
    r4 = (r4 + -22004);
    MemoryInline::FlatWriteRam32((r4 + 4), r31);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    r3 = 0x90310000u;
    r3 = (r3 + -32768);
    r4 = 262144;
    ctx->lr = 0x8003F75Cu;
    if constexpr (KnownRegArgsCpuCall<0x8003F78Cu>(&func_8003F78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8003F78C_1251 = func_8003F78C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8003F78C_1251);
        r4 = static_cast<uint32_t>(regargs_result_8003F78C_1251 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8003F78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    MemoryInline::FlatWrite32((r13 + -17892), r3);
    r3 = 0x92B80000u;
    r3 = (r3 + -32768);
    r4 = 524288;
    r5 = 4;
    ctx->lr = 0x8003F774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x804C27A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    MemoryInline::FlatWrite32((r13 + -17408), r3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8003F684(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8003F684_ra1c0_1fe_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FC6 gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003F684 func_8003F684 preserves=true fpr_mask=0x00000000
