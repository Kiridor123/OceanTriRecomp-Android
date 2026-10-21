#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BB17C(CpuContext* ctx);
extern "C" uint64_t func_802BB17C_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BBF44(CpuContext* ctx);
extern "C" uint64_t func_802BBF44_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B8BF0_ra28_10_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x802B8BF0u);
    goto loc_802B8BF0;

loc_802B8BF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x802B8C04u;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BED34_4BA = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_4BA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1244), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1224), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1204), static_cast<uint8_t>(r0));
    ctx->lr = 0x802B8C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BBF44u>(&func_802BBF44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BBF44_7C3 = func_802BBF44_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BBF44_7C3);
        r4 = static_cast<uint32_t>(regargs_result_802BBF44_7C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BBF44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    r3 = r31;
    ctx->lr = 0x802B8C24u;
    if constexpr (KnownRegArgsCpuCall<0x802BB17Cu>(&func_802BB17C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BB17C_B2C = func_802BB17C_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BB17C_B2C);
        r4 = static_cast<uint32_t>(regargs_result_802BB17C_B2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BB17Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 1179), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 146), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 968), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B8BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B8BF0_ra28_10_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000202E gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF0000010 fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B8BF0 func_802B8BF0 preserves=true fpr_mask=0x00000000
