#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050CC70(CpuContext* ctx);
extern "C" uint64_t func_8050CC70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8041C754_ra68_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
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
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8041C754u);
    goto loc_8041C754;

loc_8041C754:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r1 + 8);
    // inline leaf 0x80416C48 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 11548), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 11548));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 11552));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 11556));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 11560));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 11564));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 11568));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 11572));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 11576));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 11580));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r0);
    // end of inlined leaf 0x80416C48
    r3 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = 0x8041C77Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050CC70u>(&func_8050CC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8050CC70_CB5 = func_8050CC70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050CC70_CB5);
        r4 = static_cast<uint32_t>(regargs_result_8050CC70_CB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050CC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    r3 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_8041C754(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041C754_ra68_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FEE gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041C754 func_8041C754 preserves=true fpr_mask=0x00000000
