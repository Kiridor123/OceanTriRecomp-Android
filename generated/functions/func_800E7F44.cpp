#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8000(CpuContext* ctx);
extern "C" uint64_t func_800E8000_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E8008(CpuContext* ctx);
extern "C" uint64_t func_800E8008_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E8010(CpuContext* ctx);
extern "C" uint64_t func_800E8010_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E8018(CpuContext* ctx);
extern "C" uint64_t func_800E8018_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E8020(CpuContext* ctx);
extern "C" uint64_t func_800E8020_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E7F44_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E7F44;

loc_800E7F44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r29 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r28 = (r0 + r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r0 = MemoryInline::FlatRead32(r27);
    r4 = (r0 + r27);
    if constexpr (KnownRegArgsCpuCall<0x800E8020u>(&func_800E8020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8020_A1E = func_800E8020_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8020_A1E);
        r4 = static_cast<uint32_t>(regargs_result_800E8020_A1E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8020u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800E8018u>(&func_800E8018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8018_E17 = func_800E8018_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8018_E17);
        r4 = static_cast<uint32_t>(regargs_result_800E8018_E17 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8018u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800E8010u>(&func_800E8010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8010_1210 = func_800E8010_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8010_1210);
        r4 = static_cast<uint32_t>(regargs_result_800E8010_1210 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8010u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800E8008u>(&func_800E8008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8008_160C = func_800E8008_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8008_160C);
        r4 = static_cast<uint32_t>(regargs_result_800E8008_160C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8008u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    // inline leaf 0x800E7F34 (4 guest instruction(s))
    r0 = (r4 * 72);
    r3 = (r3 + r0);
    r3 = (r3 + 144);
    // end of inlined leaf 0x800E7F34
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x800E8000u>(&func_800E8000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8000_1A08 = func_800E8000_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8000_1A08);
        r4 = static_cast<uint32_t>(regargs_result_800E8000_1A08 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8000u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E7F44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E7F44_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7F44 func_800E7F44 preserves=true fpr_mask=0x00000000
