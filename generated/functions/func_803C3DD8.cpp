#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803C3AD4(CpuContext* ctx);
extern "C" uint64_t func_803C3AD4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803C3E80(CpuContext* ctx);
extern "C" uint64_t func_803C3E80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803C3DD8_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803C3DD8;

loc_803C3DD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 0x806D0000u;
    r31 = (r3 + 20384);
    ctx->lr = 0x803C3DFCu;
    if constexpr (KnownRegArgsCpuCall<0x803C3AD4u>(&func_803C3AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C3AD4_4B7 = func_803C3AD4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803C3AD4_4B7);
        r4 = static_cast<uint32_t>(regargs_result_803C3AD4_4B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803C3AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_803C3E00:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(14))) {
        goto loc_803C3E18;
    }
}

loc_803C3E04:
{
}

loc_803C3E08:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(19))) {
        goto loc_803C3E28;
    }
}

loc_803C3E0C:
{
}

loc_803C3E10:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(20))) {
        goto loc_803C3E38;
    }
}

loc_803C3E14:
{
    goto loc_803C3E44;
}

loc_803C3E18:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22096);
    ctx->lr = 0x803C3E24u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C3E80_9F6 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_9F6);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_9F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803C3E44;
}

loc_803C3E28:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22056);
    ctx->lr = 0x803C3E34u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C3E80_D21 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_D21);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_D21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803C3E44;
}

loc_803C3E38:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22048);
    ctx->lr = 0x803C3E44u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C3E80_104C = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_104C);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_104C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803C3E44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C3DD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C3DD8_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C3DD8 func_803C3DD8 preserves=true fpr_mask=0x00000000
