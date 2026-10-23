#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052B6AC(CpuContext* ctx);
extern "C" uint32_t func_8052B6AC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8052ABD8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8052ABD8;

loc_8052ABD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1360));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r4;
    r30 = r3;
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8052B6ACu>(&func_8052B6AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_8052B6AC_5B1 = func_8052B6AC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_8052B6AC_5B1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8052B6ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32(r30, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052ABD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052ABD8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052ABD8 func_8052ABD8 preserves=true fpr_mask=0x00000000
