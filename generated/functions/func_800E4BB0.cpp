#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4C7C(CpuContext* ctx);
extern "C" uint32_t func_800E4C7C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E4CDC(CpuContext* ctx);
extern "C" uint64_t func_800E4CDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E4CE4(CpuContext* ctx);
extern "C" uint64_t func_800E4CE4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E4CEC(CpuContext* ctx);
extern "C" uint64_t func_800E4CEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E4BB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E4BB0u);
    goto loc_800E4BB0;

loc_800E4BB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r29 = (r0 + r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r25;
    // inline leaf 0x800E4CF4 (4 guest instruction(s))
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r3 = (r3 + 92);
    // end of inlined leaf 0x800E4CF4
    r0 = MemoryInline::FlatRead32(r26);
    r4 = (r0 + r26);
    if constexpr (KnownRegArgsCpuCall<0x800E4CECu>(&func_800E4CEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4CEC_987 = func_800E4CEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E4CEC_987);
        r4 = static_cast<uint32_t>(regargs_result_800E4CEC_987 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4CECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r25;
    // inline leaf 0x800E4CF4 (4 guest instruction(s))
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r3 = (r3 + 92);
    // end of inlined leaf 0x800E4CF4
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800E4CE4u>(&func_800E4CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4CE4_D94 = func_800E4CE4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E4CE4_D94);
        r4 = static_cast<uint32_t>(regargs_result_800E4CE4_D94 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4CE4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r25;
    // inline leaf 0x800E4CF4 (4 guest instruction(s))
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r3 = (r3 + 92);
    // end of inlined leaf 0x800E4CF4
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800E4CDCu>(&func_800E4CDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4CDC_11A1 = func_800E4CDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E4CDC_11A1);
        r4 = static_cast<uint32_t>(regargs_result_800E4CDC_11A1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4CDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r25;
    // inline leaf 0x800E4CF4 (4 guest instruction(s))
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r3 = (r3 + 92);
    // end of inlined leaf 0x800E4CF4
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800E4C7Cu>(&func_800E4C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4C7C_15B1 = func_800E4C7C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_800E4C7C_15B1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4C7Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r25;
    // inline leaf 0x800E4CF4 (4 guest instruction(s))
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r3 = (r3 + 92);
    // end of inlined leaf 0x800E4CF4
    r4 = r27;
    r5 = r28;
    // inline leaf 0x800E4C70 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 32), r4);
    MemoryInline::FlatWrite32((r3 + 36), r5);
    // end of inlined leaf 0x800E4C70
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E4BB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E4BB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E4BB0 func_800E4BB0 preserves=true fpr_mask=0x00000000
