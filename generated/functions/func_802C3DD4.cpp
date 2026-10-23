#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114D2C(CpuContext* ctx);
extern "C" uint64_t func_80114D2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027D138(CpuContext* ctx);
extern "C" uint64_t func_8027D138_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C3DD4_ra1c0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    goto loc_802C3DD4;

loc_802C3DD4:
{
    r3 = r31;
    r4 = 20;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl0_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl0_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl0_0x802D3638;
    }
}

loc_inl0_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl0_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl0_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802D3648:
{
    MemoryInline::FlatWrite32((r3 + 496), r4);
    goto loc_inl0_cont_802D3618;
}

loc_inl0_return:
{
}

loc_inl0_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802C3DECu;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114D2C_82E = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_82E);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_82E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead8((r31 + 420));
    r4 = 3;
    ctx->lr = 0x802C3DF8u;
    if constexpr (KnownRegArgsCpuCall<0x8027D138u>(&func_8027D138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027D138_B8C = func_8027D138_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027D138_B8C);
        r4 = static_cast<uint32_t>(regargs_result_8027D138_B8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027D138u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802C412C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C3DD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C3DD4_ra1c0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x800007C6 gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C3DD4 func_802C3DD4 preserves=true fpr_mask=0x00000000
