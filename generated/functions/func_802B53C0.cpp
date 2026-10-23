#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B5430(CpuContext* ctx);
extern "C" uint32_t func_802B5430_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802B53C0_ra20_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = arg_r5;
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_802B53C0;

loc_802B53C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    ctx->lr = 0x802B53D8u;
    if constexpr (KnownRegArgsCpuCall<0x802B5430u>(&func_802B5430)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B5430_3DE = func_802B5430_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_802B5430_3DE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B5430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r3 = 0x806C0000u;
    r3 = (r3 + -9160);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x806C0000u;
    r3 = (r3 + -9148);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13784));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13780));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13776));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x806C0000u;
    r3 = (r3 + -9136);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_802B53C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B53C0_ra20_0_8_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000026 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B53C0 func_802B53C0 preserves=true fpr_mask=0x00000000
