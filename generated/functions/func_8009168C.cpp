#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052BE8(CpuContext* ctx);
extern "C" uint32_t func_80052BE8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80052C24(CpuContext* ctx);
extern "C" uint64_t func_80052C24_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053514(CpuContext* ctx);
extern "C" uint64_t func_80053514_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053AF4(CpuContext* ctx);
extern "C" uint32_t func_80053AF4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8009135C(CpuContext* ctx);
extern "C" uint64_t func_8009135C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009168C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8009168Cu);
    goto loc_8009168C;

loc_8009168C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    ctx->lr = 0x800916A8u;
    if constexpr (KnownRegArgsCpuCall<0x8009135Cu>(&func_8009135C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009135C_6EB = func_8009135C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009135C_6EB);
        r4 = static_cast<uint32_t>(regargs_result_8009135C_6EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009135Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = MemoryInline::FlatRead16((r3 + 52));
    r30 = MemoryInline::FlatRead16((r3 + 54));
    r3 = r27;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r4 + 28));
    // inline leaf 0x80091640 (7 guest instruction(s))
}

loc_inl2_0x80091640:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x80091648:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80091654;
    }
}

loc_inl2_0x8009164C:
{
    r3 = (r0 + r4);
    goto loc_inl2_cont_80091640;
}

loc_inl2_0x80091654:
{
    r3 = 0;
}

loc_inl2_cont_80091640:
{
    // end of inlined leaf 0x80091640
    r29 = r3;
    r3 = r27;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r4 + 32));
    // inline leaf 0x80091624 (7 guest instruction(s))
}

loc_inl4_0x80091624:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl4_0x8009162C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80091638;
    }
}

loc_inl4_0x80091630:
{
    r3 = (r0 + r4);
    goto loc_inl4_cont_80091624;
}

loc_inl4_0x80091638:
{
    r3 = 0;
}

loc_inl4_cont_80091624:
{
    // end of inlined leaf 0x80091624
    r28 = r3;
    r27 = 0;
    goto loc_80091710;
}

loc_800916F0:
{
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x800916FCu;
    if constexpr (KnownRegArgsCpuCall<0x80052C24u>(&func_80052C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052C24_FE2 = func_80052C24_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052C24_FE2);
        r4 = static_cast<uint32_t>(regargs_result_80052C24_FE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80052C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = r29;
    ctx->lr = 0x80091708u;
    if constexpr (KnownRegArgsCpuCall<0x80052BE8u>(&func_80052BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052BE8_1307 = func_80052BE8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80052BE8_1307;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80052BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_80091710:
{
}

loc_80091714:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r31))) {
        goto loc_800916F0;
    }
}

loc_80091718:
{
    r27 = 0;
    goto loc_80091740;
}

loc_80091720:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8009172Cu;
    if constexpr (KnownRegArgsCpuCall<0x80053514u>(&func_80053514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053514_1665 = func_80053514_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053514_1665);
        r4 = static_cast<uint32_t>(regargs_result_80053514_1665 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = r28;
    ctx->lr = 0x80091738u;
    if constexpr (KnownRegArgsCpuCall<0x80053AF4u>(&func_80053AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053AF4_198D = func_80053AF4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80053AF4_198D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_80091740:
{
}

loc_80091744:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r30))) {
        goto loc_80091720;
    }
}

loc_80091748:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_8009168C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009168C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009168C func_8009168C preserves=true fpr_mask=0x00000000
