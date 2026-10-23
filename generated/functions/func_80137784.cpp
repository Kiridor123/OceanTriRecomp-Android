#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801264F8(CpuContext* ctx);
extern "C" uint64_t func_801264F8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80137784_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80137784;

loc_80137784:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r5 & 1);
}

loc_801377A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801377B8;
    }
}

loc_801377AC:
{
    r0 = (r5 & 524288);
}

loc_801377B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801377C0;
    }
}

loc_801377B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2207), static_cast<uint8_t>(r0));
}

loc_801377C0:
{
    MemoryInline::FlatWrite8((r3 + 2207), static_cast<uint8_t>(r4));
    r0 = (r4 & 255);
}

loc_801377CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801377DC;
    }
}

loc_801377D0:
{
}

loc_801377D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80137814;
    }
}

loc_801377D8:
{
    goto loc_8013781C;
}

loc_801377DC:
{
    r3 = r30;
    ctx->lr = 0x801377E4u;
    if constexpr (KnownRegArgsCpuCall<0x801264F8u>(&func_801264F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801264F8_80D = func_801264F8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801264F8_80D);
        r4 = static_cast<uint32_t>(regargs_result_801264F8_80D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801264F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r3 = r30;
    r4 = 1;
    // inline leaf 0x80137720 (8 guest instruction(s))
}

loc_inl0_0x80137720:
{
    r5 = MemoryInline::FlatRead8((r3 + 2227));
    r0 = (r4 & 255);
    r0 = (r5 & r0);
}

loc_inl0_0x80137730:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80137734:
{
    r0 = (r5 | r4);
    MemoryInline::FlatWrite8((r3 + 2227), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80137720;
}

loc_inl0_return:
{
}

loc_inl0_cont_80137720:
{
    // end of inlined leaf 0x80137720
}

loc_801377F8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80137808;
    }
}

loc_801377FC:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 2212), static_cast<uint16_t>(r0));
    goto loc_8013781C;
}

loc_80137808:
{
    r0 = 3600;
    MemoryInline::FlatWrite16((r30 + 2212), static_cast<uint16_t>(r0));
    goto loc_8013781C;
}

loc_80137814:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80137718_F91 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_F91;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8013781C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80137784(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80137784_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80137784 func_80137784 preserves=true fpr_mask=0x00000000
